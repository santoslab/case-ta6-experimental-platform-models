#include <all.h>

B hamr_IPCPorts_initialized_ = F;

Z _hamr_IPCPorts_SW_Impl_Instance_FC_UART_UARTDriver_App;
Z _hamr_IPCPorts_SW_Impl_Instance_RADIO_RadioDriver_Attestation_App;
Z _hamr_IPCPorts_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App;
Z _hamr_IPCPorts_SW_Impl_Instance_UXAS_UxAS_App;
Z _hamr_IPCPorts_SW_Impl_Instance_WPM_WaypointPlanManagerService_App;
Z _hamr_IPCPorts_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App;
Z _hamr_IPCPorts_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App;
Z _hamr_IPCPorts_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App;
Z _hamr_IPCPorts_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App;
Z _hamr_IPCPorts_Main;

void hamr_IPCPorts_init(STACK_FRAME_ONLY) {
  if (hamr_IPCPorts_initialized_) return;
  hamr_IPCPorts_initialized_ = T;
  DeclNewStackFrame(caller, "IPC.scala", "hamr.IPCPorts", "<init>", 0);
  _hamr_IPCPorts_SW_Impl_Instance_FC_UART_UARTDriver_App = Z_C(35);
  _hamr_IPCPorts_SW_Impl_Instance_RADIO_RadioDriver_Attestation_App = Z_C(36);
  _hamr_IPCPorts_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App = Z_C(37);
  _hamr_IPCPorts_SW_Impl_Instance_UXAS_UxAS_App = Z_C(38);
  _hamr_IPCPorts_SW_Impl_Instance_WPM_WaypointPlanManagerService_App = Z_C(39);
  _hamr_IPCPorts_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App = Z_C(40);
  _hamr_IPCPorts_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App = Z_C(41);
  _hamr_IPCPorts_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App = Z_C(42);
  _hamr_IPCPorts_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App = Z_C(43);
  _hamr_IPCPorts_Main = Z_C(44);
}

Z hamr_IPCPorts_SW_Impl_Instance_FC_UART_UARTDriver_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_SW_Impl_Instance_FC_UART_UARTDriver_App;
}

Z hamr_IPCPorts_SW_Impl_Instance_RADIO_RadioDriver_Attestation_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_SW_Impl_Instance_RADIO_RadioDriver_Attestation_App;
}

Z hamr_IPCPorts_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App;
}

Z hamr_IPCPorts_SW_Impl_Instance_UXAS_UxAS_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_SW_Impl_Instance_UXAS_UxAS_App;
}

Z hamr_IPCPorts_SW_Impl_Instance_WPM_WaypointPlanManagerService_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_SW_Impl_Instance_WPM_WaypointPlanManagerService_App;
}

Z hamr_IPCPorts_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App;
}

Z hamr_IPCPorts_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App;
}

Z hamr_IPCPorts_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App;
}

Z hamr_IPCPorts_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App;
}

Z hamr_IPCPorts_Main(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_Main;
}