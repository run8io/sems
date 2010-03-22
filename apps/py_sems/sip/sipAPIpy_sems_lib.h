/*
 * Internal module API header file.
 *
 * Generated by SIP 4.9.1-snapshot-20091015 on Mon Mar 22 01:05:19 2010
 */

#ifndef _py_sems_libAPI_H
#define _py_sems_libAPI_H


#include <sip.h>
#line 3 "AmUtils.sip"
#include "AmUtils.h"
#line 15 "sipAPIpy_sems_lib.h"

/*
 * Convenient names to refer to various strings defined in this module.
 * Only the class names are part of the public API.
 */
#define sipNameNr_AmSessionAudioConnector 0
#define sipName_AmSessionAudioConnector &sipStrings_py_sems_lib[0]
#define sipNameNr_AmAudioEvent__EventType 24
#define sipName_AmAudioEvent__EventType &sipStrings_py_sems_lib[24]
#define sipNameNr_PySemsB2ABCalleeDialog 48
#define sipName_PySemsB2ABCalleeDialog &sipStrings_py_sems_lib[48]
#define sipNameNr_AmAudioFile__OpenMode 71
#define sipName_AmAudioFile__OpenMode &sipStrings_py_sems_lib[71]
#define sipNameNr_AmB2ABCalleeSession 93
#define sipName_AmB2ABCalleeSession &sipStrings_py_sems_lib[93]
#define sipNameNr_createCalleeSession 113
#define sipName_createCalleeSession &sipStrings_py_sems_lib[113]
#define sipNameNr_AmSipDialog__Status 133
#define sipName_AmSipDialog__Status &sipStrings_py_sems_lib[133]
#define sipNameNr_getUACTransPending 153
#define sipName_getUACTransPending &sipStrings_py_sems_lib[153]
#define sipNameNr_disconnectSession 172
#define sipName_disconnectSession &sipStrings_py_sems_lib[172]
#define sipNameNr_get_header_param 190
#define sipName_get_header_param &sipStrings_py_sems_lib[190]
#define sipNameNr_PySemsB2ABDialog 207
#define sipName_PySemsB2ABDialog &sipStrings_py_sems_lib[207]
#define sipNameNr_next_request_uri 224
#define sipName_next_request_uri &sipStrings_py_sems_lib[224]
#define sipNameNr_PySemsB2ABEvent 241
#define sipName_PySemsB2ABEvent &sipStrings_py_sems_lib[241]
#define sipNameNr_getCalleeStatus 257
#define sipName_getCalleeStatus &sipStrings_py_sems_lib[257]
#define sipNameNr_PySemsB2BDialog 273
#define sipName_PySemsB2BDialog &sipStrings_py_sems_lib[273]
#define sipNameNr_connectSession 175
#define sipName_connectSession &sipStrings_py_sems_lib[175]
#define sipNameNr_onSessionStart 289
#define sipName_onSessionStart &sipStrings_py_sems_lib[289]
#define sipNameNr_onPyB2ABEvent 304
#define sipName_onPyB2ABEvent &sipStrings_py_sems_lib[304]
#define sipNameNr_connectCallee 318
#define sipName_connectCallee &sipStrings_py_sems_lib[318]
#define sipNameNr_getContactHdr 332
#define sipName_getContactHdr &sipStrings_py_sems_lib[332]
#define sipNameNr_Disconnecting 346
#define sipName_Disconnecting &sipStrings_py_sems_lib[346]
#define sipNameNr_waitReleased 360
#define sipName_waitReleased &sipStrings_py_sems_lib[360]
#define sipNameNr_PySemsDialog 373
#define sipName_PySemsDialog &sipStrings_py_sems_lib[373]
#define sipNameNr_AmAudioEvent 386
#define sipName_AmAudioEvent &sipStrings_py_sems_lib[386]
#define sipNameNr_updateStatus 399
#define sipName_updateStatus &sipStrings_py_sems_lib[399]
#define sipNameNr_remote_party 412
#define sipName_remote_party &sipStrings_py_sems_lib[412]
#define sipNameNr_Disconnected 425
#define sipName_Disconnected &sipStrings_py_sems_lib[425]
#define sipNameNr_AmSipRequest 438
#define sipName_AmSipRequest &sipStrings_py_sems_lib[438]
#define sipNameNr_onB2ABEvent 451
#define sipName_onB2ABEvent &sipStrings_py_sems_lib[451]
#define sipNameNr_acceptAudio 463
#define sipName_acceptAudio &sipStrings_py_sems_lib[463]
#define sipNameNr_getDataSize 475
#define sipName_getDataSize &sipStrings_py_sems_lib[475]
#define sipNameNr_AmAudioFile 487
#define sipName_AmAudioFile &sipStrings_py_sems_lib[487]
#define sipNameNr_sendRequest 499
#define sipName_sendRequest &sipStrings_py_sems_lib[499]
#define sipNameNr_local_party 511
#define sipName_local_party &sipStrings_py_sems_lib[511]
#define sipNameNr_contact_uri 523
#define sipName_contact_uri &sipStrings_py_sems_lib[523]
#define sipNameNr_AmSipDialog 535
#define sipName_AmSipDialog &sipStrings_py_sems_lib[535]
#define sipNameNr_py_sems_lib 547
#define sipName_py_sems_lib &sipStrings_py_sems_lib[547]
#define sipNameNr_relayEvent 559
#define sipName_relayEvent &sipStrings_py_sems_lib[559]
#define sipNameNr_setStopped 570
#define sipName_setStopped &sipStrings_py_sems_lib[570]
#define sipNameNr_remote_uri 581
#define sipName_remote_uri &sipStrings_py_sems_lib[581]
#define sipNameNr_remote_tag 592
#define sipName_remote_tag &sipStrings_py_sems_lib[592]
#define sipNameNr_AmSipReply 603
#define sipName_AmSipReply &sipStrings_py_sems_lib[603]
#define sipNameNr_setOutput 614
#define sipName_setOutput &sipStrings_py_sems_lib[614]
#define sipNameNr_EventType 38
#define sipName_EventType &sipStrings_py_sems_lib[38]
#define sipNameNr_processed 624
#define sipName_processed &sipStrings_py_sems_lib[624]
#define sipNameNr_getStatus 634
#define sipName_getStatus &sipStrings_py_sems_lib[634]
#define sipNameNr_local_uri 644
#define sipName_local_uri &sipStrings_py_sems_lib[644]
#define sipNameNr_Connected 654
#define sipName_Connected &sipStrings_py_sems_lib[654]
#define sipNameNr_local_tag 664
#define sipName_local_tag &sipStrings_py_sems_lib[664]
#define sipNameNr_getHeader 674
#define sipName_getHeader &sipStrings_py_sems_lib[674]
#define sipNameNr_setInOut 684
#define sipName_setInOut &sipStrings_py_sems_lib[684]
#define sipNameNr_setInput 693
#define sipName_setInput &sipStrings_py_sems_lib[693]
#define sipNameNr_onCancel 702
#define sipName_onCancel &sipStrings_py_sems_lib[702]
#define sipNameNr_onInvite 711
#define sipName_onInvite &sipStrings_py_sems_lib[711]
#define sipNameNr_OpenMode 84
#define sipName_OpenMode &sipStrings_py_sems_lib[84]
#define sipNameNr_event_id 720
#define sipName_event_id &sipStrings_py_sems_lib[720]
#define sipNameNr_reinvite 729
#define sipName_reinvite &sipStrings_py_sems_lib[729]
#define sipNameNr_setRoute 738
#define sipName_setRoute &sipStrings_py_sems_lib[738]
#define sipNameNr_getRoute 747
#define sipName_getRoute &sipStrings_py_sems_lib[747]
#define sipNameNr_sip_port 756
#define sipName_sip_port &sipStrings_py_sems_lib[756]
#define sipNameNr_next_hop 765
#define sipName_next_hop &sipStrings_py_sems_lib[765]
#define sipNameNr_from_tag 774
#define sipName_from_tag &sipStrings_py_sems_lib[774]
#define sipNameNr_from_uri 783
#define sipName_from_uri &sipStrings_py_sems_lib[783]
#define sipNameNr_release 792
#define sipName_release &sipStrings_py_sems_lib[792]
#define sipNameNr_process 800
#define sipName_process &sipStrings_py_sems_lib[800]
#define sipNameNr_setLoop 808
#define sipName_setLoop &sipStrings_py_sems_lib[808]
#define sipNameNr_getLoop 816
#define sipName_getLoop &sipStrings_py_sems_lib[816]
#define sipNameNr_cleared 824
#define sipName_cleared &sipStrings_py_sems_lib[824]
#define sipNameNr_noAudio 832
#define sipName_noAudio &sipStrings_py_sems_lib[832]
#define sipNameNr_AmEvent 840
#define sipName_AmEvent &sipStrings_py_sems_lib[840]
#define sipNameNr_Pending 164
#define sipName_Pending &sipStrings_py_sems_lib[164]
#define sipNameNr_onDtmf 848
#define sipName_onDtmf &sipStrings_py_sems_lib[848]
#define sipNameNr_rewind 855
#define sipName_rewind &sipStrings_py_sems_lib[855]
#define sipNameNr_update 862
#define sipName_update &sipStrings_py_sems_lib[862]
#define sipNameNr_cancel 869
#define sipName_cancel &sipStrings_py_sems_lib[869]
#define sipNameNr_sip_ip 876
#define sipName_sip_ip &sipStrings_py_sems_lib[876]
#define sipNameNr_Status 146
#define sipName_Status &sipStrings_py_sems_lib[146]
#define sipNameNr_reason 883
#define sipName_reason &sipStrings_py_sems_lib[883]
#define sipNameNr_to_tag 890
#define sipName_to_tag &sipStrings_py_sems_lib[890]
#define sipNameNr_callid 897
#define sipName_callid &sipStrings_py_sems_lib[897]
#define sipNameNr_domain 904
#define sipName_domain &sipStrings_py_sems_lib[904]
#define sipNameNr_method 911
#define sipName_method &sipStrings_py_sems_lib[911]
#define sipNameNr_string 918
#define sipName_string &sipStrings_py_sems_lib[918]
#define sipNameNr_block 925
#define sipName_block &sipStrings_py_sems_lib[925]
#define sipNameNr_onBye 931
#define sipName_onBye &sipStrings_py_sems_lib[931]
#define sipNameNr_close 937
#define sipName_close &sipStrings_py_sems_lib[937]
#define sipNameNr_Write 943
#define sipName_Write &sipStrings_py_sems_lib[943]
#define sipNameNr_reply 949
#define sipName_reply &sipStrings_py_sems_lib[949]
#define sipNameNr_route 955
#define sipName_route &sipStrings_py_sems_lib[955]
#define sipNameNr_r_uri 961
#define sipName_r_uri &sipStrings_py_sems_lib[961]
#define sipNameNr_dstip 967
#define sipName_dstip &sipStrings_py_sems_lib[967]
#define sipNameNr_open 973
#define sipName_open &sipStrings_py_sems_lib[973]
#define sipNameNr_Read 978
#define sipName_Read &sipStrings_py_sems_lib[978]
#define sipNameNr_code 983
#define sipName_code &sipStrings_py_sems_lib[983]
#define sipNameNr_body 988
#define sipName_body &sipStrings_py_sems_lib[988]
#define sipNameNr_hdrs 993
#define sipName_hdrs &sipStrings_py_sems_lib[993]
#define sipNameNr_cseq 998
#define sipName_cseq &sipStrings_py_sems_lib[998]
#define sipNameNr_from 1003
#define sipName_from &sipStrings_py_sems_lib[1003]
#define sipNameNr_port 760
#define sipName_port &sipStrings_py_sems_lib[760]
#define sipNameNr_user 1008
#define sipName_user &sipStrings_py_sems_lib[1008]
#define sipNameNr_dlg 1013
#define sipName_dlg &sipStrings_py_sems_lib[1013]
#define sipNameNr_bye 1017
#define sipName_bye &sipStrings_py_sems_lib[1017]
#define sipNameNr_cmd 1021
#define sipName_cmd &sipStrings_py_sems_lib[1021]
#define sipNameNr_to 1025
#define sipName_to &sipStrings_py_sems_lib[1025]

#define sipMalloc                   sipAPI_py_sems_lib->api_malloc
#define sipFree                     sipAPI_py_sems_lib->api_free
#define sipBuildResult              sipAPI_py_sems_lib->api_build_result
#define sipCallMethod               sipAPI_py_sems_lib->api_call_method
#define sipParseResult              sipAPI_py_sems_lib->api_parse_result
#define sipParseArgs                sipAPI_py_sems_lib->api_parse_args
#define sipParsePair                sipAPI_py_sems_lib->api_parse_pair
#define sipCommonDtor               sipAPI_py_sems_lib->api_common_dtor
#define sipConvertFromSequenceIndex sipAPI_py_sems_lib->api_convert_from_sequence_index
#define sipConvertFromVoidPtr       sipAPI_py_sems_lib->api_convert_from_void_ptr
#define sipConvertToVoidPtr         sipAPI_py_sems_lib->api_convert_to_void_ptr
#define sipNoFunction               sipAPI_py_sems_lib->api_no_function
#define sipNoMethod                 sipAPI_py_sems_lib->api_no_method
#define sipAbstractMethod           sipAPI_py_sems_lib->api_abstract_method
#define sipBadClass                 sipAPI_py_sems_lib->api_bad_class
#define sipBadCatcherResult         sipAPI_py_sems_lib->api_bad_catcher_result
#define sipBadOperatorArg           sipAPI_py_sems_lib->api_bad_operator_arg
#define sipTrace                    sipAPI_py_sems_lib->api_trace
#define sipTransferBack             sipAPI_py_sems_lib->api_transfer_back
#define sipTransferTo               sipAPI_py_sems_lib->api_transfer_to
#define sipTransferBreak            sipAPI_py_sems_lib->api_transfer_break
#define sipSimpleWrapper_Type       sipAPI_py_sems_lib->api_simplewrapper_type
#define sipWrapper_Type             sipAPI_py_sems_lib->api_wrapper_type
#define sipWrapperType_Type         sipAPI_py_sems_lib->api_wrappertype_type
#define sipVoidPtr_Type             sipAPI_py_sems_lib->api_voidptr_type
#define sipGetPyObject              sipAPI_py_sems_lib->api_get_pyobject
#define sipGetCppPtr                sipAPI_py_sems_lib->api_get_cpp_ptr
#define sipGetComplexCppPtr         sipAPI_py_sems_lib->api_get_complex_cpp_ptr
#define sipIsPyMethod               sipAPI_py_sems_lib->api_is_py_method
#define sipCallHook                 sipAPI_py_sems_lib->api_call_hook
#define sipStartThread              sipAPI_py_sems_lib->api_start_thread
#define sipEndThread                sipAPI_py_sems_lib->api_end_thread
#define sipConnectRx                sipAPI_py_sems_lib->api_connect_rx
#define sipDisconnectRx             sipAPI_py_sems_lib->api_disconnect_rx
#define sipRaiseUnknownException    sipAPI_py_sems_lib->api_raise_unknown_exception
#define sipRaiseTypeException       sipAPI_py_sems_lib->api_raise_type_exception
#define sipBadLengthForSlice        sipAPI_py_sems_lib->api_bad_length_for_slice
#define sipAddTypeInstance          sipAPI_py_sems_lib->api_add_type_instance
#define sipGetAddress               sipAPI_py_sems_lib->api_get_address
#define sipFreeSipslot              sipAPI_py_sems_lib->api_free_sipslot
#define sipSameSlot                 sipAPI_py_sems_lib->api_same_slot
#define sipPySlotExtend             sipAPI_py_sems_lib->api_pyslot_extend
#define sipConvertRx                sipAPI_py_sems_lib->api_convert_rx
#define sipAddDelayedDtor           sipAPI_py_sems_lib->api_add_delayed_dtor
#define sipCanConvertToType         sipAPI_py_sems_lib->api_can_convert_to_type
#define sipConvertToType            sipAPI_py_sems_lib->api_convert_to_type
#define sipForceConvertToType       sipAPI_py_sems_lib->api_force_convert_to_type
#define sipCanConvertToEnum         sipAPI_py_sems_lib->api_can_convert_to_enum
#define sipReleaseType              sipAPI_py_sems_lib->api_release_type
#define sipConvertFromType          sipAPI_py_sems_lib->api_convert_from_type
#define sipConvertFromNewType       sipAPI_py_sems_lib->api_convert_from_new_type
#define sipConvertFromEnum          sipAPI_py_sems_lib->api_convert_from_enum
#define sipGetState                 sipAPI_py_sems_lib->api_get_state
#define sipLong_AsUnsignedLong      sipAPI_py_sems_lib->api_long_as_unsigned_long
#define sipExportSymbol             sipAPI_py_sems_lib->api_export_symbol
#define sipImportSymbol             sipAPI_py_sems_lib->api_import_symbol
#define sipFindType                 sipAPI_py_sems_lib->api_find_type
#define sipFindNamedEnum            sipAPI_py_sems_lib->api_find_named_enum
#define sipBytes_AsChar             sipAPI_py_sems_lib->api_bytes_as_char
#define sipBytes_AsString           sipAPI_py_sems_lib->api_bytes_as_string
#define sipString_AsASCIIChar       sipAPI_py_sems_lib->api_string_as_ascii_char
#define sipString_AsASCIIString     sipAPI_py_sems_lib->api_string_as_ascii_string
#define sipString_AsLatin1Char      sipAPI_py_sems_lib->api_string_as_latin1_char
#define sipString_AsLatin1String    sipAPI_py_sems_lib->api_string_as_latin1_string
#define sipString_AsUTF8Char        sipAPI_py_sems_lib->api_string_as_utf8_char
#define sipString_AsUTF8String      sipAPI_py_sems_lib->api_string_as_utf8_string
#define sipUnicode_AsWChar          sipAPI_py_sems_lib->api_unicode_as_wchar
#define sipUnicode_AsWString        sipAPI_py_sems_lib->api_unicode_as_wstring
#define sipConvertFromConstVoidPtr  sipAPI_py_sems_lib->api_convert_from_const_void_ptr
#define sipConvertFromVoidPtrAndSize    sipAPI_py_sems_lib->api_convert_from_void_ptr_and_size
#define sipConvertFromConstVoidPtrAndSize   sipAPI_py_sems_lib->api_convert_from_const_void_ptr_and_size
#define sipInvokeSlot               sipAPI_py_sems_lib->api_invoke_slot
#define sipSaveSlot                 sipAPI_py_sems_lib->api_save_slot
#define sipClearAnySlotReference    sipAPI_py_sems_lib->api_clear_any_slot_reference
#define sipVisitSlot                sipAPI_py_sems_lib->api_visit_slot
#define sipWrappedTypeName(wt)      ((wt)->type->td_cname)
#define sipDeprecated               sipAPI_py_sems_lib->api_deprecated
#define sipKeepReference            sipAPI_py_sems_lib->api_keep_reference
#define sipRegisterPyType           sipAPI_py_sems_lib->api_register_py_type
#define sipTypeFromPyTypeObject     sipAPI_py_sems_lib->api_type_from_py_type_object
#define sipTypeScope                sipAPI_py_sems_lib->api_type_scope
#define sipResolveTypedef           sipAPI_py_sems_lib->api_resolve_typedef
#define sipRegisterAttributeGetter  sipAPI_py_sems_lib->api_register_attribute_getter
#define sipIsAPIEnabled             sipAPI_py_sems_lib->api_is_api_enabled
#define sipExportModule             sipAPI_py_sems_lib->api_export_module
#define sipInitModule               sipAPI_py_sems_lib->api_init_module

/* These are deprecated. */
#define sipMapStringToClass         sipAPI_py_sems_lib->api_map_string_to_class
#define sipMapIntToClass            sipAPI_py_sems_lib->api_map_int_to_class
#define sipFindClass                sipAPI_py_sems_lib->api_find_class
#define sipFindMappedType           sipAPI_py_sems_lib->api_find_mapped_type
#define sipWrapper_Check(w)         PyObject_TypeCheck((w), sipAPI_py_sems_lib->api_wrapper_type)
#define sipGetWrapper(p, wt)        sipGetPyObject((p), (wt)->type)
#define sipReleaseInstance(p, wt, s)    sipReleaseType((p), (wt)->type, (s))
#define sipReleaseMappedType        sipReleaseType
#define sipCanConvertToInstance(o, wt, f)   sipCanConvertToType((o), (wt)->type, (f))
#define sipCanConvertToMappedType   sipCanConvertToType
#define sipConvertToInstance(o, wt, t, f, s, e)     sipConvertToType((o), (wt)->type, (t), (f), (s), (e))
#define sipConvertToMappedType      sipConvertToType
#define sipForceConvertToInstance(o, wt, t, f, s, e)    sipForceConvertToType((o), (wt)->type, (t), (f), (s), (e))
#define sipForceConvertToMappedType sipForceConvertToType
#define sipConvertFromInstance(p, wt, t)    sipConvertFromType((p), (wt)->type, (t))
#define sipConvertFromMappedType    sipConvertFromType
#define sipConvertFromNamedEnum(v, pt)  sipConvertFromEnum((v), ((sipEnumTypeObject *)(pt))->type)
#define sipConvertFromNewInstance(p, wt, t) sipConvertFromNewType((p), (wt)->type, (t))

/* The strings used by this module. */
extern const char sipStrings_py_sems_lib[];

#define sipType_AmSipRequest              sipModuleAPI_py_sems_lib.em_types[10]
#define sipClass_AmSipRequest             sipModuleAPI_py_sems_lib.em_types[10]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_py_sems_lib_AmSipRequest;

#define sipType_AmSipReply              sipModuleAPI_py_sems_lib.em_types[9]
#define sipClass_AmSipReply             sipModuleAPI_py_sems_lib.em_types[9]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_py_sems_lib_AmSipReply;

#define sipType_AmSipDialog              sipModuleAPI_py_sems_lib.em_types[7]
#define sipClass_AmSipDialog             sipModuleAPI_py_sems_lib.em_types[7]->u.td_wrapper_type

#define sipType_AmSipDialog_Status              sipModuleAPI_py_sems_lib.em_types[8]
#define sipEnum_AmSipDialog_Status              sipModuleAPI_py_sems_lib.em_types[8]->u.td_py_type

extern sipClassTypeDef sipTypeDef_py_sems_lib_AmSipDialog;

#define sipType_AmEvent              sipModuleAPI_py_sems_lib.em_types[5]
#define sipClass_AmEvent             sipModuleAPI_py_sems_lib.em_types[5]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_py_sems_lib_AmEvent;

#define sipType_AmAudioEvent              sipModuleAPI_py_sems_lib.em_types[0]
#define sipClass_AmAudioEvent             sipModuleAPI_py_sems_lib.em_types[0]->u.td_wrapper_type

#define sipType_AmAudioEvent_EventType              sipModuleAPI_py_sems_lib.em_types[1]
#define sipEnum_AmAudioEvent_EventType              sipModuleAPI_py_sems_lib.em_types[1]->u.td_py_type

extern sipClassTypeDef sipTypeDef_py_sems_lib_AmAudioEvent;

#define sipType_AmAudioFile              sipModuleAPI_py_sems_lib.em_types[2]
#define sipClass_AmAudioFile             sipModuleAPI_py_sems_lib.em_types[2]->u.td_wrapper_type

#define sipType_AmAudioFile_OpenMode              sipModuleAPI_py_sems_lib.em_types[3]
#define sipEnum_AmAudioFile_OpenMode              sipModuleAPI_py_sems_lib.em_types[3]->u.td_py_type

extern sipClassTypeDef sipTypeDef_py_sems_lib_AmAudioFile;

#define sipType_PySemsDialog              sipModuleAPI_py_sems_lib.em_types[15]
#define sipClass_PySemsDialog             sipModuleAPI_py_sems_lib.em_types[15]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_py_sems_lib_PySemsDialog;

#define sipType_PySemsB2BDialog              sipModuleAPI_py_sems_lib.em_types[14]
#define sipClass_PySemsB2BDialog             sipModuleAPI_py_sems_lib.em_types[14]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_py_sems_lib_PySemsB2BDialog;

#define sipType_AmSessionAudioConnector              sipModuleAPI_py_sems_lib.em_types[6]
#define sipClass_AmSessionAudioConnector             sipModuleAPI_py_sems_lib.em_types[6]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_py_sems_lib_AmSessionAudioConnector;

#define sipType_PySemsB2ABDialog              sipModuleAPI_py_sems_lib.em_types[12]
#define sipClass_PySemsB2ABDialog             sipModuleAPI_py_sems_lib.em_types[12]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_py_sems_lib_PySemsB2ABDialog;

#define sipType_AmB2ABCalleeSession              sipModuleAPI_py_sems_lib.em_types[4]
#define sipClass_AmB2ABCalleeSession             sipModuleAPI_py_sems_lib.em_types[4]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_py_sems_lib_AmB2ABCalleeSession;

#define sipType_PySemsB2ABCalleeDialog              sipModuleAPI_py_sems_lib.em_types[11]
#define sipClass_PySemsB2ABCalleeDialog             sipModuleAPI_py_sems_lib.em_types[11]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_py_sems_lib_PySemsB2ABCalleeDialog;

#define sipType_PySemsB2ABEvent              sipModuleAPI_py_sems_lib.em_types[13]
#define sipClass_PySemsB2ABEvent             sipModuleAPI_py_sems_lib.em_types[13]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_py_sems_lib_PySemsB2ABEvent;

#define sipType_string      sipModuleAPI_py_sems_lib.em_types[16]

extern sipMappedTypeDef sipTypeDef_py_sems_lib_string;

/* The SIP API, this module's API and the APIs of any imported modules. */
extern const sipAPIDef *sipAPI_py_sems_lib;
extern sipExportedModuleDef sipModuleAPI_py_sems_lib;

#endif
