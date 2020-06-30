#ifndef RADIODRIVER_ATTESTATION_THR_IMPL_IMPL_API_H
#define RADIODRIVER_ATTESTATION_THR_IMPL_IMPL_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

void api_send_trusted_ids__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  size_t numBits,
  uint8_t *byteArray);

bool api_get_recv_data__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  size_t *numBits,
  uint8_t *byteArray);

void api_send_send_data__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  size_t numBits,
  uint8_t *byteArray);

void api_send_AutomationRequest__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  size_t numBits,
  uint8_t *byteArray);

void api_send_OperatingRegion__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  size_t numBits,
  uint8_t *byteArray);

void api_send_LineSearchTask__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  size_t numBits,
  uint8_t *byteArray);

void api_logInfo__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  String str);

void api_logDebug__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  String str);

void api_logError__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  String str);

#endif
