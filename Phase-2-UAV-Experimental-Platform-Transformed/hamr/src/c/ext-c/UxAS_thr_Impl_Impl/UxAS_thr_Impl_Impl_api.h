#ifndef UXAS_THR_IMPL_IMPL_API_H
#define UXAS_THR_IMPL_IMPL_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

B api_get_AutomationRequest__hamr_SW_UxAS_thr_Impl_Impl(
  hamr_SW_UxAS_thr_Impl_Impl this,
  IS_C4F575 value);

B api_get_AutomationRequest__alt__hamr_SW_UxAS_thr_Impl_Impl(
  hamr_SW_UxAS_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray);

B api_get_AirVehicleState__hamr_SW_UxAS_thr_Impl_Impl(
  hamr_SW_UxAS_thr_Impl_Impl this,
  IS_C4F575 value);

B api_get_AirVehicleState__alt__hamr_SW_UxAS_thr_Impl_Impl(
  hamr_SW_UxAS_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray);

B api_get_OperatingRegion__hamr_SW_UxAS_thr_Impl_Impl(
  hamr_SW_UxAS_thr_Impl_Impl this,
  IS_C4F575 value);

B api_get_OperatingRegion__alt__hamr_SW_UxAS_thr_Impl_Impl(
  hamr_SW_UxAS_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray);

B api_get_LineSearchTask__hamr_SW_UxAS_thr_Impl_Impl(
  hamr_SW_UxAS_thr_Impl_Impl this,
  IS_C4F575 value);

B api_get_LineSearchTask__alt__hamr_SW_UxAS_thr_Impl_Impl(
  hamr_SW_UxAS_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray);

Unit api_send_AutomationResponse__hamr_SW_UxAS_thr_Impl_Impl(
  hamr_SW_UxAS_thr_Impl_Impl this,
  IS_C4F575 value);

Unit api_send_AutomationResponse__alt__hamr_SW_UxAS_thr_Impl_Impl(
  hamr_SW_UxAS_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray);

Unit api_logInfo__hamr_SW_UxAS_thr_Impl_Impl(
  hamr_SW_UxAS_thr_Impl_Impl this,
  String str);

Unit api_logDebug__hamr_SW_UxAS_thr_Impl_Impl(
  hamr_SW_UxAS_thr_Impl_Impl this,
  String str);

Unit api_logError__hamr_SW_UxAS_thr_Impl_Impl(
  hamr_SW_UxAS_thr_Impl_Impl this,
  String str);

#endif
