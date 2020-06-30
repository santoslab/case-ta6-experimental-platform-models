#ifndef SIREUM_H_hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints
#define SIREUM_H_hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints
#include <types.h>

// hamr.SW.UxAS_thr_Impl_Bridge.EntryPoints

#define hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints_UxAS_thr_Impl_BridgeId_(this) ((this)->UxAS_thr_Impl_BridgeId)
#define hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints_AutomationRequest_Id_(this) ((this)->AutomationRequest_Id)
#define hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints_AirVehicleState_Id_(this) ((this)->AirVehicleState_Id)
#define hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints_OperatingRegion_Id_(this) ((this)->OperatingRegion_Id)
#define hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints_LineSearchTask_Id_(this) ((this)->LineSearchTask_Id)
#define hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints_AutomationResponse_Id_(this) ((this)->AutomationResponse_Id)
#define hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints_dispatchTriggers_(this) ((Option_9AF35E) &(this)->dispatchTriggers)
#define hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints_component_(this) ((hamr_SW_UxAS_thr_Impl_Impl) &(this)->component)
#define hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints_dataInPortIds_(this) ((IS_82ABD8) &(this)->dataInPortIds)
#define hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints_eventInPortIds_(this) ((IS_82ABD8) &(this)->eventInPortIds)
#define hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints_dataOutPortIds_(this) ((IS_82ABD8) &(this)->dataOutPortIds)
#define hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints_eventOutPortIds_(this) ((IS_82ABD8) &(this)->eventOutPortIds)

B hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints__eq(hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints this, hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints other);
inline B hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints__ne(hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints this, hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints other) {
  return !hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints__eq(this, other);
};
void hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints_string_(STACK_FRAME String result, hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints this);
void hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints_cprint(hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints this, B isOut);

inline B hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints__is(STACK_FRAME void* this) {
  return ((hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints) this)->type == Thamr_SW_UxAS_thr_Impl_Bridge_EntryPoints;
}

inline hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints__as(STACK_FRAME void *this) {
  if (hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints__is(CALLER this)) return (hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints) this;
  fprintf(stderr, "Invalid case from %s to hamr.SW.UxAS_thr_Impl_Bridge.EntryPoints.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints_apply(STACK_FRAME hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints this, Z UxAS_thr_Impl_BridgeId, Z AutomationRequest_Id, Z AirVehicleState_Id, Z OperatingRegion_Id, Z LineSearchTask_Id, Z AutomationResponse_Id, Option_9AF35E dispatchTriggers, hamr_SW_UxAS_thr_Impl_Impl component);

Unit hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints_initialise_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints this);

Unit hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints_compute_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints this);

Unit hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints_finalise_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints this);

#endif