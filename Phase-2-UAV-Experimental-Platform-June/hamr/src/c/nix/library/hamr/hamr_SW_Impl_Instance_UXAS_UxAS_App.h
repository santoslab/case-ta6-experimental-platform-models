#ifndef SIREUM_H_hamr_SW_Impl_Instance_UXAS_UxAS_App
#define SIREUM_H_hamr_SW_Impl_Instance_UXAS_UxAS_App

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void hamr_SW_Impl_Instance_UXAS_UxAS_App_init(STACK_FRAME_ONLY);

art_Bridge_EntryPoints hamr_SW_Impl_Instance_UXAS_UxAS_App_entryPoints(STACK_FRAME_ONLY);
Z hamr_SW_Impl_Instance_UXAS_UxAS_App_appPortId(STACK_FRAME_ONLY);
Option_882048 hamr_SW_Impl_Instance_UXAS_UxAS_App_appPortIdOpt(STACK_FRAME_ONLY);
Z hamr_SW_Impl_Instance_UXAS_UxAS_App_AutomationRequestPortId(STACK_FRAME_ONLY);
Option_882048 hamr_SW_Impl_Instance_UXAS_UxAS_App_AutomationRequestPortIdOpt(STACK_FRAME_ONLY);
Z hamr_SW_Impl_Instance_UXAS_UxAS_App_AirVehicleStatePortId(STACK_FRAME_ONLY);
Option_882048 hamr_SW_Impl_Instance_UXAS_UxAS_App_AirVehicleStatePortIdOpt(STACK_FRAME_ONLY);
Z hamr_SW_Impl_Instance_UXAS_UxAS_App_OperatingRegionPortId(STACK_FRAME_ONLY);
Option_882048 hamr_SW_Impl_Instance_UXAS_UxAS_App_OperatingRegionPortIdOpt(STACK_FRAME_ONLY);
Z hamr_SW_Impl_Instance_UXAS_UxAS_App_LineSearchTaskPortId(STACK_FRAME_ONLY);
Option_882048 hamr_SW_Impl_Instance_UXAS_UxAS_App_LineSearchTaskPortIdOpt(STACK_FRAME_ONLY);

Z hamr_SW_Impl_Instance_UXAS_UxAS_App_main(STACK_FRAME IS_948B60 args);

Unit hamr_SW_Impl_Instance_UXAS_UxAS_App_atExit(STACK_FRAME_ONLY);

Unit hamr_SW_Impl_Instance_UXAS_UxAS_App_initialiseArchitecture(STACK_FRAME Z seed);

Unit hamr_SW_Impl_Instance_UXAS_UxAS_App_initialise(STACK_FRAME_ONLY);

Unit hamr_SW_Impl_Instance_UXAS_UxAS_App_compute(STACK_FRAME_ONLY);

Unit hamr_SW_Impl_Instance_UXAS_UxAS_App_exit(STACK_FRAME_ONLY);

Unit hamr_SW_Impl_Instance_UXAS_UxAS_App_finalise(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_UXAS_UxAS_App_init_entryPoints(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_UXAS_UxAS_App_init_appPortId(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_UXAS_UxAS_App_init_appPortIdOpt(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_UXAS_UxAS_App_init_AutomationRequestPortId(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_UXAS_UxAS_App_init_AutomationRequestPortIdOpt(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_UXAS_UxAS_App_init_AirVehicleStatePortId(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_UXAS_UxAS_App_init_AirVehicleStatePortIdOpt(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_UXAS_UxAS_App_init_OperatingRegionPortId(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_UXAS_UxAS_App_init_OperatingRegionPortIdOpt(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_UXAS_UxAS_App_init_LineSearchTaskPortId(STACK_FRAME_ONLY);

void hamr_SW_Impl_Instance_UXAS_UxAS_App_init_LineSearchTaskPortIdOpt(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif