// #Sireum

package hamr.SW

import org.sireum._
import hamr._

// the contents of this file will not be overwritten
@record class CASE_Filter_ARes_thr_Impl_Impl (val api : CASE_Filter_ARes_thr_Impl_Bridge.Api) extends CASE_Filter_ARes_thr_Impl {

  override def initialise(): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    val apiUsage_filter_in: Option[Base_Types.Bits] = api.getfilter_in()
    api.sendfilter_out(Base_Types.Bits_empty())
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
