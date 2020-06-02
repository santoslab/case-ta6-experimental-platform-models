package hamr.SW

import art.{ArtNative_Ext, Empty}
import hamr._
import org.sireum._

// the contents of this file will not be overwritten
class MissionComputer_Impl_Instance_PROC_SW_RADIO_RadioDriver_Attestation_Test extends BridgeTestSuite[RadioDriver_Attestation_thr_Impl_Bridge](Arch.MissionComputer_Impl_Instance_PROC_SW_RADIO_RadioDriver_Attestation) {
  test("Example Unit Test"){
    executeTest()
  }

  //////////////////////
  // HELPER FUNCTIONS //
  //////////////////////

  // getter for out DataPort
  def get_trusted_ids(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_trusted_ids_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port trusted_ids.  Expecting 'Base_Types.Bits_Payload' but received ${v}") 
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out DataPort
  def get_trusted_ids_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.trusted_ids_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_AutomationRequest(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_AutomationRequest_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port AutomationRequest.  Expecting 'Base_Types.Bits_Payload' but received ${v}") 
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_AutomationRequest_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.AutomationRequest_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_OperatingRegion(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_OperatingRegion_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port OperatingRegion.  Expecting 'Base_Types.Bits_Payload' but received ${v}") 
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_OperatingRegion_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.OperatingRegion_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_LineSearchTask(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_LineSearchTask_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port LineSearchTask.  Expecting 'Base_Types.Bits_Payload' but received ${v}") 
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_LineSearchTask_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.LineSearchTask_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  def getComponent(): RadioDriver_Attestation_thr_Impl_Impl = {
    return bridge.entryPoints.asInstanceOf[RadioDriver_Attestation_thr_Impl_Bridge.EntryPoints].component
  }
}
