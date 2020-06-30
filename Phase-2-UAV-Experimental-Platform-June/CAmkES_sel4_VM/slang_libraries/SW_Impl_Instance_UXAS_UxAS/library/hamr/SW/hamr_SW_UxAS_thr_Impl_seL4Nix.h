#ifndef SIREUM_H_hamr_SW_UxAS_thr_Impl_seL4Nix
#define SIREUM_H_hamr_SW_UxAS_thr_Impl_seL4Nix

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit hamr_SW_UxAS_thr_Impl_seL4Nix_AutomationResponse_MON_GEO_Send(STACK_FRAME art_DataContent d);

Unit hamr_SW_UxAS_thr_Impl_seL4Nix_AutomationResponse_MON_REQ_Send(STACK_FRAME art_DataContent d);

void hamr_SW_UxAS_thr_Impl_seL4Nix_AutomationRequest_Receive(STACK_FRAME Option_8E9F45 result);

void hamr_SW_UxAS_thr_Impl_seL4Nix_AirVehicleState_Receive(STACK_FRAME Option_8E9F45 result);

void hamr_SW_UxAS_thr_Impl_seL4Nix_OperatingRegion_Receive(STACK_FRAME Option_8E9F45 result);

void hamr_SW_UxAS_thr_Impl_seL4Nix_LineSearchTask_Receive(STACK_FRAME Option_8E9F45 result);

#ifdef __cplusplus
}
#endif

#endif