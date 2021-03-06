#ifndef CASE_MONITOR_GEO_THR_IMPL_IMPL_API_H
#define CASE_MONITOR_GEO_THR_IMPL_IMPL_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

B api_get_keep_in_zones__hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl this,
  IS_C4F575 value);

B api_get_keep_in_zones__alt__hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray);

B api_get_keep_out_zones__hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl this,
  IS_C4F575 value);

B api_get_keep_out_zones__alt__hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray);

B api_get_observed__hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl this,
  IS_C4F575 value);

B api_get_observed__alt__hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray);

Unit api_send_output__hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl this,
  IS_C4F575 value);

Unit api_send_output__alt__hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray);

Unit api_send_alert__hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl this);

Unit api_logInfo__hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl this,
  String str);

Unit api_logDebug__hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl this,
  String str);

Unit api_logError__hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl(
  hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl this,
  String str);

#endif
