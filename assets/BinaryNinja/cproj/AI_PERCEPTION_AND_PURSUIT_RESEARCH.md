# Project IGI (`igi.exe`) — Enemy AI Perception, Alert Selection, and Pursuit Research Report

## 1. Binary Provenance & Evidence Sources

- **Target Executable**: `/Users/haseeb-mir/Downloads/IGI/igi.exe`
  - **Format**: 32-bit PE (`i386`, Windows GUI)
  - **SHA-256**: `dea34892d417715873ea61d7b2ba5556655f1ad65385104348146f9679915a01`
  - **REA Artifact Digest Records**:
    - `ev_40278da32f4f75dd32a97a30c7d335dc31681404894ad10a585e83c1a8f0a504` (`list_names` in `assets/rea-bundle.json`)
    - `ev_5dd81be362b43a9168c9ffa6a7060efd83ee2be5f797e1de49d84e74b5d42285` (`list_strings` in `assets/rea-bundle.json`, confirming retail AI strings `"HumanAI"`, `"AIGraph"`, `"PatrolPath"`, `"AIAction_*"`, `"AIFunction_*"`, `"AIEVENT_*"`, `"AITYPE_*"`, `"Combat - Stand"`, `"Combat - Follow"`, `"Combat - RePosition"`, `"Combat - LookForTarget"`, `"Move to event %d"`, `"Patrolling, Walkto:%d, Cur:%d"`, etc.)
    - `ev_c1237a0bb8daf4e4130b091ab78a1857cd046f4496960802415333256850f37f` (`list_procedures` in `assets/rea-bundle.json`, confirming 257 procedure boundaries across the AI, sensor, combat, and `AIGraph` address ranges)
- **Primary Evidence Sources Cross-Checked**:
  1. **Radare2 (`r2`) Disassembly & `.rdata` Inspection** on `/Users/haseeb-mir/Downloads/IGI/igi.exe`:
     - Instruction-level verification of x87 FPU view-cone tests, raycast visibility thresholds, event filter bitmasks, action-stack scheduling, and steering math across `0x004148F0–0x004149A7`, `0x0044C8D0–0x00453FF0`, `0x00489750–0x0048F000`, and `0x00508FA0–0x00509F00`.
  2. **Binary Ninja Decompiled C Project** (`assets/BinaryNinja/cproj/src/*.c` and `assets/BinaryNinja/IGINatives_VERIFIED.json`):
     - Control-flow and structure field recovery across `HumanAI`, `AIAction_*`, `AIFunction_*`, `PatrolPath`, `Combat*`, and `AIGraph`.
  3. **Retail String Registrar & AI Research Catalogs** (`assets/IGI1-Native-Name-Evidence.json` and `assets/AINewNatives_Research.json`):
     - Verified retail script native bindings registered in `AIAction_Patrol_2` (`0x0044CCA0`) and `AIEVENT_CREATE` (`0x0044EEB0`).

### Verification Scope Statement (Static vs. Runtime)
All findings in this report are **statically verified** by cross-referencing `Radare2` disassembly, `Binary Ninja` C decompilation, and `REA/Ghidra` procedure/string records on `igi.exe` (`dea34892...`). **No live runtime capture or dynamic hooking was performed during this research task**, and no behavior below is claimed to be runtime-verified.

---

## 2. End-to-End Call Order (Perception -> Alert/Event Dispatch -> Action Selection -> Movement/Pursuit)

Each enemy NPC is driven by a `HumanAI` task (`0x0044C8D0`) paired with a controlled `Human` body entity (`*(HumanAI + 0x14)`), a per-agent QVM script (`MISSION:AI/%d.qsc` at `HumanAI + 0x3C70`), and a navigation graph (`AIGraph` at `HumanAI + 0x3B6C`). At 30 Hz game ticks, the perception-to-pursuit pipeline executes in four stages:

```
STAGE 1A: Visual Perception (Per-Tick Sight Sweep inside 0x0044F410 HumanAI_Setup)
  0x0044F410 HumanAI_Setup(HumanAI *ai)
    ├── Copies eye position (ai + 0x3A30..0x3A40) and head bone matrix (ai + 0x3A48) from Human body (human + 0x70)->headBone (+0x2AC..0x2B8).
    ├── Loads active view cone parameters into snapshot struct (ai + 0x3A30..0x3AA0):
    │     Selects normal view length (+0xB0) & secondary view length (+0xD0) if alarmFlag (+0x3ABB) == 0,
    │     or alarm view length (+0xB8) & secondary alarm view length (+0xD8) if alarmFlag (+0x3ABB) != 0.
    ├── 0x00489750 Car_DetectionSweep [actual: AISensor_DetectionSweep](&ai->sensor_15f8, &ai->eyeSnap_3a30, human, factionId)
    │     ├── Time-slices sweep across 4 ticks: runs only when (Frames_GetUpdateCounter() & 3) == sensor->tickSlot_0c.
    │     └── Loops over all active targetable entities in g_5c8ac0:
    │           └── 0x004898D0 AI_TestCandidate(sensor, candidateSlot, &targetPos, &eyeSnap, human)
    │                 ├── 1. View-Cone Check (every sensor->conePeriod_04 + 1 ticks):
    │                 │      0x00489960 AI_BuildEyeSnapshot(&eyeSnap, &targetPos)
    │                 │        ├── Transforms (targetPos - eyePos) into AI head-local space.
    │                 │        ├── 0x004148F0 [Vec3D_ComputePitchAngle] -> |pitchRad|
    │                 │        ├── 0x00414950 [Vec3D_ComputeYawAngle]   -> |yawRad|
    │                 │        └── Tests primary cone (dist <= +0xB0/+0xB8, |pitch| < viewAlpha_a0, |yaw| < viewGamma_a8)
    │                 │            or secondary cone (dist <= +0xD0/+0xD8, |pitch| < secAlpha_c0, |yaw| < secGamma_c8).
    │                 │            Sets candidateSlot->inViewCone_28 = 1 if inside, else Clears +0x28 = 0 and +0x29 = 0.
    │                 └── 2. Line-of-Sight Raycast (when inViewCone_28 == 1, every sensor->losPeriod_08 + 1 ticks):
    │                        0x00489B20 AI_LineOfSight(human, &eyePos, targetEntity, &targetPos)
    │                          └── Casts world ray via 0x004CE410; returns 1 if unobstructed OR if hit fraction >= 0.79f (0x00534230).
    │                              Writes result to candidateSlot->isVisible_29.
    └── Iterates enemy list (ai + 0x1610) & friendly list (ai + 0x161C):
          ├── For each visible enemy (slot->isVisible_29 != 0 and alive):
          │     Builds event struct (type = 0x16 AIEVENT_ENEMYDETECTION) and calls 0x00450D50 AI_TakeCover -> 0x00450110 HumanAI_EventOffer.
          └── For each visible corpse (slot->isVisible_29 != 0 and dead):
                Builds event struct (type = 0x17 AIEVENT_FRIENDLYDETECTION) and calls 0x00450D50 AI_TakeCover -> 0x00450110 HumanAI_EventOffer.

STAGE 1B: Auditory / Broadcast Perception (Asynchronous Event Offer)
  [External Source: e.g. 0x00479780 Gun_FireMessage, footsteps, explosions, grenades, ally alert]
    └── 0x00450CE0 AI_EventBroadcast(AIEventOffer *offer)
          └── Iterates all registered AI listeners (0x00462880) and dispatches event g_53c922 (0x00450C80):
                └── 0x00450110 HumanAI_EventOffer(HumanAI *ai, AIEventOffer *offer)
                      ├── Ignores if AI is dead (+0x3ABA), controlled human is dead, or source is self.
                      ├── Evaluates event filter bitmask offer->filterFlags_08 (ctxB):
                      │     ├── Bit 0x02 (Radius/Hearing Gate): Euclidean distance(offer->pos_10, ai->pos_20) <= offer->radius_0c.
                      │     ├── Bit 0x01 (View Cone Gate):      0x004502F0 AI_TestViewCones(ai + 0x20, offer->pos_10, ai->alarmFlag_3abb).
                      │     ├── Bit 0x04 (Human Source Gate):   offer->sourceEntity_18 derives from Human.
                      │     ├── Bit 0x08 / 0x10 (Alive/Dead):   checks whether source entity is alive or dead.
                      │     └── Bit 0x20 / 0x40 (Faction Gate): checks same-team vs. opposing-team faction ID.
                      └── If all active gates pass:
                            └── 0x00450520 HumanAI_EventQueued(ai, offer)
                                  Allocates an event node from free list (ai + 0x810), copies event type, priority,
                                  3D position (+0x10..0x24), and entity handles (+0x28, +0x2C), and appends to
                                  per-type event queue at ai + ((eventType * 3 + 0x1BC) * 4).

STAGE 2: QVM Script Event Dispatch & Action Selection (0x0044FD50 -> 0x0044FC90)
  0x0044FD50 Env_InitLadder_13 [actual: HumanAI_ProcessEventQueues](HumanAI *ai)
    ├── Loops over priority-ordered event types configured by script (ai + 0x81C, count at ai + 0x8DC):
    │     If event queue for type `flagP1` is non-empty and higher priority than current top action on stack:
    │       └── 0x0044FC90 HumanAI_EventDispatch(ai, eventType, prioritySlot)
    │             ├── Sets globals g_5bda58 = ai, g_5bda60 = &eventQueue[eventType], g_5bda64 = prioritySlot,
    │             │   and temporary action list g_5bda5c = &tempActionList.
    │             ├── 0x004B6690 Qvm_Execute(ai->qvmScript_3c70)
    │             │     The AI's .qsc script calls 0x0044DFA0 AIFunction_GetCurrentEventType() and invokes
    │             │     AIAction_* natives (e.g., AIAction_Patrol, AIAction_MoveToEvent, AIAction_SetCombat, AIAction_Combat),
    │             │     each calling 0x00450E10 AI_SelectTarget(handlerFn, actionData, flags) to push onto g_5bda5c.
    │             └── Commits new actions to AI Action Stack (ai + 0x8FC):
    │                   ├── Single action:   0x00450E70 AI_UpdateSensors(ai, actionNode)
    │                   └── Multiple actions: 0x00450F10 AI_UpdatePatrol_2(ai, &tempActionList)
    │                         ├── Pops non-pushable actions (where !(flags_10 & 1)) via 0x00450EE0 AI_CheckSector.
    │                         ├── Assigns randomized reaction delay: actionNode->delayTicks_0c = (rand01() + 1.0f) * 0.2f * 30.0f (6..12 ticks).
    │                         └── Calls action initializer actionNode->initFn_14(ai, actionNode).

STAGE 3: Action Stack Execution (0x0044FEC0 HumanAI_RunActions)
  0x0044FEC0 HumanAI_RunActions(HumanAI *ai)
    └── Walks Action Stack at ai + 0x8FC:
          ├── If top action has a tick callback (actionNode->tickFn_18 != NULL), invokes tickFn_18(ai, actionNode) and returns:
          │     ├── Patrol:       0x0048E920 Patrol_Tick(ai, actionNode)
          │     ├── MoveToEvent:  0x0048E020 FX_MoveToEventD(ai, actionNode)
          │     ├── WalkToNode:   0x0048EBF0 FX_WalkToNodeD(ai, actionNode)
          │     ├── RunToNode:    0x0048EC50 FX_RunToNodeD(ai, actionNode)
          │     ├── SetCombat:    0x0048E560 SetCombat_Run(ai, actionNode) -> queues AIEVENT_COMBAT (7)
          │     └── Combat:       0x0048ABA0 Patrol_CombatStart -> 0x0048BC00 CombatStand / 0x0048C280 CombatKneel / 0x0048C860 Combat_Follow
          └── Otherwise decrements reaction delay timer actionNode->delayTicks_0c (-1 per tick).

STAGE 4: Pathfinding (`AIGraph`) & Locomotion Steering (`AI_MoveToNode_3` -> `AI_SteerHuman`)
  0x004517A0 AI_MoveToNode_3(HumanAI *ai, int targetNodeId, double *exactTargetPos, char allowStop)
    ├── Queries AIGraph (ai + 0x3B6C) for shortest path from current node (ai + 0x3E2C) to targetNodeId via 0x005096F0.
    ├── Builds waypoint list (ai + 0xE0), offsetting intermediate corridor edges via 0x004520C0 AI_FireWeapon_3
    │   and flagging door-crossing segments (waypoint->isDoor_20 = 1).
    └── Calls 0x00451540 AI_SteerHuman(ai)
          ├── Handles door opening interaction if waypoint->isDoor_20 == 1.
          ├── Transforms next waypoint (srcS + 0x08..0x18) into AI local space (ai + 0x20..0x70).
          ├── Computes desired yaw & pitch deltas via 0x00414950 and 0x004148F0, clamped to per-tick turn rate
          │   ai + 0x3EC8 / +0x3ECC (default 0.025925925 rad/tick = 0x3CD4629B, ~1.485 deg/tick = 44.5 deg/s).
          ├── Checks waypoint arrival: if |localX| <= 1228.8 (0.3m) and |localY| <= 1228.8 (0.3m), pops waypoint!
          └── Writes steering channels to HumanAI control block:
                ├── ai + 0x3C84 (forward move channel) = 1.0f (0x3F800000)
                ├── ai + 0x3C74 (pitch turn channel)   = clampedPitch * (1 / pi) (0.318309873f)
                └── ai + 0x3C78 (yaw turn channel)     = clampedYaw   * (1 / pi) (0.318309873f)
                (Copied to controlled Human entity at end of 0x0044F410 via event 0x00460AD0!)
```

---

## 3. Verified Function Catalog, Signatures & Name Discrepancies

As in the weapon module, many functions in `assets/BinaryNinja/cproj/src/` have heuristic auto-generated names (`FX_*`, `Env_*`, `Camera_*`, `WeaponType_*`) that mask their true AI roles. The table below documents both names and their verified signatures.

| Address | Binary Ninja Catalog Name | Verified Actual Role | Calling Convention & Signature | Evidence Sources |
| :--- | :--- | :--- | :--- | :--- |
| `0x004148F0` | `WeaponType_InitType` | **Misnamed in BN**: Actually **`Vec3D_ComputePitchAngle`** (zeroes $x$, normalizes $(0, y, z)$, returns $\pm\arccos(y)$ in radians) | `double __cdecl Vec3D_ComputePitchAngle(double x, double y, double z)` | `r2` @ `0x004148F0`, BN `00489960-AI_BuildEyeSnapshot.c` |
| `0x00414950` | `WeaponType_GetConfig` | **Misnamed in BN**: Actually **`Vec3D_ComputeYawAngle`** (zeroes $z$, normalizes $(x, y, 0)$, returns $\pm\arccos(y)$ in radians) | `double __cdecl Vec3D_ComputeYawAngle(double x, double y, double z)` | `r2` @ `0x00414950`, BN `00489960-AI_BuildEyeSnapshot.c` |
| `0x0044C8D0` | `HumanAI_Init` | **`HumanAI_RegisterTaskType`** (registers `"HumanAI"`, `"AIGraph"`, `"PatrolPath"`, and AI script natives) | `int __cdecl HumanAI_Init(void)` | `r2` @ `0x0044C8D0`, BN `0044C8D0-HumanAI_Init.c`, `IGI1-Native-Name-Evidence.json` |
| `0x0044CCA0` | `AIAction_Patrol_2` | **`AI_RegisterScriptNatives`** (registers all `AIAction_*` and `AIFunction_*` QVM natives) | `void * __cdecl AI_RegisterScriptNatives(void)` | `r2` @ `0x0044CCA0`, BN `0044CCA0-AIAction_Patrol_2.c` |
| `0x0044D0E0` | `AIAction_Patrol` | **`AIAction_Patrol`** (pushes `Patrol` action `0x0048E850` -> `0x0048E920` onto action list) | `int __cdecl AIAction_Patrol(void *retVal, float scriptCtx)` | `r2` @ `0x0044D0E0`, BN `0044D0E0-AIAction_Patrol.c` |
| `0x0044D160` | `AIAction_Combat` | **`AIAction_Combat`** (pushes `Combat` action `0x0048ABA0` onto action list) | `int __cdecl AIAction_Combat(void *retVal, float scriptCtx)` | `r2` @ `0x0044D160`, BN `0044D160-AIAction_Combat.c` |
| `0x0044D7D0` | `AIAction_MoveToEvent` | **`AIAction_MoveToEvent`** (snapshots event 3D pos via `0x0044D850` and pushes `0x0048DFE0` -> `0x0048E020`) | `int __cdecl AIAction_MoveToEvent(void *retVal, float scriptCtx)` | `r2` @ `0x0044D7D0`, BN `0044D7D0-AIAction_MoveToEvent.c` |
| `0x0044DAE0` | `AIAction_SetCombat` | **`AIAction_SetCombat`** (snapshots enemy entity & position from current event and pushes `0x0048E540` -> `0x0048E560`) | `int __cdecl AIAction_SetCombat(void *retVal, int scriptCtx)` | `r2` @ `0x0044DAE0`, BN `0044DAE0-AIAction_SetCombat.c` |
| `0x0044DC40–0x0044DF40` | `AIFunction_Set*View*` | **`AIFunction_SetViewLength` / `SetAlarmViewLength` / `SetViewAlpha` / `SetViewGamma` / `SetSecondary*`** (sets primary/secondary view cone distances in meters `* 4096.0` and angles in degrees `* 0.0174532924f`) | `int __cdecl AIFunction_SetView*(long double val, void *retVal, float scriptCtx)` | `r2` @ `0x0044DC40–0x0044DF40`, BN `0044DC40–0044DF40` |
| `0x0044EEB0` | `AIEVENT_CREATE` | **`AI_RegisterEventConstants`** (registers `AIEVENT_*` `0..23`, `AIACTIONFLAG_*`, `AITYPE_*`, and gunshot range constants) | `void * __cdecl AIEVENT_CREATE(void)` | `r2` @ `0x0044EEB0`, BN `0044EEB0-AIEVENT_CREATE.c` |
| `0x0044F060` | `HumanAI_LoadParameters` | **`HumanAI_Construct`** (initializes `HumanAI` fields, view cones, action stack `0x8FC`, and patrol slots `0x1508`) | `int __cdecl HumanAI_LoadParameters(HumanAI *ai)` | `r2` @ `0x0044F060`, BN `0044F060-HumanAI_LoadParameters.c` |
| `0x0044F410` | `HumanAI_Setup` | **`HumanAI_Tick`** (main per-tick AI update: runs `Car_DetectionSweep`, queues `ENEMYDETECTION`/`FRIENDLYDETECTION` events, dispatches QVM events, runs action stack, and forwards control channels to `Human`) | `void * __cdecl HumanAI_Setup(HumanAI *ai)` | `r2` @ `0x0044F410`, BN `0044F410-HumanAI_Setup.c` |
| `0x0044FC90` | `HumanAI_EventDispatch` | **`HumanAI_EventDispatch`** (executes `Qvm_Execute` on `ai->qvmScript_3c70` for a queued event and commits resulting actions to stack) | `int __cdecl HumanAI_EventDispatch(HumanAI *ai, int eventType, int prioritySlot)` | `r2` @ `0x0044FC90`, BN `0044FC90-HumanAI_EventDispatch.c` |
| `0x0044FD50` | `Env_InitLadder_13` | **Misnamed in BN**: Actually **`HumanAI_ProcessEventQueues`** (iterates priority-ordered event queues and calls `HumanAI_EventDispatch`) | `int __cdecl HumanAI_ProcessEventQueues(HumanAI *ai)` | `r2` @ `0x0044FD50`, BN `0044FD50-Env_InitLadder_13.c` |
| `0x0044FEC0` | `HumanAI_RunActions` | **`HumanAI_RunActions`** (executes top ready action on `ai + 0x8FC` or decrements its reaction delay timer) | `void * __cdecl HumanAI_RunActions(HumanAI *ai)` | `r2` @ `0x0044FEC0`, BN `0044FEC0-HumanAI_RunActions.c` |
| `0x00450110` | `HumanAI_EventOffer` | **`HumanAI_EventOffer`** (filters incoming sensory/broadcast event by distance, view cone, alive/dead state, and faction, then queues via `0x00450520`) | `void * __cdecl HumanAI_EventOffer(HumanAI *ai, AIEventOffer *offer)` | `r2` @ `0x00450110`, BN `00450110-HumanAI_EventOffer.c` |
| `0x004502F0` | `AI_TestViewCones` | **`AI_TestViewCones`** (tests if 3D point lies within AI's primary or secondary view cones) | `int __cdecl AI_TestViewCones(void *aiTransform_20, double *targetPos, char isAlarmOn)` | `r2` @ `0x004502F0`, BN `004502F0-AI_TestViewCones.c` |
| `0x00450520` | `HumanAI_EventQueued` | **`HumanAI_EventQueued`** (allocates event node from `ai + 0x810` and copies event payload) | `int32_t * __cdecl HumanAI_EventQueued(HumanAI *ai, AIEventOffer *offer)` | `r2` @ `0x00450520`, BN `00450520-HumanAI_EventQueued.c` |
| `0x00450CE0` | `AI_EventBroadcast` | **`AI_EventBroadcast`** (broadcasts an `AIEventOffer` to all registered AI listeners via event `g_53c922`) | `int32_t * __cdecl AI_EventBroadcast(AIEventOffer *offer)` | `r2` @ `0x00450CE0`, BN `00450CE0-AI_EventBroadcast.c` |
| `0x00450E70` | `AI_UpdateSensors` | **Misnamed in BN**: Actually **`AI_PushSingleAction`** (pops non-pushable actions, pushes `a2` onto `ai + 0x8FC`, sets `6..12` tick reaction delay, and runs initializer) | `int __cdecl AI_PushSingleAction(HumanAI *ai, int32_t *actionNode)` | `r2` @ `0x00450E70`, BN `00450E70-AI_UpdateSensors.c` |
| `0x00451540` | `AI_SteerHuman` | **`AI_SteerHuman`** (steers AI along `ai + 0xE0` waypoint list, handles doors, clamps turn rate, and writes movement/aim channels `+0x3C74..0x3C84`) | `int __cdecl AI_SteerHuman(HumanAI *ai)` | `r2` @ `0x00451540`, BN `00451540-AI_SteerHuman.c` |
| `0x004517A0` | `AI_MoveToNode_3` | **`AI_MoveToNode_3`** (queries `AIGraph` path, builds corridor waypoints in `ai + 0xE0`, and runs `AI_SteerHuman`) | `int __cdecl AI_MoveToNode_3(HumanAI *ai, int targetNodeId, double *targetPos, char allowStop)` | `r2` @ `0x004517A0`, BN `004517A0-AI_MoveToNode_3.c` |
| `0x00489750` | `Car_DetectionSweep` | **Misnamed in BN**: Actually **`AISensor_DetectionSweep`** (4-tick modulo sight sweep across all targetable entities in `g_5c8ac0`) | `void * __cdecl AISensor_DetectionSweep(void *sensor_15f8, double *eyeSnap_3a30, void *ownerHuman, int ownerFaction)` | `r2` @ `0x00489750`, BN `00489750-Car_DetectionSweep.c` |
| `0x004898D0` | `AI_TestCandidate` | **`AI_TestCandidate`** (runs periodic `AI_BuildEyeSnapshot` cone check and `AI_LineOfSight` raycast for one candidate entity) | `int __cdecl AI_TestCandidate(void *sensor, void *candSlot, double *targetPos, double *eyeSnap, void *ownerHuman)` | `r2` @ `0x004898D0`, BN `004898D0-AI_TestCandidate.c` |
| `0x00489960` | `AI_BuildEyeSnapshot` | **`AI_CheckPointInViewCones`** (tests candidate 3D position against primary and secondary view cones in `eyeSnap`) | `int __cdecl AI_BuildEyeSnapshot(double *eyeSnap, double *targetPos)` | `r2` @ `0x00489960`, BN `00489960-AI_BuildEyeSnapshot.c` |
| `0x00489B20` | `AI_LineOfSight` | **`AI_LineOfSight`** (casts world ray between AI eye and target; returns `1` if clear or hit fraction `>= 0.79f`) | `int __cdecl AI_LineOfSight(void *ownerHuman, double *eyePos, void *targetEntity, double *targetPos)` | `r2` @ `0x00489B20`, BN `00489B20-AI_LineOfSight.c` |
| `0x0048A920` | `FX_SmokeEmit_17` | **Misnamed in BN**: Actually **`Combat_UpdateTargetTracking`** (updates target visibility, last-known position `ai + 0x3E88`, target node `ai + 0x3DEC`, and enemy spotting voice barks) | `void * __cdecl Combat_UpdateTargetTracking(HumanAI *ai, void *combatState)` | `r2` @ `0x0048A920`, BN `0048A920-FX_SmokeEmit_17.c` |
| `0x0048ABA0` | `Patrol_CombatStart` | **`Combat_InitAction`** (initializes `AIAction_Combat` state and selects mobile/stationary combat handler) | `void * __cdecl Patrol_CombatStart(HumanAI *ai, void *actionNode)` | `r2` @ `0x0048ABA0`, BN `0048ABA0-Patrol_CombatStart.c` |
| `0x0048B9C0` | `Combat_BeginBurst` | **`Combat_BeginBurst`** (computes burst shot count `ai + 0x3E54` and distance-scaled AI damage/accuracy multiplier `human + 0x4D4`) | `uint32_t __cdecl Combat_BeginBurst(HumanAI *ai, int halfDamageFlag)` | `r2` @ `0x0048B9C0`, BN `0048B9C0-Combat_BeginBurst.c` |
| `0x0048BC00` | `CombatStand` | **`CombatStand`** (main standing combat tick: dispatches roll, reload, grenade throw, `StandFire`, `RePosition`, `Combat_Follow`, or `LookForTarget`) | `void * __cdecl CombatStand(HumanAI *ai, int32_t *actionNode)` | `r2` @ `0x0048BC00`, BN `0048BC00-CombatStand.c` |
| `0x0048BFD0` | `FX_FragmentSimulate_19` | **Misnamed in BN**: Actually **`CombatStand_SelectSubAction`** (decides between firing, reloading, throwing grenade, repositioning, pursuing via `Combat_Follow`, or `LookForTarget`) | `int __cdecl CombatStand_SelectSubAction(HumanAI *ai, void *combatState)` | `r2` @ `0x0048BFD0`, BN `0048BFD0-FX_FragmentSimulate_19.c` |
| `0x0048C860` | `Combat_Follow` | **`Combat_Follow`** (pursuit handler: tracks target node `ai + 0x3DE8`, paths via `AI_MoveToNode_3`, and fires on the move when target is within $\cos\theta > 0.96$) | `void * __cdecl Combat_Follow(HumanAI *ai, int32_t *actionNode)` | `r2` @ `0x0048C860`, BN `0048C860-Combat_Follow.c` |
| `0x0048E920` | `Patrol_Tick` | **`Patrol_Tick`** (executes `PatrolPath` commands: `0=StandAction`, `1=Delay`, `2=WalkTo`, `3=RunTo`, `4=Crouch`, `5=LookAtNode`, `7=End`) | `void * __cdecl Patrol_Tick(HumanAI *ai, int32_t *actionNode)` | `r2` @ `0x0048E920`, BN `0048E920-Patrol_Tick.c` |

---

## 4. `HumanAI` State Fields, Thresholds & Timing Constants

### 4.1 Key `HumanAI` Object Offsets (Initialized in `0x0044F060` & Updated in `0x0044F410`)

| Offset (Bytes) | Dword Index | Type | Field Name | Verified Role & Default Value |
| :--- | :--- | :--- | :--- | :--- |
| `+0x0014` | `flagP[5]` | `Human *` | `controlledHuman` | Pointer to the physical `Human` entity controlled by this `HumanAI` |
| `+0x0020..0x0034` | `flagP[8..13]` | `double[3]` | `worldPos` | AI feet/body 3D world position (`x, y, z` in world units, `1m = 4096.0`) |
| `+0x0050..0x0074` | `flagP[20..29]` | `float[9]` | `bodyMatrix3x3` | AI body 3x3 orientation matrix |
| `+0x00A0` | `flagP[40..41]` | `double` | `viewAlphaRad` | Primary vertical half-FOV angle in radians (default `0x3FE921FB60000000` = $\pi/4 = 45^\circ$; set via `AIFunction_SetViewAlpha` @ `0x0044DD30`) |
| `+0x00A8` | `flagP[42..43]` | `double` | `viewGammaRad` | Primary horizontal half-FOV angle in radians (default `0x3FEBECDE60000000` $\approx 0.87266\text{ rad} = 50^\circ$; set via `AIFunction_SetViewGamma` @ `0x0044DD90`) |
| `+0x00B0` | `flagP[44..45]` | `double` | `viewLengthUnits` | Normal primary sight distance in world units (default `0x40FE000000000000` = `122,880.0` units = **`30.0 meters`**; set via `AIFunction_SetViewLength` @ `0x0044DC40`) |
| `+0x00B8` | `flagP[46..47]` | `double` | `alarmViewLengthUnits` | Alarm-active primary sight distance in world units (default `122,880.0` units = **`30.0 meters`**; set via `AIFunction_SetAlarmViewLength` @ `0x0044DCD0`) |
| `+0x00C0` | `flagP[48..49]` | `double` | `secViewAlphaRad` | Secondary (peripheral) vertical half-FOV angle in radians (default $\pi/4 = 45^\circ$; set via `0x0044DEE0`) |
| `+0x00C8` | `flagP[50..51]` | `double` | `secViewGammaRad` | Secondary (peripheral) horizontal half-FOV angle in radians (default `0x3FF6571860000000` $\approx 1.39626\text{ rad} = 80^\circ$; set via `0x0044DF40`) |
| `+0x00D0` | `flagP[52..53]` | `double` | `secViewLengthUnits` | Normal secondary sight distance in world units (default `0x40E4000000000000` = `40,960.0` units = **`10.0 meters`**; set via `0x0044DDF0`) |
| `+0x00D8` | `flagP[54..55]` | `double` | `secAlarmViewLenUnits` | Alarm-active secondary sight distance in world units (default `40,960.0` units = **`10.0 meters`**; set via `0x0044DE80`) |
| `+0x00E0` | `flagP[56]` | `ListHeader` | `waypointQueue` | Active pathfinding waypoint list populated by `AI_MoveToNode_3` (`0x004517A0`) and consumed by `AI_SteerHuman` (`0x00451540`) |
| `+0x06F0..0x07FC` | `&flagP[0x1BC]` | `ListHeader[24]` | `eventQueuesByType` | 24 per-event-type linked lists (`AIEVENT_CREATE=0` .. `AIEVENT_FRIENDLYDETECTION=23`, each `12` bytes) |
| `+0x0810` | `flagP[0x204]` | `ListHeader` | `freeEventPool` | Pool of preallocated event nodes used by `HumanAI_EventQueued` (`0x00450520`) |
| `+0x081C` | `&flagP[0x207]` | `int32_t[24]` | `eventPriorityOrder` | Array of `AIEVENT_*` IDs ordered by priority (count at `+0x8DC` = `flagP[0x237]`) |
| `+0x08E4` | — | `uint8_t[24]` | `eventEnabledMask` | Per-event-type enable mask checked in `HumanAI_EventOffer` (`0x0045017C`) |
| `+0x08FC` | `flagP[0x23F]` | `ListHeader` | `actionStack` | Active AI action stack executed by `HumanAI_RunActions` (`0x0044FEC0`) |
| `+0x0908` | — | `ActionNode[32]` | `actionNodePool` | Fixed pool of `32` (`0x20`) action nodes (`0x30` bytes each; overflow triggers `"ActionStack full"` @ `0x00450DE0`) |
| `+0x14FC` | — | `PatrolCursor` | `patrolStack` | Stack of patrol path cursors (stride `0x1C` bytes, current index at `+0x1514`) |
| `+0x15F8` | `&flagP[0x57E]` | `AISensor` | `detectionSensor` | Candidate tracking sensor structure (`+0x1610` = `flagP[0x584]` enemy list, `+0x161C` = `flagP[0x587]` friendly/corpse list) |
| `+0x3A30..0x3AA0` | `&flagP[0xE8C]` | `EyeSnapshot` | `currentEyeSnapshot` | Per-tick eye position, head orientation matrix, and active view-cone parameters passed to `Car_DetectionSweep` |
| `+0x3AA8` | `flagP[0xEAA]` | `void *` | `combatTargetHandle` | Linked handle to current combat target (`+0x110` inside target struct holds target 3D position) |
| `+0x3ABA` | — | `uint8_t` | `isDeadHandled` | Set to `1` once `AIEVENT_DEAD` (`2`) is dispatched in `0x0044F410` |
| `+0x3ABB` | — | `uint8_t` | `isAlarmActive` | `1` when bound `AlarmControl` (`+0x3AC4`) is active; switches sight checks to alarm view lengths (`+0xB8`, `+0xD8`) |
| `+0x3B68` | `flagP[0xEDA]` | `int32_t` | `aiGraphId` | ID of bound `AIGraph` navigation mesh |
| `+0x3B6C` | `flagP[0xEDB]` | `AIGraph *` | `aiGraphPtr` | Resolved pointer to `AIGraph` instance (`0x004505D0`) |
| `+0x3C70` | `flagP[0xF1C]` | `Qvm *` | `aiQvmScript` | Loaded `MISSION:AI/%d.qsc` virtual machine instance |
| `+0x3C74..0x3CEC` | `&flagP[0xF1D]` | `float[30]` | `controlBlock` | Per-tick control channels zeroed at start of `HumanAI_Setup` (`+0x3C74` pitch delta, `+0x3C78` yaw delta, `+0x3C7C` stand/crouch, `+0x3C84` forward walk/run, `+0x3C88` fire trigger) and sent to `Human` via event `0x00460AD0` |
| `+0x3D50` | `flagP[0xF54]` | `int32_t` | `lostSightGiveUpTicks` | Ticks without line-of-sight before transitioning from `Combat_Follow` to `LookForTarget` (`0x0048BFD0`) |
| `+0x3D68` | — | `float` | `minDistDamageMult` | AI damage/accuracy multiplier at point-blank range (`0x0048B9C0`) |
| `+0x3D6C` | — | `float` | `maxDistDamageMult` | AI damage/accuracy multiplier at max view length (`+0xB0`, `0x0048B9C0`) |
| `+0x3DE4` | `flagP[0xF79]` | `void *` | `activeTargetCand` | Active tracked candidate slot in `CombatStand` / `Combat_Follow` (`+0x29` = `isVisible`) |
| `+0x3DE8` | `flagP[0xF7A]` | `int32_t` | `pursuitTargetNodeId` | `AIGraph` node ID currently being pursued in `Combat_Follow` (`0x0048C860`) |
| `+0x3DEC` | `flagP[0xF7B]` | `int32_t` | `lastSeenTargetNodeId` | `AIGraph` node ID closest to target (`0x0048A920`); when this changes, sets `repathNeeded_3df0` (`flagP[0xF7C] = 1`) |
| `+0x3E2C` | `flagP[0xF8B]` | `int32_t` | `currentGraphNodeId` | `AIGraph` node ID the AI currently occupies |
| `+0x3E88..0x3E9C` | `&flagP[0xFA2]` | `double[3]` | `lastKnownTargetPos` | Last known 3D world position of the enemy target (updated in `0x0048A920` when visible or when gunshot/impact events are active) |
| `+0x3EC8` | — | `float` | `maxYawRateRadPerTick` | Max horizontal turn rate per tick (default `0x3CD4629B` = `0.025925925f` rad/tick $\approx 1.485^\circ$/tick = $44.56^\circ$/s) |
| `+0x3ECC` | — | `float` | `maxPitchRateRadPerTick` | Max vertical turn rate per tick (default `0x3CD4629B` = `0.025925925f` rad/tick) |

---

### 4.2 Verified Sensory Thresholds & Timing Constants

| Constant / Expression | Value | Location / Address | Verified Meaning |
| :--- | :--- | :--- | :--- |
| World Units per Meter | `4096.0` (`0x40B0000000000000`) | `0x0044DC40`, `0x0044DDF0` | Multiplies script view distances (meters) into engine world units |
| Degrees to Radians | `0.0174532924f` (`0x3C8EFA35`) | `0x0044DD30`, `0x0044DD90` | Multiplies script `ViewAlpha` / `ViewGamma` (degrees) into radians |
| `HUMANAI_DETECTIONEVENT_GUNSHOT_RANGE` | `0x1E000` (`122,880` units = **`30.0 m`**) | `0x0044EEB0` | Default un-silenced gunshot detection radius constant registered for scripts |
| `HUMANAI_DETECTIONEVENT_GUNSHOT_SILENCED_RANGE` | `0x1000` (`4,096` units = **`1.0 m`**) | `0x0044EEB0` | Default silenced gunshot detection radius constant registered for scripts |
| Sight Sweep Modulo | `Frames_GetUpdateCounter() & 3` | `0x0048975A` (`Car_DetectionSweep`) | Each AI's sight sweep runs once every **4 ticks** (`7.5 Hz` at 30 FPS), staggered by `sensor->tickSlot_0c` |
| LOS Raycast Pass Fraction | `0.790000021f` (`0x3F4A3D71`) | `0x00489B71` (`0x00534230` in `AI_LineOfSight`) | If the LOS raycast from AI eye to target hits an obstacle at fraction $t \ge 0.79$, `AI_LineOfSight` still returns `1` (visible), allowing partial visibility near cover/target bounds |
| Action Reaction Delay | `(rand01() + 1.0f) * 0.2f * 30.0f` | `0x00450E70`, `0x00450F10` | Newly pushed actions receive a `6` to `12` tick (`0.2s–0.4s`) countdown delay in `actionNode[3]` |
| Waypoint Arrival Threshold | `1228.8` world units (**`0.3 meters`**) | `0x00451540` (`AI_SteerHuman`) | Waypoint is popped when $|dx_{\text{local}}| \le 1228.8$ and $|dy_{\text{local}}| \le 1228.8$ |
| Pursuit Fire-On-The-Move Aim Gate | $\cos\theta \ge 0.96$ ($\theta \le 16.26^\circ$) | `0x0048C9E5` (`Combat_Follow`) | While chasing in `Combat_Follow`, if target is visible and dot product of AI forward vector with direction to target is $\ge 0.96$, sets `ai->fireTrigger_3c8c` (`a1[0xF23] = 1.0f`) |
| Lost-Sight Repath Cadence | `(lostTicks + 1) % 30 > 15` | `0x0048C04C` (`FX_FragmentSimulate_19`) | When target is not visible (`+0x29 == 0`), attempts `FX_FindfreepositionStac` (`0x0048B050`) during the second half of every 30-tick (1.0s) window to pick a pursuit/vantage node (`return 5` -> `CombatFollow_Install`) |
| Combat Target Node Refresh | `counter % 20 == 0` (`20` ticks = `0.67s`) | `0x0048AA8B` (`FX_SmokeEmit_17`) | Re-evaluates tactical node occupation (`0x0048AB10`) once every 20 ticks |
| Enemy Spotted Voice Bark Cooldown | `0x5A` (`90` ticks = **`3.0 seconds`**) | `0x0048A9B2` (`FX_SmokeEmit_17`) | Global cooldown (`g_5416cc`) between AI spotting voice barks (`g_5416d0` array of 6 sound IDs) |

---

## 5. Detailed Verification of Key Subsystems

### 5.1 Dual View-Cone Geometry (`AI_BuildEyeSnapshot` @ `0x00489960` & `AI_TestViewCones` @ `0x004502F0`)
Cross-checked between `r2` (`0x00489960–0x00489B15`, `0x004502F0–0x00450510`, `0x004148F0`, `0x00414950`) and `Binary Ninja`:
1. Computes world delta $\mathbf{d} = \mathbf{p}_{\text{target}} - \mathbf{p}_{\text{eye}}$ and transforms $\mathbf{d}$ into the AI head's local coordinate frame $(x_{\text{local}}, y_{\text{local}}, z_{\text{local}})$ using the 3x3 head matrix (`eyeSnap + 0x18..0x38` in `0x00489960`, or `ai + 0x58..0x78` in `0x004502F0`).
2. Computes Euclidean distance $D = \|\mathbf{d}\|$ via `0x004B3130` (`Sys_OpenFileStream_11`).
3. Computes absolute vertical elevation angle $|\alpha| = |\text{Vec3D\_ComputePitchAngle}(x_{\text{local}}, y_{\text{local}}, z_{\text{local}})|$ (`0x004148F0`) and absolute horizontal azimuth angle $|\gamma| = |\text{Vec3D\_ComputeYawAngle}(x_{\text{local}}, y_{\text{local}}, z_{\text{local}})|$ (`0x00414950`) relative to the $+Y_{\text{local}}$ forward axis.
4. Returns `1` (inside view frustum) if **either**:
   - **Primary (Long-Range Narrow) Cone**: $D \le L_{\text{primary}}$ (`30m` default) **and** $|\alpha| < \alpha_{\text{primary}}$ (`45°` default) **and** $|\gamma| < \gamma_{\text{primary}}$ (`50°` default), **or**
   - **Secondary (Short-Range Peripheral) Cone**: $L_{\text{secondary}} > 0$ **and** $D \le L_{\text{secondary}}$ (`10m` default) **and** $|\alpha| < \alpha_{\text{secondary}}$ (`45°` default) **and** $|\gamma| < \gamma_{\text{secondary}}$ (`80°` default).

### 5.2 Auditory & Sensory Event Filtering (`HumanAI_EventOffer` @ `0x00450110`)
Cross-checked between `r2` (`0x00450110–0x004502E5`) and `Binary Ninja` (`00450110-HumanAI_EventOffer.c`):
- When `Gun_FireMessage` (`0x00479780`) or another game system calls `AI_EventBroadcast` (`0x00450CE0`), each `HumanAI` receives an `AIEventOffer` struct (`+0x00` `eventType`, `+0x04` `factionOrSubType`, `+0x08` `filterFlags`, `+0x0C` `radius`, `+0x10` `posPtr`, `+0x14` `instigatorEntity`, `+0x18` `sourceEntity`).
- `HumanAI_EventOffer` checks that the AI is alive (`!ai->isDead_3aba` and `0x00463190(ai->human_14) != 0`), has a loaded QVM script (`ai->qvm_3c70 != NULL`), is not the source of the event (`human != offer->source_18 && human != offer->instigator_14`), and has `eventType` enabled in `ai->eventEnabledMask_8e4[eventType]`.
- It then evaluates `offer->filterFlags_08` (`ebx` in `r2`):
  - `filterFlags & 0x02`: Calls `0x004B32B0` (`Sys_DispatchOpcode_11`) to compute Euclidean distance between `offer->pos_10` and `ai->worldPos_20`; rejects the event if `distance > offer->radius_0c`.
  - `filterFlags & 0x01`: Calls `AI_TestViewCones` (`0x004502F0`); rejects the event if `offer->pos_10` is outside the AI's active view cones.
  - `filterFlags & 0x04`: Verifies `offer->source_18` is a `Human`-derived task.
  - `filterFlags & 0x0C` / `0x14`: Verifies whether `offer->source_18` is alive or dead (`0x004631B0`).
  - `filterFlags & 0x24` / `0x44`: Verifies whether `offer->faction_04` matches or differs from `ai->human_14`'s faction (`0x00463210`).

### 5.3 Combat Decision & Pursuit Loop (`CombatStand` @ `0x0048BC00`, `FX_FragmentSimulate_19` @ `0x0048BFD0`, `Combat_Follow` @ `0x0048C860`)
Cross-checked between `r2` and `Binary Ninja`:
1. Every tick in `CombatStand` (`0x0048BC00`), `FX_SmokeEmit_17` (`0x0048A920`) refreshes `ai->activeTargetCand_3de4` (`srcS[0xF79]`).
   - If the target is currently visible (`*(cand + 0x29) != 0`) **or** if the AI has active combat/sound events in `ai->eventCounts_890..8CC` (`srcS[0x224..0x233]` covering taking damage, gunshot, explosion, etc.), it updates `ai->lastKnownTargetPos_3e88` (`ai + 0x3E88`) to the target's actual position (`0x00451230` `AI_UpdatePatrol_3`).
   - It finds the `AIGraph` node closest to `lastKnownTargetPos` via `0x004523A0` (`AI_SelectTarget_4`). If that node differs from `ai->lastSeenTargetNodeId_3dec` (`srcS[0xF7B]`), it sets `ai->repathNeeded_3df0 = 1` (`srcS[0xF7C] = 1`).
2. `FX_FragmentSimulate_19` (`0x0048BFD0`) returns an integer decision code (`valA7 = ret + 1` in `CombatStand`):
   - **Target Not Visible (`*(cand + 0x29) == 0`)**:
     - Increments `combatState->lostSightTicks_18` (`ctxB + 1`).
     - If `(ctxB + 1) % 30 > 15`, searches for a free tactical graph node near the target via `FX_FindfreepositionStac` (`0x0048B050`). If found (`!= currentGraphNodeId_3e2c`), sets `ai->pursuitTargetNodeId_3de8 = *node` and returns `5` (`valA7 = 6` -> installs `Combat_Follow` @ `0x0048C860`!).
     - Otherwise, if `lostSightTicks_18 <= ai->lostSightGiveUpTicks_3d50`, returns `6` (`valA7 = 7` -> `LookForTarget` @ `0x0048CAB0`, which turns the AI toward `lastKnownTargetPos` at `0.0349065848 rad/tick` = $2^\circ$/tick). Once `lostSightTicks_18 > lostSightGiveUpTicks_3d50`, returns `7` (`valA7 = 8` -> exits sub-state).
   - **Target Visible (`*(cand + 0x29) != 0`)**:
     - If distance `< ai->closeCombatDist_3db0`: returns `3` (`valA7 = 4` -> `CloseCombat` @ `0x0048DBB0`).
     - If magazine is empty (`!FX_ExplosionSpawn_19(ai)`): returns `0` (`valA7 = 1` -> `Combat_Reload` @ `0x0048DB10`).
     - If distance `>= ai->maxCombatStandDist_3dc0`: finds a closer graph node via `FX_FindfreepositionStac` and returns `5` (`valA7 = 6` -> `Combat_Follow` @ `0x0048C860`).
     - If distance is within grenade window `[ai->grenadeMinDist_3d90, ai->grenadeMaxDist_3d94]` and AI has grenades (`+0x3DFD != 0`) and `rand01() <= ai->grenadeProb_3d88`: returns `1` (`valA7 = 2` -> `FX_StandThrowingGrenade` @ `0x0048DBF0`).
     - Otherwise returns `2` (`valA7 = 3` -> calls `Combat_BeginBurst` @ `0x0048B9C0` and enters `StandFire` @ `0x0048D8B0`).
3. In `Combat_Follow` (`0x0048C860`):
   - Sets run speed channel `ai->runChannel_3cdc` (`a1[0xF37] = 1.0f`).
   - If `ai->repathNeeded_3df0` (`a1[0xF7C]`) is set (target moved to a new graph node), calls `FX_FindfreepositionStac` (`0x0048B050`) to update `ai->pursuitTargetNodeId_3de8` (`a1[0xF7A]`).
   - Calls `AI_MoveToNode_3(ai, ai->pursuitTargetNodeId_3de8, &ai->pursuitPos_3eb0, 0)` (`0x004517A0`) to steer along the `AIGraph` path.
   - While running, if the target is visible (`*(cand + 0x29) != 0`) and the dot product between the AI's forward vector and the normalized vector to the target is $\ge 0.96$ (`0x0048C9E5`), sets `ai->fireTrigger_3c8c` (`a1[0xF23] = 1.0f`) to fire while pursuing!

---

## 6. Unresolved Questions & Gaps Preventing a 100% Faithful Port

1. **Per-Archetype `AIConfig` Stat Values (`AITYPE_PATROL_AK`, `AITYPE_SNIPER`, etc.)**:
   - **Confirmed Fact**: `HumanAI_OnEvent` (`0x004505D0`) calls `AIConfig_NoHumanaiconfigTaskF` (`0x0044C3B0`) to copy archetype parameters (such as `minDistDamageMult` `+0x3D68`, `maxDistDamageMult` `+0x3D6C`, `burstFraction` `+0x3D70/+0x3D74`, `lostSightGiveUpTicks` `+0x3D50`, `closeCombatDist` `+0x3DB0`, `maxCombatStandDist` `+0x3DC0`, and grenade ranges `+0x3D90/+0x3D94`) from the level's `HumanAIConfig` task into `HumanAI + 0x3D40..0x3DF0`.
   - **Gap**: Because those archetype tables are loaded from mission `.qvm` scripts at runtime, a faithful port requires either executing the mission `.qvm` init scripts or extracting the `HumanAIConfig` table values per mission.
2. **Per-Agent `.qsc` Script Logic (`MISSION:AI/%d.qsc`)**:
   - **Confirmed Fact**: `HumanAI_EventDispatch` (`0x0044FC90`) does not hardcode which `AIAction_*` is chosen for `AIEVENT_GUNSHOT` (`16`) vs. `AIEVENT_ENEMYDETECTION` (`22`) — it executes `Qvm_Execute(ai->qvmScript_3c70)` (`0x004B6690`), and the bytecode in `MISSION:AI/%d.qsc` decides whether to call `AIAction_LookAtEvent`, `AIAction_MoveToEvent`, `AIAction_SetCombat`, `AIAction_Combat`, or `AIAction_RunAlarm`.
   - **Gap**: Porting the C native handlers alone is insufficient without either a working QVM bytecode interpreter (`0x004B6690`) or a decompiled C translation of each mission's `MISSION:AI/%d.qsc` scripts.
3. **20x20 Tactical Node Grid Occupation Weights (`0x00452B80–0x00452F00` & `0x0048B050`)**:
   - **Confirmed Fact**: When multiple AIs occupy or search an `AIGraph` node (`AI_TakeCover_4` @ `0x00452C60`, `AI_UpdateOrders_4` @ `0x00452D20`, `FX_FindfreepositionStac` @ `0x0048B050`), they stamp a kernel table starting at `0x0053CAA0` into a `20x20` (`0x14` stride) sub-grid on each node so squadmates spread out and do not stack on the exact same 3D point.
   - **Gap**: The exact integer kernel offsets and weights at `0x0053CAA0` (`r2` data table) must be copied verbatim into the port for identical multi-enemy positioning on graph nodes.

---

## 7. Implementation Boundary (Portable Gameplay Logic vs. Platform/Engine Dependencies)

### Portable Gameplay Logic (Direct C Port Candidates)
- **View-Cone & Spherical Angle Math (`0x004148F0`, `0x00414950`, `0x004502F0`, `0x00489960`)**: Pure 3D vector/matrix math, `acos` pitch/yaw extraction, and dual-cone threshold comparisons.
- **Sensor Time-Slicing & Candidate State Machine (`0x00489750`, `0x004898D0`)**: Pure 4-tick modulo scheduling and countdown timers (`+0x10` cone period, `+0x14` LOS period).
- **Event Offer Filtering & Priority Queueing (`0x00450110`, `0x00450520`, `0x0044FD50`, `0x00450E70`, `0x00450F10`)**: Pure bitmask filtering, linked-list priority queues, and `32`-slot action stack management.
- **Patrol Command Interpreter (`0x004536E0–0x00453880`, `0x0048E920`)**: Pure state-machine execution of `PatrolPath` opcodes (`0..7`).
- **Combat Sub-State Machine & Burst Accuracy Math (`0x0048A920`, `0x0048ABA0`, `0x0048B9C0`, `0x0048BC00`, `0x0048BFD0`, `0x0048C860`)**: Pure tactical decision tree, distance-interpolated damage multiplier (`+0x3D68..+0x3D6C`), and pursuit repathing triggers.
- **`AIGraph` Pathfinding & Human Steering (`0x00451540`, `0x004517A0`, `0x004520C0`, `0x00508FA0–0x00509F00`)**: Pure graph shortest-path search, corridor width offsetting, turn-rate clamping (`0.025925925 rad/tick`), and `0.3m` (`1228.8` unit) arrival checks.

### Platform / Engine Subsystem Dependencies (Require Adapter Layer)
- **World Raycast / Collision Engine (`0x004CE410` in `AI_LineOfSight` @ `0x00489B20`)**: Requires the level's static BSP/mesh and dynamic object raycast query returning hit fraction $t \in [0, 1]$.
- **QVM Bytecode Interpreter (`0x004B6690` `Qvm_Execute` & `0x004B5F40` `Qvm_Load`)**: Required to execute `MISSION:AI/%d.qsc` event handlers and `AIGraph` binary files (`MISSION:graphs/graph%d.dat` @ `0x00508FA0`).
- **Skeletal Bone & Animation Queries (`0x00489BE0`, `0x00453A30–0x00453F80`)**: Reading the AI head bone transform (`*(human + 0x70) + 0x2AC..0x2B8`) for eye position/orientation and driving upper-body head-look rotation (`0x00489BE0`) depend on the skeletal animation subsystem.
- **Audio Engine (`SoundSys_SetMasterVolume_7` in `0x0048A920`, `0x0048DF80`, `0x004538F0`)**: Playing spotting voice barks, scripted `AIAction_PlaySound` barks, and rain footsteps (`"walk_rain_%1d"`) depends on the sound subsystem.
