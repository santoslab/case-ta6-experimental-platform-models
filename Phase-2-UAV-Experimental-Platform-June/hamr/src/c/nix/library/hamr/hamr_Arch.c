#include <all.h>

B hamr_Arch_initialized_ = F;

struct hamr_Drivers_UARTDriver_Impl_Bridge _hamr_Arch_SW_Impl_Instance_FC_UART_UARTDriver;
struct hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge _hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation;
struct hamr_SW_FlyZonesDatabase_thr_Impl_Bridge _hamr_Arch_SW_Impl_Instance_FlyZones_FlyZonesDatabase;
struct hamr_SW_UxAS_thr_Impl_Bridge _hamr_Arch_SW_Impl_Instance_UXAS_UxAS;
struct hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge _hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService;
struct hamr_SW_CASE_AttestationGate_thr_Impl_Bridge _hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate;
struct hamr_SW_CASE_Filter_LST_thr_Impl_Bridge _hamr_Arch_SW_Impl_Instance_FLT_LST_CASE_Filter_LST;
struct hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge _hamr_Arch_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req;
struct hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge _hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo;
struct art_ArchitectureDescription _hamr_Arch_ad;

void hamr_Arch_init(STACK_FRAME_ONLY) {
  if (hamr_Arch_initialized_) return;
  hamr_Arch_initialized_ = T;
  DeclNewStackFrame(caller, "Arch.scala", "hamr.Arch", "<init>", 0);
  {

    sfUpdateLoc(14);
    DeclNewart_Port_45E54D(_recv_data);
    art_Port_45E54D recv_data;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("SW_Impl_Instance_FC_UART_UARTDriver_recv_data"), art_PortMode_Type_EventIn);
    recv_data = (art_Port_45E54D) (&t_0);

    sfUpdateLoc(15);
    DeclNewart_Port_45E54D(_MissionCommand);
    art_Port_45E54D MissionCommand;
    DeclNewart_Port_45E54D(t_1);
    art_Port_45E54D_apply(SF &t_1, Z_C(1), (String) string("SW_Impl_Instance_FC_UART_UARTDriver_MissionCommand"), art_PortMode_Type_EventIn);
    MissionCommand = (art_Port_45E54D) (&t_1);

    sfUpdateLoc(16);
    DeclNewart_Port_45E54D(_send_data);
    art_Port_45E54D send_data;
    DeclNewart_Port_45E54D(t_2);
    art_Port_45E54D_apply(SF &t_2, Z_C(2), (String) string("SW_Impl_Instance_FC_UART_UARTDriver_send_data"), art_PortMode_Type_EventOut);
    send_data = (art_Port_45E54D) (&t_2);

    sfUpdateLoc(17);
    DeclNewart_Port_45E54D(_AirVehicleState);
    art_Port_45E54D AirVehicleState;
    DeclNewart_Port_45E54D(t_3);
    art_Port_45E54D_apply(SF &t_3, Z_C(3), (String) string("SW_Impl_Instance_FC_UART_UARTDriver_AirVehicleState"), art_PortMode_Type_EventOut);
    AirVehicleState = (art_Port_45E54D) (&t_3);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_5);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_5, Z_C(500));
    DeclNewNone_5C1355(t_6);
    None_5C1355_apply(SF &t_6);
    DeclNewhamr_Drivers_UARTDriver_Impl_Bridge(t_4);
    hamr_Drivers_UARTDriver_Impl_Bridge_apply(SF &t_4, Z_C(0), (String) string("SW_Impl_Instance_FC_UART_UARTDriver"), (art_DispatchPropertyProtocol) (&t_5), (Option_9AF35E) (&t_6), (art_Port_45E54D) recv_data, (art_Port_45E54D) MissionCommand, (art_Port_45E54D) send_data, (art_Port_45E54D) AirVehicleState);
    Type_assign(&_hamr_Arch_SW_Impl_Instance_FC_UART_UARTDriver, (&t_4), sizeof(struct hamr_Drivers_UARTDriver_Impl_Bridge));
  }
  {

    sfUpdateLoc(32);
    DeclNewart_Port_45E54D(_trusted_ids);
    art_Port_45E54D trusted_ids;
    DeclNewart_Port_45E54D(t_7);
    art_Port_45E54D_apply(SF &t_7, Z_C(4), (String) string("SW_Impl_Instance_RADIO_RadioDriver_Attestation_trusted_ids"), art_PortMode_Type_DataOut);
    trusted_ids = (art_Port_45E54D) (&t_7);

    sfUpdateLoc(33);
    DeclNewart_Port_45E54D(_AutomationRequest);
    art_Port_45E54D AutomationRequest;
    DeclNewart_Port_45E54D(t_8);
    art_Port_45E54D_apply(SF &t_8, Z_C(5), (String) string("SW_Impl_Instance_RADIO_RadioDriver_Attestation_AutomationRequest"), art_PortMode_Type_EventOut);
    AutomationRequest = (art_Port_45E54D) (&t_8);

    sfUpdateLoc(34);
    DeclNewart_Port_45E54D(_OperatingRegion);
    art_Port_45E54D OperatingRegion;
    DeclNewart_Port_45E54D(t_9);
    art_Port_45E54D_apply(SF &t_9, Z_C(6), (String) string("SW_Impl_Instance_RADIO_RadioDriver_Attestation_OperatingRegion"), art_PortMode_Type_EventOut);
    OperatingRegion = (art_Port_45E54D) (&t_9);

    sfUpdateLoc(35);
    DeclNewart_Port_45E54D(_LineSearchTask);
    art_Port_45E54D LineSearchTask;
    DeclNewart_Port_45E54D(t_10);
    art_Port_45E54D_apply(SF &t_10, Z_C(7), (String) string("SW_Impl_Instance_RADIO_RadioDriver_Attestation_LineSearchTask"), art_PortMode_Type_EventOut);
    LineSearchTask = (art_Port_45E54D) (&t_10);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_12);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_12, Z_C(500));
    DeclNewNone_5C1355(t_13);
    None_5C1355_apply(SF &t_13);
    DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Bridge(t_11);
    hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_apply(SF &t_11, Z_C(1), (String) string("SW_Impl_Instance_RADIO_RadioDriver_Attestation"), (art_DispatchPropertyProtocol) (&t_12), (Option_9AF35E) (&t_13), (art_Port_45E54D) trusted_ids, (art_Port_45E54D) AutomationRequest, (art_Port_45E54D) OperatingRegion, (art_Port_45E54D) LineSearchTask);
    Type_assign(&_hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation, (&t_11), sizeof(struct hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge));
  }
  {

    sfUpdateLoc(50);
    DeclNewart_Port_45E54D(_keep_in_zones);
    art_Port_45E54D keep_in_zones;
    DeclNewart_Port_45E54D(t_14);
    art_Port_45E54D_apply(SF &t_14, Z_C(8), (String) string("SW_Impl_Instance_FlyZones_FlyZonesDatabase_keep_in_zones"), art_PortMode_Type_DataOut);
    keep_in_zones = (art_Port_45E54D) (&t_14);

    sfUpdateLoc(51);
    DeclNewart_Port_45E54D(_keep_out_zones);
    art_Port_45E54D keep_out_zones;
    DeclNewart_Port_45E54D(t_15);
    art_Port_45E54D_apply(SF &t_15, Z_C(9), (String) string("SW_Impl_Instance_FlyZones_FlyZonesDatabase_keep_out_zones"), art_PortMode_Type_DataOut);
    keep_out_zones = (art_Port_45E54D) (&t_15);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_17);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_17, Z_C(500));
    DeclNewNone_5C1355(t_18);
    None_5C1355_apply(SF &t_18);
    DeclNewhamr_SW_FlyZonesDatabase_thr_Impl_Bridge(t_16);
    hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_apply(SF &t_16, Z_C(2), (String) string("SW_Impl_Instance_FlyZones_FlyZonesDatabase"), (art_DispatchPropertyProtocol) (&t_17), (Option_9AF35E) (&t_18), (art_Port_45E54D) keep_in_zones, (art_Port_45E54D) keep_out_zones);
    Type_assign(&_hamr_Arch_SW_Impl_Instance_FlyZones_FlyZonesDatabase, (&t_16), sizeof(struct hamr_SW_FlyZonesDatabase_thr_Impl_Bridge));
  }
  {

    sfUpdateLoc(64);
    DeclNewart_Port_45E54D(_AutomationRequest);
    art_Port_45E54D AutomationRequest;
    DeclNewart_Port_45E54D(t_19);
    art_Port_45E54D_apply(SF &t_19, Z_C(10), (String) string("SW_Impl_Instance_UXAS_UxAS_AutomationRequest"), art_PortMode_Type_EventIn);
    AutomationRequest = (art_Port_45E54D) (&t_19);

    sfUpdateLoc(65);
    DeclNewart_Port_45E54D(_AirVehicleState);
    art_Port_45E54D AirVehicleState;
    DeclNewart_Port_45E54D(t_20);
    art_Port_45E54D_apply(SF &t_20, Z_C(11), (String) string("SW_Impl_Instance_UXAS_UxAS_AirVehicleState"), art_PortMode_Type_EventIn);
    AirVehicleState = (art_Port_45E54D) (&t_20);

    sfUpdateLoc(66);
    DeclNewart_Port_45E54D(_OperatingRegion);
    art_Port_45E54D OperatingRegion;
    DeclNewart_Port_45E54D(t_21);
    art_Port_45E54D_apply(SF &t_21, Z_C(12), (String) string("SW_Impl_Instance_UXAS_UxAS_OperatingRegion"), art_PortMode_Type_EventIn);
    OperatingRegion = (art_Port_45E54D) (&t_21);

    sfUpdateLoc(67);
    DeclNewart_Port_45E54D(_LineSearchTask);
    art_Port_45E54D LineSearchTask;
    DeclNewart_Port_45E54D(t_22);
    art_Port_45E54D_apply(SF &t_22, Z_C(13), (String) string("SW_Impl_Instance_UXAS_UxAS_LineSearchTask"), art_PortMode_Type_EventIn);
    LineSearchTask = (art_Port_45E54D) (&t_22);

    sfUpdateLoc(68);
    DeclNewart_Port_45E54D(_AutomationResponse);
    art_Port_45E54D AutomationResponse;
    DeclNewart_Port_45E54D(t_23);
    art_Port_45E54D_apply(SF &t_23, Z_C(14), (String) string("SW_Impl_Instance_UXAS_UxAS_AutomationResponse"), art_PortMode_Type_EventOut);
    AutomationResponse = (art_Port_45E54D) (&t_23);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_25);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_25, Z_C(500));
    DeclNewNone_5C1355(t_26);
    None_5C1355_apply(SF &t_26);
    DeclNewhamr_SW_UxAS_thr_Impl_Bridge(t_24);
    hamr_SW_UxAS_thr_Impl_Bridge_apply(SF &t_24, Z_C(3), (String) string("SW_Impl_Instance_UXAS_UxAS"), (art_DispatchPropertyProtocol) (&t_25), (Option_9AF35E) (&t_26), (art_Port_45E54D) AutomationRequest, (art_Port_45E54D) AirVehicleState, (art_Port_45E54D) OperatingRegion, (art_Port_45E54D) LineSearchTask, (art_Port_45E54D) AutomationResponse);
    Type_assign(&_hamr_Arch_SW_Impl_Instance_UXAS_UxAS, (&t_24), sizeof(struct hamr_SW_UxAS_thr_Impl_Bridge));
  }
  {

    sfUpdateLoc(84);
    DeclNewart_Port_45E54D(_AutomationResponse);
    art_Port_45E54D AutomationResponse;
    DeclNewart_Port_45E54D(t_27);
    art_Port_45E54D_apply(SF &t_27, Z_C(15), (String) string("SW_Impl_Instance_WPM_WaypointPlanManagerService_AutomationResponse"), art_PortMode_Type_EventIn);
    AutomationResponse = (art_Port_45E54D) (&t_27);

    sfUpdateLoc(85);
    DeclNewart_Port_45E54D(_AirVehicleState);
    art_Port_45E54D AirVehicleState;
    DeclNewart_Port_45E54D(t_28);
    art_Port_45E54D_apply(SF &t_28, Z_C(16), (String) string("SW_Impl_Instance_WPM_WaypointPlanManagerService_AirVehicleState"), art_PortMode_Type_EventIn);
    AirVehicleState = (art_Port_45E54D) (&t_28);

    sfUpdateLoc(86);
    DeclNewart_Port_45E54D(_MissionCommand);
    art_Port_45E54D MissionCommand;
    DeclNewart_Port_45E54D(t_29);
    art_Port_45E54D_apply(SF &t_29, Z_C(17), (String) string("SW_Impl_Instance_WPM_WaypointPlanManagerService_MissionCommand"), art_PortMode_Type_EventOut);
    MissionCommand = (art_Port_45E54D) (&t_29);

    sfUpdateLoc(87);
    DeclNewart_Port_9CBF18(_ReturnHome);
    art_Port_9CBF18 ReturnHome;
    DeclNewart_Port_9CBF18(t_30);
    art_Port_9CBF18_apply(SF &t_30, Z_C(18), (String) string("SW_Impl_Instance_WPM_WaypointPlanManagerService_ReturnHome"), art_PortMode_Type_EventIn);
    ReturnHome = (art_Port_9CBF18) (&t_30);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_32);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_32, Z_C(500));
    DeclNewNone_5C1355(t_33);
    None_5C1355_apply(SF &t_33);
    DeclNewhamr_SW_WaypointPlanManagerService_thr_Impl_Bridge(t_31);
    hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_apply(SF &t_31, Z_C(4), (String) string("SW_Impl_Instance_WPM_WaypointPlanManagerService"), (art_DispatchPropertyProtocol) (&t_32), (Option_9AF35E) (&t_33), (art_Port_45E54D) AutomationResponse, (art_Port_45E54D) AirVehicleState, (art_Port_45E54D) MissionCommand, (art_Port_9CBF18) ReturnHome);
    Type_assign(&_hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService, (&t_31), sizeof(struct hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge));
  }
  {

    sfUpdateLoc(102);
    DeclNewart_Port_45E54D(_trusted_ids);
    art_Port_45E54D trusted_ids;
    DeclNewart_Port_45E54D(t_34);
    art_Port_45E54D_apply(SF &t_34, Z_C(19), (String) string("SW_Impl_Instance_AM_Gate_CASE_AttestationGate_trusted_ids"), art_PortMode_Type_DataIn);
    trusted_ids = (art_Port_45E54D) (&t_34);

    sfUpdateLoc(103);
    DeclNewart_Port_45E54D(_AutomationRequest_in);
    art_Port_45E54D AutomationRequest_in;
    DeclNewart_Port_45E54D(t_35);
    art_Port_45E54D_apply(SF &t_35, Z_C(20), (String) string("SW_Impl_Instance_AM_Gate_CASE_AttestationGate_AutomationRequest_in"), art_PortMode_Type_EventIn);
    AutomationRequest_in = (art_Port_45E54D) (&t_35);

    sfUpdateLoc(104);
    DeclNewart_Port_45E54D(_AutomationRequest_out);
    art_Port_45E54D AutomationRequest_out;
    DeclNewart_Port_45E54D(t_36);
    art_Port_45E54D_apply(SF &t_36, Z_C(21), (String) string("SW_Impl_Instance_AM_Gate_CASE_AttestationGate_AutomationRequest_out"), art_PortMode_Type_EventOut);
    AutomationRequest_out = (art_Port_45E54D) (&t_36);

    sfUpdateLoc(105);
    DeclNewart_Port_45E54D(_OperatingRegion_in);
    art_Port_45E54D OperatingRegion_in;
    DeclNewart_Port_45E54D(t_37);
    art_Port_45E54D_apply(SF &t_37, Z_C(22), (String) string("SW_Impl_Instance_AM_Gate_CASE_AttestationGate_OperatingRegion_in"), art_PortMode_Type_EventIn);
    OperatingRegion_in = (art_Port_45E54D) (&t_37);

    sfUpdateLoc(106);
    DeclNewart_Port_45E54D(_OperatingRegion_out);
    art_Port_45E54D OperatingRegion_out;
    DeclNewart_Port_45E54D(t_38);
    art_Port_45E54D_apply(SF &t_38, Z_C(23), (String) string("SW_Impl_Instance_AM_Gate_CASE_AttestationGate_OperatingRegion_out"), art_PortMode_Type_EventOut);
    OperatingRegion_out = (art_Port_45E54D) (&t_38);

    sfUpdateLoc(107);
    DeclNewart_Port_45E54D(_LineSearchTask_in);
    art_Port_45E54D LineSearchTask_in;
    DeclNewart_Port_45E54D(t_39);
    art_Port_45E54D_apply(SF &t_39, Z_C(24), (String) string("SW_Impl_Instance_AM_Gate_CASE_AttestationGate_LineSearchTask_in"), art_PortMode_Type_EventIn);
    LineSearchTask_in = (art_Port_45E54D) (&t_39);

    sfUpdateLoc(108);
    DeclNewart_Port_45E54D(_LineSearchTask_out);
    art_Port_45E54D LineSearchTask_out;
    DeclNewart_Port_45E54D(t_40);
    art_Port_45E54D_apply(SF &t_40, Z_C(25), (String) string("SW_Impl_Instance_AM_Gate_CASE_AttestationGate_LineSearchTask_out"), art_PortMode_Type_EventOut);
    LineSearchTask_out = (art_Port_45E54D) (&t_40);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_42);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_42, Z_C(500));
    DeclNewNone_5C1355(t_43);
    None_5C1355_apply(SF &t_43);
    DeclNewhamr_SW_CASE_AttestationGate_thr_Impl_Bridge(t_41);
    hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_apply(SF &t_41, Z_C(5), (String) string("SW_Impl_Instance_AM_Gate_CASE_AttestationGate"), (art_DispatchPropertyProtocol) (&t_42), (Option_9AF35E) (&t_43), (art_Port_45E54D) trusted_ids, (art_Port_45E54D) AutomationRequest_in, (art_Port_45E54D) AutomationRequest_out, (art_Port_45E54D) OperatingRegion_in, (art_Port_45E54D) OperatingRegion_out, (art_Port_45E54D) LineSearchTask_in, (art_Port_45E54D) LineSearchTask_out);
    Type_assign(&_hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate, (&t_41), sizeof(struct hamr_SW_CASE_AttestationGate_thr_Impl_Bridge));
  }
  {

    sfUpdateLoc(126);
    DeclNewart_Port_45E54D(_filter_in);
    art_Port_45E54D filter_in;
    DeclNewart_Port_45E54D(t_44);
    art_Port_45E54D_apply(SF &t_44, Z_C(26), (String) string("SW_Impl_Instance_FLT_LST_CASE_Filter_LST_filter_in"), art_PortMode_Type_EventIn);
    filter_in = (art_Port_45E54D) (&t_44);

    sfUpdateLoc(127);
    DeclNewart_Port_45E54D(_filter_out);
    art_Port_45E54D filter_out;
    DeclNewart_Port_45E54D(t_45);
    art_Port_45E54D_apply(SF &t_45, Z_C(27), (String) string("SW_Impl_Instance_FLT_LST_CASE_Filter_LST_filter_out"), art_PortMode_Type_EventOut);
    filter_out = (art_Port_45E54D) (&t_45);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_47);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_47, Z_C(500));
    DeclNewNone_5C1355(t_48);
    None_5C1355_apply(SF &t_48);
    DeclNewhamr_SW_CASE_Filter_LST_thr_Impl_Bridge(t_46);
    hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_apply(SF &t_46, Z_C(6), (String) string("SW_Impl_Instance_FLT_LST_CASE_Filter_LST"), (art_DispatchPropertyProtocol) (&t_47), (Option_9AF35E) (&t_48), (art_Port_45E54D) filter_in, (art_Port_45E54D) filter_out);
    Type_assign(&_hamr_Arch_SW_Impl_Instance_FLT_LST_CASE_Filter_LST, (&t_46), sizeof(struct hamr_SW_CASE_Filter_LST_thr_Impl_Bridge));
  }
  {

    sfUpdateLoc(140);
    DeclNewart_Port_45E54D(_observed);
    art_Port_45E54D observed;
    DeclNewart_Port_45E54D(t_49);
    art_Port_45E54D_apply(SF &t_49, Z_C(28), (String) string("SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_observed"), art_PortMode_Type_EventIn);
    observed = (art_Port_45E54D) (&t_49);

    sfUpdateLoc(141);
    DeclNewart_Port_45E54D(_reference_1);
    art_Port_45E54D reference_1;
    DeclNewart_Port_45E54D(t_50);
    art_Port_45E54D_apply(SF &t_50, Z_C(29), (String) string("SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_reference_1"), art_PortMode_Type_EventIn);
    reference_1 = (art_Port_45E54D) (&t_50);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_52);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_52, Z_C(500));
    DeclNewNone_5C1355(t_53);
    None_5C1355_apply(SF &t_53);
    DeclNewhamr_SW_CASE_Monitor_Req_thr_Impl_Bridge(t_51);
    hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_apply(SF &t_51, Z_C(7), (String) string("SW_Impl_Instance_MON_REQ_CASE_Monitor_Req"), (art_DispatchPropertyProtocol) (&t_52), (Option_9AF35E) (&t_53), (art_Port_45E54D) observed, (art_Port_45E54D) reference_1);
    Type_assign(&_hamr_Arch_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req, (&t_51), sizeof(struct hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge));
  }
  {

    sfUpdateLoc(154);
    DeclNewart_Port_45E54D(_keep_in_zones);
    art_Port_45E54D keep_in_zones;
    DeclNewart_Port_45E54D(t_54);
    art_Port_45E54D_apply(SF &t_54, Z_C(30), (String) string("SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_keep_in_zones"), art_PortMode_Type_DataIn);
    keep_in_zones = (art_Port_45E54D) (&t_54);

    sfUpdateLoc(155);
    DeclNewart_Port_45E54D(_keep_out_zones);
    art_Port_45E54D keep_out_zones;
    DeclNewart_Port_45E54D(t_55);
    art_Port_45E54D_apply(SF &t_55, Z_C(31), (String) string("SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_keep_out_zones"), art_PortMode_Type_DataIn);
    keep_out_zones = (art_Port_45E54D) (&t_55);

    sfUpdateLoc(156);
    DeclNewart_Port_45E54D(_observed);
    art_Port_45E54D observed;
    DeclNewart_Port_45E54D(t_56);
    art_Port_45E54D_apply(SF &t_56, Z_C(32), (String) string("SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_observed"), art_PortMode_Type_EventIn);
    observed = (art_Port_45E54D) (&t_56);

    sfUpdateLoc(157);
    DeclNewart_Port_45E54D(_output);
    art_Port_45E54D output;
    DeclNewart_Port_45E54D(t_57);
    art_Port_45E54D_apply(SF &t_57, Z_C(33), (String) string("SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_output"), art_PortMode_Type_EventOut);
    output = (art_Port_45E54D) (&t_57);

    sfUpdateLoc(158);
    DeclNewart_Port_9CBF18(_alert);
    art_Port_9CBF18 alert;
    DeclNewart_Port_9CBF18(t_58);
    art_Port_9CBF18_apply(SF &t_58, Z_C(34), (String) string("SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_alert"), art_PortMode_Type_EventOut);
    alert = (art_Port_9CBF18) (&t_58);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_60);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_60, Z_C(500));
    DeclNewNone_5C1355(t_61);
    None_5C1355_apply(SF &t_61);
    DeclNewhamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge(t_59);
    hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_apply(SF &t_59, Z_C(8), (String) string("SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo"), (art_DispatchPropertyProtocol) (&t_60), (Option_9AF35E) (&t_61), (art_Port_45E54D) keep_in_zones, (art_Port_45E54D) keep_out_zones, (art_Port_45E54D) observed, (art_Port_45E54D) output, (art_Port_9CBF18) alert);
    Type_assign(&_hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo, (&t_59), sizeof(struct hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge));
  }
  {
    STATIC_ASSERT(9 <= MaxMS_852149, "Insufficient maximum for MS[Z, art.Bridge] elements.");
    DeclNewMS_852149(t_63);
    t_63.size = (int8_t) 9;
    MS_852149_up(&t_63, 0, (art_Bridge) hamr_Arch_SW_Impl_Instance_FC_UART_UARTDriver(SF_LAST));
    MS_852149_up(&t_63, 1, (art_Bridge) hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation(SF_LAST));
    MS_852149_up(&t_63, 2, (art_Bridge) hamr_Arch_SW_Impl_Instance_FlyZones_FlyZonesDatabase(SF_LAST));
    MS_852149_up(&t_63, 3, (art_Bridge) hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST));
    MS_852149_up(&t_63, 4, (art_Bridge) hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService(SF_LAST));
    MS_852149_up(&t_63, 5, (art_Bridge) hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST));
    MS_852149_up(&t_63, 6, (art_Bridge) hamr_Arch_SW_Impl_Instance_FLT_LST_CASE_Filter_LST(SF_LAST));
    MS_852149_up(&t_63, 7, (art_Bridge) hamr_Arch_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req(SF_LAST));
    MS_852149_up(&t_63, 8, (art_Bridge) hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo(SF_LAST));
    STATIC_ASSERT(18 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
    DeclNewIS_08117A(t_64);
    t_64.size = (int8_t) 18;
    DeclNewart_Connection(t_65);
    art_Connection_apply(SF &t_65, (art_UPort) hamr_Drivers_UARTDriver_Impl_Bridge_AirVehicleState_(hamr_Arch_SW_Impl_Instance_FC_UART_UARTDriver(SF_LAST)), (art_UPort) hamr_SW_UxAS_thr_Impl_Bridge_AirVehicleState_(hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST)));
    IS_08117A_up(&t_64, 0, (art_UConnection) (&t_65));
    DeclNewart_Connection(t_66);
    art_Connection_apply(SF &t_66, (art_UPort) hamr_Drivers_UARTDriver_Impl_Bridge_AirVehicleState_(hamr_Arch_SW_Impl_Instance_FC_UART_UARTDriver(SF_LAST)), (art_UPort) hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_AirVehicleState_(hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService(SF_LAST)));
    IS_08117A_up(&t_64, 1, (art_UConnection) (&t_66));
    DeclNewart_Connection(t_67);
    art_Connection_apply(SF &t_67, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_trusted_ids_(hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation(SF_LAST)), (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_trusted_ids_(hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST)));
    IS_08117A_up(&t_64, 2, (art_UConnection) (&t_67));
    DeclNewart_Connection(t_68);
    art_Connection_apply(SF &t_68, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_AutomationRequest_(hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation(SF_LAST)), (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_AutomationRequest_in_(hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST)));
    IS_08117A_up(&t_64, 3, (art_UConnection) (&t_68));
    DeclNewart_Connection(t_69);
    art_Connection_apply(SF &t_69, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_OperatingRegion_(hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation(SF_LAST)), (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_OperatingRegion_in_(hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST)));
    IS_08117A_up(&t_64, 4, (art_UConnection) (&t_69));
    DeclNewart_Connection(t_70);
    art_Connection_apply(SF &t_70, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_LineSearchTask_(hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation(SF_LAST)), (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_LineSearchTask_in_(hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST)));
    IS_08117A_up(&t_64, 5, (art_UConnection) (&t_70));
    DeclNewart_Connection(t_71);
    art_Connection_apply(SF &t_71, (art_UPort) hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_keep_in_zones_(hamr_Arch_SW_Impl_Instance_FlyZones_FlyZonesDatabase(SF_LAST)), (art_UPort) hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_keep_in_zones_(hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo(SF_LAST)));
    IS_08117A_up(&t_64, 6, (art_UConnection) (&t_71));
    DeclNewart_Connection(t_72);
    art_Connection_apply(SF &t_72, (art_UPort) hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_keep_out_zones_(hamr_Arch_SW_Impl_Instance_FlyZones_FlyZonesDatabase(SF_LAST)), (art_UPort) hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_keep_out_zones_(hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo(SF_LAST)));
    IS_08117A_up(&t_64, 7, (art_UConnection) (&t_72));
    DeclNewart_Connection(t_73);
    art_Connection_apply(SF &t_73, (art_UPort) hamr_SW_UxAS_thr_Impl_Bridge_AutomationResponse_(hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST)), (art_UPort) hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_observed_(hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo(SF_LAST)));
    IS_08117A_up(&t_64, 8, (art_UConnection) (&t_73));
    DeclNewart_Connection(t_74);
    art_Connection_apply(SF &t_74, (art_UPort) hamr_SW_UxAS_thr_Impl_Bridge_AutomationResponse_(hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST)), (art_UPort) hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_observed_(hamr_Arch_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req(SF_LAST)));
    IS_08117A_up(&t_64, 9, (art_UConnection) (&t_74));
    DeclNewart_Connection(t_75);
    art_Connection_apply(SF &t_75, (art_UPort) hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_MissionCommand_(hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService(SF_LAST)), (art_UPort) hamr_Drivers_UARTDriver_Impl_Bridge_MissionCommand_(hamr_Arch_SW_Impl_Instance_FC_UART_UARTDriver(SF_LAST)));
    IS_08117A_up(&t_64, 10, (art_UConnection) (&t_75));
    DeclNewart_Connection(t_76);
    art_Connection_apply(SF &t_76, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_AutomationRequest_out_(hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST)), (art_UPort) hamr_SW_UxAS_thr_Impl_Bridge_AutomationRequest_(hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST)));
    IS_08117A_up(&t_64, 11, (art_UConnection) (&t_76));
    DeclNewart_Connection(t_77);
    art_Connection_apply(SF &t_77, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_AutomationRequest_out_(hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST)), (art_UPort) hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_reference_1_(hamr_Arch_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req(SF_LAST)));
    IS_08117A_up(&t_64, 12, (art_UConnection) (&t_77));
    DeclNewart_Connection(t_78);
    art_Connection_apply(SF &t_78, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_OperatingRegion_out_(hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST)), (art_UPort) hamr_SW_UxAS_thr_Impl_Bridge_OperatingRegion_(hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST)));
    IS_08117A_up(&t_64, 13, (art_UConnection) (&t_78));
    DeclNewart_Connection(t_79);
    art_Connection_apply(SF &t_79, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_LineSearchTask_out_(hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(SF_LAST)), (art_UPort) hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_filter_in_(hamr_Arch_SW_Impl_Instance_FLT_LST_CASE_Filter_LST(SF_LAST)));
    IS_08117A_up(&t_64, 14, (art_UConnection) (&t_79));
    DeclNewart_Connection(t_80);
    art_Connection_apply(SF &t_80, (art_UPort) hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_filter_out_(hamr_Arch_SW_Impl_Instance_FLT_LST_CASE_Filter_LST(SF_LAST)), (art_UPort) hamr_SW_UxAS_thr_Impl_Bridge_LineSearchTask_(hamr_Arch_SW_Impl_Instance_UXAS_UxAS(SF_LAST)));
    IS_08117A_up(&t_64, 15, (art_UConnection) (&t_80));
    DeclNewart_Connection(t_81);
    art_Connection_apply(SF &t_81, (art_UPort) hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_output_(hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo(SF_LAST)), (art_UPort) hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_AutomationResponse_(hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService(SF_LAST)));
    IS_08117A_up(&t_64, 16, (art_UConnection) (&t_81));
    DeclNewart_Connection(t_82);
    art_Connection_apply(SF &t_82, (art_UPort) hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_alert_(hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo(SF_LAST)), (art_UPort) hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_ReturnHome_(hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService(SF_LAST)));
    IS_08117A_up(&t_64, 17, (art_UConnection) (&t_82));
    DeclNewart_ArchitectureDescription(t_62);
    art_ArchitectureDescription_apply(SF &t_62, (MS_852149) (&t_63), (IS_08117A) (&t_64));
    Type_assign(&_hamr_Arch_ad, (&t_62), sizeof(struct art_ArchitectureDescription));
  }
}

hamr_Drivers_UARTDriver_Impl_Bridge hamr_Arch_SW_Impl_Instance_FC_UART_UARTDriver(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_Drivers_UARTDriver_Impl_Bridge) &_hamr_Arch_SW_Impl_Instance_FC_UART_UARTDriver;
}

hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge) &_hamr_Arch_SW_Impl_Instance_RADIO_RadioDriver_Attestation;
}

hamr_SW_FlyZonesDatabase_thr_Impl_Bridge hamr_Arch_SW_Impl_Instance_FlyZones_FlyZonesDatabase(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_FlyZonesDatabase_thr_Impl_Bridge) &_hamr_Arch_SW_Impl_Instance_FlyZones_FlyZonesDatabase;
}

hamr_SW_UxAS_thr_Impl_Bridge hamr_Arch_SW_Impl_Instance_UXAS_UxAS(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_UxAS_thr_Impl_Bridge) &_hamr_Arch_SW_Impl_Instance_UXAS_UxAS;
}

hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge) &_hamr_Arch_SW_Impl_Instance_WPM_WaypointPlanManagerService;
}

hamr_SW_CASE_AttestationGate_thr_Impl_Bridge hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_CASE_AttestationGate_thr_Impl_Bridge) &_hamr_Arch_SW_Impl_Instance_AM_Gate_CASE_AttestationGate;
}

hamr_SW_CASE_Filter_LST_thr_Impl_Bridge hamr_Arch_SW_Impl_Instance_FLT_LST_CASE_Filter_LST(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_CASE_Filter_LST_thr_Impl_Bridge) &_hamr_Arch_SW_Impl_Instance_FLT_LST_CASE_Filter_LST;
}

hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge hamr_Arch_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge) &_hamr_Arch_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req;
}

hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge) &_hamr_Arch_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo;
}

art_ArchitectureDescription hamr_Arch_ad(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (art_ArchitectureDescription) &_hamr_Arch_ad;
}