/*
 * Copyright (C) 2002-2003 Fhg Fokus
 *
 * This file is part of SEMS, a free SIP media server.
 *
 * SEMS is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version. This program is released under
 * the GPL with the additional exemption that compiling, linking,
 * and/or using OpenSSL is allowed.
 *
 * For a license to use the SEMS software under conditions
 * other than those described here, or to purchase support for this
 * software, please contact iptel.org by e-mail at the following addresses:
 *    info@iptel.org
 *
 * SEMS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program; if not, write to the Free Software 
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
/** @file AmConfig.h */
#ifndef _AmConfig_h_
#define _AmConfig_h_

#include "AmSdp.h"
#include "AmDtmfDetector.h"
#include "AmSipDialog.h"
#include "AmUtils.h"

#include <string>
using std::string;
#include <map>
using std::map;
using std::multimap;
#include <utility>

/**
 * \brief holds the current configuration.
 *
 * This Structure holds the current configuration.
 */
struct AmConfig
{
  /** Name of the main configuration file. */
  static string ConfigurationFile;
  /** Path to the plug-in configuration files. */
  static string ModConfigPath;
  /** Path where the plug-ins are. */
  static string PlugInPath;
  /** semicolon separated list of plugins to load */
  static string LoadPlugins;
  /** semicolon separated list of plugins to exclude from loading */
  static string ExcludePlugins;
  /** semicolon separated list of payloads to exclude from loading */
  static string ExcludePayloads;  
  //static unsigned int MaxRecordTime;
  /** log level */
  static int LogLevel;
  /** log to stderr */
  static bool LogStderr;

#ifndef DISABLE_DAEMON_MODE
  /** run the program in daemon mode? */
  static bool DaemonMode;
  /** PID file when in daemon mode */
  static string DaemonPidFile;
  /** set UID when in daemon mode */
  static string DaemonUid;
  /** set GID when in daemon mode */
  static string DaemonGid;
#endif
  
  static unsigned int MaxShutdownTime;

  struct IP_interface {

    string name;

    /** local IP for SDP media advertising */
    string LocalIP;
    
    /** public IP for SDP media advertising; we actually
     *  bind to local IP, but advertise public IP. */ 
    string PublicIP;
    
    /** Lowest local RTP port */
    int RtpLowPort;
    /** Highest local RTP port */
    int RtpHighPort;
    
    /** the interface SIP requests are sent from - needed for registrar_client */
    string LocalSIPIP;
    /** the port SIP requests are sent from - optional (default 5060) */
    int LocalSIPPort;

    IP_interface();

    int getNextRtpPort();

  private:
    int next_rtp_port;
    AmMutex next_rtp_port_mut;
  };

  static vector<IP_interface>            Ifs;
  static map<string,unsigned short>      If_names;
  static multimap<string,unsigned short> LocalSIPIP2If;

  static int finalizeIPConfig();

  static void dump_Ifs();

  /** number of session (signaling/application) processor threads */
  static int SessionProcessorThreads;
  /** number of media processor threads */
  static int MediaProcessorThreads;
  /** number of SIP server threads */
  static int SIPServerThreads;
  /** Outbound Proxy (optional, outgoing calls only) */
  static string OutboundProxy;
  /** force Outbound Proxy to be used for in dialog requests */
  static bool ForceOutboundProxy;
  /** update ruri-host to previously resolved IP:port on SIP auth */
  static bool ProxyStickyAuth;
  /** skip DNS SRV lookup for resolving destination address*/
  static bool DisableDNSSRV;
  /** Server/User-Agent header (optional) */
  static string Signature;
  /** Value of Max-Forward header field for new requests */
  static unsigned int MaxForwards;
  /** If 200 OK reply should be limited to preferred codec only */
  static bool SingleCodecInOK;
  static vector <string> CodecOrder;
  
  enum ApplicationSelector {
    App_RURIUSER,
    App_RURIPARAM,
    App_APPHDR,
    App_MAPPING,
    App_SPECIFIED
  };
  
  /** "application" config value */ 
  static string Application;
  /** type of application selection (parsed from Application) */
  static ApplicationSelector AppSelect;

  /* this is regex->application mapping is used if  App_MAPPING */
  static RegexMappingVector AppMapping; 

  static unsigned int SessionLimit;
  static unsigned int SessionLimitErrCode;
  static string SessionLimitErrReason;

  static unsigned int OptionsSessionLimit;
  static unsigned int OptionsSessionLimitErrCode;
  static string OptionsSessionLimitErrReason;

  static AmSipDialog::provisional_100rel rel100;

  /** Time of no RTP after which Session is regarded as dead, 0 for no Timeout */
  static unsigned int DeadRtpTime;

  /** Ignore RTP Extension headers? */
  static bool IgnoreRTPXHdrs;

  static Dtmf::InbandDetectorType DefaultDTMFDetector;

  static bool IgnoreSIGCHLD;

  static bool IgnoreSIGPIPE;

  static bool LogSessions;

  static bool LogEvents;

  static int UnhandledReplyLoglevel;

  /** Read global configuration file and insert values. Maybe overwritten by
   * command line arguments */
  static int readConfiguration();

  /* following setters are used to fill config from config file */  
	
  /** Setter for SIP Port, returns 0 on invalid value */
  static int setSIPPort(const string& port);  
  /** Setter for SmtpServer Port, returns 0 on invalid value */
  static int setSmtpPort(const string& port);
  /** Setter for RtpLowPort, returns 0 on invalid value */
  static int setRtpLowPort(const string& port);
  /** Setter for RtpHighPort, returns 0 on invalid value */
  static int setRtpHighPort(const string& port);
  /** Setter for Loglevel, returns 0 on invalid value */
  static int setLogLevel(const string& level, bool apply=true);
  /** Setter for parameter stderr, returns 0 on invalid value */
  static int setLogStderr(const string& s, bool apply=true);

#ifndef DISABLE_DAEMON_MODE
  /** Setter for parameter DaemonMode, returns 0 on invalid value */
  static int setDaemonMode(const string& fork);
#endif

  /** Setter for parameter SessionProcessorThreads, returns 0 on invalid value */
  static int setSessionProcessorThreads(const string& th);
  /** Setter for parameter MediaProcessorThreads, returns 0 on invalid value */
  static int setMediaProcessorThreads(const string& th);
  /** Setter for parameter SIPServerThreads, returns 0 on invalid value */
  static int setSIPServerThreads(const string& th);
  /** Setter for parameter DeadRtpTime, returns 0 on invalid value */
  static int setDeadRtpTime(const string& drt);

};

#endif

// Local Variables:
// mode:C++
// End:
