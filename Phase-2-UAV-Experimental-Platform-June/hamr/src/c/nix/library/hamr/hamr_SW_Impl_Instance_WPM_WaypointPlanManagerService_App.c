#include <all.h>

B hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_initialized_ = F;

union art_Bridge_EntryPoints _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_entryPoints;
Z _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_appPortId;
union Option_882048 _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_appPortIdOpt;
Z _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AutomationResponsePortId;
union Option_882048 _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AutomationResponsePortIdOpt;
Z _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AirVehicleStatePortId;
union Option_882048 _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AirVehicleStatePortIdOpt;
Z _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_ReturnHomePortId;
union Option_882048 _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_ReturnHomePortIdOpt;

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init(STACK_FRAME_ONLY) {
  if (hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_initialized_) return;
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_initialized_ = T;
  DeclNewStackFrame(caller, "SW_Impl_Instance_WPM_WaypointPlanManagerService_App.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService_App", "<init>", 0);
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init_entryPoints(SF_LAST);
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init_appPortId(SF_LAST);
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init_appPortIdOpt(SF_LAST);
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init_AutomationResponsePortId(SF_LAST);
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init_AutomationResponsePortIdOpt(SF_LAST);
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init_AirVehicleStatePortId(SF_LAST);
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init_AirVehicleStatePortIdOpt(SF_LAST);
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init_ReturnHomePortId(SF_LAST);
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init_ReturnHomePortIdOpt(SF_LAST);
}

art_Bridge_EntryPoints hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_entryPoints(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_entryPoints;
}

Z hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_appPortId(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_appPortId;
}

Option_882048 hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_appPortIdOpt(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_appPortIdOpt;
}

Z hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AutomationResponsePortId(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AutomationResponsePortId;
}

Option_882048 hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AutomationResponsePortIdOpt(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AutomationResponsePortIdOpt;
}

Z hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AirVehicleStatePortId(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AirVehicleStatePortId;
}

Option_882048 hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AirVehicleStatePortIdOpt(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AirVehicleStatePortIdOpt;
}

Z hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_ReturnHomePortId(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_ReturnHomePortId;
}

Option_882048 hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_ReturnHomePortIdOpt(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_ReturnHomePortIdOpt;
}

Z hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_WPM_WaypointPlanManagerService_App.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService_App", "main", 0);

  sfUpdateLoc(74);
  Z seed;
  {
    B t_0;
    {
      Z t_1 = IS_948B60_size(SF args);
      t_0 = Z__eq(t_1, Z_C(1));
    }
    if (t_0) {

      sfUpdateLoc(75);
      Z n;
      {
        DeclNewOption_882048(t_2);
        Z_apply(&t_2, IS_948B60_at(args, Z_C(0)));
        Z t_3 = Option_882048_get_(SF (&t_2));
        n = t_3;
      }
      Z t_4;
      if (Z__eq(n, Z_C(0))) {
        t_4 = Z_C(1);
      } else {
        t_4 = n;
      }
      seed = t_4;
    } else {
      seed = Z_C(1);
    }
  }

  sfUpdateLoc(81);
  {
    hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_initialiseArchitecture(SF seed);
  }

  sfUpdateLoc(83);
  {
    DeclNewMBox2_1CBFC4(t_5);
    hamr_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_5);
    hamr_PlatformNix_receive(SF (Option_882048) hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_5));
  }

  sfUpdateLoc(85);
  {
    hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_initialise(SF_LAST);
  }

  sfUpdateLoc(87);
  {
    DeclNewMBox2_1CBFC4(t_6);
    hamr_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_6);
    hamr_PlatformNix_receive(SF (Option_882048) hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_6));
  }

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(89);
  {
    String_cprint(string("SW_Impl_Instance_WPM_WaypointPlanManagerService_App starting ..."), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  sfUpdateLoc(91);
  {
    hamr_ArtNix_timeDispatch(SF_LAST);
  }

  sfUpdateLoc(93);
  B terminated;
  {
    terminated = F;
  }

  sfUpdateLoc(94);
  B t_94_5;
  {
    t_94_5 = (!terminated);
  }
  while(t_94_5) {

    sfUpdateLoc(95);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_7);
      hamr_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_7);
      Type_assign(out, ((MBox2_1029D1) &t_7), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(96);
    {
      hamr_PlatformNix_receiveAsync(SF (Option_882048) hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_appPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(97);
    B t_8;
    {
      B t_9 = Option_8E9F45_isEmpty_(SF MBox2_1029D1_value2_(out));
      t_8 = t_9;
    }
    if (t_8) {

      sfUpdateLoc(98);
      {
        hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_compute(SF_LAST);
      }
    } else {

      sfUpdateLoc(100);
      {
        terminated = T;
      }
    }

    sfUpdateLoc(94);
    t_94_5 = (!terminated);
  }

  sfUpdateLoc(103);
  {
    hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_exit(SF_LAST);
  }
  return Z_C(0);
}

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_WPM_WaypointPlanManagerService_App.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService_App", "atExit", 0);

  sfUpdateLoc(114);
  {
    hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_exit(SF_LAST);
  }
}

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_initialiseArchitecture(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_WPM_WaypointPlanManagerService_App.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService_App", "initialiseArchitecture", 0);

  sfUpdateLoc(23);
  {
    hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_appPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(24);
  {
    hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AutomationResponsePortIdOpt(SF_LAST));
  }

  sfUpdateLoc(25);
  {
    hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AirVehicleStatePortIdOpt(SF_LAST));
  }

  sfUpdateLoc(26);
  {
    hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_ReturnHomePortIdOpt(SF_LAST));
  }

  sfUpdateLoc(28);
  {
    art_Art_run(SF (art_ArchitectureDescription) hamr_Arch_ad(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_initialise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_WPM_WaypointPlanManagerService_App.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService_App", "initialise", 0);

  sfUpdateLoc(32);
  {
    art_Bridge_EntryPoints_initialise_(SF hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_entryPoints(SF_LAST));
  }
}

static inline B hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_compute_extract_41_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1, hamr_Base_Types_Bits_Payload *_v_41_19) {
  if (!Some_D29615__is(SF t_1)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_1)))) return F;
  *_v_41_19 = (hamr_Base_Types_Bits_Payload) Some_D29615_value_(Some_D29615__as(SF t_1));
  return T;
}

static inline B hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_compute_extract_42_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1, art_DataContent *_v_42_19) {
  if (!Some_D29615__is(SF t_1)) return F;
  *_v_42_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_1));
  return T;
}

static inline B hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_compute_extract_43_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1) {
  if (!None_964667__is(SF t_1)) return F;
  return T;
}

static inline B hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_compute_extract_50_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_6, hamr_Base_Types_Bits_Payload *_v_50_19) {
  if (!Some_D29615__is(SF t_6)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_6)))) return F;
  *_v_50_19 = (hamr_Base_Types_Bits_Payload) Some_D29615_value_(Some_D29615__as(SF t_6));
  return T;
}

static inline B hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_compute_extract_51_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_6, art_DataContent *_v_51_19) {
  if (!Some_D29615__is(SF t_6)) return F;
  *_v_51_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_6));
  return T;
}

static inline B hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_compute_extract_52_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_6) {
  if (!None_964667__is(SF t_6)) return F;
  return T;
}

static inline B hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_compute_extract_59_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_11, art_Empty *_v_59_19) {
  if (!Some_D29615__is(SF t_11)) return F;
  if (!art_Empty__is(SF Some_D29615_value_(Some_D29615__as(SF t_11)))) return F;
  *_v_59_19 = (art_Empty) Some_D29615_value_(Some_D29615__as(SF t_11));
  return T;
}

static inline B hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_compute_extract_60_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_11, art_DataContent *_v_60_19) {
  if (!Some_D29615__is(SF t_11)) return F;
  *_v_60_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_11));
  return T;
}

static inline B hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_compute_extract_61_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_11) {
  if (!None_964667__is(SF t_11)) return F;
  return T;
}

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_WPM_WaypointPlanManagerService_App.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService_App", "compute", 0);
  {

    sfUpdateLoc(38);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_0);
      hamr_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_0);
      Type_assign(out, ((MBox2_1029D1) &t_0), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(39);
    {
      hamr_PlatformNix_receiveAsync(SF (Option_882048) hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AutomationResponsePortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(40);
    Option_8E9F45 t_1 = MBox2_1029D1_value2_(out);
    B match_40_11 = F;
    if (!match_40_11) {
      hamr_Base_Types_Bits_Payload v_41_19;
      match_40_11 = hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_compute_extract_41_14_8E9F45(SF t_1, &v_41_19);
      if (match_40_11) {

        sfUpdateLoc(41);
        {
          hamr_ArtNix_updateData(SF hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AutomationResponsePortId(SF_LAST), (art_DataContent) v_41_19);
        }
      }
    }
    if (!match_40_11) {
      art_DataContent v_42_19;
      match_40_11 = hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_compute_extract_42_14_8E9F45(SF t_1, &v_42_19);
      if (match_40_11) {

        sfUpdateLoc(42);
        {
          DeclNewString(t_2);
          String t_3 = (String) &t_2;
          DeclNewString(t_4);
          String_string_(SF (String) &t_4, string("Unexpected payload on port AutomationResponse.  Expecting something of type Base_Types.Bits_Payload but received "));
          art_DataContent_string_(SF (String) &t_4, v_42_19);
          String_string_(SF (String) &t_4, string(""));
          String_string_(SF t_3, ((String) &t_4));
          sfAbort(t_3->value);
          abort();
        }
      }
    }
    if (!match_40_11) {
      match_40_11 = hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_compute_extract_43_14_8E9F45(SF t_1);
      if (match_40_11) {
      }
    }
    sfAssert(match_40_11, "Error when pattern matching.");
  }
  {

    sfUpdateLoc(47);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_5);
      hamr_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_5);
      Type_assign(out, ((MBox2_1029D1) &t_5), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(48);
    {
      hamr_PlatformNix_receiveAsync(SF (Option_882048) hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AirVehicleStatePortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(49);
    Option_8E9F45 t_6 = MBox2_1029D1_value2_(out);
    B match_49_11 = F;
    if (!match_49_11) {
      hamr_Base_Types_Bits_Payload v_50_19;
      match_49_11 = hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_compute_extract_50_14_8E9F45(SF t_6, &v_50_19);
      if (match_49_11) {

        sfUpdateLoc(50);
        {
          hamr_ArtNix_updateData(SF hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AirVehicleStatePortId(SF_LAST), (art_DataContent) v_50_19);
        }
      }
    }
    if (!match_49_11) {
      art_DataContent v_51_19;
      match_49_11 = hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_compute_extract_51_14_8E9F45(SF t_6, &v_51_19);
      if (match_49_11) {

        sfUpdateLoc(51);
        {
          DeclNewString(t_7);
          String t_8 = (String) &t_7;
          DeclNewString(t_9);
          String_string_(SF (String) &t_9, string("Unexpected payload on port AirVehicleState.  Expecting something of type Base_Types.Bits_Payload but received "));
          art_DataContent_string_(SF (String) &t_9, v_51_19);
          String_string_(SF (String) &t_9, string(""));
          String_string_(SF t_8, ((String) &t_9));
          sfAbort(t_8->value);
          abort();
        }
      }
    }
    if (!match_49_11) {
      match_49_11 = hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_compute_extract_52_14_8E9F45(SF t_6);
      if (match_49_11) {
      }
    }
    sfAssert(match_49_11, "Error when pattern matching.");
  }
  {

    sfUpdateLoc(56);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_10);
      hamr_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_10);
      Type_assign(out, ((MBox2_1029D1) &t_10), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(57);
    {
      hamr_PlatformNix_receiveAsync(SF (Option_882048) hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_ReturnHomePortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(58);
    Option_8E9F45 t_11 = MBox2_1029D1_value2_(out);
    B match_58_11 = F;
    if (!match_58_11) {
      art_Empty v_59_19;
      match_58_11 = hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_compute_extract_59_14_8E9F45(SF t_11, &v_59_19);
      if (match_58_11) {

        sfUpdateLoc(59);
        {
          hamr_ArtNix_updateData(SF hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_ReturnHomePortId(SF_LAST), (art_DataContent) v_59_19);
        }
      }
    }
    if (!match_58_11) {
      art_DataContent v_60_19;
      match_58_11 = hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_compute_extract_60_14_8E9F45(SF t_11, &v_60_19);
      if (match_58_11) {

        sfUpdateLoc(60);
        {
          DeclNewString(t_12);
          String t_13 = (String) &t_12;
          DeclNewString(t_14);
          String_string_(SF (String) &t_14, string("Unexpected payload on port ReturnHome.  Expecting something of type art.Empty but received "));
          art_DataContent_string_(SF (String) &t_14, v_60_19);
          String_string_(SF (String) &t_14, string(""));
          String_string_(SF t_13, ((String) &t_14));
          sfAbort(t_13->value);
          abort();
        }
      }
    }
    if (!match_58_11) {
      match_58_11 = hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_compute_extract_61_14_8E9F45(SF t_11);
      if (match_58_11) {
      }
    }
    sfAssert(match_58_11, "Error when pattern matching.");
  }

  sfUpdateLoc(64);
  {
    art_Bridge_EntryPoints_compute_(SF hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_entryPoints(SF_LAST));
  }

  sfUpdateLoc(65);
  {
    hamr_Process_sleep(SF Z_C(500));
  }
}

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_WPM_WaypointPlanManagerService_App.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService_App", "exit", 0);

  sfUpdateLoc(109);
  {
    hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_finalise(SF_LAST);
  }

  sfUpdateLoc(110);
  {
    hamr_PlatformNix_finalise(SF_LAST);
  }
}

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_finalise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_WPM_WaypointPlanManagerService_App.scala", "hamr.SW_Impl_Instance_WPM_WaypointPlanManagerService_App", "finalise", 0);

  sfUpdateLoc(69);
  {
    art_Bridge_EntryPoints_finalise_(SF hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_entryPoints(SF_LAST));
  }
}

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(12);
  Type_assign(&_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_entryPoints, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_entryPoints_(hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init_appPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(13);
  _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_appPortId = hamr_IPCPorts_SW_Impl_Instance_WPM_WaypointPlanManagerService_App(SF_LAST);
};

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init_appPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_appPortId(SF_LAST));
  Type_assign(&_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
};

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init_AutomationResponsePortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(15);
  _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AutomationResponsePortId = art_Port_45E54D_id_(hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_AutomationResponse_(hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService(SF_LAST)));
};

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init_AutomationResponsePortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  DeclNewSome_488F47(t_1);
  Some_488F47_apply(SF &t_1, hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AutomationResponsePortId(SF_LAST));
  Type_assign(&_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AutomationResponsePortIdOpt, (&t_1), sizeof(struct Some_488F47));
};

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init_AirVehicleStatePortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(17);
  _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AirVehicleStatePortId = art_Port_45E54D_id_(hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_AirVehicleState_(hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService(SF_LAST)));
};

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init_AirVehicleStatePortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(18);
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(SF &t_2, hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AirVehicleStatePortId(SF_LAST));
  Type_assign(&_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AirVehicleStatePortIdOpt, (&t_2), sizeof(struct Some_488F47));
};

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init_ReturnHomePortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(19);
  _hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_ReturnHomePortId = art_Port_9CBF18_id_(hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_ReturnHome_(hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService(SF_LAST)));
};

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init_ReturnHomePortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(20);
  DeclNewSome_488F47(t_3);
  Some_488F47_apply(SF &t_3, hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_ReturnHomePortId(SF_LAST));
  Type_assign(&_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_ReturnHomePortIdOpt, (&t_3), sizeof(struct Some_488F47));
};