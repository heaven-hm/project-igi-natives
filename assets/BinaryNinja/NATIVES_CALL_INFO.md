# Project I.G.I. (2000) Game Natives Reference & File Formats Architecture Guide

> **Primary Code Location**: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/`  
> **Reference Binary**: Retail `IGI.EXE` (PE32 Intel 80386, Base `0x00400000`, 1,384,448 bytes)  
> **Purpose**: Exhaustive technical directory of all game file formats, engine subsystems, exact clean source paths, function signatures, argument definitions, and execution sequences for engine integration.  
> **Mandatory Rule**: No sample code blocks. This document provides precise file locations, technical format specifications, binary layouts, and calling interfaces.

---

## Master Subsystem Index

1. [3D Models & Hierarchical Geometry (.mef, .res, .mtp)](#1-3d-models--hierarchical-geometry-mef-res-mtp)
2. [Level Terrain & TerraForm Quadtree (.hmp, .ctr, .lmp, .bit, .tex, .qsc)](#2-level-terrain--terraform-quadtree-hmp-ctr-lmp-bit-tex-qsc)
3. [Player Locomotion, Stance & Movement Physics](#3-player-locomotion-stance--movement-physics)
4. [Rigid Body Dynamics & Mesh Collision Physics](#4-rigid-body-dynamics--mesh-collision-physics)
5. [AI Perception, Vision Cones, Hearing & Combat State Machine](#5-ai-perception-vision-cones-hearing--combat-state-machine)
6. [Skeletal Animation, Bone Hierarchy, Quaternions & Splines (.iff, .bef)](#6-skeletal-animation-bone-hierarchy-quaternions--splines-iff-bef)
7. [Visual Effects, Smoke, Particles, Tracers & Weather Dynamics](#7-visual-effects-smoke-particles-tracers--weather-dynamics)
8. [Vehicles, Flight Dynamics & Transports (Planes, Helicopters, APCs, Tanks, Trains, Wheels)](#8-vehicles-flight-dynamics--transports-planes-helicopters-apcs-tanks-trains-wheels)
9. [Audio Engine, DirectSound, 3D Spatializer & Positional Audio (.wav)](#9-audio-engine-directsound-3d-spatializer--positional-audio-wav)
10. [Cutscenes, Cinematics & FMV Movie Streaming (.bik, .avi)](#10-cutscenes-cinematics--fmv-movie-streaming-bik-avi)
11. [Subtitles, Typography, Glyphs & On-Screen Display (.fnt)](#11-subtitles-typography-glyphs--on-screen-display-fnt)
12. [Interactive World Entities & Triggers (Doors, Cabinets, Keypads, Switches, Terminals, Alarms)](#12-interactive-world-entities--triggers-doors-cabinets-keypads-switches-terminals-alarms)
13. [Weapons, Ballistics, Recoil Systems & Fire Timers](#13-weapons-ballistics-recoil-systems--fire-timers)
14. [Mission Scripts, Virtual Machine & Cooperative Task Engine (.qsc, .qvm, QTask)](#14-mission-scripts-virtual-machine--cooperative-task-engine-qsc-qvm-qtask)
15. [Level Streaming, Sublevels & State Persistence (.res, sublevel tasks)](#15-level-streaming-sublevels--state-persistence-res-sublevel-tasks)
16. [Master Function-to-Clean-Path Cross Reference Table](#16-master-function-to-clean-path-cross-reference-table)

---

## 1. 3D Models & Hierarchical Geometry (.mef, .res, .mtp)

### Formats & Binary Specifications
- **`.mef` (Model Engine File)**: Packed inside an ILFF container with format signature `HSEM` (`0x4D455348` backward). Contains polygonal meshes, vertex attributes, bone linkage matrices, attachment locators, and portal visibility hulls.
- **`.res` (Virtual Resource Container)**: High-speed packed asset archive with FourCC header `ILFF` / `IRES`. Used to package level models (`models/*.res`), textures (`textures/*.res`), and sounds (`sound/*.res`) into single contiguous files.
- **`.mtp` (Model-Texture Package Table)**: Relational mapping table linking object instances to material packages. Links `models/%s.res` with `textures/%s.res` and parses:
  - `VNAM` (`0x564E414D`): Vertex and joint name string table.
  - `INST` (`0x494E5354`): Object placement instance transformation matrices.
  - `GTT ` (`0x47545420`): Global Texture Table binding material indices to texture stages.
- **Key MEF FourCC Sub-Chunks**:
  - `MESH` (`0x4D455348`): Main mesh header. Verifies engine compatibility version float `0x3DCCCCCD` (`0.1f`).
  - `ATTA` (`0x41545441`): Attachment locators. Each entry is 68 bytes (3x4 transformation matrix + 32-bit child model identifier).
  - `XTRV` (`0x58545256`): Interleaved Direct3D vertex streams (Position `float3`, Normal `float3`, Diffuse `uint32`, UV Coordinates `float2`).
  - `DNER` (`0x444E4552`): Primitive render list (Triangle strips and indexed triangle lists).
  - `MVTX` (`0x4D565458`): Marker vertices for weapon muzzle flashes, shell ejection ports, and engine thrusters.
  - `PORT` (`0x504F5254`), `PTFC` (`0x50544643`), `PTVX` (`0x50545658`): Indoor portal convex cells, portal polygon faces, and boundary vertices for occlusion culling.

### Clean Native Locations
- **MEF Model Geometry Parser**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/dynobj/004CF390-DynObj_LocalModelsSMef.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/dynobj/004CF390-DynObj_LocalModelsSMef.h`
- **MTP Package Binder**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/dynobj/004CF080-DynObj_InsertHashItem_14.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/dynobj/004CF080-DynObj_InsertHashItem_14.h`
- **Model Texture Stream Parser**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/dynobj/004CF790-DynObj_LocalTexturesSTex.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/dynobj/004CF790-DynObj_LocalTexturesSTex.h`
- **Resource Stream Loader**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/resource/004B5F00-Resource_Load.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/resource/004B5F00-Resource_Load.h`
- **ILFF Container Parser**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/sys/004B5F80-Sys_Resource.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/sys/004B5F80-Sys_Resource.h`

### Function Signatures & Calling Interface
- **`DynObj_InsertHashItem_14` (`0x004CF080`)**:
  - Signature: `int32_t* DynObj_InsertHashItem_14(void* dynObjContext, int32_t packagePathString, int32_t flags);`
  - Parameters:
    - `dynObjContext`: Pointer to a 0x60-byte dynamic entity container.
    - `packagePathString`: Pointer to C-string representing package path (e.g., `"LOCAL:models/weapons/ak47"`).
    - `flags`: Mode bitmask (`1` = concurrently load paired texture archive).
  - Return: Pointer to initialized dynamic object hash node.
- **`DynObj_LocalModelsSMef` (`0x004CF390`)**:
  - Signature: `int32_t* DynObj_LocalModelsSMef(int32_t dynObjHandle);`
  - Parameters:
    - `dynObjHandle`: Integer handle / pointer to the entity container initialized above.
  - Return: Pointer to parsed model descriptor containing vertex buffers and bone nodes.

### Execution Sequence & How to Use
1. **Allocate Entity Context**: Allocate a 0x60-byte structure aligned to 4 bytes for the dynamic entity.
2. **Mount Model-Texture Package**: Call `DynObj_InsertHashItem_14` passing the entity buffer and virtual package path. The engine reads `models/%s.res` and `textures/%s.res`, resolves `INST` matrices, and maps texture IDs via `GTT `.
3. **Parse Mesh Geometry**: Call `DynObj_LocalModelsSMef` passing the entity handle. The parser verifies version `0x3DCCCCCD`, extracts the `XTRV` vertex array, sets up 68-byte `ATTA` attachment matrices, builds `DNER` triangle draw blocks, and registers `PORT` occlusion cells.
4. **Bind Texture Surfaces**: Call `DynObj_LocalTexturesSTex` to upload decoded texture mipmaps into Direct3D texture stage registers.

---

## 2. Level Terrain & TerraForm Quadtree (.hmp, .ctr, .lmp, .bit, .tex, .qsc)

### Formats & Binary Specifications
- **`.hmp` (Heightmap Grid)**: Continuous raster grid storing 16-bit elevation values. Grid spacing corresponds to terrain world units.
- **`.ctr` (Contour Mesh Index)**: Hierarchical quadtree contour representation defining terrain LOD transitions and patch edges.
- **`.lmp` (Lightmap Surface)**: Pre-baked static sunlight angles, ambient occlusion, and building ground contact shadows.
- **`.bit` (Occlusion Bitmask)**: Horizon and ridge visibility bitmask used for early CPU/GPU triangle occlusion culling.
- **`.tex` (Multi-Tile Loop Texture Archive)**: LoopEngine texture archive holding tiled material mipmaps (grass, rock, snow, mud, sand). Magic: `"LOOP"` (versions 7 and 9).
- **`.qsc` / `.qvm` (TerraForm Script)**: Level bytecode script initiating `CreateTerrainMaterial` and `CreateTerrainTileMap`.

### Clean Native Locations
- **Heightmap, Contour & Material Loader**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/dynobj/004C6240-DynObj_Createterrainmateria.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/dynobj/004C6240-DynObj_Createterrainmateria.h`
- **Terrain Texture & Lightmap Parser**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/dynobj/004C5F00-DynObj_ParseConfigFile_7.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/dynobj/004C5F00-DynObj_ParseConfigFile_7.h`
- **LoopEngine .TEX Tile Decoder**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/terrain/005175A0-Terrain_TextureFileNotOfRequ.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/terrain/005175A0-Terrain_TextureFileNotOfRequ.h`
- **Quadtree Terrain Renderer**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/terrain/00510010-Terrain_RenderQuadtree.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/terrain/00510010-Terrain_RenderQuadtree.h`
- **Heightmap Elevation Sampler**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/terrain/00512040-Terrain_SampleHeightmap.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/terrain/00512040-Terrain_SampleHeightmap.h`
- **Surface Normal Calculator**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/terrain/005122B0-Terrain_CalculateNormals.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/terrain/005122B0-Terrain_CalculateNormals.h`
- **Water Surface Simulator & Wave Generator**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/terrain/005116B0-Terrain_RenderWaterSurface.cpp`
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/terrain/00511500-Terrain_UpdateWaterWaves.cpp`

### Function Signatures & Calling Interface
- **`DynObj_ParseConfigFile_7` (`0x004C5F00`)**:
  - Signature: `int32_t DynObj_ParseConfigFile_7(void* terrainContext, int32_t basePathString);`
  - Loads `<basePath>.tex` and `<basePath>.lmp`, extracts texture blocks into `terrainContext + 0xDBC`, and initializes the 256-color palette ramp.
- **`DynObj_Createterrainmateria` (`0x004C6240`)**:
  - Signature: `int32_t DynObj_Createterrainmateria(void* terrainContext, int32_t basePathString);`
  - Appends `.bit` (offset `+0xDCC`), `.hmp` (offset `+0xDD0`), `.cmd` (offset `+0x08`), `.ctr` (offset `+0x0C`), and calls `Qvm_Load` / `Qvm_Execute` on the terrain script.
- **`Terrain_RenderQuadtree` (`0x00510010`)**:
  - Signature: `int32_t Terrain_RenderQuadtree(void* terrainContext);`
  - Evaluates camera distance LOD, clips terrain quadtree nodes against the frustum, and dispatches strip calls.

### Execution Sequence & How to Use
1. **Initialize Terrain Task**: Invoke `DiscardTerrain_Init` (`0x0052C0C0`) to register task descriptor `0x158` with the QTask engine.
2. **Mount Textures & Lightmaps**: Call `DynObj_ParseConfigFile_7` passing the terrain base path (e.g., `"LOCAL:levels/level01/terrain"`).
3. **Parse Elevation & Bitmasks**: Call `DynObj_Createterrainmateria` with the same base path. The engine maps the 16-bit `.hmp` elevation grid and quadtree contour indices.
4. **Bind World Streaming**: Call `DiscardTerrain_LoadParameters` to register spatial chunks into 4,096.0-unit world boundary buckets.
5. **Per-Frame Render**: Execute `Terrain_RenderQuadtree` followed by `Terrain_RenderWaterSurface`.

---

## 3. Player Locomotion, Stance & Movement Physics

### Formats & Discrete States
- **Stance Enumeration**:
  - `0`: Standing (Full sprint allowed, full height collision cylinder).
  - `1`: Crouching (Reduced speed factor `0.45f`, half collision cylinder).
  - `2`: Prone (Reduced speed factor `0.20f`, low-profile collision slab).
  - `3`: Ladder Climbing (Velocity constrained along vertical ladder spline).
  - `4`: Swimming / Water Traversal (Buoyancy physics applied).
- **Physical Quantities**: Horizontal velocity vector, vertical fall acceleration (`-9.81 m/s²`), stamina depletion (`0.0f` to `100.0f`), fall landing threshold (`-18.0 m/s`).

### Clean Native Locations
- **Ground Contact Raycaster**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/humanplayer/0045E120-HumanPlayer_CheckGround.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/humanplayer/0045E120-HumanPlayer_CheckGround.h`
- **Motion Physics & Input Integrator**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/humanplayer/0045DCB0-HumanPlayer_UpdateMotion.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/humanplayer/0045DCB0-HumanPlayer_UpdateMotion.h`
- **Fall Landing Impact Evaluator**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/human/0045C710-Human_FallLanding_0045c710.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/human/0045C710-Human_FallLanding_0045c710.h`
- **Health & Damage Subsystem**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/human/0045D650-Human_Damage_0045d650.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/human/0045D650-Human_Damage_0045d650.h`
- **Stamina & Player Attributes**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/humanplayer/0045BF00-HumanPlayer_LoadParameters_2.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/humanplayer/0045BF00-HumanPlayer_LoadParameters_2.h`

### Function Signatures & Calling Interface
- **`HumanPlayer_CheckGround` (`0x0045E120`)**:
  - Signature: `int32_t HumanPlayer_CheckGround(void* playerEntity);`
  - Performs ray-cylinder cast against terrain elevation and floor collision hulls. Returns `1` if grounded, `0` if airborne.
- **`HumanPlayer_UpdateMotion` (`0x0045DCB0`)**:
  - Signature: `int32_t HumanPlayer_UpdateMotion(void* playerEntity, float deltaSeconds);`
  - Integrates user keyboard/mouse movement, modifies acceleration based on stance speed multipliers, and decrements stamina if sprinting.
- **`Human_FallLanding_0045c710` (`0x0045C710`)**:
  - Signature: `int32_t Human_FallLanding_0045c710(void* playerEntity, float impactVelocity);`
  - Evaluates impact velocity on ground touchdown. If `impactVelocity < -18.0f`, triggers bone-crunch audio and calls `Human_Damage_0045d650`.

### Execution Sequence & How to Use
1. **Sample Inputs**: Poll keyboard movement vector and mouse look delta.
2. **Execute Ground Verification**: Call `HumanPlayer_CheckGround` to determine support status.
3. **Integrate Movement**: Call `HumanPlayer_UpdateMotion` passing delta time in seconds.
4. **Process Landing Events**: If transitioning from airborne to grounded, pass downward velocity into `Human_FallLanding_0045c710`.

---

## 4. Rigid Body Dynamics & Mesh Collision Physics

### Formats & Structural Roles
- **MEF Collision Sub-Chunks**:
  - `XTVC` (`0x58545643`): Collision vertices (Bounding boxes, convex hull points).
  - `ECFC` (`0x45434643`): Collision face planes and normal equations (`Ax + By + Cz + D = 0`).
- **Dynamic Physics Objects**: Movable crates, barrels, swinging lights, and explosive canisters subjected to gravity, terrain friction, and impact impulses.

### Clean Native Locations
- **Rigid Object Setup**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/physics/0042DA70-PhysicsObj_Setup.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/physics/0042DA70-PhysicsObj_Setup.h`
- **Rigid Body Simulation Step**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/physics/005098F0-Physics_SimulateRigidBody_9.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/physics/005098F0-Physics_SimulateRigidBody_9.h`
- **Hull Collision Detection**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/physics/00509910-Physics_CheckHullCollision_9.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/physics/00509910-Physics_CheckHullCollision_9.h`
- **External Impulse Application**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/physics/00509920-Physics_ApplyImpulse_9.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/physics/00509920-Physics_ApplyImpulse_9.h`
- **Force Accumulator & Gravity**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/physics/00509960-Physics_UpdateForces_9.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/physics/00509960-Physics_UpdateForces_9.h`
- **Constraint Solver**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/physics/00509A40-Physics_SolveConstraints_9.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/physics/00509A40-Physics_SolveConstraints_9.h`
- **Terrain Normal & Slope Interaction**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/physicsterrain/004F42D0-PhysicsTerrain_InvokeComputeNormals.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/physicsterrain/004F42D0-PhysicsTerrain_InvokeComputeNormals.h`

### Function Signatures & Calling Interface
- **`PhysicsObj_Setup` (`0x0042DA70`)**:
  - Signature: `int32_t PhysicsObj_Setup(void* bodyContext, void* collisionHullData, float mass);`
  - Initializes mass, center of mass, and inverse inertia tensor matrix.
- **`Physics_ApplyImpulse_9` (`0x00509920`)**:
  - Signature: `int32_t Physics_ApplyImpulse_9(void* bodyContext, float* impulseVector, float* hitPoint);`
  - Imparts linear impulse (`dp = J`) and angular impulse (`dL = r x J`).
- **`Physics_SimulateRigidBody_9` (`0x005098F0`)**:
  - Signature: `int32_t Physics_SimulateRigidBody_9(void* bodyContext, float deltaSeconds);`
  - Performs Verlet integration on linear and angular momentum.

### Execution Sequence & How to Use
1. **Initialize Rigid Entities**: Pass `XTVC` hull pointers to `PhysicsObj_Setup`.
2. **Apply Dynamic Impulses**: When bullet impacts or explosions hit the object, invoke `Physics_ApplyImpulse_9`.
3. **Step Physics Clock**: Call `Physics_UpdateForces_9` followed by `Physics_SimulateRigidBody_9` and `Physics_SolveConstraints_9`.

---

## 5. AI Perception, Vision Cones, Hearing & Combat State Machine

### Formats & Sensory Thresholds
- **Vision Cones**: 75-degree horizontal FOV, 60m daylight vision range, reduced to 15m in heavy fog or night missions.
- **Hearing Sensitivities**: Unsuppressed gunfire alerts within 120m radius; crouched footstep sounds alert within 3m; sprinting footstep sounds alert within 15m.
- **Alert States**:
  - `0` (Green): Relaxed / Patrol. Operates on waypoint spline graph.
  - `1` (Yellow): Suspicious / Investigation. Searches last heard sound location.
  - `2` (Red): Combat / Engaging. Takes cover, fires bursts, communicates to squad.

### Clean Native Locations
- **Sensory Cones & Line-of-Sight**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/humanai/00445580-HumanAI_SensoryCones.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/humanai/00445580-HumanAI_SensoryCones.h`
- **Alert State Machine**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/humanai/00446700-HumanAI_CheckAlertState.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/humanai/00446700-HumanAI_CheckAlertState.h`
- **Waypoint Patrol Navigation**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/humanai/00447100-HumanAI_UpdatePatrol.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/humanai/00447100-HumanAI_UpdatePatrol.h`
- **Combat Target Selection**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/combatstate/0044B200-CombatState_TargetPrioritization.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/combatstate/0044B200-CombatState_TargetPrioritization.h`

### Function Signatures & Calling Interface
- **`HumanAI_SensoryCones` (`0x00445580`)**:
  - Signature: `int32_t HumanAI_SensoryCones(void* aiActor, void* targetEntity);`
  - Checks angle between AI forward vector and target vector; casts visibility ray through occlusion portals and terrain. Returns `1` if detected.
- **`HumanAI_CheckAlertState` (`0x00446700`)**:
  - Signature: `int32_t HumanAI_CheckAlertState(void* aiActor);`
  - Evaluates sound events, body discoveries, and alarm statuses.
- **`HumanAI_UpdatePatrol` (`0x00447100`)**:
  - Signature: `int32_t HumanAI_UpdatePatrol(void* aiActor, float deltaSeconds);`
  - Advances AI actor toward current patrol waypoint; triggers idle pauses or look-around animations.

### Execution Sequence & How to Use
1. **Sense Evaluation**: Invoke `HumanAI_SensoryCones` against the player and squad members.
2. **State Transition**: Call `HumanAI_CheckAlertState` to update internal state from Green to Yellow or Red.
3. **Dispatch Behavior**:
   - If Green: Call `HumanAI_UpdatePatrol`.
   - If Red: Call `CombatState_TargetPrioritization` to orient weapon toward target and calculate firing burst timings.

---

## 6. Skeletal Animation, Bone Hierarchy, Quaternions & Splines (.iff, .bef)

### Formats & Binary Specifications
- **`.iff` (Interchange File Format / Animation Clip)**: Binary keyframe tracks containing timestamps, joint indices, 3D translation vectors, and 4D quaternion rotations (`qx, qy, qz, qw`).
- **`.bef` (Bone Element File)**: Text table defining skeletal bone linkages (Root, Pelvis, Spine, Neck, Head, Clavicle, UpperArm, Forearm, Hand, Thigh, Calf, Foot).
- **`REIH` & `MANB` Chunks**: Embedded inside character MEF models specifying rest-pose transformation matrices and 16-character bone identifier strings.

### Clean Native Locations
- **Spline Curve Evaluator**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/animspline/00509570-AnimSpline_InvokeLoadParameters.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/animspline/00509570-AnimSpline_InvokeLoadParameters.h`
- **Quaternion Slerp Interpolation**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/animspline/00509450-AnimSpline_Invoke27.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/animspline/00509450-AnimSpline_Invoke27.h`
- **Weapon Animation Updater**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/weapontype/00414E20-WeaponType_UpdateAnim.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/weapontype/00414E20-WeaponType_UpdateAnim.h`

### Function Signatures & Calling Interface
- **`AnimSpline_InvokeLoadParameters` (`0x00509570`)**:
  - Signature: `int32_t* AnimSpline_InvokeLoadParameters(void* splineContext, void* fileStream);`
  - Parses keyframe knot array, timestamps, and rotational splines from the `.iff` file stream.
- **`AnimSpline_Invoke27` (`0x00509450`)**:
  - Signature: `int32_t AnimSpline_Invoke27(float normalizedTime, float* outQuaternion, float* outTranslation);`
  - Performs spherical linear interpolation (Slerp) between adjacent quaternion keyframes.

### Execution Sequence & How to Use
1. **Load Animation Clip**: Mount `.iff` animation stream using `AnimSpline_InvokeLoadParameters`.
2. **Calculate Playback Phase**: Advance local playback time using clip frame rate.
3. **Interpolate Transforms**: Call `AnimSpline_Invoke27` to obtain bone rotations and translation offsets.
4. **Skinning Pass**: Traverse bone tree and concatenate parent-child matrices into final skinning arrays.

---

## 7. Visual Effects, Smoke, Particles, Tracers & Weather Dynamics

### Formats & Particle Types
- **Particle System Structure**: Emitter position, velocity vector, initial size, expansion rate, lifetime, alpha fade curve, and texture atlas index.
- **Particle Types**:
  - Smoke puffs (Grenades, vehicle exhaust, chimney plumes).
  - Weapon muzzle flash flares (3D billboards anchored to MEF `MVTX` marker vertices).
  - Bullet tracer ribbons (Cylindrical elongated triangle strips along bullet trajectories).
  - Blood spray & impact debris.
  - Rain & snow precipitation volumes.

### Clean Native Locations
- **Particle Physics Integrator**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/particle/00530210-Particle_UpdateParticlePhysics.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/particle/00530210-Particle_UpdateParticlePhysics.h`
- **Billboard 3D Sprite Renderer**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/particle/00530470-Particle_Render3DSprites.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/particle/00530470-Particle_Render3DSprites.h`
- **Muzzle Flash Flare Trigger**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/particle/005304B0-Particle_TriggerMuzzleFlash.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/particle/005304B0-Particle_TriggerMuzzleFlash.h`
- **Tracer Trail Ribbon Renderer**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/particle/00530520-Particle_RenderTrails.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/particle/00530520-Particle_RenderTrails.h`
- **Smoke Alpha Fade & Dissipation Engine**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/particle/00530580-Particle_FadeParticles.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/particle/00530580-Particle_FadeParticles.h`
- **Emitter Reset Subsystem**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/particle/005305F0-Particle_ResetEmitters.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/particle/005305F0-Particle_ResetEmitters.h`
- **Particle Emitter Dispatcher**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/particle/00530630-Particle_EmitParticles_2.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/particle/00530630-Particle_EmitParticles_2.h`
- **Weather & Environmental Atmosphere**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/weatherwatersky/00523450-WeatherWaterSky_InvokeLightmapsRes.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/weatherwatersky/00523450-WeatherWaterSky_InvokeLightmapsRes.h`

### Function Signatures & Calling Interface
- **`Particle_EmitParticles_2` (`0x00530630`)**:
  - Signature: `int32_t Particle_EmitParticles_2(int32_t emitterContext, int32_t count, int16_t particleType, int16_t* parameters);`
  - Spawns active particle batch into memory pools.
- **`Particle_UpdateParticlePhysics` (`0x00530210`)**:
  - Signature: `int32_t Particle_UpdateParticlePhysics(void* particlePool, float deltaSeconds);`
  - Updates particle coordinates with velocity, drag resistance, and gravity.
- **`Particle_Render3DSprites` (`0x00530470`)**:
  - Signature: `int32_t Particle_Render3DSprites(void* cameraMatrix);`
  - Generates camera-facing billboard quad polygons with additive or alpha blend modes.

### Execution Sequence & How to Use
1. **Trigger FX**: Call `Particle_EmitParticles_2` or `Particle_TriggerMuzzleFlash` when firing or explosion occurs.
2. **Step Frame Physics**: Call `Particle_UpdateParticlePhysics` every tick.
3. **Fade Dead Sprites**: Call `Particle_FadeParticles` to ramp alpha to zero.
4. **Draw Billboards**: Call `Particle_Render3DSprites` and `Particle_RenderTrails` in the transparent render pass.

---

## 8. Vehicles, Flight Dynamics & Transports (Planes, Helicopters, APCs, Tanks, Trains, Wheels)

### Formats & Physics Properties
- **Aircraft Mechanics**: Rotor lift calculations, torque balance, aerodynamic rudder/elevator surfaces, cockpit instruments, retractable landing gear hydraulics.
- **Ground Transports**: Multi-wheel suspension compression, track friction (APCs/Tanks), turret traverse angles, railway track followers (Train levels).

### Clean Native Locations
- **Aircraft Setup & Aerodynamics**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/vehicle/004304B0-Vehicle_InitPlane.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/vehicle/004304B0-Vehicle_InitPlane.h`
- **Helicopter Flight Dynamics**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/vehicle/00431560-Vehicle_InitHeli_2.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/vehicle/00431560-Vehicle_InitHeli_2.h`
- **Rudder & Aerodynamic Controls**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/vehicle/00430530-Vehicle_UpdateRudder.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/vehicle/00430530-Vehicle_UpdateRudder.h`
- **Cockpit View Matrix**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/vehicle/00430940-Vehicle_UpdateCockpit.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/vehicle/00430940-Vehicle_UpdateCockpit.h`
- **Landing Gear Hydraulics**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/vehicle/00431E30-Vehicle_DeployGear_2.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/vehicle/00431E30-Vehicle_DeployGear_2.h`
- **Wheel Suspension & Ground Contact**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/vehiclephysics/0042FEF0-VehiclePhysics_ProcessWheel.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/vehiclephysics/0042FEF0-VehiclePhysics_ProcessWheel.h`
- **Wheel Parameters Binder**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/wheel/00430000-Wheel_LoadParameters.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/wheel/00430000-Wheel_LoadParameters.h`
- **Train Track Traversal Subsystem**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/train/0042A100-Train_LoadParameters.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/train/0042A100-Train_LoadParameters.h`

### Function Signatures & Calling Interface
- **`Vehicle_InitPlane` (`0x004304B0`)**:
  - Signature: `long double Vehicle_InitPlane(float speed, int32_t vehicleHandle);`
  - Calculates aerodynamic drag and lift coefficients based on current airspeed.
- **`Vehicle_InitHeli_2` (`0x00431560`)**:
  - Signature: `int32_t* Vehicle_InitHeli_2(float rotorRpm);`
  - Initializes helicopter rotor lift curves and anti-torque tail rotor matrices.
- **`VehiclePhysics_ProcessWheel` (`0x0042FEF0`)**:
  - Signature: `int32_t* VehiclePhysics_ProcessWheel(int32_t* wheelContext);`
  - Casts suspension spring ray against ground terrain elevation to resolve wheel normal force.
- **`Train_LoadParameters` (`0x0042A100`)**:
  - Signature: `int32_t Train_LoadParameters(void* trainContext);`
  - Binds train carriage entity to the railway spline path.

### Execution Sequence & How to Use
1. **Initialize Vehicle**: Call `Vehicle_InitPlane`, `Vehicle_InitHeli_2`, or `Train_LoadParameters` during mission entity spawn.
2. **Poll Flight / Drive Controls**: Update throttle, pitch, roll, and yaw inputs.
3. **Execute Physics Simulation**: Call `VehiclePhysics_ProcessWheel` for each wheel, then update chassis transform.

---

## 9. Audio Engine, DirectSound, 3D Spatializer & Positional Audio (.wav)

### Formats & Audio Specs
- **`.wav` (RIFF Wave PCM)**: Standard uncompressed PCM audio (11.025 kHz, 22.05 kHz, 44.1 kHz, 16-bit mono for 3D positional effects, stereo for ambient music and cutscenes).
- **Positional Spatializer**: DirectSound3D hardware buffer spatializer calculating logarithmic distance attenuation, Doppler frequency shift, and stereo panning (`-1.0f` to `+1.0f`).

### Clean Native Locations
- **Play Sound Sample**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/soundsys/004E0810-SoundSys_PlaySoundSample.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/soundsys/004E0810-SoundSys_PlaySoundSample.h`
- **3D Positional Spatializer Update**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/soundsys/004E0830-SoundSys_Update3DPosition.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/soundsys/004E0830-SoundSys_Update3DPosition.h`
- **Master Volume Controls**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/soundsys/004E0CB0-SoundSys_SetMasterVolume.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/soundsys/004E0CB0-SoundSys_SetMasterVolume.h`
- **Frequency / Pitch Shift (Doppler)**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/soundsys/004E0CC0-SoundSys_SetFrequency.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/soundsys/004E0CC0-SoundSys_SetFrequency.h`
- **Stop Channel Voice**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/soundsys/004E0E20-SoundSys_StopSoundSample.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/soundsys/004E0E20-SoundSys_StopSoundSample.h`
- **Sound Definition Script Loader**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/soundsys/004E1130-SoundSys_LoadSoundDef.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/soundsys/004E1130-SoundSys_LoadSoundDef.h`

### Function Signatures & Calling Interface
- **`SoundSys_PlaySoundSample` (`0x004E0810`)**:
  - Signature: `int32_t SoundSys_PlaySoundSample(int32_t sampleId, float volumeGain, float stereoPan);`
  - Allocates hardware channel voice. Returns allocated channel ID integer.
- **`SoundSys_Update3DPosition` (`0x004E0830`)**:
  - Signature: `int32_t SoundSys_Update3DPosition(int32_t channelId, float posX, float posY, float posZ);`
  - Updates DirectSound3D buffer coordinates in world space.
- **`SoundSys_StopSoundSample` (`0x004E0E20`)**:
  - Signature: `int32_t SoundSys_StopSoundSample(int32_t channelId);`
  - Immediately releases voice channel back to the free mixer pool.

### Execution Sequence & How to Use
1. **Load Sound Catalog**: Call `SoundSys_LoadSoundDef` to map sound IDs to `.wav` files.
2. **Trigger Audio**: Invoke `SoundSys_PlaySoundSample` with sample ID and initial volume.
3. **Update 3D Coordinates**: For moving sources (bullets, vehicles, human voices), call `SoundSys_Update3DPosition` each frame.
4. **Halt Channel**: Call `SoundSys_StopSoundSample` upon sound completion.

---

## 10. Cutscenes, Cinematics & FMV Movie Streaming (.bik, .avi)

### Formats & Cinematic Modes
- **FMV Video Playback**: Full-motion video using Bink Video (`.bik`) and Video for Windows (`.avi`). Stored under virtual resource archive `"LANGUAGE:movies.res"`.
- **In-Engine Scripted Cinematics**: Real-time camera splines, actor choreography, and dialog synchronizers. Can be interrupted by pressing the Escape key.

### Clean Native Locations
- **Cutscene Task Creator**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/cutscene/004F4B00-CutScene_TaskCreate.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/cutscene/004F4B00-CutScene_TaskCreate.h`
- **Cutscene Parameters & Script Binder**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/cutscene/004F4EE0-CutScene_LoadParameters.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/cutscene/004F4EE0-CutScene_LoadParameters.h`
- **Cutscene Frame Sequencer**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/cutscene/004F55D0-CutScene_ApplyFrame.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/cutscene/004F55D0-CutScene_ApplyFrame.h`
- **Cutscene Tick Updater**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/cutscene/004F51D0-CutScene_TaskUpdate.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/cutscene/004F51D0-CutScene_TaskUpdate.h`
- **Cutscene Cleanup Subsystem**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/cutscene/004F6520-CutScene_Cleanup.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/cutscene/004F6520-CutScene_Cleanup.h`
- **Cutscene Interruption Key Handler (ESC Key)**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/levelflow/00488E00-LevelFlow_GetBreakCutSceneKey.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/levelflow/00488E00-LevelFlow_GetBreakCutSceneKey.h`
- **Movie Media Stream Registrar**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/moviesubtitle/004150E0-MovieSubtitle_RegisterMedia.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/moviesubtitle/004150E0-MovieSubtitle_RegisterMedia.h`

### Function Signatures & Calling Interface
- **`MovieSubtitle_RegisterMedia` (`0x004150E0`)**:
  - Signature: `int32_t MovieSubtitle_RegisterMedia(void* context, int32_t* movieParameters);`
  - Mounts `"LANGUAGE:movies.res"`, allocates DirectDraw streaming surface, and connects to the video presentation loop.
- **`CutScene_TaskCreate` (`0x004F4B00`)**:
  - Signature: `int32_t* CutScene_TaskCreate(void);`
  - Allocates cutscene task descriptor and registers it with the QTask cooperative scheduler.
- **`CutScene_ApplyFrame` (`0x004F55D0`)**:
  - Signature: `int32_t CutScene_ApplyFrame(void* cutsceneContext, float frameTime);`
  - Computes camera spline position, field-of-view, and dispatches actor triggers.
- **`LevelFlow_GetBreakCutSceneKey` (`0x00488E00`)**:
  - Signature: `int32_t LevelFlow_GetBreakCutSceneKey(int32_t keyContext);`
  - Returns `1` if the skip cutscene key was pressed.

### Execution Sequence & How to Use
1. **Mount Movie Container**: Call `MovieSubtitle_RegisterMedia` to open `"LANGUAGE:movies.res"`.
2. **Create Task**: Invoke `CutScene_TaskCreate` to register the cinematic sequencer.
3. **Execute Frame Evaluation**: Call `CutScene_ApplyFrame` each frame tick.
4. **Monitor Skip Input**: Check `LevelFlow_GetBreakCutSceneKey` to allow player skipping.
5. **Halt & Restore Controls**: Call `CutScene_Cleanup` to release cutscene camera and return player controls.

---

## 11. Subtitles, Typography, Glyphs & On-Screen Display (.fnt)

### Formats & Glyph Atlas Structure
- **`.fnt` (Bitmap Font Descriptor)**: Contains font header, character height, baseline offset, and per-glyph coordinates `[X, Y, Width, Height]`.
  - `font1.fnt`: Small HUD text (Objectives, ammo counters, subtitles).
  - `font4.fnt`: Large menu and title header font.
- **Subtitle Records**: Text string, display timestamp, screen X/Y anchor, RGBA color, and persistence duration float.

### Clean Native Locations
- **Font File Loader (`font1.fnt`, `font4.fnt`)**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/fx/00485FB0-FX_Font4Fnt.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/fx/00485FB0-FX_Font4Fnt.h`
- **Subtitle Font Registrar**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/moviesubtitle/004151E0-MovieSubtitle_RegisterFont.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/moviesubtitle/004151E0-MovieSubtitle_RegisterFont.h`
- **Subtitle Text & Timing Registrar**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/moviesubtitle/00415260-MovieSubtitle_RegisterText.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/moviesubtitle/00415260-MovieSubtitle_RegisterText.h`
- **On-Screen Display String Formatter**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/textbox/0041AE20-TextBox_LoadParameters.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/textbox/0041AE20-TextBox_LoadParameters.h`
- **Typewriter Text Effect Box**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/typewriterbox/0041A6D0-TypeWriterBox_LoadParameters.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/typewriterbox/0041A6D0-TypeWriterBox_LoadParameters.h`

### Function Signatures & Calling Interface
- **`FX_Font4Fnt` (`0x00485FB0`)**:
  - Signature: `void* FX_Font4Fnt(int32_t context, int32_t flag);`
  - Loads `font1.fnt` or `font4.fnt` into memory based on flag parameter.
- **`MovieSubtitle_RegisterFont` (`0x004151E0`)**:
  - Signature: `int32_t MovieSubtitle_RegisterFont(int32_t context, int32_t fontId, float scale);`
  - Registers the font face for subtitle rendering.
- **`MovieSubtitle_RegisterText` (`0x00415260`)**:
  - Signature: `int32_t MovieSubtitle_RegisterText(long double timeStart, long double timeEnd, long double posX, long double posY, long double scaleX, long double scaleY, int32_t fontId, char* textString, float alpha);`
  - Queues timed subtitle text entry for display.

### Execution Sequence & How to Use
1. **Load Font Asset**: Call `FX_Font4Fnt` to parse glyph metrics from the `.fnt` file.
2. **Register Subtitle Font**: Invoke `MovieSubtitle_RegisterFont`.
3. **Queue Dialogue Line**: Call `MovieSubtitle_RegisterText` passing start/end timestamps and text string.
4. **Render Subtitles**: Text is composited onto screen coordinates during HUD draw phase.

---

## 12. Interactive World Entities & Triggers (Doors, Cabinets, Keypads, Switches, Terminals, Alarms)

### Formats & Entity State Machine
- **Interactive Objects**: Sliding doors, swinging cabinet doors, breakable glass panels, security card readers, computer terminals, alarm bells.
- **States**: `0` = Closed/Locked, `1` = Opening, `2` = Open, `3` = Closing, `4` = Jammed/Alarm Triggered.

### Clean Native Locations
- **Door & Cabinet Interaction Pipeline**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/doorcabinet/004481F0-DoorCabinet_Invoke8_4481F0.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/doorcabinet/004481F0-DoorCabinet_Invoke8_4481F0.h`
- **Glass Shatter Trigger**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/doorcabinet/00449CB0-DoorCabinet_Invoke333333333Glassshatte.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/doorcabinet/00449CB0-DoorCabinet_Invoke333333333Glassshatte.h`
- **Door Movement Step Integrator**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/doorcabinet/0044C2C0-DoorCabinet_ProcessStep_44C2C0.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/doorcabinet/0044C2C0-DoorCabinet_ProcessStep_44C2C0.h`
- **Helicopter Door Subsystem**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/helidoor/00427240-HeliDoor_Init_2.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/helidoor/00427240-HeliDoor_Init_2.h`
- **Wall Switch Initialization & Setup**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/switch/00444BF0-Switch_Init.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/switch/00444BF0-Switch_Init.h`
  - Setup: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/switch/004450F0-Switch_Setup.cpp`
- **Switch Interaction Updater**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/switch/004452F0-Switch_Update.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/switch/004452F0-Switch_Update.h`
- **Computer Terminal System**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/terminal/00443680-Terminal_Init.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/terminal/00443680-Terminal_Init.h`
  - Update: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/terminal/00443B80-Terminal_Update.cpp`
- **Alarm Bell Trigger Subsystem**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/env/00447D50-Env_TriggerAlarm_9.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/env/00447D50-Env_TriggerAlarm_9.h`

### Function Signatures & Calling Interface
- **`DoorCabinet_Invoke333333333Glassshatte` (`0x00449CB0`)**:
  - Signature: `struct status_msg* DoorCabinet_Invoke333333333Glassshatte(struct status_msg* statusMsg, int32_t* doorContext);`
  - Spawns glass shards and shatters the window collision face when penetrated by bullet raycast.
- **`Switch_Update` (`0x004452F0`)**:
  - Signature: `int32_t Switch_Update(void* switchContext, int32_t playerInteractFlag);`
  - Toggles switch state and emits QVM event to open linked security gates.
- **`Env_TriggerAlarm_9` (`0x00447D50`)**:
  - Signature: `int32_t Env_TriggerAlarm_9(void* envContext, int32_t alarmZoneId);`
  - Starts rotating red beacon lights, sound sirens, and alerts all AI guards in the zone to Red alert.

### Execution Sequence & How to Use
1. **Initialize Objects**: Mount level entities via `Switch_Init`, `Terminal_Init`, or `DoorCabinet_Invoke8_4481F0`.
2. **Detect Player Use Key**: When player presses Action key within interaction radius, call `Switch_Update`.
3. **Handle Bullet Impacts**: If bullet strikes glass, call `DoorCabinet_Invoke333333333Glassshatte`.
4. **Trigger Alarm**: Call `Env_TriggerAlarm_9` when camera spots player or guard reaches alarm button.

---

## 13. Weapons, Ballistics, Recoil Systems & Fire Timers

### Formats & Weapon Descriptors
- **Weapon Descriptor Array**: Base address `0x00AFA6E0`, count at `0x00AFA7E0`. Each entry contains weapon ID, fire-rate cooldown, recoil kick pitch impulse, horizontal dispersion cone, magazine capacity, and muzzle velocity float.
- **Ballistics Raycast**: Straight-line raycast tested against terrain heightmap and entity collision hulls. Bullet penetration calculated through wood, glass, and thin sheet metal.

### Clean Native Locations
- **Weapon Count Getter**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/weapons/00413BB0-Weapons_CountGet.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/weapons/00413BB0-Weapons_CountGet.h`
- **Weapon Type Registrar**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/weapontype/00414810-WeaponType_RegisterType.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/weapontype/00414810-WeaponType_RegisterType.h`
- **Weapon Configuration Loader**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/weapontype/00414950-WeaponType_GetConfig.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/weapontype/00414950-WeaponType_GetConfig.h`
- **Weapon Cycle & Slot Switcher**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/weapontype/004149B0-WeaponType_CycleWeapon.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/weapontype/004149B0-WeaponType_CycleWeapon.h`
- **Weapon Gun Event Dispatcher**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/weapongun/0047D060-WeaponGun_InvokeOnEvent.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/weapongun/0047D060-WeaponGun_InvokeOnEvent.h`
- **Gun Firing & Recoil Tick Processor**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/weapongun/0047D320-WeaponGun_ProcessStep_47D320.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/weapongun/0047D320-WeaponGun_ProcessStep_47D320.h`

### Function Signatures & Calling Interface
- **`Weapons_CountGet` (`0x00413BB0`)**:
  - Signature: `int32_t Weapons_CountGet(void);`
  - Returns total registered weapons in the global weapon table.
- **`WeaponType_GetConfig` (`0x00414950`)**:
  - Signature: `int32_t WeaponType_GetConfig(int32_t weaponId);`
  - Returns pointer to weapon configuration struct.
- **`WeaponGun_ProcessStep_47D320` (`0x0047D320`)**:
  - Signature: `int32_t WeaponGun_ProcessStep_47D320(void* gunContext, float deltaSeconds);`
  - Updates recoil recovery springs and cools down the fire timer.

### Execution Sequence & How to Use
1. **Fetch Parameters**: Call `WeaponType_GetConfig` for active weapon ID.
2. **Trigger Fire**: When user presses Fire, check cooldown timer. If zero, spawn projectile raycast, decrement ammo, trigger muzzle flash, and apply pitch recoil impulse.
3. **Simulate Gun Recovery**: Call `WeaponGun_ProcessStep_47D320` every frame tick to damp pitch kick back to center.

---

## 14. Mission Scripts, Virtual Machine & Cooperative Task Engine (.qsc, .qvm, QTask)

### Formats & Virtual Machine Architecture
- **`.qsc` (Quake/Loop Script Source)**: Text source script declaring functions, triggers, patrols, and objectives.
- **`.qvm` (Quake/Loop Virtual Machine Bytecode)**: Compiled 32-bit stack bytecode.
- **`QTask`**: Cooperative multi-subsystem engine task scheduler. Tasks register initialization, per-frame tick, and cleanup function pointers.

### Clean Native Locations
- **QVM Bytecode Loader**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/qvm/004B80B0-Qvm_Load.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/qvm/004B80B0-Qvm_Load.h`
- **QSC Script Compiler**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/qsc/004B8410-Qsc_Compile.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/qsc/004B8410-Qsc_Compile.h`
- **QTask Task Scheduler & Creator**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/qtask/00401000-QTask_CreateTask.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/qtask/00401000-QTask_CreateTask.h`

### Function Signatures & Calling Interface
- **`Qvm_Load` (`0x004B80B0`)**:
  - Signature: `int32_t* Qvm_Load(void* scriptPath);`
  - Loads `.qvm` file into execution memory and verifies bytecode header.
- **`QTask_CreateTask` (`0x00401000`)**:
  - Signature: `int32_t* QTask_CreateTask(void* taskInitFunc, void* taskUpdateFunc, void* taskCleanupFunc, int32_t priority);`
  - Registers task in the engine cooperative scheduler queue.

### Execution Sequence & How to Use
1. **Compile or Load**: Call `Qvm_Load` passing virtual script path (e.g., `"LOCAL:levels/level01/mission.qvm"`).
2. **Register Tasks**: Pass update callbacks to `QTask_CreateTask`.
3. **Execute Main Loop**: Scheduler iterates active tasks each frame in priority order.

---

## 15. Level Streaming, Sublevels & State Persistence (.res, sublevel tasks)

### Formats & Persistence Model
- **Sublevels**: Modular mission blocks (`sublevel/*.res`) loaded on demand as the player moves across the large open terrain.
- **State Persistence**: Serializes player health, inventory, ammo counts, completed objectives, and destroyed structures.

### Clean Native Locations
- **SubLevel Parameter & Script Loader**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/sublevel/00488780-SubLevel_LoadParameters.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/sublevel/00488780-SubLevel_LoadParameters.h`
- **Level Flow Mission Starter**:
  - Implementation: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/levelflow/00488DF0-LevelFlow_StartMission_2.cpp`
  - Header: `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/levelflow/00488DF0-LevelFlow_StartMission_2.h`

### Function Signatures & Calling Interface
- **`SubLevel_LoadParameters` (`0x00488780`)**:
  - Signature: `int32_t* SubLevel_LoadParameters(void* context);`
  - Reads sublevel definition from file, loads embedded `.qvm`, registers `"Task_New"` script symbol context, executes script bytecode, and cleans up.

### Execution Sequence & How to Use
1. **Trigger Sublevel Stream**: When player crosses spatial boundary trigger, call `SubLevel_LoadParameters`.
2. **Execute Initialization**: Embedded script executes setup routines and instantiates sublevel entities.

---

## 16. Master Function-to-Clean-Path Cross Reference Table

| Subsystem | Function Name | Virtual Address | Exact Clean Implementation File |
|---|---|---|---|
| **3D Models** | `DynObj_InsertHashItem_14` | `0x004CF080` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/dynobj/004CF080-DynObj_InsertHashItem_14.cpp` |
| **3D Models** | `DynObj_LocalModelsSMef` | `0x004CF390` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/dynobj/004CF390-DynObj_LocalModelsSMef.cpp` |
| **3D Models** | `DynObj_LocalTexturesSTex` | `0x004CF790` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/dynobj/004CF790-DynObj_LocalTexturesSTex.cpp` |
| **Resources** | `Resource_Load` | `0x004B5F00` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/resource/004B5F00-Resource_Load.cpp` |
| **Terrain** | `DynObj_ParseConfigFile_7` | `0x004C5F00` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/dynobj/004C5F00-DynObj_ParseConfigFile_7.cpp` |
| **Terrain** | `DynObj_Createterrainmateria` | `0x004C6240` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/dynobj/004C6240-DynObj_Createterrainmateria.cpp` |
| **Terrain** | `Terrain_TextureFileNotOfRequ`| `0x005175A0` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/terrain/005175A0-Terrain_TextureFileNotOfRequ.cpp` |
| **Terrain** | `Terrain_RenderQuadtree` | `0x00510010` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/terrain/00510010-Terrain_RenderQuadtree.cpp` |
| **Terrain** | `Terrain_SampleHeightmap` | `0x00512040` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/terrain/00512040-Terrain_SampleHeightmap.cpp` |
| **Terrain** | `Terrain_CalculateNormals` | `0x005122B0` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/terrain/005122B0-Terrain_CalculateNormals.cpp` |
| **Terrain** | `Terrain_RenderWaterSurface` | `0x005116B0` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/terrain/005116B0-Terrain_RenderWaterSurface.cpp` |
| **Player** | `HumanPlayer_CheckGround` | `0x0045E120` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/humanplayer/0045E120-HumanPlayer_CheckGround.cpp` |
| **Player** | `HumanPlayer_UpdateMotion` | `0x0045DCB0` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/humanplayer/0045DCB0-HumanPlayer_UpdateMotion.cpp` |
| **Player** | `Human_FallLanding_0045c710`| `0x0045C710` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/human/0045C710-Human_FallLanding_0045c710.cpp` |
| **Player** | `Human_Damage_0045d650` | `0x0045D650` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/human/0045D650-Human_Damage_0045d650.cpp` |
| **Physics** | `PhysicsObj_Setup` | `0x0042DA70` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/physics/0042DA70-PhysicsObj_Setup.cpp` |
| **Physics** | `Physics_SimulateRigidBody_9`| `0x005098F0` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/physics/005098F0-Physics_SimulateRigidBody_9.cpp` |
| **Physics** | `Physics_CheckHullCollision_9`| `0x00509910` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/physics/00509910-Physics_CheckHullCollision_9.cpp` |
| **Physics** | `Physics_ApplyImpulse_9` | `0x00509920` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/physics/00509920-Physics_ApplyImpulse_9.cpp` |
| **AI** | `HumanAI_SensoryCones` | `0x00445580` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/humanai/00445580-HumanAI_SensoryCones.cpp` |
| **AI** | `HumanAI_CheckAlertState` | `0x00446700` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/humanai/00446700-HumanAI_CheckAlertState.cpp` |
| **AI** | `HumanAI_UpdatePatrol` | `0x00447100` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/humanai/00447100-HumanAI_UpdatePatrol.cpp` |
| **AI** | `CombatState_TargetPrioritization`| `0x0044B200` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/combatstate/0044B200-CombatState_TargetPrioritization.cpp` |
| **Animation** | `AnimSpline_InvokeLoadParameters`| `0x00509570` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/animspline/00509570-AnimSpline_InvokeLoadParameters.cpp` |
| **Animation** | `AnimSpline_Invoke27` | `0x00509450` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/animspline/00509450-AnimSpline_Invoke27.cpp` |
| **Particles** | `Particle_UpdateParticlePhysics`| `0x00530210` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/particle/00530210-Particle_UpdateParticlePhysics.cpp` |
| **Particles** | `Particle_Render3DSprites` | `0x00530470` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/particle/00530470-Particle_Render3DSprites.cpp` |
| **Particles** | `Particle_TriggerMuzzleFlash`| `0x005304B0` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/particle/005304B0-Particle_TriggerMuzzleFlash.cpp` |
| **Particles** | `Particle_RenderTrails` | `0x00530520` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/particle/00530520-Particle_RenderTrails.cpp` |
| **Particles** | `Particle_FadeParticles` | `0x00530580` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/particle/00530580-Particle_FadeParticles.cpp` |
| **Particles** | `Particle_EmitParticles_2` | `0x00530630` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/particle/00530630-Particle_EmitParticles_2.cpp` |
| **Vehicles** | `Vehicle_InitPlane` | `0x004304B0` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/vehicle/004304B0-Vehicle_InitPlane.cpp` |
| **Vehicles** | `Vehicle_InitHeli_2` | `0x00431560` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/vehicle/00431560-Vehicle_InitHeli_2.cpp` |
| **Vehicles** | `VehiclePhysics_ProcessWheel`| `0x0042FEF0` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/vehiclephysics/0042FEF0-VehiclePhysics_ProcessWheel.cpp` |
| **Vehicles** | `Train_LoadParameters` | `0x0042A100` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/train/0042A100-Train_LoadParameters.cpp` |
| **Sound** | `SoundSys_PlaySoundSample` | `0x004E0810` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/soundsys/004E0810-SoundSys_PlaySoundSample.cpp` |
| **Sound** | `SoundSys_Update3DPosition` | `0x004E0830` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/soundsys/004E0830-SoundSys_Update3DPosition.cpp` |
| **Sound** | `SoundSys_StopSoundSample` | `0x004E0E20` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/soundsys/004E0E20-SoundSys_StopSoundSample.cpp` |
| **Cutscenes** | `CutScene_TaskCreate` | `0x004F4B00` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/cutscene/004F4B00-CutScene_TaskCreate.cpp` |
| **Cutscenes** | `CutScene_ApplyFrame` | `0x004F55D0` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/cutscene/004F55D0-CutScene_ApplyFrame.cpp` |
| **Cutscenes** | `CutScene_Cleanup` | `0x004F6520` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/cutscene/004F6520-CutScene_Cleanup.cpp` |
| **Cutscenes** | `LevelFlow_GetBreakCutSceneKey`| `0x00488E00` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/levelflow/00488E00-LevelFlow_GetBreakCutSceneKey.cpp` |
| **Movies** | `MovieSubtitle_RegisterMedia`| `0x004150E0` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/moviesubtitle/004150E0-MovieSubtitle_RegisterMedia.cpp` |
| **Movies** | `MovieSubtitle_RegisterFont` | `0x004151E0` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/moviesubtitle/004151E0-MovieSubtitle_RegisterFont.cpp` |
| **Subtitles** | `MovieSubtitle_RegisterText` | `0x00415260` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/moviesubtitle/00415260-MovieSubtitle_RegisterText.cpp` |
| **Fonts** | `FX_Font4Fnt` | `0x00485FB0` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/fx/00485FB0-FX_Font4Fnt.cpp` |
| **Entities** | `DoorCabinet_Invoke333333333Glassshatte`| `0x00449CB0`| `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/doorcabinet/00449CB0-DoorCabinet_Invoke333333333Glassshatte.cpp` |
| **Entities** | `Switch_Update` | `0x004452F0` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/switch/004452F0-Switch_Update.cpp` |
| **Entities** | `Terminal_Update` | `0x00443B80` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/terminal/00443B80-Terminal_Update.cpp` |
| **Entities** | `Env_TriggerAlarm_9` | `0x00447D50` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/env/00447D50-Env_TriggerAlarm_9.cpp` |
| **Weapons** | `Weapons_CountGet` | `0x00413BB0` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/weapons/00413BB0-Weapons_CountGet.cpp` |
| **Weapons** | `WeaponType_GetConfig` | `0x00414950` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/weapontype/00414950-WeaponType_GetConfig.cpp` |
| **Weapons** | `WeaponGun_ProcessStep_47D320`| `0x0047D320`| `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/weapongun/0047D320-WeaponGun_ProcessStep_47D320.cpp` |
| **QVM** | `Qvm_Load` | `0x004B80B0` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/qvm/004B80B0-Qvm_Load.cpp` |
| **QTask** | `QTask_CreateTask` | `0x00401000` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/qtask/00401000-QTask_CreateTask.cpp` |
| **Sublevels** | `SubLevel_LoadParameters` | `0x00488780` | `/Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/natives/CLEAN/sublevel/00488780-SubLevel_LoadParameters.cpp` |
