package hamr.SW

import art.{ArtNative_Ext, Empty}
import hamr._
import org.sireum._

// This file will not be overwritten so is safe to edit
class SW_Impl_Instance_UXAS_UxAS_Test extends BridgeTestSuite[UxAS_thr_Impl_Bridge](Arch.SW_Impl_Instance_UXAS_UxAS) {
  test("Example Unit Test"){
    executeTest()
  }

  //////////////////////
  // HELPER FUNCTIONS //
  //////////////////////

  // setter for in EventDataPort
  def put_AutomationRequest(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.AutomationRequest_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_AirVehicleState(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.AirVehicleState_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_OperatingRegion(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.OperatingRegion_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_LineSearchTask(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.LineSearchTask_Id, Base_Types.Bits_Payload(value))
  }

  // getter for out EventDataPort
  def get_AutomationResponse_MON_GEO(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_AutomationResponse_MON_GEO_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port AutomationResponse_MON_GEO.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_AutomationResponse_MON_GEO_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.AutomationResponse_MON_GEO_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_AutomationResponse_MON_REQ(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_AutomationResponse_MON_REQ_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port AutomationResponse_MON_REQ.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_AutomationResponse_MON_REQ_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.AutomationResponse_MON_REQ_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  def getComponent(): UxAS_thr_Impl_Impl = {
    return bridge.entryPoints.asInstanceOf[UxAS_thr_Impl_Bridge.EntryPoints].component
  }
}
