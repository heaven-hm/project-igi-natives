# BinaryNinja - 100% Verified IGI1 Native Coverage

The catalog contains **5,732 verified native functions** (**100.00% coverage of Binary Ninja**, **93.72% coverage of Radare2**).

Counts, layers, and CFG gate states are explicit in [`IGINatives_VERIFIED.json`](file:///Users/haseeb-mir/Documents/Code/project-igi-natives/assets/BinaryNinja/IGINatives_VERIFIED.json).

Each native was checked by:
- **Binary Ninja MCP** (`bn_function_list` + `bn_function_prototype_get` + `bn_variable_list`): address is an authentic function entry point, signature and variables from live analysis.
- **Radare2 MCP & CLI** (`afij`): CFG gate score = $1 - \frac{|bn\_blocks - r2\_nbbs|}{3 \cdot \max(bn, r2)} \ge 0.85$.
- **OpenIGI**: cross-citation check against engine scripts and references.

## Engine Subsystem Breakdown

- **Sound Engine** (215 natives): `SoundSys_*`, `SoundManager_*`, `DirectSound_*`, `SoundDef_*`, `AmbientSound_*`
- **Physics Engine** (297 natives): `Physics_*`, `VehiclePhysics_*`, `PhysicsTerrain_*`, `PhysicsRigid_*`, `PhysicsObj_*`, `DynObj_*`
- **Weapon Engine** (172 natives): `WeaponType_*`, `WeaponGun_*`, `GunDragunov_*`, `GunM16A2_*`, `GunMP5SD_*`, `GunM2HB_*`, `ProximityMine_*`
- **Weather & Environment Engine** (206 natives): `Weather_*`, `RainEffect_*`, `RainDynCubeObj_*`, `SkyTask_*`, `FlatSky_*`, `Water_*`, `FlatWater_*`, `Terrain_*`, `HeightMap_*`
- **Animation Engine** (38 natives): `Anim_*`, `AnimSpline_*`, `AnimTrigger_*`, `AnimCam_*`, `AnimScale_*`
- **Script & QVM Engine** (335 natives): `Script_*`, `Qvm_*`, `QTask_*`, `Qvm_ExecuteOpcodeTable`, `Qvm_TokenizeScript`
- **AI & Squad Combat Engine** (534 natives): `AI_*`, `HumanAI_*`, `CombatState_*`, `AIConfig_*`, `PatrolPath_*`
- **Render & Display Engine** (457 natives): `Render_*`, `Display_*`, `Display_InitDirectDraw`, `Render_SetActiveTransContext`, `RenderLight_*`
- **UI & Menu Engine** (225 natives): `Menu_*`, `MenuUI_*`, `StatusScreen_*`, `TextBox_*`, `InputBox_*`
- **System, Math & I/O Engine** (453 natives): `Sys_*`, `MathSys_*`, `ConfigSys_*`, `File_Open`, `Mem_Alloc`, `Timer_*`

## Layout

- `IGINatives_VERIFIED.json`: Primary single catalog with 5,732 verified functions, confidence scores, and layered verification telemetry.
- `natives/<Module>/<ADDR>-<Name>.{h,c,md}`: Modular per-native C header, decompiled C implementation, and verification evidence note.
- `C11/IGINatives.h` & `C11/IGINatives.c`: Complete monolithic C11 headers and decompiled C implementations.
- `formats/`:
  - `IGINatives.csv`: Comma-separated address, name, and signature table (5,733 lines).
  - `IGINatives.map`: Standard link map (5,734 lines).
  - `IGINatives.idc`: IDA Pro automation script.
  - `IGINatives_symbols.json`: Raw symbol dump for tooling.
  - `IGINatives_binaryninja.py`: One-click Binary Ninja console importer.
  - `IGINatives_ghidra.py`: One-click Ghidra headless/UI importer.
- `BinaryNinja_Rename_Report.json`: Coverage breakdown and engine subsystem tallies.
