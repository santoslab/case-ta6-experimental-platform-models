// #Sireum

package hamr.SW

import org.sireum._
import art._
import hamr._

// This file was auto-generated.  Do not edit

@record class RadioDriver_Attestation_thr_Impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  trusted_ids: Port[Base_Types.Bits],
  AutomationRequest: Port[Base_Types.Bits],
  OperatingRegion: Port[Base_Types.Bits],
  LineSearchTask: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(trusted_ids,
              AutomationRequest,
              OperatingRegion,
              LineSearchTask),

    dataIns = ISZ(),

    dataOuts = ISZ(trusted_ids),

    eventIns = ISZ(),

    eventOuts = ISZ(AutomationRequest,
                    OperatingRegion,
                    LineSearchTask)
  )

  val api : RadioDriver_Attestation_thr_Impl_Bridge.Api =
    RadioDriver_Attestation_thr_Impl_Bridge.Api(
      id,
      trusted_ids.id,
      AutomationRequest.id,
      OperatingRegion.id,
      LineSearchTask.id
    )

  val entryPoints : Bridge.EntryPoints =
    RadioDriver_Attestation_thr_Impl_Bridge.EntryPoints(
      id,

      trusted_ids.id,
      AutomationRequest.id,
      OperatingRegion.id,
      LineSearchTask.id,

      dispatchTriggers,

      RadioDriver_Attestation_thr_Impl_Impl(api)
    )
}

object RadioDriver_Attestation_thr_Impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    trusted_ids_Id : Art.PortId,
    AutomationRequest_Id : Art.PortId,
    OperatingRegion_Id : Art.PortId,
    LineSearchTask_Id : Art.PortId) {

    def sendAutomationRequest(value : Base_Types.Bits) : Unit = {
      Art.putValue(AutomationRequest_Id, Base_Types.Bits_Payload(value))
    }

    def sendOperatingRegion(value : Base_Types.Bits) : Unit = {
      Art.putValue(OperatingRegion_Id, Base_Types.Bits_Payload(value))
    }

    def sendLineSearchTask(value : Base_Types.Bits) : Unit = {
      Art.putValue(LineSearchTask_Id, Base_Types.Bits_Payload(value))
    }

    def settrusted_ids(value : Base_Types.Bits) : Unit = {
      Art.putValue(trusted_ids_Id, Base_Types.Bits_Payload(value))
    }

    def logInfo(msg: String): Unit = {
      Art.logInfo(id, msg)
    }

    def logDebug(msg: String): Unit = {
      Art.logDebug(id, msg)
    }

    def logError(msg: String): Unit = {
      Art.logError(id, msg)
    }
  }

  @record class EntryPoints(
    RadioDriver_Attestation_thr_Impl_BridgeId : Art.BridgeId,

    trusted_ids_Id : Art.PortId,
    AutomationRequest_Id : Art.PortId,
    OperatingRegion_Id : Art.PortId,
    LineSearchTask_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    component : RadioDriver_Attestation_thr_Impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ()

    val dataOutPortIds: ISZ[Art.PortId] = ISZ(trusted_ids_Id)

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(AutomationRequest_Id,
                                               OperatingRegion_Id,
                                               LineSearchTask_Id)

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)
      component.timeTriggered()
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)
      component.timeTriggered()
      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate: Unit = {
      component.activate()
    }

    def deactivate: Unit = {
      component.deactivate()
    }

    def finalise: Unit = {
      component.finalise()
    }

    def initialise: Unit = {
      component.initialise()
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover: Unit = {
      component.recover()
    }
  }
}