#include <all.h>

B hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_initialized_ = F;

union art_Bridge_EntryPoints _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_entryPoints;
Z _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_appPortId;
union Option_882048 _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_appPortIdOpt;
Z _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_observedPortId;
union Option_882048 _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_observedPortIdOpt;
Z _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_reference_1PortId;
union Option_882048 _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_reference_1PortIdOpt;

void hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_init(STACK_FRAME_ONLY) {
  if (hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_initialized_) return;
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_initialized_ = T;
  DeclNewStackFrame(caller, "SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App", "<init>", 0);
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_init_entryPoints(SF_LAST);
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_init_appPortId(SF_LAST);
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_init_appPortIdOpt(SF_LAST);
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_init_observedPortId(SF_LAST);
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_init_observedPortIdOpt(SF_LAST);
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_init_reference_1PortId(SF_LAST);
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_init_reference_1PortIdOpt(SF_LAST);
}

art_Bridge_EntryPoints hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_entryPoints(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_entryPoints;
}

Z hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_appPortId(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_appPortId;
}

Option_882048 hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_appPortIdOpt(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_appPortIdOpt;
}

Z hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_observedPortId(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_observedPortId;
}

Option_882048 hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_observedPortIdOpt(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_observedPortIdOpt;
}

Z hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_reference_1PortId(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_reference_1PortId;
}

Option_882048 hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_reference_1PortIdOpt(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_reference_1PortIdOpt;
}

Z hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App", "main", 0);

  sfUpdateLoc(62);
  Z seed;
  {
    B t_0;
    {
      Z t_1 = IS_948B60_size(SF args);
      t_0 = Z__eq(t_1, Z_C(1));
    }
    if (t_0) {

      sfUpdateLoc(63);
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

  sfUpdateLoc(69);
  {
    hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_initialiseArchitecture(SF seed);
  }

  sfUpdateLoc(71);
  {
    DeclNewMBox2_1CBFC4(t_5);
    hamr_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_5);
    hamr_PlatformNix_receive(SF (Option_882048) hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_5));
  }

  sfUpdateLoc(73);
  {
    hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_initialise(SF_LAST);
  }

  sfUpdateLoc(75);
  {
    DeclNewMBox2_1CBFC4(t_6);
    hamr_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_6);
    hamr_PlatformNix_receive(SF (Option_882048) hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_6));
  }

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(77);
  {
    String_cprint(string("SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App starting ..."), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  sfUpdateLoc(79);
  {
    hamr_ArtNix_timeDispatch(SF_LAST);
  }

  sfUpdateLoc(81);
  B terminated;
  {
    terminated = F;
  }

  sfUpdateLoc(82);
  B t_82_5;
  {
    t_82_5 = (!terminated);
  }
  while(t_82_5) {

    sfUpdateLoc(83);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_7);
      hamr_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_7);
      Type_assign(out, ((MBox2_1029D1) &t_7), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(84);
    {
      hamr_PlatformNix_receiveAsync(SF (Option_882048) hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_appPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(85);
    B t_8;
    {
      B t_9 = Option_8E9F45_isEmpty_(SF MBox2_1029D1_value2_(out));
      t_8 = t_9;
    }
    if (t_8) {

      sfUpdateLoc(86);
      {
        hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_compute(SF_LAST);
      }
    } else {

      sfUpdateLoc(88);
      {
        terminated = T;
      }
    }

    sfUpdateLoc(82);
    t_82_5 = (!terminated);
  }

  sfUpdateLoc(91);
  {
    hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_exit(SF_LAST);
  }
  return Z_C(0);
}

Unit hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App", "atExit", 0);

  sfUpdateLoc(102);
  {
    hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_exit(SF_LAST);
  }
}

Unit hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_initialiseArchitecture(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App", "initialiseArchitecture", 0);

  sfUpdateLoc(21);
  {
    hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_appPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(22);
  {
    hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_observedPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(23);
  {
    hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_reference_1PortIdOpt(SF_LAST));
  }

  sfUpdateLoc(25);
  {
    art_Art_run(SF (art_ArchitectureDescription) hamr_Arch_ad(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_initialise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App", "initialise", 0);

  sfUpdateLoc(29);
  {
    art_Bridge_EntryPoints_initialise_(SF hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_entryPoints(SF_LAST));
  }
}

static inline B hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_compute_extract_38_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1, hamr_Base_Types_Bits_Payload *_v_38_19) {
  if (!Some_D29615__is(SF t_1)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_1)))) return F;
  *_v_38_19 = (hamr_Base_Types_Bits_Payload) Some_D29615_value_(Some_D29615__as(SF t_1));
  return T;
}

static inline B hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_compute_extract_39_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1, art_DataContent *_v_39_19) {
  if (!Some_D29615__is(SF t_1)) return F;
  *_v_39_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_1));
  return T;
}

static inline B hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_compute_extract_40_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1) {
  if (!None_964667__is(SF t_1)) return F;
  return T;
}

static inline B hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_compute_extract_47_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_6, hamr_Base_Types_Bits_Payload *_v_47_19) {
  if (!Some_D29615__is(SF t_6)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_6)))) return F;
  *_v_47_19 = (hamr_Base_Types_Bits_Payload) Some_D29615_value_(Some_D29615__as(SF t_6));
  return T;
}

static inline B hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_compute_extract_48_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_6, art_DataContent *_v_48_19) {
  if (!Some_D29615__is(SF t_6)) return F;
  *_v_48_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_6));
  return T;
}

static inline B hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_compute_extract_49_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_6) {
  if (!None_964667__is(SF t_6)) return F;
  return T;
}

Unit hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App", "compute", 0);
  {

    sfUpdateLoc(35);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_0);
      hamr_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_0);
      Type_assign(out, ((MBox2_1029D1) &t_0), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(36);
    {
      hamr_PlatformNix_receiveAsync(SF (Option_882048) hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_observedPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(37);
    Option_8E9F45 t_1 = MBox2_1029D1_value2_(out);
    B match_37_11 = F;
    if (!match_37_11) {
      hamr_Base_Types_Bits_Payload v_38_19;
      match_37_11 = hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_compute_extract_38_14_8E9F45(SF t_1, &v_38_19);
      if (match_37_11) {

        sfUpdateLoc(38);
        {
          hamr_ArtNix_updateData(SF hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_observedPortId(SF_LAST), (art_DataContent) v_38_19);
        }
      }
    }
    if (!match_37_11) {
      art_DataContent v_39_19;
      match_37_11 = hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_compute_extract_39_14_8E9F45(SF t_1, &v_39_19);
      if (match_37_11) {

        sfUpdateLoc(39);
        {
          DeclNewString(t_2);
          String t_3 = (String) &t_2;
          DeclNewString(t_4);
          String_string_(SF (String) &t_4, string("Unexpected payload on port observed.  Expecting something of type Base_Types.Bits_Payload but received "));
          art_DataContent_string_(SF (String) &t_4, v_39_19);
          String_string_(SF (String) &t_4, string(""));
          String_string_(SF t_3, ((String) &t_4));
          sfAbort(t_3->value);
          abort();
        }
      }
    }
    if (!match_37_11) {
      match_37_11 = hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_compute_extract_40_14_8E9F45(SF t_1);
      if (match_37_11) {
      }
    }
    sfAssert(match_37_11, "Error when pattern matching.");
  }
  {

    sfUpdateLoc(44);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_5);
      hamr_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_5);
      Type_assign(out, ((MBox2_1029D1) &t_5), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(45);
    {
      hamr_PlatformNix_receiveAsync(SF (Option_882048) hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_reference_1PortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(46);
    Option_8E9F45 t_6 = MBox2_1029D1_value2_(out);
    B match_46_11 = F;
    if (!match_46_11) {
      hamr_Base_Types_Bits_Payload v_47_19;
      match_46_11 = hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_compute_extract_47_14_8E9F45(SF t_6, &v_47_19);
      if (match_46_11) {

        sfUpdateLoc(47);
        {
          hamr_ArtNix_updateData(SF hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_reference_1PortId(SF_LAST), (art_DataContent) v_47_19);
        }
      }
    }
    if (!match_46_11) {
      art_DataContent v_48_19;
      match_46_11 = hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_compute_extract_48_14_8E9F45(SF t_6, &v_48_19);
      if (match_46_11) {

        sfUpdateLoc(48);
        {
          DeclNewString(t_7);
          String t_8 = (String) &t_7;
          DeclNewString(t_9);
          String_string_(SF (String) &t_9, string("Unexpected payload on port reference_1.  Expecting something of type Base_Types.Bits_Payload but received "));
          art_DataContent_string_(SF (String) &t_9, v_48_19);
          String_string_(SF (String) &t_9, string(""));
          String_string_(SF t_8, ((String) &t_9));
          sfAbort(t_8->value);
          abort();
        }
      }
    }
    if (!match_46_11) {
      match_46_11 = hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_compute_extract_49_14_8E9F45(SF t_6);
      if (match_46_11) {
      }
    }
    sfAssert(match_46_11, "Error when pattern matching.");
  }

  sfUpdateLoc(52);
  {
    art_Bridge_EntryPoints_compute_(SF hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_entryPoints(SF_LAST));
  }

  sfUpdateLoc(53);
  {
    hamr_Process_sleep(SF Z_C(500));
  }
}

Unit hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App", "exit", 0);

  sfUpdateLoc(97);
  {
    hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_finalise(SF_LAST);
  }

  sfUpdateLoc(98);
  {
    hamr_PlatformNix_finalise(SF_LAST);
  }
}

Unit hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_finalise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App.scala", "hamr.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App", "finalise", 0);

  sfUpdateLoc(57);
  {
    art_Bridge_EntryPoints_finalise_(SF hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_entryPoints(SF_LAST));
  }
}

void hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(12);
  Type_assign(&_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_entryPoints, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_entryPoints_(hamr_Arch_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_init_appPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(13);
  _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_appPortId = hamr_IPCPorts_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App(SF_LAST);
};

void hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_init_appPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_appPortId(SF_LAST));
  Type_assign(&_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
};

void hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_init_observedPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(15);
  _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_observedPortId = art_Port_45E54D_id_(hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_observed_(hamr_Arch_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req(SF_LAST)));
};

void hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_init_observedPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  DeclNewSome_488F47(t_1);
  Some_488F47_apply(SF &t_1, hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_observedPortId(SF_LAST));
  Type_assign(&_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_observedPortIdOpt, (&t_1), sizeof(struct Some_488F47));
};

void hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_init_reference_1PortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(17);
  _hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_reference_1PortId = art_Port_45E54D_id_(hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_reference_1_(hamr_Arch_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req(SF_LAST)));
};

void hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_init_reference_1PortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(18);
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(SF &t_2, hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_reference_1PortId(SF_LAST));
  Type_assign(&_hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App_reference_1PortIdOpt, (&t_2), sizeof(struct Some_488F47));
};