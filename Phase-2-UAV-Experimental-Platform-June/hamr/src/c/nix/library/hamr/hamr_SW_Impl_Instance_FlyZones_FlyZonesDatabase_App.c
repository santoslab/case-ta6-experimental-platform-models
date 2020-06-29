#include <all.h>

B hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_initialized_ = F;

union art_Bridge_EntryPoints _hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_entryPoints;
Z _hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortId;
union Option_882048 _hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortIdOpt;

void hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_init(STACK_FRAME_ONLY) {
  if (hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_initialized_) return;
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_initialized_ = T;
  DeclNewStackFrame(caller, "SW_Impl_Instance_FlyZones_FlyZonesDatabase_App.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase_App", "<init>", 0);
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_init_entryPoints(SF_LAST);
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_init_appPortId(SF_LAST);
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_init_appPortIdOpt(SF_LAST);
}

art_Bridge_EntryPoints hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_entryPoints(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_entryPoints;
}

Z hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortId(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_init(CALLER_LAST);
  return _hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortId;
}

Option_882048 hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortIdOpt(STACK_FRAME_ONLY) {
  hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortIdOpt;
}

Z hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FlyZones_FlyZonesDatabase_App.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase_App", "main", 0);

  sfUpdateLoc(38);
  Z seed;
  {
    B t_0;
    {
      Z t_1 = IS_948B60_size(SF args);
      t_0 = Z__eq(t_1, Z_C(1));
    }
    if (t_0) {

      sfUpdateLoc(39);
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

  sfUpdateLoc(45);
  {
    hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_initialiseArchitecture(SF seed);
  }

  sfUpdateLoc(47);
  {
    DeclNewMBox2_1CBFC4(t_5);
    hamr_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_5);
    hamr_PlatformNix_receive(SF (Option_882048) hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_5));
  }

  sfUpdateLoc(49);
  {
    hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_initialise(SF_LAST);
  }

  sfUpdateLoc(51);
  {
    DeclNewMBox2_1CBFC4(t_6);
    hamr_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_6);
    hamr_PlatformNix_receive(SF (Option_882048) hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_6));
  }

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(53);
  {
    String_cprint(string("SW_Impl_Instance_FlyZones_FlyZonesDatabase_App starting ..."), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  sfUpdateLoc(55);
  {
    hamr_ArtNix_timeDispatch(SF_LAST);
  }

  sfUpdateLoc(57);
  B terminated;
  {
    terminated = F;
  }

  sfUpdateLoc(58);
  B t_58_5;
  {
    t_58_5 = (!terminated);
  }
  while(t_58_5) {

    sfUpdateLoc(59);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_7);
      hamr_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_7);
      Type_assign(out, ((MBox2_1029D1) &t_7), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(60);
    {
      hamr_PlatformNix_receiveAsync(SF (Option_882048) hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(61);
    B t_8;
    {
      B t_9 = Option_8E9F45_isEmpty_(SF MBox2_1029D1_value2_(out));
      t_8 = t_9;
    }
    if (t_8) {

      sfUpdateLoc(62);
      {
        hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_compute(SF_LAST);
      }
    } else {

      sfUpdateLoc(64);
      {
        terminated = T;
      }
    }

    sfUpdateLoc(58);
    t_58_5 = (!terminated);
  }

  sfUpdateLoc(67);
  {
    hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_exit(SF_LAST);
  }
  return Z_C(0);
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FlyZones_FlyZonesDatabase_App.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase_App", "atExit", 0);

  sfUpdateLoc(78);
  {
    hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_exit(SF_LAST);
  }
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_initialiseArchitecture(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FlyZones_FlyZonesDatabase_App.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase_App", "initialiseArchitecture", 0);

  sfUpdateLoc(17);
  {
    hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(19);
  {
    art_Art_run(SF (art_ArchitectureDescription) hamr_Arch_ad(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_initialise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FlyZones_FlyZonesDatabase_App.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase_App", "initialise", 0);

  sfUpdateLoc(23);
  {
    art_Bridge_EntryPoints_initialise_(SF hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_entryPoints(SF_LAST));
  }
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FlyZones_FlyZonesDatabase_App.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase_App", "compute", 0);

  sfUpdateLoc(28);
  {
    art_Bridge_EntryPoints_compute_(SF hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_entryPoints(SF_LAST));
  }

  sfUpdateLoc(29);
  {
    hamr_Process_sleep(SF Z_C(500));
  }
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FlyZones_FlyZonesDatabase_App.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase_App", "exit", 0);

  sfUpdateLoc(73);
  {
    hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_finalise(SF_LAST);
  }

  sfUpdateLoc(74);
  {
    hamr_PlatformNix_finalise(SF_LAST);
  }
}

Unit hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_finalise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "SW_Impl_Instance_FlyZones_FlyZonesDatabase_App.scala", "hamr.SW_Impl_Instance_FlyZones_FlyZonesDatabase_App", "finalise", 0);

  sfUpdateLoc(33);
  {
    art_Bridge_EntryPoints_finalise_(SF hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_entryPoints(SF_LAST));
  }
}

void hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(12);
  Type_assign(&_hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_entryPoints, hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_entryPoints_(hamr_Arch_SW_Impl_Instance_FlyZones_FlyZonesDatabase(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_init_appPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(13);
  _hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortId = hamr_IPCPorts_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App(SF_LAST);
};

void hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_init_appPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortId(SF_LAST));
  Type_assign(&_hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
};