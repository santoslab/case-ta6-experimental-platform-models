#include <all.h>

// hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge.Api

B hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api__eq(hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api this, hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->trusted_ids_Id, other->trusted_ids_Id)) return F;
  if (Z__ne(this->AutomationRequest_Id, other->AutomationRequest_Id)) return F;
  if (Z__ne(this->OperatingRegion_Id, other->OperatingRegion_Id)) return F;
  if (Z__ne(this->LineSearchTask_Id, other->LineSearchTask_Id)) return F;
  return T;
}

B hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api__ne(hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api this, hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api other);

void hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_string_(STACK_FRAME String result, hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge.Api", "string", 0);
  String_string_(SF result, string("Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->trusted_ids_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationRequest_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->OperatingRegion_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->LineSearchTask_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_cprint(hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->trusted_ids_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationRequest_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->OperatingRegion_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->LineSearchTask_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api__is(STACK_FRAME void* this);
hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api__as(STACK_FRAME void *this);

void hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_apply(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api this, Z id, Z trusted_ids_Id, Z AutomationRequest_Id, Z OperatingRegion_Id, Z LineSearchTask_Id) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge.Api", "apply", 0);
  this->id = id;
  this->trusted_ids_Id = trusted_ids_Id;
  this->AutomationRequest_Id = AutomationRequest_Id;
  this->OperatingRegion_Id = OperatingRegion_Id;
  this->LineSearchTask_Id = LineSearchTask_Id;
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_logInfo_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(90);
  art_Art_logInfo(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_id_(this), (String) msg);
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_logDebug_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge.Api", "logDebug", 0);

  sfUpdateLoc(94);
  art_Art_logDebug(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_id_(this), (String) msg);
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_logError_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge.Api", "logError", 0);

  sfUpdateLoc(98);
  art_Art_logError(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_id_(this), (String) msg);
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_settrusted_ids_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge.Api", "settrusted_ids", 0);

  sfUpdateLoc(86);
  DeclNewhamr_Base_Types_Bits_Payload(t_0);
  hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
  art_Art_putValue(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_trusted_ids_Id_(this), (art_DataContent) (&t_0));
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendAutomationRequest_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge.Api", "sendAutomationRequest", 0);

  sfUpdateLoc(74);
  DeclNewhamr_Base_Types_Bits_Payload(t_0);
  hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
  art_Art_putValue(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_AutomationRequest_Id_(this), (art_DataContent) (&t_0));
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendOperatingRegion_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge.Api", "sendOperatingRegion", 0);

  sfUpdateLoc(78);
  DeclNewhamr_Base_Types_Bits_Payload(t_0);
  hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
  art_Art_putValue(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_OperatingRegion_Id_(this), (art_DataContent) (&t_0));
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendLineSearchTask_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Bridge.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge.Api", "sendLineSearchTask", 0);

  sfUpdateLoc(82);
  DeclNewhamr_Base_Types_Bits_Payload(t_0);
  hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
  art_Art_putValue(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_LineSearchTask_Id_(this), (art_DataContent) (&t_0));
}