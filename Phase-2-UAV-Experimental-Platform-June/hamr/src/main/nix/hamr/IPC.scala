// #Sireum

package hamr

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object IPCPorts {
  val SW_Impl_Instance_FC_UART_UARTDriver_App: Art.PortId = 41
  val SW_Impl_Instance_RADIO_RadioDriver_Attestation_App: Art.PortId = 42
  val SW_Impl_Instance_FlyZones_FlyZonesDatabase_App: Art.PortId = 43
  val SW_Impl_Instance_UXAS_UxAS_App: Art.PortId = 44
  val SW_Impl_Instance_WPM_WaypointPlanManagerService_App: Art.PortId = 45
  val SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App: Art.PortId = 46
  val SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App: Art.PortId = 47
  val SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App: Art.PortId = 48
  val SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App: Art.PortId = 49
  val Main: Art.PortId = 50

  def emptyReceiveOut: MBox2[Art.PortId, DataContent] = {
    return MBox2(-1, art.Empty())
  }

  def emptyReceiveAsyncOut: MBox2[Art.PortId, Option[DataContent]] = {
    return MBox2(-1, None())
  }
}
