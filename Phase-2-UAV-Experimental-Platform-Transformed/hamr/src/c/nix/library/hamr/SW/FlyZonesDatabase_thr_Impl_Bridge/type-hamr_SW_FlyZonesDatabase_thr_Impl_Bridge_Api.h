#ifndef SIREUM_TYPE_H_hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api
#define SIREUM_TYPE_H_hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api
#include <misc.h>

// hamr.SW.FlyZonesDatabase_thr_Impl_Bridge.Api

typedef struct hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api *hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api;
struct hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api {
  TYPE type;
  Z id;
  Z keep_in_zones_Id;
  Z keep_out_zones_Id;
};

#define DeclNewhamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api(x) struct hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api x = { .type = Thamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api }

#endif