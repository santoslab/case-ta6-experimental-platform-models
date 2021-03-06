#ifndef CASE_ATTESTATIONGATE_THR_IMPL_IMPL_API_H
#define CASE_ATTESTATIONGATE_THR_IMPL_IMPL_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

B api_get_trusted_ids__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  IS_C4F575 value);

B api_get_trusted_ids__alt__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray);

B api_get_AutomationRequest_in__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  IS_C4F575 value);

B api_get_AutomationRequest_in__alt__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray);

Unit api_send_AutomationRequest_out__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  IS_C4F575 value);

Unit api_send_AutomationRequest_out__alt__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray);

B api_get_OperatingRegion_in__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  IS_C4F575 value);

B api_get_OperatingRegion_in__alt__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray);

Unit api_send_OperatingRegion_out__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  IS_C4F575 value);

Unit api_send_OperatingRegion_out__alt__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray);

B api_get_LineSearchTask_in__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  IS_C4F575 value);

B api_get_LineSearchTask_in__alt__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray);

Unit api_send_LineSearchTask_out__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  IS_C4F575 value);

Unit api_send_LineSearchTask_out__alt__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray);

Unit api_logInfo__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  String str);

Unit api_logDebug__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  String str);

Unit api_logError__hamr_SW_CASE_AttestationGate_thr_Impl_Impl(
  hamr_SW_CASE_AttestationGate_thr_Impl_Impl this,
  String str);

#endif
