package hamr.SW

import org.sireum._
import art._

object CASE_Monitor_Req_thr_Impl_seL4Nix_Ext {
  def observed_IsEmpty(): B = halt("stub")

  def observed_Receive(): Option[DataContent] = halt("stub")

  def reference_1_IsEmpty(): B = halt("stub")

  def reference_1_Receive(): Option[DataContent] = halt("stub")

  def alert_Send(d: DataContent): Unit = halt("stub")
}
