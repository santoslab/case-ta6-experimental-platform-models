#ifndef SIREUM_TYPE_H_hamr_SW_CASE_Filter_OR_thr_Impl_Impl
#define SIREUM_TYPE_H_hamr_SW_CASE_Filter_OR_thr_Impl_Impl
#include <misc.h>

// hamr.SW.CASE_Filter_OR_thr_Impl_Impl
#include <type-hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_Api.h>

typedef struct hamr_SW_CASE_Filter_OR_thr_Impl_Impl *hamr_SW_CASE_Filter_OR_thr_Impl_Impl;
struct hamr_SW_CASE_Filter_OR_thr_Impl_Impl {
  TYPE type;
  struct hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_Api api;
};

#define DeclNewhamr_SW_CASE_Filter_OR_thr_Impl_Impl(x) struct hamr_SW_CASE_Filter_OR_thr_Impl_Impl x = { .type = Thamr_SW_CASE_Filter_OR_thr_Impl_Impl }

#endif