#ifndef SIREUM_TYPE_H_hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_Api
#define SIREUM_TYPE_H_hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_Api
#include <misc.h>

// hamr.SW.CASE_Filter_OR_thr_Impl_Bridge.Api

typedef struct hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_Api *hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_Api;
struct hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_Api {
  TYPE type;
  Z id;
  Z filter_in_Id;
  Z filter_out_Id;
};

#define DeclNewhamr_SW_CASE_Filter_OR_thr_Impl_Bridge_Api(x) struct hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_Api x = { .type = Thamr_SW_CASE_Filter_OR_thr_Impl_Bridge_Api }

#endif