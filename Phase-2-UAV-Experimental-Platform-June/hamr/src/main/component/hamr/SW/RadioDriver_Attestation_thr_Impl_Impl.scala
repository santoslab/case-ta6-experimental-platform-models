// #Sireum

package hamr.SW

import org.sireum._
import hamr._

// This file will not be overwritten so is safe to edit
@record class RadioDriver_Attestation_thr_Impl_Impl (val api : RadioDriver_Attestation_thr_Impl_Bridge.Api) extends RadioDriver_Attestation_thr_Impl {

  override def initialise(): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.settrusted_ids(Base_Types.Bits_empty())
    val apiUsage_recv_data: Option[Base_Types.Bits] = api.getrecv_data()
    api.sendsend_data(Base_Types.Bits_empty())
    api.sendAutomationRequest(Base_Types.Bits_empty())
    api.sendOperatingRegion(Base_Types.Bits_empty())
    api.sendLineSearchTask(Base_Types.Bits_empty())
  }

  override def timeTriggered(): Unit = {
    // example override of timeTriggered
  }

  override def activate(): Unit = {
    // example override of activate
  }

  override def deactivate(): Unit = {
    // example override of deactivate
  }

  override def finalise(): Unit = {
    // example override of finalise
  }

  override def recover(): Unit = {
    // example override of recover
  }
}
