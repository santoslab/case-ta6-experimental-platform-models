#ifndef SIREUM_H_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App
#define SIREUM_H_hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App
#include <types.h>

void hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_init(STACK_FRAME_ONLY);

art_Bridge_EntryPoints hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_entryPoints(STACK_FRAME_ONLY);
Z hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_appPortId(STACK_FRAME_ONLY);
Option_882048 hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_appPortIdOpt(STACK_FRAME_ONLY);
Z hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AutomationResponsePortId(STACK_FRAME_ONLY);
Option_882048 hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AutomationResponsePortIdOpt(STACK_FRAME_ONLY);
Z hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AirVehicleStatePortId(STACK_FRAME_ONLY);
Option_882048 hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_AirVehicleStatePortIdOpt(STACK_FRAME_ONLY);
Z hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_ReturnHomePortId(STACK_FRAME_ONLY);
Option_882048 hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_ReturnHomePortIdOpt(STACK_FRAME_ONLY);

Z hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_main(STACK_FRAME IS_948B60 args);

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_atExit(STACK_FRAME_ONLY);

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_initialiseArchitecture(STACK_FRAME Z seed);

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_initialise(STACK_FRAME_ONLY);

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_compute(STACK_FRAME_ONLY);

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_exit(STACK_FRAME_ONLY);

Unit hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App_finalise(STACK_FRAME_ONLY);

#endif