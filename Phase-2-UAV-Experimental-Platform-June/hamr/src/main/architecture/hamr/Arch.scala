// #Sireum

package hamr

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val MissionComputer_Impl_Instance_PROC_SW_FC_UART_UARTDriver : hamr.Drivers.UARTDriver_Impl_Bridge = {
    val recv_data = Port[Base_Types.Bits] (id = 0, name = "MissionComputer_Impl_Instance_PROC_SW_FC_UART_UARTDriver_recv_data", mode = EventIn)
    val MissionCommand = Port[Base_Types.Bits] (id = 1, name = "MissionComputer_Impl_Instance_PROC_SW_FC_UART_UARTDriver_MissionCommand", mode = EventIn)
    val send_data = Port[Base_Types.Bits] (id = 2, name = "MissionComputer_Impl_Instance_PROC_SW_FC_UART_UARTDriver_send_data", mode = EventOut)
    val AirVehicleState = Port[Base_Types.Bits] (id = 3, name = "MissionComputer_Impl_Instance_PROC_SW_FC_UART_UARTDriver_AirVehicleState", mode = EventOut)

    hamr.Drivers.UARTDriver_Impl_Bridge(
      id = 0,
      name = "MissionComputer_Impl_Instance_PROC_SW_FC_UART_UARTDriver",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      recv_data = recv_data,
      MissionCommand = MissionCommand,
      send_data = send_data,
      AirVehicleState = AirVehicleState
    )
  }
  val MissionComputer_Impl_Instance_PROC_SW_RADIO_RadioDriver_Attestation : hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge = {
    val trusted_ids = Port[Base_Types.Bits] (id = 4, name = "MissionComputer_Impl_Instance_PROC_SW_RADIO_RadioDriver_Attestation_trusted_ids", mode = DataOut)
    val AutomationRequest = Port[Base_Types.Bits] (id = 5, name = "MissionComputer_Impl_Instance_PROC_SW_RADIO_RadioDriver_Attestation_AutomationRequest", mode = EventOut)
    val OperatingRegion = Port[Base_Types.Bits] (id = 6, name = "MissionComputer_Impl_Instance_PROC_SW_RADIO_RadioDriver_Attestation_OperatingRegion", mode = EventOut)
    val LineSearchTask = Port[Base_Types.Bits] (id = 7, name = "MissionComputer_Impl_Instance_PROC_SW_RADIO_RadioDriver_Attestation_LineSearchTask", mode = EventOut)

    hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge(
      id = 1,
      name = "MissionComputer_Impl_Instance_PROC_SW_RADIO_RadioDriver_Attestation",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      trusted_ids = trusted_ids,
      AutomationRequest = AutomationRequest,
      OperatingRegion = OperatingRegion,
      LineSearchTask = LineSearchTask
    )
  }
  val MissionComputer_Impl_Instance_PROC_SW_FlyZones_FlyZonesDatabase : hamr.SW.FlyZonesDatabase_thr_Impl_Bridge = {
    val keep_in_zones = Port[Base_Types.Bits] (id = 8, name = "MissionComputer_Impl_Instance_PROC_SW_FlyZones_FlyZonesDatabase_keep_in_zones", mode = DataOut)
    val keep_out_zones = Port[Base_Types.Bits] (id = 9, name = "MissionComputer_Impl_Instance_PROC_SW_FlyZones_FlyZonesDatabase_keep_out_zones", mode = DataOut)

    hamr.SW.FlyZonesDatabase_thr_Impl_Bridge(
      id = 2,
      name = "MissionComputer_Impl_Instance_PROC_SW_FlyZones_FlyZonesDatabase",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      keep_in_zones = keep_in_zones,
      keep_out_zones = keep_out_zones
    )
  }
  val MissionComputer_Impl_Instance_PROC_SW_UXAS_UxAS : hamr.SW.UxAS_thr_Impl_Bridge = {
    val AutomationRequest = Port[Base_Types.Bits] (id = 10, name = "MissionComputer_Impl_Instance_PROC_SW_UXAS_UxAS_AutomationRequest", mode = EventIn)
    val AirVehicleState = Port[Base_Types.Bits] (id = 11, name = "MissionComputer_Impl_Instance_PROC_SW_UXAS_UxAS_AirVehicleState", mode = EventIn)
    val OperatingRegion = Port[Base_Types.Bits] (id = 12, name = "MissionComputer_Impl_Instance_PROC_SW_UXAS_UxAS_OperatingRegion", mode = EventIn)
    val LineSearchTask = Port[Base_Types.Bits] (id = 13, name = "MissionComputer_Impl_Instance_PROC_SW_UXAS_UxAS_LineSearchTask", mode = EventIn)
    val AutomationResponse = Port[Base_Types.Bits] (id = 14, name = "MissionComputer_Impl_Instance_PROC_SW_UXAS_UxAS_AutomationResponse", mode = EventOut)

    hamr.SW.UxAS_thr_Impl_Bridge(
      id = 3,
      name = "MissionComputer_Impl_Instance_PROC_SW_UXAS_UxAS",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      AutomationRequest = AutomationRequest,
      AirVehicleState = AirVehicleState,
      OperatingRegion = OperatingRegion,
      LineSearchTask = LineSearchTask,
      AutomationResponse = AutomationResponse
    )
  }
  val MissionComputer_Impl_Instance_PROC_SW_WPM_WaypointPlanManagerService : hamr.SW.WaypointPlanManagerService_thr_Impl_Bridge = {
    val AutomationResponse = Port[Base_Types.Bits] (id = 15, name = "MissionComputer_Impl_Instance_PROC_SW_WPM_WaypointPlanManagerService_AutomationResponse", mode = EventIn)
    val AirVehicleState = Port[Base_Types.Bits] (id = 16, name = "MissionComputer_Impl_Instance_PROC_SW_WPM_WaypointPlanManagerService_AirVehicleState", mode = EventIn)
    val MissionCommand = Port[Base_Types.Bits] (id = 17, name = "MissionComputer_Impl_Instance_PROC_SW_WPM_WaypointPlanManagerService_MissionCommand", mode = EventOut)
    val ReturnHome = Port[art.Empty] (id = 18, name = "MissionComputer_Impl_Instance_PROC_SW_WPM_WaypointPlanManagerService_ReturnHome", mode = EventIn)

    hamr.SW.WaypointPlanManagerService_thr_Impl_Bridge(
      id = 4,
      name = "MissionComputer_Impl_Instance_PROC_SW_WPM_WaypointPlanManagerService",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      AutomationResponse = AutomationResponse,
      AirVehicleState = AirVehicleState,
      MissionCommand = MissionCommand,
      ReturnHome = ReturnHome
    )
  }
  val MissionComputer_Impl_Instance_PROC_SW_AM_Gate_CASE_AttestationGate : hamr.SW.CASE_AttestationGate_thr_Impl_Bridge = {
    val trusted_ids = Port[Base_Types.Bits] (id = 19, name = "MissionComputer_Impl_Instance_PROC_SW_AM_Gate_CASE_AttestationGate_trusted_ids", mode = DataIn)
    val AutomationRequest_in = Port[Base_Types.Bits] (id = 20, name = "MissionComputer_Impl_Instance_PROC_SW_AM_Gate_CASE_AttestationGate_AutomationRequest_in", mode = EventIn)
    val AutomationRequest_out = Port[Base_Types.Bits] (id = 21, name = "MissionComputer_Impl_Instance_PROC_SW_AM_Gate_CASE_AttestationGate_AutomationRequest_out", mode = EventOut)
    val OperatingRegion_in = Port[Base_Types.Bits] (id = 22, name = "MissionComputer_Impl_Instance_PROC_SW_AM_Gate_CASE_AttestationGate_OperatingRegion_in", mode = EventIn)
    val OperatingRegion_out = Port[Base_Types.Bits] (id = 23, name = "MissionComputer_Impl_Instance_PROC_SW_AM_Gate_CASE_AttestationGate_OperatingRegion_out", mode = EventOut)
    val LineSearchTask_in = Port[Base_Types.Bits] (id = 24, name = "MissionComputer_Impl_Instance_PROC_SW_AM_Gate_CASE_AttestationGate_LineSearchTask_in", mode = EventIn)
    val LineSearchTask_out = Port[Base_Types.Bits] (id = 25, name = "MissionComputer_Impl_Instance_PROC_SW_AM_Gate_CASE_AttestationGate_LineSearchTask_out", mode = EventOut)

    hamr.SW.CASE_AttestationGate_thr_Impl_Bridge(
      id = 5,
      name = "MissionComputer_Impl_Instance_PROC_SW_AM_Gate_CASE_AttestationGate",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      trusted_ids = trusted_ids,
      AutomationRequest_in = AutomationRequest_in,
      AutomationRequest_out = AutomationRequest_out,
      OperatingRegion_in = OperatingRegion_in,
      OperatingRegion_out = OperatingRegion_out,
      LineSearchTask_in = LineSearchTask_in,
      LineSearchTask_out = LineSearchTask_out
    )
  }
  val MissionComputer_Impl_Instance_PROC_SW_FLT_LST_CASE_Filter_LST : hamr.SW.CASE_Filter_LST_thr_Impl_Bridge = {
    val filter_in = Port[Base_Types.Bits] (id = 26, name = "MissionComputer_Impl_Instance_PROC_SW_FLT_LST_CASE_Filter_LST_filter_in", mode = EventIn)
    val filter_out = Port[Base_Types.Bits] (id = 27, name = "MissionComputer_Impl_Instance_PROC_SW_FLT_LST_CASE_Filter_LST_filter_out", mode = EventOut)

    hamr.SW.CASE_Filter_LST_thr_Impl_Bridge(
      id = 6,
      name = "MissionComputer_Impl_Instance_PROC_SW_FLT_LST_CASE_Filter_LST",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      filter_in = filter_in,
      filter_out = filter_out
    )
  }
  val MissionComputer_Impl_Instance_PROC_SW_MON_REQ_CASE_Monitor_Req : hamr.SW.CASE_Monitor_Req_thr_Impl_Bridge = {
    val observed = Port[Base_Types.Bits] (id = 28, name = "MissionComputer_Impl_Instance_PROC_SW_MON_REQ_CASE_Monitor_Req_observed", mode = EventIn)
    val reference_1 = Port[Base_Types.Bits] (id = 29, name = "MissionComputer_Impl_Instance_PROC_SW_MON_REQ_CASE_Monitor_Req_reference_1", mode = EventIn)

    hamr.SW.CASE_Monitor_Req_thr_Impl_Bridge(
      id = 7,
      name = "MissionComputer_Impl_Instance_PROC_SW_MON_REQ_CASE_Monitor_Req",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      observed = observed,
      reference_1 = reference_1
    )
  }
  val MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo : hamr.SW.CASE_Monitor_Geo_thr_Impl_Bridge = {
    val keep_in_zones = Port[Base_Types.Bits] (id = 30, name = "MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_keep_in_zones", mode = DataIn)
    val keep_out_zones = Port[Base_Types.Bits] (id = 31, name = "MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_keep_out_zones", mode = DataIn)
    val observed = Port[Base_Types.Bits] (id = 32, name = "MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_observed", mode = EventIn)
    val output = Port[Base_Types.Bits] (id = 33, name = "MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_output", mode = EventOut)
    val alert = Port[art.Empty] (id = 34, name = "MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo_alert", mode = EventOut)

    hamr.SW.CASE_Monitor_Geo_thr_Impl_Bridge(
      id = 8,
      name = "MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      keep_in_zones = keep_in_zones,
      keep_out_zones = keep_out_zones,
      observed = observed,
      output = output,
      alert = alert
    )
  }

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = MSZ (MissionComputer_Impl_Instance_PROC_SW_FC_UART_UARTDriver, MissionComputer_Impl_Instance_PROC_SW_RADIO_RadioDriver_Attestation, MissionComputer_Impl_Instance_PROC_SW_FlyZones_FlyZonesDatabase, MissionComputer_Impl_Instance_PROC_SW_UXAS_UxAS, MissionComputer_Impl_Instance_PROC_SW_WPM_WaypointPlanManagerService, MissionComputer_Impl_Instance_PROC_SW_AM_Gate_CASE_AttestationGate, MissionComputer_Impl_Instance_PROC_SW_FLT_LST_CASE_Filter_LST, MissionComputer_Impl_Instance_PROC_SW_MON_REQ_CASE_Monitor_Req, MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo),

      connections = ISZ (Connection(from = MissionComputer_Impl_Instance_PROC_SW_FC_UART_UARTDriver.AirVehicleState, to = MissionComputer_Impl_Instance_PROC_SW_UXAS_UxAS.AirVehicleState),
                         Connection(from = MissionComputer_Impl_Instance_PROC_SW_FC_UART_UARTDriver.AirVehicleState, to = MissionComputer_Impl_Instance_PROC_SW_WPM_WaypointPlanManagerService.AirVehicleState),
                         Connection(from = MissionComputer_Impl_Instance_PROC_SW_RADIO_RadioDriver_Attestation.trusted_ids, to = MissionComputer_Impl_Instance_PROC_SW_AM_Gate_CASE_AttestationGate.trusted_ids),
                         Connection(from = MissionComputer_Impl_Instance_PROC_SW_RADIO_RadioDriver_Attestation.AutomationRequest, to = MissionComputer_Impl_Instance_PROC_SW_AM_Gate_CASE_AttestationGate.AutomationRequest_in),
                         Connection(from = MissionComputer_Impl_Instance_PROC_SW_RADIO_RadioDriver_Attestation.OperatingRegion, to = MissionComputer_Impl_Instance_PROC_SW_AM_Gate_CASE_AttestationGate.OperatingRegion_in),
                         Connection(from = MissionComputer_Impl_Instance_PROC_SW_RADIO_RadioDriver_Attestation.LineSearchTask, to = MissionComputer_Impl_Instance_PROC_SW_AM_Gate_CASE_AttestationGate.LineSearchTask_in),
                         Connection(from = MissionComputer_Impl_Instance_PROC_SW_FlyZones_FlyZonesDatabase.keep_in_zones, to = MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo.keep_in_zones),
                         Connection(from = MissionComputer_Impl_Instance_PROC_SW_FlyZones_FlyZonesDatabase.keep_out_zones, to = MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo.keep_out_zones),
                         Connection(from = MissionComputer_Impl_Instance_PROC_SW_UXAS_UxAS.AutomationResponse, to = MissionComputer_Impl_Instance_PROC_SW_WPM_WaypointPlanManagerService.AutomationResponse),
                         Connection(from = MissionComputer_Impl_Instance_PROC_SW_UXAS_UxAS.AutomationResponse, to = MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo.observed),
                         Connection(from = MissionComputer_Impl_Instance_PROC_SW_UXAS_UxAS.AutomationResponse, to = MissionComputer_Impl_Instance_PROC_SW_MON_REQ_CASE_Monitor_Req.observed),
                         Connection(from = MissionComputer_Impl_Instance_PROC_SW_WPM_WaypointPlanManagerService.MissionCommand, to = MissionComputer_Impl_Instance_PROC_SW_FC_UART_UARTDriver.MissionCommand),
                         Connection(from = MissionComputer_Impl_Instance_PROC_SW_AM_Gate_CASE_AttestationGate.AutomationRequest_out, to = MissionComputer_Impl_Instance_PROC_SW_UXAS_UxAS.AutomationRequest),
                         Connection(from = MissionComputer_Impl_Instance_PROC_SW_AM_Gate_CASE_AttestationGate.AutomationRequest_out, to = MissionComputer_Impl_Instance_PROC_SW_MON_REQ_CASE_Monitor_Req.reference_1),
                         Connection(from = MissionComputer_Impl_Instance_PROC_SW_AM_Gate_CASE_AttestationGate.OperatingRegion_out, to = MissionComputer_Impl_Instance_PROC_SW_UXAS_UxAS.OperatingRegion),
                         Connection(from = MissionComputer_Impl_Instance_PROC_SW_AM_Gate_CASE_AttestationGate.LineSearchTask_out, to = MissionComputer_Impl_Instance_PROC_SW_FLT_LST_CASE_Filter_LST.filter_in),
                         Connection(from = MissionComputer_Impl_Instance_PROC_SW_FLT_LST_CASE_Filter_LST.filter_out, to = MissionComputer_Impl_Instance_PROC_SW_UXAS_UxAS.LineSearchTask),
                         Connection(from = MissionComputer_Impl_Instance_PROC_SW_MON_GEO_CASE_Monitor_Geo.alert, to = MissionComputer_Impl_Instance_PROC_SW_WPM_WaypointPlanManagerService.ReturnHome))
    )
  }
}