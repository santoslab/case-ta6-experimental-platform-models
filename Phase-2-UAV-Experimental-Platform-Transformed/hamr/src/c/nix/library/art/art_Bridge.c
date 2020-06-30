#include <all.h>

// art.Bridge

B art_Bridge__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Thamr_SW_CASE_Filter_AReq_thr_Impl_Bridge: return T;
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge: return T;
    case Thamr_SW_CASE_Monitor_Req_thr_Impl_Bridge: return T;
    case Thamr_Drivers_UARTDriver_Impl_Bridge: return T;
    case Thamr_SW_RadioDriver_Attestation_thr_Impl_Bridge: return T;
    case Thamr_SW_FlyZonesDatabase_thr_Impl_Bridge: return T;
    case Thamr_SW_CASE_Filter_OR_thr_Impl_Bridge: return T;
    case Thamr_SW_CASE_Filter_LST_thr_Impl_Bridge: return T;
    case Thamr_SW_WaypointPlanManagerService_thr_Impl_Bridge: return T;
    case Thamr_SW_CASE_AttestationManager_thr_Impl_Bridge: return T;
    case Thamr_SW_UxAS_thr_Impl_Bridge: return T;
    case Thamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge: return T;
    case Thamr_SW_CASE_Filter_ARes_thr_Impl_Bridge: return T;
    default: return F;
  }
}

art_Bridge art_Bridge__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Thamr_SW_CASE_Filter_AReq_thr_Impl_Bridge: break;
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge: break;
    case Thamr_SW_CASE_Monitor_Req_thr_Impl_Bridge: break;
    case Thamr_Drivers_UARTDriver_Impl_Bridge: break;
    case Thamr_SW_RadioDriver_Attestation_thr_Impl_Bridge: break;
    case Thamr_SW_FlyZonesDatabase_thr_Impl_Bridge: break;
    case Thamr_SW_CASE_Filter_OR_thr_Impl_Bridge: break;
    case Thamr_SW_CASE_Filter_LST_thr_Impl_Bridge: break;
    case Thamr_SW_WaypointPlanManagerService_thr_Impl_Bridge: break;
    case Thamr_SW_CASE_AttestationManager_thr_Impl_Bridge: break;
    case Thamr_SW_UxAS_thr_Impl_Bridge: break;
    case Thamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge: break;
    case Thamr_SW_CASE_Filter_ARes_thr_Impl_Bridge: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.Bridge.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_Bridge) this;
}

void art_Bridge_string_(STACK_FRAME String result, art_Bridge this);

Z art_Bridge_id_(STACK_FRAME art_Bridge this) {
  switch (this->type) {
    case Thamr_SW_CASE_Filter_AReq_thr_Impl_Bridge: return hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_id_((hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge) this);
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge: return hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_id_((hamr_SW_CASE_AttestationGate_thr_Impl_Bridge) this);
    case Thamr_SW_CASE_Monitor_Req_thr_Impl_Bridge: return hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_id_((hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge) this);
    case Thamr_Drivers_UARTDriver_Impl_Bridge: return hamr_Drivers_UARTDriver_Impl_Bridge_id_((hamr_Drivers_UARTDriver_Impl_Bridge) this);
    case Thamr_SW_RadioDriver_Attestation_thr_Impl_Bridge: return hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_id_((hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge) this);
    case Thamr_SW_FlyZonesDatabase_thr_Impl_Bridge: return hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_id_((hamr_SW_FlyZonesDatabase_thr_Impl_Bridge) this);
    case Thamr_SW_CASE_Filter_OR_thr_Impl_Bridge: return hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_id_((hamr_SW_CASE_Filter_OR_thr_Impl_Bridge) this);
    case Thamr_SW_CASE_Filter_LST_thr_Impl_Bridge: return hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_id_((hamr_SW_CASE_Filter_LST_thr_Impl_Bridge) this);
    case Thamr_SW_WaypointPlanManagerService_thr_Impl_Bridge: return hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_id_((hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge) this);
    case Thamr_SW_CASE_AttestationManager_thr_Impl_Bridge: return hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_id_((hamr_SW_CASE_AttestationManager_thr_Impl_Bridge) this);
    case Thamr_SW_UxAS_thr_Impl_Bridge: return hamr_SW_UxAS_thr_Impl_Bridge_id_((hamr_SW_UxAS_thr_Impl_Bridge) this);
    case Thamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge: return hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_id_((hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge) this);
    case Thamr_SW_CASE_Filter_ARes_thr_Impl_Bridge: return hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_id_((hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

void art_Bridge_dispatchProtocol_(STACK_FRAME art_DispatchPropertyProtocol result, art_Bridge this) {
  switch (this->type) {
    case Thamr_SW_CASE_Filter_AReq_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_dispatchProtocol_((hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_dispatchProtocol_((hamr_SW_CASE_AttestationGate_thr_Impl_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    case Thamr_SW_CASE_Monitor_Req_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_dispatchProtocol_((hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    case Thamr_Drivers_UARTDriver_Impl_Bridge: Type_assign(result, hamr_Drivers_UARTDriver_Impl_Bridge_dispatchProtocol_((hamr_Drivers_UARTDriver_Impl_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    case Thamr_SW_RadioDriver_Attestation_thr_Impl_Bridge: Type_assign(result, hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_dispatchProtocol_((hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    case Thamr_SW_FlyZonesDatabase_thr_Impl_Bridge: Type_assign(result, hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_dispatchProtocol_((hamr_SW_FlyZonesDatabase_thr_Impl_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    case Thamr_SW_CASE_Filter_OR_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_dispatchProtocol_((hamr_SW_CASE_Filter_OR_thr_Impl_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    case Thamr_SW_CASE_Filter_LST_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_dispatchProtocol_((hamr_SW_CASE_Filter_LST_thr_Impl_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    case Thamr_SW_WaypointPlanManagerService_thr_Impl_Bridge: Type_assign(result, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_dispatchProtocol_((hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    case Thamr_SW_CASE_AttestationManager_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_dispatchProtocol_((hamr_SW_CASE_AttestationManager_thr_Impl_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    case Thamr_SW_UxAS_thr_Impl_Bridge: Type_assign(result, hamr_SW_UxAS_thr_Impl_Bridge_dispatchProtocol_((hamr_SW_UxAS_thr_Impl_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    case Thamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_dispatchProtocol_((hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    case Thamr_SW_CASE_Filter_ARes_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_dispatchProtocol_((hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

void art_Bridge_name_(STACK_FRAME String result, art_Bridge this) {
  switch (this->type) {
    case Thamr_SW_CASE_Filter_AReq_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_name_((hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge) this), sizeof(struct StaticString)); return;
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_name_((hamr_SW_CASE_AttestationGate_thr_Impl_Bridge) this), sizeof(struct StaticString)); return;
    case Thamr_SW_CASE_Monitor_Req_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_name_((hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge) this), sizeof(struct StaticString)); return;
    case Thamr_Drivers_UARTDriver_Impl_Bridge: Type_assign(result, hamr_Drivers_UARTDriver_Impl_Bridge_name_((hamr_Drivers_UARTDriver_Impl_Bridge) this), sizeof(struct StaticString)); return;
    case Thamr_SW_RadioDriver_Attestation_thr_Impl_Bridge: Type_assign(result, hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_name_((hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge) this), sizeof(struct StaticString)); return;
    case Thamr_SW_FlyZonesDatabase_thr_Impl_Bridge: Type_assign(result, hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_name_((hamr_SW_FlyZonesDatabase_thr_Impl_Bridge) this), sizeof(struct StaticString)); return;
    case Thamr_SW_CASE_Filter_OR_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_name_((hamr_SW_CASE_Filter_OR_thr_Impl_Bridge) this), sizeof(struct StaticString)); return;
    case Thamr_SW_CASE_Filter_LST_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_name_((hamr_SW_CASE_Filter_LST_thr_Impl_Bridge) this), sizeof(struct StaticString)); return;
    case Thamr_SW_WaypointPlanManagerService_thr_Impl_Bridge: Type_assign(result, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_name_((hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge) this), sizeof(struct StaticString)); return;
    case Thamr_SW_CASE_AttestationManager_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_name_((hamr_SW_CASE_AttestationManager_thr_Impl_Bridge) this), sizeof(struct StaticString)); return;
    case Thamr_SW_UxAS_thr_Impl_Bridge: Type_assign(result, hamr_SW_UxAS_thr_Impl_Bridge_name_((hamr_SW_UxAS_thr_Impl_Bridge) this), sizeof(struct StaticString)); return;
    case Thamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_name_((hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge) this), sizeof(struct StaticString)); return;
    case Thamr_SW_CASE_Filter_ARes_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_name_((hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge) this), sizeof(struct StaticString)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

void art_Bridge_ports_(STACK_FRAME art_Bridge_Ports result, art_Bridge this) {
  switch (this->type) {
    case Thamr_SW_CASE_Filter_AReq_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_ports_((hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_ports_((hamr_SW_CASE_AttestationGate_thr_Impl_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    case Thamr_SW_CASE_Monitor_Req_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_ports_((hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    case Thamr_Drivers_UARTDriver_Impl_Bridge: Type_assign(result, hamr_Drivers_UARTDriver_Impl_Bridge_ports_((hamr_Drivers_UARTDriver_Impl_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    case Thamr_SW_RadioDriver_Attestation_thr_Impl_Bridge: Type_assign(result, hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_ports_((hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    case Thamr_SW_FlyZonesDatabase_thr_Impl_Bridge: Type_assign(result, hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_ports_((hamr_SW_FlyZonesDatabase_thr_Impl_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    case Thamr_SW_CASE_Filter_OR_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_ports_((hamr_SW_CASE_Filter_OR_thr_Impl_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    case Thamr_SW_CASE_Filter_LST_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_ports_((hamr_SW_CASE_Filter_LST_thr_Impl_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    case Thamr_SW_WaypointPlanManagerService_thr_Impl_Bridge: Type_assign(result, hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_ports_((hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    case Thamr_SW_CASE_AttestationManager_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_ports_((hamr_SW_CASE_AttestationManager_thr_Impl_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    case Thamr_SW_UxAS_thr_Impl_Bridge: Type_assign(result, hamr_SW_UxAS_thr_Impl_Bridge_ports_((hamr_SW_UxAS_thr_Impl_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    case Thamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_ports_((hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    case Thamr_SW_CASE_Filter_ARes_thr_Impl_Bridge: Type_assign(result, hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_ports_((hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}