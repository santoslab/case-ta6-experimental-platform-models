#ifndef SIREUM_H_hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints
#define SIREUM_H_hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints
#include <types.h>

// hamr.Drivers.UARTDriver_Impl_Bridge.EntryPoints

#define hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints_UARTDriver_Impl_BridgeId_(this) ((this)->UARTDriver_Impl_BridgeId)
#define hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints_recv_data_Id_(this) ((this)->recv_data_Id)
#define hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints_MissionCommand_Id_(this) ((this)->MissionCommand_Id)
#define hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints_send_data_Id_(this) ((this)->send_data_Id)
#define hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints_AirVehicleState_Id_(this) ((this)->AirVehicleState_Id)
#define hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints_dispatchTriggers_(this) ((Option_9AF35E) &(this)->dispatchTriggers)
#define hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints_component_(this) ((hamr_Drivers_UARTDriver_Impl_Impl) &(this)->component)
#define hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints_dataInPortIds_(this) ((IS_82ABD8) &(this)->dataInPortIds)
#define hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints_eventInPortIds_(this) ((IS_82ABD8) &(this)->eventInPortIds)
#define hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints_dataOutPortIds_(this) ((IS_82ABD8) &(this)->dataOutPortIds)
#define hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints_eventOutPortIds_(this) ((IS_82ABD8) &(this)->eventOutPortIds)

B hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints__eq(hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints this, hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints other);
inline B hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints__ne(hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints this, hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints other) {
  return !hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints__eq(this, other);
};
void hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints_string_(STACK_FRAME String result, hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints this);
void hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints_cprint(hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints this, B isOut);

inline B hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints__is(STACK_FRAME void* this) {
  return ((hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints) this)->type == Thamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints;
}

inline hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints__as(STACK_FRAME void *this) {
  if (hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints__is(CALLER this)) return (hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints) this;
  fprintf(stderr, "Invalid case from %s to hamr.Drivers.UARTDriver_Impl_Bridge.EntryPoints.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints_apply(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints this, Z UARTDriver_Impl_BridgeId, Z recv_data_Id, Z MissionCommand_Id, Z send_data_Id, Z AirVehicleState_Id, Option_9AF35E dispatchTriggers, hamr_Drivers_UARTDriver_Impl_Impl component);

Unit hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints_initialise_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints this);

Unit hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints_compute_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints this);

Unit hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints_finalise_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints this);

#endif