#ifndef SIREUM_TYPE_H_hamr_SW_UxAS_thr_Impl_Bridge_Api
#define SIREUM_TYPE_H_hamr_SW_UxAS_thr_Impl_Bridge_Api
#include <misc.h>

// hamr.SW.UxAS_thr_Impl_Bridge.Api

typedef struct hamr_SW_UxAS_thr_Impl_Bridge_Api *hamr_SW_UxAS_thr_Impl_Bridge_Api;
struct hamr_SW_UxAS_thr_Impl_Bridge_Api {
  TYPE type;
  Z id;
  Z AutomationRequest_Id;
  Z AirVehicleState_Id;
  Z OperatingRegion_Id;
  Z LineSearchTask_Id;
  Z AutomationResponse_Id;
};

#define DeclNewhamr_SW_UxAS_thr_Impl_Bridge_Api(x) struct hamr_SW_UxAS_thr_Impl_Bridge_Api x = { .type = Thamr_SW_UxAS_thr_Impl_Bridge_Api }

#endif