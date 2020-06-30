#include <all.h>

// hamr.SW.UxAS_thr_Impl_Bridge.Api

B hamr_SW_UxAS_thr_Impl_Bridge_Api__eq(hamr_SW_UxAS_thr_Impl_Bridge_Api this, hamr_SW_UxAS_thr_Impl_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->AutomationRequest_Id, other->AutomationRequest_Id)) return F;
  if (Z__ne(this->AirVehicleState_Id, other->AirVehicleState_Id)) return F;
  if (Z__ne(this->OperatingRegion_Id, other->OperatingRegion_Id)) return F;
  if (Z__ne(this->LineSearchTask_Id, other->LineSearchTask_Id)) return F;
  if (Z__ne(this->AutomationResponse_MON_GEO_Id, other->AutomationResponse_MON_GEO_Id)) return F;
  if (Z__ne(this->AutomationResponse_MON_REQ_Id, other->AutomationResponse_MON_REQ_Id)) return F;
  return T;
}

B hamr_SW_UxAS_thr_Impl_Bridge_Api__ne(hamr_SW_UxAS_thr_Impl_Bridge_Api this, hamr_SW_UxAS_thr_Impl_Bridge_Api other);

void hamr_SW_UxAS_thr_Impl_Bridge_Api_string_(STACK_FRAME String result, hamr_SW_UxAS_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW.UxAS_thr_Impl_Bridge.Api", "string", 0);
  String_string_(SF result, string("Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationRequest_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AirVehicleState_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->OperatingRegion_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->LineSearchTask_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationResponse_MON_GEO_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationResponse_MON_REQ_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_UxAS_thr_Impl_Bridge_Api_cprint(hamr_SW_UxAS_thr_Impl_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationRequest_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AirVehicleState_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->OperatingRegion_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->LineSearchTask_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationResponse_MON_GEO_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationResponse_MON_REQ_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_UxAS_thr_Impl_Bridge_Api__is(STACK_FRAME void* this);
hamr_SW_UxAS_thr_Impl_Bridge_Api hamr_SW_UxAS_thr_Impl_Bridge_Api__as(STACK_FRAME void *this);

void hamr_SW_UxAS_thr_Impl_Bridge_Api_apply(STACK_FRAME hamr_SW_UxAS_thr_Impl_Bridge_Api this, Z id, Z AutomationRequest_Id, Z AirVehicleState_Id, Z OperatingRegion_Id, Z LineSearchTask_Id, Z AutomationResponse_MON_GEO_Id, Z AutomationResponse_MON_REQ_Id) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW.UxAS_thr_Impl_Bridge.Api", "apply", 0);
  this->id = id;
  this->AutomationRequest_Id = AutomationRequest_Id;
  this->AirVehicleState_Id = AirVehicleState_Id;
  this->OperatingRegion_Id = OperatingRegion_Id;
  this->LineSearchTask_Id = LineSearchTask_Id;
  this->AutomationResponse_MON_GEO_Id = AutomationResponse_MON_GEO_Id;
  this->AutomationResponse_MON_REQ_Id = AutomationResponse_MON_REQ_Id;
}

Unit hamr_SW_UxAS_thr_Impl_Bridge_Api_logInfo_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW.UxAS_thr_Impl_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(139);
  {
    art_Art_logInfo(SF hamr_SW_UxAS_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_UxAS_thr_Impl_Bridge_Api_logDebug_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW.UxAS_thr_Impl_Bridge.Api", "logDebug", 0);

  sfUpdateLoc(143);
  {
    art_Art_logDebug(SF hamr_SW_UxAS_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_UxAS_thr_Impl_Bridge_Api_logError_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW.UxAS_thr_Impl_Bridge.Api", "logError", 0);

  sfUpdateLoc(147);
  {
    art_Art_logError(SF hamr_SW_UxAS_thr_Impl_Bridge_Api_id_(this), (String) msg);
  }
}

static inline B hamr_SW_UxAS_thr_Impl_Bridge_Api_getAutomationRequest_extract_87_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Bridge_Api this, IS_C4F575 *_v_87_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_87_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_UxAS_thr_Impl_Bridge_Api_getAutomationRequest_extract_88_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Bridge_Api this, art_DataContent *_v_88_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_88_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_UxAS_thr_Impl_Bridge_Api_getAutomationRequest_extract_91_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_UxAS_thr_Impl_Bridge_Api_getAutomationRequest_(STACK_FRAME Option_30119F result, hamr_SW_UxAS_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW.UxAS_thr_Impl_Bridge.Api", "getAutomationRequest", 0);

  sfUpdateLoc(86);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_UxAS_thr_Impl_Bridge_Api_AutomationRequest_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_86_49 = F;
  if (!match_86_49) {
    IS_C4F575 v_87_43;
    match_86_49 = hamr_SW_UxAS_thr_Impl_Bridge_Api_getAutomationRequest_extract_87_14_8E9F45(SF t_0, this, &v_87_43);
    if (match_86_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_87_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_86_49) {
    art_DataContent v_88_19;
    match_86_49 = hamr_SW_UxAS_thr_Impl_Bridge_Api_getAutomationRequest_extract_88_14_8E9F45(SF t_0, this, &v_88_19);
    if (match_86_49) {

      sfUpdateLoc(89);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port AutomationRequest.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_88_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_UxAS_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_86_49) {
    match_86_49 = hamr_SW_UxAS_thr_Impl_Bridge_Api_getAutomationRequest_extract_91_14_8E9F45(SF t_0, this);
    if (match_86_49) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_86_49, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

static inline B hamr_SW_UxAS_thr_Impl_Bridge_Api_getAirVehicleState_extract_98_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Bridge_Api this, IS_C4F575 *_v_98_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_98_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_UxAS_thr_Impl_Bridge_Api_getAirVehicleState_extract_99_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Bridge_Api this, art_DataContent *_v_99_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_99_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_UxAS_thr_Impl_Bridge_Api_getAirVehicleState_extract_102_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_UxAS_thr_Impl_Bridge_Api_getAirVehicleState_(STACK_FRAME Option_30119F result, hamr_SW_UxAS_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW.UxAS_thr_Impl_Bridge.Api", "getAirVehicleState", 0);

  sfUpdateLoc(97);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_UxAS_thr_Impl_Bridge_Api_AirVehicleState_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_97_49 = F;
  if (!match_97_49) {
    IS_C4F575 v_98_43;
    match_97_49 = hamr_SW_UxAS_thr_Impl_Bridge_Api_getAirVehicleState_extract_98_14_8E9F45(SF t_0, this, &v_98_43);
    if (match_97_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_98_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_97_49) {
    art_DataContent v_99_19;
    match_97_49 = hamr_SW_UxAS_thr_Impl_Bridge_Api_getAirVehicleState_extract_99_14_8E9F45(SF t_0, this, &v_99_19);
    if (match_97_49) {

      sfUpdateLoc(100);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port AirVehicleState.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_99_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_UxAS_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_97_49) {
    match_97_49 = hamr_SW_UxAS_thr_Impl_Bridge_Api_getAirVehicleState_extract_102_14_8E9F45(SF t_0, this);
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

static inline B hamr_SW_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_extract_109_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Bridge_Api this, IS_C4F575 *_v_109_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_109_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_extract_110_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Bridge_Api this, art_DataContent *_v_110_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_110_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_extract_113_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_(STACK_FRAME Option_30119F result, hamr_SW_UxAS_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW.UxAS_thr_Impl_Bridge.Api", "getOperatingRegion", 0);

  sfUpdateLoc(108);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_UxAS_thr_Impl_Bridge_Api_OperatingRegion_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_108_49 = F;
  if (!match_108_49) {
    IS_C4F575 v_109_43;
    match_108_49 = hamr_SW_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_extract_109_14_8E9F45(SF t_0, this, &v_109_43);
    if (match_108_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_109_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_108_49) {
    art_DataContent v_110_19;
    match_108_49 = hamr_SW_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_extract_110_14_8E9F45(SF t_0, this, &v_110_19);
    if (match_108_49) {

      sfUpdateLoc(111);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port OperatingRegion.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_110_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_UxAS_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_108_49) {
    match_108_49 = hamr_SW_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_extract_113_14_8E9F45(SF t_0, this);
    if (match_108_49) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_108_49, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

static inline B hamr_SW_UxAS_thr_Impl_Bridge_Api_getLineSearchTask_extract_120_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Bridge_Api this, IS_C4F575 *_v_120_43) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_120_43 = (IS_C4F575) hamr_Base_Types_Bits_Payload_value_(hamr_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

static inline B hamr_SW_UxAS_thr_Impl_Bridge_Api_getLineSearchTask_extract_121_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Bridge_Api this, art_DataContent *_v_121_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_121_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_SW_UxAS_thr_Impl_Bridge_Api_getLineSearchTask_extract_124_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, hamr_SW_UxAS_thr_Impl_Bridge_Api this) {
  return T;
}

void hamr_SW_UxAS_thr_Impl_Bridge_Api_getLineSearchTask_(STACK_FRAME Option_30119F result, hamr_SW_UxAS_thr_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW.UxAS_thr_Impl_Bridge.Api", "getLineSearchTask", 0);

  sfUpdateLoc(119);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, hamr_SW_UxAS_thr_Impl_Bridge_Api_LineSearchTask_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_119_49 = F;
  if (!match_119_49) {
    IS_C4F575 v_120_43;
    match_119_49 = hamr_SW_UxAS_thr_Impl_Bridge_Api_getLineSearchTask_extract_120_14_8E9F45(SF t_0, this, &v_120_43);
    if (match_119_49) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_120_43);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_119_49) {
    art_DataContent v_121_19;
    match_119_49 = hamr_SW_UxAS_thr_Impl_Bridge_Api_getLineSearchTask_extract_121_14_8E9F45(SF t_0, this, &v_121_19);
    if (match_119_49) {

      sfUpdateLoc(122);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port LineSearchTask.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_121_19);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF hamr_SW_UxAS_thr_Impl_Bridge_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_119_49) {
    match_119_49 = hamr_SW_UxAS_thr_Impl_Bridge_Api_getLineSearchTask_extract_124_14_8E9F45(SF t_0, this);
    if (match_119_49) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_119_49, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}

Unit hamr_SW_UxAS_thr_Impl_Bridge_Api_sendAutomationResponse_MON_GEO_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW.UxAS_thr_Impl_Bridge.Api", "sendAutomationResponse_MON_GEO", 0);

  sfUpdateLoc(130);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_UxAS_thr_Impl_Bridge_Api_AutomationResponse_MON_GEO_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_UxAS_thr_Impl_Bridge_Api_sendAutomationResponse_MON_REQ_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Bridge_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Bridge.scala", "hamr.SW.UxAS_thr_Impl_Bridge.Api", "sendAutomationResponse_MON_REQ", 0);

  sfUpdateLoc(134);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_UxAS_thr_Impl_Bridge_Api_AutomationResponse_MON_REQ_Id_(this), (art_DataContent) (&t_0));
  }
}