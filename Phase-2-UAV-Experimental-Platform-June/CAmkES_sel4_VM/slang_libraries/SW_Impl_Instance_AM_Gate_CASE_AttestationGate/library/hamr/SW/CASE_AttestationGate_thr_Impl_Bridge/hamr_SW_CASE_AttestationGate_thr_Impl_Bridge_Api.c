#include <all.h>

// hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api

B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api__eq(hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->trusted_ids_Id, other->trusted_ids_Id)) return F;
  if (Z__ne(this->AutomationRequest_in_Id, other->AutomationRequest_in_Id)) return F;
  if (Z__ne(this->AutomationRequest_UXAS_Id, other->AutomationRequest_UXAS_Id)) return F;
  if (Z__ne(this->AutomationRequest_MON_REQ_Id, other->AutomationRequest_MON_REQ_Id)) return F;
  if (Z__ne(this->OperatingRegion_in_Id, other->OperatingRegion_in_Id)) return F;
  if (Z__ne(this->OperatingRegion_out_Id, other->OperatingRegion_out_Id)) return F;
  if (Z__ne(this->LineSearchTask_in_Id, other->LineSearchTask_in_Id)) return F;
  if (Z__ne(this->LineSearchTask_out_Id, other->LineSearchTask_out_Id)) return F;
  return T;
}

B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api__ne(hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api other);

void hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_string_(STACK_FRAME String result, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "string", 0);
  String_string_(SF result, string("Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->trusted_ids_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationRequest_in_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationRequest_UXAS_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationRequest_MON_REQ_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->OperatingRegion_in_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->OperatingRegion_out_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->LineSearchTask_in_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->LineSearchTask_out_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_cprint(hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->trusted_ids_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationRequest_in_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationRequest_UXAS_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationRequest_MON_REQ_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->OperatingRegion_in_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->OperatingRegion_out_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->LineSearchTask_in_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->LineSearchTask_out_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api__is(STACK_FRAME void* this);
hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api__as(STACK_FRAME void *this);

void hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_apply(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, Z id, Z trusted_ids_Id, Z AutomationRequest_in_Id, Z AutomationRequest_UXAS_Id, Z AutomationRequest_MON_REQ_Id, Z OperatingRegion_in_Id, Z OperatingRegion_out_Id, Z LineSearchTask_in_Id, Z LineSearchTask_out_Id) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "apply", 0);
  this->id = id;
  this->trusted_ids_Id = trusted_ids_Id;
  this->AutomationRequest_in_Id = AutomationRequest_in_Id;
  this->AutomationRequest_UXAS_Id = AutomationRequest_UXAS_Id;
  this->AutomationRequest_MON_REQ_Id = AutomationRequest_MON_REQ_Id;
  this->OperatingRegion_in_Id = OperatingRegion_in_Id;
  this->OperatingRegion_out_Id = OperatingRegion_out_Id;
  this->LineSearchTask_in_Id = LineSearchTask_in_Id;
  this->LineSearchTask_out_Id = LineSearchTask_out_Id;
}

Unit hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_logInfo_(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(157);
  {
    art_Art_logInfo(SF hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_logDebug_(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "logDebug", 0);

  sfUpdateLoc(161);
  {
    art_Art_logDebug(SF hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_logError_(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "logError", 0);

  sfUpdateLoc(165);
  {
    art_Art_logError(SF hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_gettrusted_ids_extract_147_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, IS_C4F575 *_v_147_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_147_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_gettrusted_ids_extract_148_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, art_DataContent *_v_148_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_148_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_gettrusted_ids_extract_151_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_gettrusted_ids_(STACK_FRAME Option_30119F result, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "gettrusted_ids", 0);

  sfUpdateLoc(146);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_trusted_ids_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_146_49 = F;
  if (!match_146_49) {
    IS_C4F575 v_147_43;
    match_146_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_gettrusted_ids_extract_147_14_8E9F45(SF t_0, this, &v_147_43);
    if (match_146_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_147_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_146_49) {
    art_DataContent v_148_19;
    match_146_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_gettrusted_ids_extract_148_14_8E9F45(SF t_0, this, &v_148_19);
    if (match_146_49) {

      sfUpdateLoc(149);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port trusted_ids.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_148_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_146_49) {
    match_146_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_gettrusted_ids_extract_151_14_8E9F45(SF t_0, this);
    if (match_146_49) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_146_49, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getAutomationRequest_in_extract_98_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, IS_C4F575 *_v_98_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_98_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getAutomationRequest_in_extract_99_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, art_DataContent *_v_99_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_99_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getAutomationRequest_in_extract_102_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getAutomationRequest_in_(STACK_FRAME Option_30119F result, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "getAutomationRequest_in", 0);

  sfUpdateLoc(97);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_AutomationRequest_in_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_97_49 = F;
  if (!match_97_49) {
    IS_C4F575 v_98_43;
    match_97_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getAutomationRequest_in_extract_98_14_8E9F45(SF t_0, this, &v_98_43);
    if (match_97_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_98_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_97_49) {
    art_DataContent v_99_19;
    match_97_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getAutomationRequest_in_extract_99_14_8E9F45(SF t_0, this, &v_99_19);
    if (match_97_49) {

      sfUpdateLoc(100);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port AutomationRequest_in.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_99_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_97_49) {
    match_97_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getAutomationRequest_in_extract_102_14_8E9F45(SF t_0, this);
    if (match_97_49) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_97_49, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

Unit hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_sendAutomationRequest_UXAS_(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "sendAutomationRequest_UXAS", 0);

  sfUpdateLoc(108);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_AutomationRequest_UXAS_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_sendAutomationRequest_MON_REQ_(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "sendAutomationRequest_MON_REQ", 0);

  sfUpdateLoc(112);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_AutomationRequest_MON_REQ_Id_(this), (art_DataContent) (&t_0));
  }
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getOperatingRegion_in_extract_117_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, IS_C4F575 *_v_117_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_117_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getOperatingRegion_in_extract_118_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, art_DataContent *_v_118_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_118_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getOperatingRegion_in_extract_121_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getOperatingRegion_in_(STACK_FRAME Option_30119F result, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "getOperatingRegion_in", 0);

  sfUpdateLoc(116);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_OperatingRegion_in_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_116_49 = F;
  if (!match_116_49) {
    IS_C4F575 v_117_43;
    match_116_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getOperatingRegion_in_extract_117_14_8E9F45(SF t_0, this, &v_117_43);
    if (match_116_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_117_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_116_49) {
    art_DataContent v_118_19;
    match_116_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getOperatingRegion_in_extract_118_14_8E9F45(SF t_0, this, &v_118_19);
    if (match_116_49) {

      sfUpdateLoc(119);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port OperatingRegion_in.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_118_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_116_49) {
    match_116_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getOperatingRegion_in_extract_121_14_8E9F45(SF t_0, this);
    if (match_116_49) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_116_49, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

Unit hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_sendOperatingRegion_out_(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "sendOperatingRegion_out", 0);

  sfUpdateLoc(127);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_OperatingRegion_out_Id_(this), (art_DataContent) (&t_0));
  }
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getLineSearchTask_in_extract_132_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, IS_C4F575 *_v_132_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_132_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getLineSearchTask_in_extract_133_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, art_DataContent *_v_133_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_133_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getLineSearchTask_in_extract_136_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getLineSearchTask_in_(STACK_FRAME Option_30119F result, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "getLineSearchTask_in", 0);

  sfUpdateLoc(131);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_LineSearchTask_in_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_131_49 = F;
  if (!match_131_49) {
    IS_C4F575 v_132_43;
    match_131_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getLineSearchTask_in_extract_132_14_8E9F45(SF t_0, this, &v_132_43);
    if (match_131_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_132_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_131_49) {
    art_DataContent v_133_19;
    match_131_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getLineSearchTask_in_extract_133_14_8E9F45(SF t_0, this, &v_133_19);
    if (match_131_49) {

      sfUpdateLoc(134);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port LineSearchTask_in.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_133_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_131_49) {
    match_131_49 = hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_getLineSearchTask_in_extract_136_14_8E9F45(SF t_0, this);
    if (match_131_49) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_131_49, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

Unit hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_sendLineSearchTask_out_(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api", "sendLineSearchTask_out", 0);

  sfUpdateLoc(142);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api_LineSearchTask_out_Id_(this), (art_DataContent) (&t_0));
  }
}