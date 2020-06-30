#include <all.h>

Unit hamr_SW_CASE_AttestationManager_thr_Impl_Impl_initialise_(STACK_FRAME hamr_SW_CASE_AttestationManager_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "CASE_AttestationManager_thr_Impl_Impl.scala", "hamr.SW.CASE_AttestationManager_thr_Impl_Impl", "initialise", 0);

  sfUpdateLoc(14);
  hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_logInfo_(SF hamr_SW_CASE_AttestationManager_thr_Impl_Impl_api_(this), (String) string("Example info logging"));

  sfUpdateLoc(15);
  hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_logDebug_(SF hamr_SW_CASE_AttestationManager_thr_Impl_Impl_api_(this), (String) string("Example debug logging"));

  sfUpdateLoc(16);
  hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_logError_(SF hamr_SW_CASE_AttestationManager_thr_Impl_Impl_api_(this), (String) string("Example error logging"));

  sfUpdateLoc(18);
  DeclNewIS_C4F575(t_0);
  hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_0);
  hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_settrusted_ids_(SF hamr_SW_CASE_AttestationManager_thr_Impl_Impl_api_(this), (IS_C4F575) ((IS_C4F575) &t_0));

  sfUpdateLoc(19);
  DeclNewIS_C4F575(t_1);
  hamr_Base_Types_Bits_empty(SF (IS_C4F575) &t_1);
  hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_sendattestation_request_(SF hamr_SW_CASE_AttestationManager_thr_Impl_Impl_api_(this), (IS_C4F575) ((IS_C4F575) &t_1));

  sfUpdateLoc(20);
  DeclNewOption_30119F(_apiUsage_attestation_response);
  Option_30119F apiUsage_attestation_response;
  DeclNewOption_30119F(t_2);
  hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api_getattestation_response_(SF (Option_30119F) &t_2, hamr_SW_CASE_AttestationManager_thr_Impl_Impl_api_(this));
  apiUsage_attestation_response = (Option_30119F) ((Option_30119F) &t_2);
}

Unit hamr_SW_CASE_AttestationManager_thr_Impl_Impl_timeTriggered_(STACK_FRAME hamr_SW_CASE_AttestationManager_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "CASE_AttestationManager_thr_Impl_Impl.scala", "hamr.SW.CASE_AttestationManager_thr_Impl_Impl", "timeTriggered", 0);
}

Unit hamr_SW_CASE_AttestationManager_thr_Impl_Impl_finalise_(STACK_FRAME hamr_SW_CASE_AttestationManager_thr_Impl_Impl this) {
  DeclNewStackFrame(caller, "CASE_AttestationManager_thr_Impl_Impl.scala", "hamr.SW.CASE_AttestationManager_thr_Impl_Impl", "finalise", 0);
}