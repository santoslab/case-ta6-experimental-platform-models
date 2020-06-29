// #Sireum

package hamr

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object SW_Impl_Instance_FC_UART_UARTDriver_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.SW_Impl_Instance_FC_UART_UARTDriver.entryPoints
  val appPortId: Art.PortId = IPCPorts.SW_Impl_Instance_FC_UART_UARTDriver_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
  val recv_dataPortId: Art.PortId = Arch.SW_Impl_Instance_FC_UART_UARTDriver.recv_data.id
  val recv_dataPortIdOpt: Option[Art.PortId] = Some(recv_dataPortId)
  val MissionCommandPortId: Art.PortId = Arch.SW_Impl_Instance_FC_UART_UARTDriver.MissionCommand.id
  val MissionCommandPortIdOpt: Option[Art.PortId] = Some(MissionCommandPortId)

  def initialiseArchitecture(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)
    Platform.initialise(seed, recv_dataPortIdOpt)
    Platform.initialise(seed, MissionCommandPortIdOpt)

    Art.run(Arch.ad)
  }

  def initialise(): Unit = {
    entryPoints.initialise()
  }

  def compute(): Unit = {

    {
      val out = IPCPorts.emptyReceiveAsyncOut
      Platform.receiveAsync(recv_dataPortIdOpt, out)
      out.value2 match {
        case Some(v: Base_Types.Bits_Payload) => ArtNix.updateData(recv_dataPortId, v)
        case Some(v) => halt(s"Unexpected payload on port recv_data.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
        case None() => // do nothing
      }
    }
    {
      val out = IPCPorts.emptyReceiveAsyncOut
      Platform.receiveAsync(MissionCommandPortIdOpt, out)
      out.value2 match {
        case Some(v: Base_Types.Bits_Payload) => ArtNix.updateData(MissionCommandPortId, v)
        case Some(v) => halt(s"Unexpected payload on port MissionCommand.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
        case None() => // do nothing
      }
    }
    entryPoints.compute()
    Process.sleep(500)
  }

  def finalise(): Unit = {
    entryPoints.finalise()
  }

  def main(args: ISZ[String]): Z = {

    val seed: Z = if (args.size == z"1") {
      val n = Z(args(0)).get
      if (n == z"0") 1 else n
    } else {
      1
    }

    initialiseArchitecture(seed)

    Platform.receive(appPortIdOpt, IPCPorts.emptyReceiveOut) // pause after setting up component

    initialise()

    Platform.receive(appPortIdOpt, IPCPorts.emptyReceiveOut) // pause after component init

    println("SW_Impl_Instance_FC_UART_UARTDriver_App starting ...")

    ArtNix.timeDispatch()

    var terminated = F
    while (!terminated) {
      val out = IPCPorts.emptyReceiveAsyncOut
      Platform.receiveAsync(appPortIdOpt, out)
      if (out.value2.isEmpty) {
        compute()
      } else {
        terminated = T
      }
    }
    exit()

    return 0
  }

  def exit(): Unit = {
    finalise()
    Platform.finalise()
  }

  override def atExit(): Unit = {
    exit()
  }
}