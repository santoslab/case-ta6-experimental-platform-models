#include <RadioDriver_Attestation_thr_Impl_Impl_api.h>

// This file was auto-generated.  Do not edit

Unit api_send_trusted_ids__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  IS_C4F575 value) {

  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_settrusted_ids_(
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    value);
}

Unit api_send_trusted_ids__alt__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray) {

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_settrusted_ids_(
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    &t_0);
}

Unit api_send_AutomationRequest__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  IS_C4F575 value) {

  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendAutomationRequest_(
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    value);
}

Unit api_send_AutomationRequest__alt__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray) {

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendAutomationRequest_(
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    &t_0);
}

Unit api_send_OperatingRegion__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  IS_C4F575 value) {

  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendOperatingRegion_(
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    value);
}

Unit api_send_OperatingRegion__alt__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray) {

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendOperatingRegion_(
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    &t_0);
}

Unit api_send_LineSearchTask__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  IS_C4F575 value) {

  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendLineSearchTask_(
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    value);
}

Unit api_send_LineSearchTask__alt__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray) {

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_sendLineSearchTask_(
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    &t_0);
}

Unit api_logInfo__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  String str) {
  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_logInfo_(
    SF
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    str);
}

Unit api_logDebug__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  String str) {
  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_logDebug_(
    SF
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    str);
}

Unit api_logError__hamr_SW_RadioDriver_Attestation_thr_Impl_Impl(
  hamr_SW_RadioDriver_Attestation_thr_Impl_Impl this,
  String str) {
  hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api_logError_(
    SF
    hamr_SW_RadioDriver_Attestation_thr_Impl_Impl_api_(this),
    str);
}
