# General Message Properties

See [CMASI.xml](https://github.com/afrl-rq/OpenUxAS/blob/develop/mdms/CMASI.xml) for the actual OpenUxAS message definitions.

**AutomationRequest**:

   * *EntityList* should (only?) contain the UAV ID
   * *TaskList* should (only?) contain the line search task ID
   * *TaskListSize* is at least one
   * *TaskRelationships* is **unconstrained**
   * *OperatingRegion* is the defined operating region ID
   * *RedoAllTasks* is **unconstrained**

**AirVehicleState**:

   * *ID* should be the UAV ID
   * ... a lot of properties that are **unconstrained**
   * *Location* should be in the keep in zone and should not be in the keep out zone
   * *CurrentWaypoint* belongs to the UAV mission command from the **AutomationResponse** when *FIXMEMode* is *Waypoint* otherwise it is **unconstrained**
   * *CurrentCommand* belongs to the UAV action command from the **AutomationResponse** if it is nonzero
   * *FIXMEMode* is **unconstrained**
   * *AssociatedTasks* should contain the line search task ID when the *FIXMEMode* is *waypoint* otherwise it is **unconstrained**
   * *Time* is **unconstrained**
   * *Info* is **unconstrained**
   * *Airspeed* should be in vehicle capabilities
   * *VerticalSpeed* should be in vehicle capabilities
   * *WindSpeed* is **unconstrained**
   * *WindDirection* is **unconstrained** 

**AutomationResponse**:

   * *MissionCommandList* should (only?) contain a mission for the UAV ID
   * *VehicleCommandList* should (only?) contain at least on *VehicleActionCommand* for the UAV ID
   * *Info* is **unconstrained**

**MissionCommand**:

   * Extends the *VehicleActionCommand* and should include those constraints
   * *WaypointList* should be non-empty (*and have some relation to the line search task including the defined line, keep in zones, and keep out zones*?) -- the list may or may not be fully linked depending on how the **WaypointManagerService** pays out waypoints 
   * *FirstWaypoint* should be an ID in the *WaypointList*

**VehicleActionCommand**:

   * *CommandID* belongs to the UAV action command from the **AutomationResponse**
   * *VehicleID* is the UAV ID
   * *VehicleAction* is **unconstrained**
   * *CommandStatus* should be *Executed* by the end of the **VehicleActionCommand**

**Waypoint**: there are constraints on the state of the UAV at the waypoint, and there are also commands for the vehicle to complete at the waypoint. I am assuming that the line search task issues the **VehicleActionCommand** at the right times, but it is something that can be monitored.

   * *Number* is **unconstrained**
   * *NextWayPoint* should be an existing waypoint (*it is not clear if this field is an ID or an index in an array because the commends suggest its an index while other fields reason over waypoint IDs*)
   * *Speed* is **unconstrained**
   * *SpeedType* is **unconstrained**
   * *ClimbRate* is **unconstrained**
   * *TurnType* is **unconstrained**
   * *VehicleActionList* is **unconstrained**
   * *ContingencyWaypointA* is to return base (or loiter) -- there should always be a next waypoint
   * *ContingencyWaypointB* is zero (no contingency)
   * *AssociatedTasks* should (only?) include the line search task ID

# Contracts

**Radio** 
  
  * **Assume** nothing
  * **Guarantee** messages from a trusted source (need to work this out with agree -- needs to be in a subcomponent)
  * **Guarantee** nothing (UxAS should have the contracts for message integrity)

**Gimbal**

  * **Assume** message integrity on the *VehicleActionCommand* (see above)
  * **Guarantee** Add in the camera direction and guarantee it is pointed correctly and as directed by the line search task 

**FC_UART**

  * **Assume** message integrity on the *MissionCommand* (see above)
  * **Guarantee** nothing (UxAS should have the contracts for message integrity)

**UxAS**

  * **Guarantee**
    * Well-formed *AutomationResponse* 
    * Well-formed *MissionCommand*
    * Should not generate an *AutomationResponse* without first seeing a well-formed *AutomationRequest*


What happens if it gets a bogus *AutomationRequest*? Behavior is not clear in the docs.

What should be asserted about the mission command? Should it be tied to the operating region and line search task? Where should that be asserted? Coming out of UxAS?

Ask: what should a waypoint manager do? Chop up list to fit in vehicle capacity.
Ask: what should the automation request validator do? Make sure it is a valid request?
Ask: what should service x do? The answer should be in the contract.
Ask: what should the gimbal control do?
Ask: what should the radio do?

# Model Requirements for Build

* UxAS is not part of the build (only notational)
* Bind UxAS to a virtual processor in the model for the HAMR build (ask Isaac on what the AADL needs to look like)
* The isolate transform will move it to the virtual processor (that is part of the CASE tools)
* Bound array sizes everywhere in the model (CONSTANT?)
* Email Jason Belt and CC Robby and John on questions on style guide
* Add properties for anything that HAMR needs to build (nothing inside UxAS, but does need to be an the interface of UxAS)
* See email from Jason Belt with subject "Differences in how datatypes are modeled in AADL in SMACCM Pilot and UXAS" to help make our UxAS model buildable by HAMR

# Note

   * Remove ServiceStatus from RouteAggregator and other components
