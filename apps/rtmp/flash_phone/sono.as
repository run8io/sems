import mx.controls.Alert;
import flash.events.Event;
import flash.net.NetConnection;
import flash.net.NetStream;
import flash.media.Microphone;

// application states
private static const NOT_CONNECTED:uint = 1;
private static const DIALING:uint       = 2;
private static const CONNECTING:uint    = 3;
private static const CONNECTED:uint     = 4;

// call states (from RtmpSession.cpp)
private static const CALL_NOT_CONNECTED:uint = 0;
private static const CALL_IN_PROGRESS:uint   = 1;
private static const CALL_CONNECTED:uint     = 2;
private static const CALL_DISCONNECTING:uint = 3;

// media streams request (from RtmpSession.cpp)
private static const CALL_CONNECT_STREAMS:uint = 4; 

[Bindable]
private var g_state:uint = NOT_CONNECTED;

[Bindable]
private var g_dial_state:uint = NOT_CONNECTED;

private var g_netConnection:NetConnection;
private var g_micStream:NetStream;
private var g_inStream:NetStream;


// bConnect button has been clicked
private function onConnectClick(evt:Event): void 
{
    try {
	if(g_state != NOT_CONNECTED) {
	    disconnectStreams();
	    g_netConnection.close();
	    g_state = NOT_CONNECTED;
	}
	else {
	    g_netConnection = new NetConnection();
	    g_netConnection.addEventListener(NetStatusEvent.NET_STATUS, netStatusHandler);

	    g_netConnection.connect(connectUrl.text);
	    g_state = CONNECTING;
	    lStatus.text = "status: connecting...";
	}
    }
    catch(err:Error){
	Alert.show("Error: " + err.message,"Connect error");
	g_state = NOT_CONNECTED;
	g_dial_state = NOT_CONNECTED;
    }
}

// bDial button has been clicked
private function onDialClick(evt:Event): void 
{
    if(g_state != CONNECTED)
	return;

    if(g_dial_state == NOT_CONNECTED) {
	//TODO: no responder yet: let's see if it's useful or not
	g_netConnection.call('dial',null,dialUri.text);
	g_dial_state = DIALING;
	lStatus.text = "status: dialing...";
    }
    else {
	disconnectStreams();
	//TODO: no responder yet: let's see if it's useful or not
	g_netConnection.call('hangup',null);
	lStatus.text = "status: hanging up...";
	g_dial_state = NOT_CONNECTED;
    }
}

private function netStatusHandler(event:NetStatusEvent): void 
{
    switch(event.info.code){

	// status events:
    case "NetConnection.Connect.Success":
	lStatus.text = event.info.level + ": connected to server";
	g_state = CONNECTED;
	break;

    case "NetConnection.Connect.Closed":
	lStatus.text = event.info.level + ": disconnected from server";
	g_state = NOT_CONNECTED;
	g_dial_state = NOT_CONNECTED;
	break;

	// error events:
    case "NetConnection.Connect.Failed":
	lStatus.text = event.info.level + ": connection to server failed";
	g_state = NOT_CONNECTED;
	g_dial_state = NOT_CONNECTED;
	break;
    case "NetConnection.Connect.Rejected":
	lStatus.text = event.info.level + ": connection to server rejected";
	g_state = NOT_CONNECTED;
	g_dial_state = NOT_CONNECTED;
	break;

    case "NetStream.Play.Start":
	//lStatus.text = event.info.level + ": " + event.info.description;
	break;

    case "NetStream.Play.Stop":
	//lStatus.text = event.info.level + ": " + event.info.description;
	disconnectStreams();
	break;

    case "Sono.Call.Status":
	//lStatus.text = event.info.level + ": " + event.info.status_code;
	switch(event.info.status_code){
	case CALL_NOT_CONNECTED:
	case CALL_DISCONNECTING:
	    g_dial_state = NOT_CONNECTED;
	    disconnectStreams();
	    lStatus.text = "status: call disconnected";
	    break;
	case CALL_IN_PROGRESS:
	    g_dial_state = DIALING;
	    lStatus.text = "status: dialing...";
	    break;
	case CALL_CONNECTED:
	    g_dial_state = CONNECTED;
	    lStatus.text = "status: call connected";
	    break;
	case CALL_CONNECT_STREAMS:
	    connectStreams();
	    break;
	}
	break;

	// unkown event:
    default:
	lStatus.text = event.info.level + ": " 
	    + event.info.description + " [" 
	    + event.info.code + "]" ;
	break;
    }
}

private function connectStreams():void
{
    if(!Microphone.isSupported){
	//TODO: report error
	return; // no microphone!!!
    }

    g_micStream = new NetStream(g_netConnection);
    g_micStream.addEventListener(NetStatusEvent.NET_STATUS, netStatusHandler);

    var micro:Microphone = Microphone.getEnhancedMicrophone();

    if(micro == null){
	//TODO: report error
	return;
    }

    micro.codec = SoundCodec.SPEEX;
    micro.setSilenceLevel(0);
    micro.encodeQuality = 8; // 0 - 10
    micro.gain = 50; // 0 - 100
    micro.framesPerPacket = 1; // default=2
    micro.rate = 16; // wideband
    
    g_micStream.attachAudio(micro);
    g_micStream.publish("dummy","live");

    g_inStream = new NetStream(g_netConnection);
    g_inStream.addEventListener(NetStatusEvent.NET_STATUS, netStatusHandler);
    
    g_inStream.play("dummy","live");
    g_dial_state = CONNECTING;
}

private function disconnectStreams():void
{
    if(g_micStream) { 
	g_micStream.close();
	g_micStream = null;
    }

    if(g_inStream) {
	g_inStream.close();
	g_inStream = null;
    }
}