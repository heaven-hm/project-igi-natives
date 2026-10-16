# Project IGI (`igi.exe`) — Weapon Firing and Recoil Research Report (M16A2 Representative Path)

## 1. Binary Provenance & Evidence Sources

- **Target Executable**: `/Users/haseeb-mir/Downloads/IGI/igi.exe`
  - **Format**: 32-bit PE (`i386`, Windows GUI)
  - **SHA-256**: `dea34892d417715873ea61d7b2ba5556655f1ad65385104348146f9679915a01`
  - **REA Artifact Digest Record**: `ev_40278da32f4f75dd32a97a30c7d335dc31681404894ad10a585e83c1a8f0a504`, `ev_5dd81be362b43a9168c9ffa6a7060efd83ee2be5f797e1de49d84e74b5d42285`, `ev_c1237a0bb8daf4e4130b091ab78a1857cd046f4496960802415333256850f37f` (`assets/rea-bundle.json`)
- **Primary Evidence Sources Cross-Checked**:
  1. **Radare2 (`r2`) Disassembly & Read-Only Data Inspection** on `/Users/haseeb-mir/Downloads/IGI/igi.exe`:
     - Instruction-level verification of x87 FPU math, stack frame layouts, `.rdata` floating-point constants, and call graphs across `0x0040E9B0–0x00414B80`, `0x00462E50–0x00464D00`, and `0x00473490–0x0047CD00`.
  2. **Binary Ninja Decompiled C Project** (`assets/BinaryNinja/cproj/src/*.c` and `assets/BinaryNinja/IGINatives_VERIFIED.json`):
     - Decompiled C control-flow and struct offset recovery across `HumanPlayer`, `WeaponType`, `Gun`, `GunM16A2`, `GunShot`, and `AmmoType` modules.
  3. **REA / Ghidra Evidence Bundle & Retail String Registrar Table** (`assets/rea-bundle.json` and `assets/IGI1-Native-Name-Evidence.json`):
     - `ev_6c009c970068e86e61f26de6c98b1c42e5fdaa4ad7ebb8988a6d9bcf58be8969` (`address_name` @ `0x00414A60`)
     - `ev_d115c02ef46858dd56d002866bd443fbb035e26a646ac9e0ddec2fdd51909750` (`procedure_pseudo_code` @ `0x00414A60`, `FUN_00414a60`)
     - `ev_4c3a0ab9ad736b0c0ccc8f7cee92c7e9834547061a0c157c4237369ec681cdb3` (`address_name` @ `0x00473510`, `FUN_00473510`)
     - `ev_bf20cf227551dd0c944d9eb14e7c1259a73aa6b5e2d5720ec907c185ce3b8c81` (`address_name` @ `0x00473620`, `FUN_00473620`)
     - `ev_7528a63b59ea9ac4ac166841bce1ac6f2cce3fc0e09079460c1ca8802e7b8e94` (`address_name` @ `0x00473790`, `FUN_00473790`)
     - `ev_aa1d70ac4e2519edaa7734f3aaf69a0fca1d12002c5a0a149ea56d210a89b6e4` (`procedure_pseudo_code` @ `0x00473790`, `FUN_00473790`)
     - `ev_be5f428bc699ddde0578ee7406b8d0c2ca51ae8cd605bec290565d313d4bec12` (`address_name` @ `0x00478640`, `FUN_00478640`)
     - `ev_5dd81be362b43a9168c9ffa6a7060efd83ee2be5f797e1de49d84e74b5d42285` (`list_strings` confirming retail strings `"WeaponType"`, `"DefineWeaponType"`, `"WEAPON_ID_M16A2"`, `"GunM16A2"`, `"Gun"`, `"GunShot"`, `"AmmoType"`, `"Define_AmmoType"`, `"AMMO_ID_556"`, `"AMMO_ID_M203"`, `"M203 - Muzzle velocity (km/h)"`, `"guns_dry_1"`, `"m203_launch_1"`, etc.)
     - `ev_c1237a0bb8daf4e4130b091ab78a1857cd046f4496960802415333256850f37f` (`list_procedures` confirming function entry boundaries across `0x0040E9B0–0x0047CD00`).

### Verification Scope Statement (Static vs. Runtime)
All findings in this report are **statically verified** by cross-referencing `Radare2` disassembly, `Binary Ninja` C decompilation, and `REA/Ghidra` pseudocode/procedure records on `igi.exe` (`dea34892...`). **No live runtime capture or dynamic hooking was performed during this research task**, and no behavior below is claimed to be runtime-verified.

---

## 2. End-to-End Call Order (M16A2 Primary & Secondary Firing Path)

At 30 Hz game logic ticks, a representative M16A2 (`WEAPON_ID_M16A2` / `TASKTYPE_GUNM16A2`) shot follows this exact call sequence:

```
[Level / Config Init]
  0x00413DF0 WEAPONTYPE_GUN()              -> registers "DefineWeaponType" (0x00413F90) and WEAPONTYPE_* enums
  0x0047CD30 AMMO_ID_9X19()                -> registers "Define_AmmoType" (0x0047CAD0) and AMMO_ID_* enums
  0x00413F90 DefineWeaponType()            -> populates g_WeaponTypeTable[idx] at 0x0056E258 (stride 0x6E8)
  0x00473490 GunM16A2_Init()               -> registers "GunM16A2" task vtable (inherits "Gun" @ 0x00478580)
  0x004737F0 GunM16A2_Update()             -> parses M203 grenade parameters into weaponDef->customConfig (+0x6E4)

[Per-Tick Player Update: 0x004109A0 Human_RunUpdate(HumanPlayer *human)]
  ├── 1. 0x00464800 Camera_UpdateAimAndRecoil(human->viewCam_4ec, human)
  │      Integrates mouse pitch delta into viewCam->pitchAim_124, clamps to [-pi/2, +pi/2],
  │      and applies accumulated recoil: viewCam->pitchTotal_120 = pitchAim_124 + pitchRecoil_128.
  │
  ├── 2. 0x00410700 HumanPlayer_UpdateWeaponSMFlags(human->weaponSM_cf8, human)
  │      Reads input floats (human->firePrimary_1c8, human->fireSecondary_1cc, human->reload_1d0),
  │      packs bitflags into weaponSM->flags_08 (0x0200=Primary, 0x0400=Secondary, 0x0800=Reload, 0x0001=AnimDone),
  │      and invokes current state handler human->weaponSM_cf8.handler_14(weaponSM, human):
  │      ├── State 1 (0x0040E9C0 WeaponSM_ReadyIdle):
  │      │     Queries equipped weapon task via 0x004F2060 Table_GetAt(human + 0x4C4, 0),
  │      │     gets WeaponType* via 0x00413C80, and queries (roundsInMag, reserveAmmo) via 0x004F23D0 -> 0x00479AA0.
  │      │     - If (flags & 0x0200) [Primary Fire] and roundsInMag == 0:
  │      │         Transitions to State 12 (0x0040F0D0 HumanPlayer_GunsDry1 -> plays "guns_dry_1").
  │      │     - If (flags & 0x0200) [Primary Fire] and roundsInMag > 0:
  │      │         Transitions to State 2 (0x0040EF60 -> 0x0040EF70 WeaponSM_Firing).
  │      │     - If (flags & 0x0400) [Secondary Fire] and weaponId == WEAPON_ID_M16A2:
  │      │         Checks UnlimitedAmmo (0x0056E214) or decrements AMMO_ID_M203 reserve in human + 0x340,
  │      │         transitions to State 6 (0x0040F4A0 WeaponSM_M203Fire -> sets human->altFireReq_4d2 = 1).
  │      │     - If ((flags & 0x0800) || roundsInMag == 0) and reserveAmmo > 0 and roundsInMag < magCap_648:
  │      │         Transitions to State 3 (0x0040F170 -> 0x0040F180 WeaponSM_Reload -> 0x00479990 Weapon_ReloadStart -> 0x004798C0 Gun_MagFill).
  │      └── State 2 (0x0040EF70 WeaponSM_Firing):
  │            - If human->firePrimary_1c8 != 0.0f and roundsInMag > 0:
  │                Sets human->fireReq_4d1 = 1.
  │            - If human->didFire_4d3 != 0:
  │                Calls 0x004137E0(human, 6) to play 1st/3rd-person firing animation (weaponDef + 0x684 / +0x6A8).
  │
  ├── 3. 0x004614B0 Human_MovementIntegrator(human) & 0x00464BD0 Camera_BuildWorldMatrix(human->viewCam_4ec, human)
  │
  └── 4. 0x00462E50 Muzzle_Eye(Human *human)
         ├── Clears human->didFire_4d3 = 0.
         ├── Builds 0x30-byte FireMessage struct on stack (fireReq_00, eyePos_04, eyeMat_08, vel_0C, altFireReq_18, damageMult_28, owner_2C).
         ├── Dispatches event g_53f314 (0x00460BF0) to equipped weapon task:
         │   └── 0x00473510 GunM16A2_LoadParameters [actual: GunM16A2_OnFireMessage](Gun *gun, FireMessage *msg)
         │       ├── Calls parent TASKTYPE_GUN g_53f314 handler:
         │       │   └── 0x00479780 Gun_FireMessage(Gun *gun, FireMessage *msg)
         │       │       ├── Dispatches event 0x004F1FF0 -> 0x00478BA0 Gun_Fire(Gun *gun, FireMessage *msg)
         │       │       │   ├── Checks fireReq, burstCount (+0x64C vs gun+0x140), cooldown timer (gun+0x13C == 0.0f), and roundsInMag (gun+0x144 > 0).
         │       │       │   ├── When shot fires:
         │       │       │   │   ├── 0x00414A60 BuildOrthonormalBasisFromDir(&basis, &gun->aimDir_168)
         │       │       │   │   ├── Selects spread cone (weaponDef+0x664 initial if burstShots<=3 else +0x668 sustained).
         │       │       │   │   ├── Loops pelletsPerShot (weaponDef+0x640, 1 for M16A2):
         │       │       │   │   │   ├── Applies cubic radial deflection (rand^3 * spreadRad) and random roll angle (rand * 2*pi).
         │       │       │   │   │   └── 0x00413D10 WeaponType_SpawnProjectile -> event g_5391ae -> 0x0047C420 GunShot_Unpack -> 0x0047B190 GunShot_TakeSlot
         │       │       │   │   ├── Spawns brass casing via 0x00477D10 GunCasing (if shooter is local player).
         │       │       │   │   ├── Increments gun->burstShotsFired_140 (+1).
         │       │       │   │   ├── Sets gun->cooldownTicks_13c = (60.0 / weaponDef->rpm_644) * 30.0.
         │       │       │   │   ├── Decrements gun->roundsInMag_144 (-1).
         │       │       │   │   └── Sets msg->outDidFire_01 = 1 and triggers fire audio (weaponDef+0x6B0 / +0x6C0).
         │       │       └── If msg->outDidFire_01 != 0:
         │       │           ├── Broadcasts AI gunshot sound event (type 0x10, radius weaponDef+0x6D0) via 0x00450CE0 AI_EventBroadcast.
         │       │           └── Samples uniform random point in unit disk and writes msg->outRecoilYaw_20 and msg->outRecoilPitch_24.
         │       └── If msg->altFireReq_18 != 0 (M203 Secondary Fire):
         │           └── Converts M203 muzzle velocity from km/h to world units/tick, plays "m203_launch_1", and spawns grenade via 0x00476670.
         ├── Clears human->fireReq_4d1 = 0 and human->altFireReq_4d2 = 0; copies msg.outDidFire_01 to human->didFire_4d3.
         └── Damps and accumulates camera recoil (factor 0.9f = 0x3F666666):
             ├── viewCam->pitchRecoil_128 = (msg.outRecoil_20 + viewCam->pitchRecoil_128) * 0.899999976f
             └── viewCam->yawRecoil_134   = (msg.outRecoil_24 + viewCam->yawRecoil_134)   * 0.899999976f

[Per-Tick Weapon & Hitscan Task Updates]
  ├── 0x00478640 Gun_Tick(Gun *gun)
  │      Decrements gun->cooldownTicks_13c by 1.0 per tick (computed as 60.0 / ((60.0 / rpm) * 30.0)) and clamps to >= 0.0f.
  └── 0x0047B690 GunShot_Setup(GunShot *shot) -> 0x0047B750 Gun_CastRound(GunShot *shot)
         Iterates active ray slots (up to 15), raycasts world geometry & bone hitboxes via 0x004CF4A0,
         evaluates surface ricochet (0x0047BB00) and material penetration resistance (material+0x40),
         spawns bullet impact FX (0x0047BD80), and dispatches hit damage via 0x004083C0 (event g_53851a).
```

---

## 3. Verified Function Catalog, Signatures & Name Discrepancies

Several functions in the Binary Ninja catalog (`assets/BinaryNinja/cproj/src/`) carry heuristic auto-generated names that do not match their actual machine-code behavior. The table below records the **address**, **Binary Ninja catalog name**, **verified functional role**, **ABI/signature**, and **evidence sources**.

| Address | Binary Ninja Catalog Name | Verified Actual Role | Calling Convention & Signature | Evidence Sources |
| :--- | :--- | :--- | :--- | :--- |
| `0x004083C0` | `HumanPlayer_HandleInput` | **`Damage_DispatchHit`** (dispatches hit damage event `g_53851a` to hit entity) | `int __cdecl Damage_DispatchHit(void *targetEntity, void *attacker, int hitType, double *hitPos, float *hitDir, float damage, float impulse, int boneIdx)` | `r2` @ `0x004083C0`, BN `004083C0-HumanPlayer_HandleInput.c` |
| `0x00408C80` | `HumanPlayer_ApplyRecoil` | **Misnamed in BN**: Actually a **movement state machine handler** in `human + 0x2EC` (table `0x005385B4`), **not** weapon recoil | `int __cdecl HumanMovSM_StateHandler(void *movSM, void *human)` | `r2` @ `0x00408C80`, BN `00408C80-HumanPlayer_ApplyRecoil.c`, `00410370-Human_Init.c` |
| `0x0040E9C0` | `sub_40e9c0` (called via `0x0040E9B0`) | **`WeaponSM_State1_ReadyIdle`** (evaluates fire/alt-fire/reload transitions) | `int __cdecl WeaponSM_State1_ReadyIdle(void *weaponSM, HumanPlayer *human)` | `r2` @ `0x0040E9B0–0x0040EE90`, BN `0040E9B0-HumanPlayer_Process.c` |
| `0x0040EF70` | `sub_40ef70` (called via `0x0040EF60`) | **`WeaponSM_State2_Firing`** (sets `human + 0x4D1 = 1` while fire input held; triggers fire anim when `human + 0x4D3 != 0`) | `int __cdecl WeaponSM_State2_Firing(void *weaponSM, HumanPlayer *human)` | `r2` @ `0x0040EF60–0x0040F060`, BN `0040E9B0-HumanPlayer_Process.c` |
| `0x0040F0D0` | `HumanPlayer_GunsDry1` | **`WeaponSM_State12_DryFire`** (plays `"guns_dry_1"` when magazine is empty) | `int __cdecl HumanPlayer_GunsDry1(void *weaponSM, HumanPlayer *human)` | `r2` @ `0x0040F0D0`, BN `0040F0D0-HumanPlayer_GunsDry1.c`, REA `ev_5dd81be3...` |
| `0x0040F180` | `sub_40f180` (called via `0x0040F170`) | **`WeaponSM_State3_Reload`** (dispatches reload event `g_53f315` -> `0x00479990`) | `int __cdecl WeaponSM_State3_Reload(void *weaponSM, HumanPlayer *human)` | `r2` @ `0x0040F170–0x0040F340`, BN `0040F0D0-HumanPlayer_GunsDry1.c` |
| `0x0040F4A0` | `sub_40f4a0` (called via `0x0040F460`) | **`WeaponSM_State6_M203Fire`** (sets `human + 0x4D2 = 1` for M16A2 grenade launcher) | `int __cdecl WeaponSM_State6_M203Fire(void *weaponSM, HumanPlayer *human)` | `r2` @ `0x0040F460–0x0040F550`, BN `0040F0D0-HumanPlayer_GunsDry1.c` |
| `0x00410700` | `HumanPlayer_CheckGround_7` | **`HumanPlayer_UpdateWeaponSMFlags`** (packs input floats `+0x1C8/+0x1CC/+0x1D0` into `weaponSM + 0x08` and runs state handler) | `int __cdecl HumanPlayer_UpdateWeaponSMFlags(void *weaponSM, HumanPlayer *human)` | `r2` @ `0x00410700`, BN `00410700-HumanPlayer_CheckGround_7.c` |
| `0x004109A0` | `Human_RunUpdate` | **`HumanPlayer_RunUpdate`** (per-tick player update driving camera, movement, weapon SM, and `Muzzle_Eye`) | `int __cdecl Human_RunUpdate(HumanPlayer *human)` | `r2` @ `0x004109A0`, BN `004109A0-Human_RunUpdate.c` |
| `0x00413BD0` | `WeaponType_LookupById` | **`WeaponType_LookupById`** (finds `WeaponType` entry in `0x0056E258` by ID) | `WeaponType * __cdecl WeaponType_LookupById(int weaponId)` | `r2` @ `0x00413BD0`, BN `00413BD0-WeaponType_LookupById.c` |
| `0x00413C80` | `HumanPlayer_LoadParameters_13` | **`WeaponTask_GetWeaponType`** (dispatches event `g_5391ac` to get `WeaponType*` from weapon task) | `WeaponType * __cdecl WeaponTask_GetWeaponType(void *weaponTask)` | `r2` @ `0x00413C80`, BN `00413C80-HumanPlayer_LoadParameters_13.c` |
| `0x00413D10` | `HumanPlayer_CheckGround_11` | **`WeaponType_SpawnProjectile`** (spawns projectile task `+0x6D4` and sends unpack event `g_5391ae`) | `void * __cdecl WeaponType_SpawnProjectile(int weaponId, void *parentTask, void *spawnParams)` | `r2` @ `0x00413D10`, BN `00413D10-HumanPlayer_CheckGround_11.c` |
| `0x00413F90` | `DefineWeaponType` | **`DefineWeaponType`** (script native populating `0x0056E258` table) | `void * __cdecl DefineWeaponType(void *retVal, int arg1, int arg2, float scriptCtx)` | `r2` @ `0x00413F90`, BN `00413F90-DefineWeaponType.c`, `IGI1-Native-Name-Evidence.json` |
| `0x00414A60` | `WeaponType_SetCategory` | **Misnamed in BN**: Actually **`Math_BuildOrthonormalBasisFromDir`** (constructs 3x3 orientation matrix from unit forward vector using `|dir.z| <= 0.95f` threshold) | `void __cdecl Math_BuildOrthonormalBasisFromDir(float *outMat3x3, const float *dir)` | `r2` @ `0x00414A60`, BN `00414A60-WeaponType_SetCategory.c`, REA `ev_6c009c97...`, `ev_d115c02e...` |
| `0x00462E50` | `Muzzle_Eye` | **`Human_UpdateWeaponFireAndRecoil`** (builds fire message, dispatches `g_53f314`, damps recoil into `viewCam + 0x128/+0x134`) | `int __cdecl Muzzle_Eye(Human *human)` | `r2` @ `0x00462E50`, BN `00462E50-Muzzle_Eye.c` |
| `0x00464800` | `Player_ExecuteDrop` | **Misnamed in BN**: Actually **`Camera_UpdateAimAndRecoil`** (integrates aim pitch `+0x124` and recoil pitch `+0x128` into `+0x120`) | `int __cdecl Camera_UpdateAimAndRecoil(void *viewCam, Human *human)` | `r2` @ `0x00464800`, BN `00464800-Player_ExecuteDrop.c` |
| `0x00473490` | `GunM16A2_Init` | **`GunM16A2_RegisterTaskType`** (registers `"GunM16A2"` task type derived from `"Gun"`) | `int __cdecl GunM16A2_Init(void)` | `r2` @ `0x00473490`, BN `00473490-GunM16A2_Init.c`, `IGI1-Native-Name-Evidence.json` |
| `0x00473510` | `GunM16A2_LoadParameters` | **`GunM16A2_OnFireMessage`** (handles primary fire via `TASKTYPE_GUN` and M203 secondary fire via `0x00476670`) | `int __cdecl GunM16A2_OnFireMessage(Gun *gun, FireMessage *msg)` | `r2` @ `0x00473510`, BN `00473510-GunM16A2_LoadParameters.c`, REA `ev_4c3a0ab9...` |
| `0x00473620` | `GunM16A2_Setup` | **`GunM16A2_RenderHUDAmmo`** (draws 5.56mm & M203 ammo counters on HUD) | `int __cdecl GunM16A2_RenderHUDAmmo(Gun *gun, void *hudCtx)` | `r2` @ `0x00473620`, BN `00473620-GunM16A2_Setup.c`, REA `ev_bf20cf22...` |
| `0x00473790` | `GunM16A2_Process` | **`GunM16A2_ParseScriptVec3`** (reads 3 float arguments from script context into `gun + 0x1AC..0x1B4`) | `void * __cdecl GunM16A2_ParseScriptVec3(void *retVal, int a2, int a3, float scriptCtx)` | `r2` @ `0x00473790`, BN `00473790-GunM16A2_Process.c`, REA `ev_7528a63b...`, `ev_aa1d70ac...` |
| `0x004737F0` | `GunM16A2_Update` | **`GunM16A2_ParseWeaponTypeConfig`** (allocates `0x1C`-byte M203 config at `weaponDef + 0x6E4`) | `int __cdecl GunM16A2_ParseWeaponTypeConfig(WeaponType *weaponDef, int a2)` | `r2` @ `0x004737F0`, BN `004737F0-GunM16A2_Update.c` |
| `0x00478640` | `Gun_Tick` | **`Gun_Tick`** (decrements shot cooldown timer `gun + 0x13C` each tick) | `void __cdecl Gun_Tick(Gun *gun)` | `r2` @ `0x00478640`, BN `00478640-Gun_Tick.c`, REA `ev_be5f428b...` |
| `0x00478BA0` | `Gun_Fire` | **`Gun_Fire`** (evaluates burst/cooldown/ammo gates, computes spread cone, spawns `GunShot` & `GunCasing`, sets cooldown & decrements ammo) | `int __cdecl Gun_Fire(Gun *gun, FireMessage *msg)` | `r2` @ `0x00478BA0`, BN `00478BA0-Gun_Fire.c` |
| `0x00479780` | `Gun_FireMessage` | **`Gun_FireMessage`** (invokes `Gun_Fire`, broadcasts AI gunshot event, computes random recoil kick) | `int __cdecl Gun_FireMessage(Gun *gun, FireMessage *msg)` | `r2` @ `0x00479780`, BN `00479780-Gun_FireMessage.c` |
| `0x004798C0` | `Gun_MagFill` | **`Gun_MagFill`** (transfers rounds from `Human` reserve ammo array `human + 0x340` into `gun + 0x144`) | `int __cdecl Gun_MagFill(Gun *gun, void *human)` | `r2` @ `0x004798C0`, BN `004798C0-Gun_MagFill.c` |
| `0x00479AA0` | `Script_ParseEnumReal32_13` | **`Gun_QueryAmmoCounts`** (writes `roundsInMag` and `reserveAmmo` into 8-byte output struct) | `int __cdecl Gun_QueryAmmoCounts(Gun *gun, int32_t outCounts[2])` | `r2` @ `0x00479AA0`, BN `00479AA0-Script_ParseEnumReal32_13.c` |
| `0x0047B190` | `GunShot_TakeSlot` | **`GunShot_TakeSlot`** (allocates 1 of 15 hitscan slots in `GunShot`, scales range by `4096.0f`) | `int __cdecl GunShot_TakeSlot(GunShot *shot, void *spawnParams)` | `r2` @ `0x0047B190`, BN `0047B190-GunShot_TakeSlot.c` |
| `0x0047B750` | `Gun_CastRound` | **`Gun_CastRound`** (steps hitscan raycast, evaluates ricochet & surface penetration, dispatches damage) | `int __cdecl Gun_CastRound(GunShot *shot)` | `r2` @ `0x0047B750`, BN `0047B750-Gun_CastRound.c` |
| `0x0047BB00` | `Gun_ImpactSurface` | **`Gun_CheckRicochet`** (computes incidence angle vs. `material + 0x44` and reflects ray if ricocheting) | `int __cdecl Gun_CheckRicochet(float *inOutDir, const float *normal, void *materialDef)` | `r2` @ `0x0047BB00`, BN `0047BB00-Gun_ImpactSurface.c` |

---

## 4. Object Layouts, Fields, and Constants

### 4.1 `WeaponType` Static Descriptor (`0x0056E258`, Stride `0x6E8` = 1,768 Bytes)
Populated by `DefineWeaponType` (`0x00413F90`) and queried via `WeaponType_LookupById` (`0x00413BD0`). Total count is stored at `0x0057B18C`.

| Offset | Type | Field Name | Description / Verified Usage |
| :--- | :--- | :--- | :--- |
| `+0x000` | `int32_t` | `weaponId` | Enum ID (`WEAPON_ID_M16A2`, etc.) |
| `+0x008` | `int32_t` | `weaponCategory` | Category enum (`WEAPONTYPE_GUN = 0`, etc.) |
| `+0x610` | `int32_t` | `weaponTypeEnum` | `0=GUN`, `1=PISTOL`, `2=SHOTGUN`, `3=KNIFE`, `4=GRENADE`, `5=BINOCULAR`, `6=MEDIPACK`, `7=PROXIMITYMINE` |
| `+0x618` | `int32_t` | `ammoDisplayType` | `AMMODISPLAYTYPE_*` (`0..4`) |
| `+0x61C` | `char[16]` | `primaryAmmoName` | Ammo type symbol string (e.g., `"AMMO_ID_556"`), resolved via `0x0047C980` |
| `+0x62C` | `char[16]` | `casingModelName` | Ejected brass casing model ID string |
| `+0x640` | `int32_t` | `pelletsPerShot` | Projectiles/rays spawned per shot (`>= 1`; `1` for M16A2, `>1` for shotguns) |
| `+0x644` | `int32_t` | `roundsPerMinute` | Cyclic rate of fire (RPM); converted to ticks via `(60.0 / rpm) * 30.0` in `Gun_Fire` (`0x00478BA0`) |
| `+0x648` | `int32_t` | `magazineCapacity` | Max rounds in magazine (`Gun_MagFill` @ `0x004798C0`) |
| `+0x64C` | `int32_t` | `burstCount` | Max rounds per trigger pull (`<= 1` semi-auto, `> 1` burst/auto; checked against `gun + 0x140` in `Gun_Fire`) |
| `+0x650` | `float` | `effectiveRangeMeters` | Multiplied by `4096.0f` (`0x0053363C`) in `GunShot_TakeSlot` (`0x0047B190`) to convert meters to world units |
| `+0x654` | `float` | `baseDamage` | Copied to `slot + 0x38` in `GunShot_TakeSlot` (`0x0047B190`) |
| `+0x658` | `float` | `penetrationPower` | Copied to `slot + 0x3C` in `GunShot_TakeSlot`; reduced by `material + 0x40` in `Gun_CastRound` (`0x0047B750`) |
| `+0x664` | `float` | `spreadInitialDeg` | Cone half-angle (degrees) used when `gun->burstShotsFired_140 <= 3` (`0x00478BA0`) |
| `+0x668` | `float` | `spreadSustainedDeg` | Cone half-angle (degrees) used when `gun->burstShotsFired_140 > 3` (`0x00478BA0`) |
| `+0x66C` | `float` | `recoilYawBaseDeg` | Constant horizontal/axis-1 recoil offset per shot in degrees (`0x00479780`) |
| `+0x670` | `float` | `recoilPitchBaseDeg` | Constant vertical/axis-2 recoil offset per shot in degrees (`0x00479780`) |
| `+0x674` | `float` | `recoilYawSpreadDeg` | Random disk-sampled recoil radius on axis 1 in degrees (`0x00479780`) |
| `+0x678` | `float` | `recoilPitchSpreadDeg` | Random disk-sampled recoil radius on axis 2 in degrees (`0x00479780`) |
| `+0x67C..0x690` | `int32_t[6]` | `viewAnimIds` | 1st-person view-model animations (`+0x67C` idle, `+0x684` primary fire, `+0x688` alt/M203 fire, `+0x690` reload) |
| `+0x694..0x6AC` | `int32_t[7]` | `bodyAnimIds` | 3rd-person human animations (`+0x6A8` primary fire, `+0x6AC` reload) |
| `+0x6B0` | `char[16]` | `fireSound1` | Primary fire sound 1 (looping burst sound or odd-shot sound) |
| `+0x6C0` | `char[16]` | `fireSound2` | Primary fire sound 2 (burst tail sound or even-shot sound) |
| `+0x6D0` | `float` | `audibleRangeUnits` | AI hearing broadcast radius passed to `AI_EventBroadcast` (`0x00450CE0`) on `AIEVENT_GUNSHOT` (`0x10`) |
| `+0x6D4` | `int32_t` | `projectileTaskType` | Task type ID spawned per pellet (`TASKTYPE_GUNSHOT` for hitscan firearms) |
| `+0x6D8` | `int32_t` | `weaponEntityTaskType` | Task type ID for equipped weapon entity (`TASKTYPE_GUNM16A2` for M16A2) |
| `+0x6E4` | `void *` | `customWeaponConfig` | For `GunM16A2`, points to `0x1C`-byte M203 config struct allocated in `0x004737F0` |

#### `GunM16A2` Custom Config Struct (`weaponDef + 0x6E4`, `0x1C` Bytes, Allocated at `0x004737F0`)
- `+0x00` (`float`): `"M203 - Muzzle velocity (km/h)"` — default `270.0f` (`0x43870000`)
- `+0x04` (`float`): `"M203 - Explosion radius (meters)"` — default `5.0f` (`0x40A00000`)
- `+0x08` (`float`): `"M203 - Activate radius (meters)"` — default `1.0f` (`0x3F800000`)
- `+0x0C` (`char[16]`): `"M203 - Model"` — default `"000_00_1"`

---

### 4.2 `Gun` / `GunM16A2` Task Instance Fields (`0x00478580` / `0x00473490`)

| Offset | Type | Field Name | Description / Verified Usage |
| :--- | :--- | :--- | :--- |
| `+0x014` | `void *` | `ownerEntity` | Owning `Human` / `HumanPlayer` task pointer |
| `+0x128` | `WeaponType *` | `weaponDef` | Pointer to `WeaponType` descriptor in `0x0056E258` |
| `+0x12C` | `void *` | `ammoTypeDef` | Pointer to `AmmoType` descriptor (`NULL` if weapon does not consume ammo) |
| `+0x130` | `uint8_t` | `wasFiringPrevTick` | Tracks auto-fire sound loop state across ticks in `Gun_Fire` (`0x00478BA0`) |
| `+0x134` | `void *` | `activeFireSoundHandle` | Active looping sound handle stopped when burst ends |
| `+0x138` | `int32_t` | `shotParityToggle` | Toggles `1 - val` each shot when `burstCount <= 1` to alternate between `fireSound1` (`+0x6B0`) and `fireSound2` (`+0x6C0`) |
| `+0x13C` | `float` | `cooldownTicks` | Shot cooldown timer in 30 Hz ticks; set to `(60.0 / rpm) * 30.0` on fire, decremented by `1.0` per tick in `Gun_Tick` (`0x00478640`) |
| `+0x140` | `int32_t` | `burstShotsFired` | Incremented on each shot while trigger held; reset to `0` when trigger released (`!fireReq`). Blocks firing when equal to `weaponDef->burstCount_64c` |
| `+0x144` | `int32_t` | `roundsInMag` | Current rounds in magazine; decremented in `Gun_Fire` (`0x00478BA0`), refilled in `Gun_MagFill` (`0x004798C0`) |
| `+0x150` | `double[3]` | `muzzleWorldPos` | 3D world position (`24` bytes) of muzzle/eye origin |
| `+0x168` | `float[9]` | `aimMatrix3x3` | 3x3 orientation matrix; forward aim vector is at `+0x168..+0x170` (`&a1[0x2d]`) |
| `+0x18C` | `float[3]` | `shooterVelocity` | Shooter velocity vector copied from `FireMessage + 0x0C` |
| `+0x198` | `float` | `muzzleFlashScale` | Random scale in `[0.75f, 1.25f]` set on shot fire |
| `+0x19C` | `int32_t` | `muzzleFlashTicks` | Set to `2` on shot fire, decremented in `Gun_Tick` (`0x00478640`) |
| `+0x1A0` | `int32_t` | `barrelSmokeTicks` | Set to `2` on shot fire |
| `+0x1A8` | `int32_t` | `heatTimerTicks` | Set to `0x5A` (`90` ticks = 3.0s) on shot fire, decremented in `Gun_Tick` |

---

### 4.3 `Human` / `HumanPlayer` & `ViewCamera` Fields Relevant to Firing & Recoil

| Struct & Offset | Type | Field Name | Description / Verified Usage |
| :--- | :--- | :--- | :--- |
| `Human + 0x1C8` | `float` | `inputFirePrimary` | Primary fire control channel (`!= 0.0f` sets flag `0x0200` in `weaponSM + 0x08`) |
| `Human + 0x1CC` | `float` | `inputFireSecondary` | Secondary fire control channel (`!= 0.0f` sets flag `0x0400` in `weaponSM + 0x08`) |
| `Human + 0x1D0` | `float` | `inputReload` | Reload control channel (`!= 0.0f` sets flag `0x0800` in `weaponSM + 0x08`) |
| `Human + 0x340` | `int32_t[]` | `reserveAmmoById` | Array of reserve ammo counts indexed by `AmmoType` ID (`*(human + ammoId*4 + 0x340)`) |
| `Human + 0x4C4` | `Table` | `equippedItemTable` | Slot `0` (`Table_GetAt(human + 0x4C4, 0)`) holds the active weapon task |
| `Human + 0x4D1` | `uint8_t` | `primaryFireRequest` | Set to `1` by `WeaponSM_State2_Firing` (`0x0040EF70`) or AI fire logic (`0x00453FB0`); consumed & cleared to `0` by `Muzzle_Eye` (`0x00462E50`) |
| `Human + 0x4D2` | `uint8_t` | `secondaryFireRequest` | Set to `1` by `WeaponSM_State6_M203Fire` (`0x0040F4A0`); consumed & cleared to `0` by `Muzzle_Eye` (`0x00462E50`) |
| `Human + 0x4D3` | `uint8_t` | `didFireThisTick` | Written by `Muzzle_Eye` (`0x00462E50`) from `FireMessage + 0x01`; read by `WeaponSM_State2_Firing` (`0x0040EF70`) to trigger firing animation |
| `Human + 0x4D4` | `float` | `damageMultiplier` | Passed into `FireMessage + 0x28` -> `GunShot` slot (`1.0f` for player; distance-scaled accuracy/damage factor for AI in `0x0048B9C0`) |
| `Human + 0x4EC` | `void *` | `viewCam` | Pointer to player/human view & camera controller (`0x00464800`, `0x00464BD0`, `0x00462E50`) |
| `Human + 0x4F8` | `float` | `bodyYawRad` | Base horizontal yaw angle (radians) |
| `Human + 0x508` | `float` | `bodyPitchRad` | Base vertical pitch angle (radians) |
| `Human + 0xCF8` | `StateMachine` | `weaponSM` | `0x18`-byte weapon state machine (`+0x08` bitflags, `+0x0C` prevState, `+0x10` curState, `+0x14` handler fn ptr) |
| `ViewCam + 0x120` | `float` | `pitchTotalRad` | Sum `pitchAim_124 + pitchRecoil_128` computed at `0x00464909`, clamped to `[-pi/2, +pi/2]` |
| `ViewCam + 0x124` | `float` | `pitchAimRad` | Player mouse/look pitch accumulator, clamped to `[-1.57079637f, +1.57079637f]` (`0x005339D0`, `0x00533468`) |
| `ViewCam + 0x128` | `float` | `pitchRecoilRad` | Damped recoil accumulator #1: `(msg.recoil_20 + pitchRecoil_128) * 0.899999976f` (`0x00462FC0`) |
| `ViewCam + 0x12C` | `float` | `yawOffsetRad` | Additional camera yaw offset clamped to `[-pi/2, +pi/2]` |
| `ViewCam + 0x134` | `float` | `yawRecoilRad` | Damped recoil accumulator #2: `(msg.recoil_24 + yawRecoil_134) * 0.899999976f` (`0x00462FD4`) |

---

## 5. Detailed Mathematical & Mechanical Verification

### 5.1 Shot Timing and Burst Control (`Gun_Fire` @ `0x00478BA0` & `Gun_Tick` @ `0x00478640`)
Cross-checked between `r2` (`0x00478BA0`, `0x00478640`) and `Binary Ninja` (`00478BA0-Gun_Fire.c`, `00478640-Gun_Tick.c`):
1. **Trigger Release Reset**:
   - When `FireMessage.fireReq_00 == 0`, `gun->burstShotsFired_140` (`a1[0x28]`) is reset to `0`.
2. **Burst Limit Gate**:
   - While `fireReq_00 != 0`, if `gun->burstShotsFired_140 == weaponDef->burstCount_64c`, both `canFireThisTick` (`v_132`) and `keepLoopSound` (`v_131`) are cleared to `0`.
   - Thus, a weapon with `burstCount == 1` fires semi-automatically (1 round per trigger press), `burstCount == 3` fires a 3-round burst per trigger press, and a full-auto weapon uses a `burstCount` >= magazine capacity (or `> magCap`).
3. **Cyclic Rate (RPM) Cooldown Gate**:
   - If `gun->cooldownTicks_13c != 0.0f`, `canFireThisTick` (`v_132`) is set to `0` (while `v_131` remains `1` so the looping gunfire audio continues between rounds).
   - When a round fires (`v_132 != 0`), `gun->cooldownTicks_13c` is set to:
     $$\text{cooldownTicks} = \frac{60.0}{\text{weaponDef}\to\text{roundsPerMinute}} \times 30.0$$
   - In `Gun_Tick` (`0x00478640`), if `cooldownTicks_13c > 0.0f`, it subtracts:
     $$\Delta = \frac{60.0}{\left(\frac{60.0}{\text{RPM}} \times 30.0\right) \times \text{RPM}} = 1.0 \text{ tick}$$
     and clamps `cooldownTicks_13c` to `0.0f` when `< 0.0f`.

### 5.2 Spread Cone & Cubic Radial Deflection (`Gun_Fire` @ `0x00478BA0` & `0x00414A60`)
Cross-checked between `r2` (`0x00478CC0–0x00478E90`, `0x00414A60`), `Binary Ninja` (`00478BA0-Gun_Fire.c`), and `REA` (`ev_d115c02ef46858dd56d002866bd443fbb035e26a646ac9e0ddec2fdd51909750`):
1. **Orthonormal Aim Basis (`0x00414A60`)**:
   - Given the unit forward vector $\mathbf{f} = (f_x, f_y, f_z)$ at `gun + 0x168`:
   - If $|f_z| \le 0.95\text{f}$ (`0x3F733333`), constructs an up reference $(0, 0, 1)$, computes $\mathbf{r} = \text{normalize}(\mathbf{f} \times \mathbf{u})$ and $\mathbf{u}' = \text{normalize}(\mathbf{r} \times \mathbf{f})$.
   - If $|f_z| > 0.95\text{f}$ (aiming nearly straight up or down), uses $(1, 0, 0)$ as the reference vector to avoid gimbal singularity.
2. **Initial vs. Sustained Spread Threshold**:
   - If `gun->burstShotsFired_140 > 3`, selects `weaponDef->spreadSustainedDeg` (`+0x668`); otherwise selects `weaponDef->spreadInitialDeg` (`+0x664`).
   - Converts degrees to radians by multiplying by `0.0174532924f` (`0x0053367C`, $\pi / 180$).
3. **Pellet Loop & Cubic Center Bias**:
   - For each pellet `i = 0 .. weaponDef->pelletsPerShot_640 - 1`:
   - Draws three uniform random numbers $u_1, u_2, u_3 \in [0, 1)$ via `0x004932E0` (`Sys_AllocateMemory_14`) and computes the pitch deflection angle:
     $$\alpha = u_1 \cdot u_2 \cdot u_3 \cdot \theta_{\text{spreadRad}}$$
     Using the product of three uniform random variables ($u_1 u_2 u_3$) heavily biases shots toward the center of the cone ($\mathbb{E}[u_1 u_2 u_3] = 1/8$).
   - Draws a fourth uniform random number $u_4 \in [0, 1)$ for the roll angle around the bore axis:
     $$\phi = u_4 \cdot 2\pi \quad (\text{where } 2\pi = 6.28318548\text{f at } \text{0x005355B4})$$
   - Rotates the orthonormal basis by pitch $\alpha$ (`0x004B3520`) and roll $\phi$ (`0x004B35C0`), transforms into world space (`0x004B3870`), and spawns `TASKTYPE_GUNSHOT` via `0x00413D10`.

### 5.3 Recoil Generation & Damping (`Gun_FireMessage` @ `0x00479780` & `Muzzle_Eye` @ `0x00462E50`)
Cross-checked between `r2` (`0x00479780–0x004798B3`, `0x00462E50–0x00462FE0`, `0x00464800–0x00464970`) and `Binary Ninja`:
1. **Unit-Disk Rejection Sampling (`0x00479803–0x00479850`)**:
   - Loops drawing $r_x = 2 u_x - 1 \in [-1, 1]$ and $r_y = 2 u_y - 1 \in [-1, 1]$ until $\sqrt{r_x^2 + r_y^2} \le 1.0$.
2. **Per-Shot Recoil Delta Calculation (`0x00479852–0x004798AE`)**:
   - Using `DEG2RAD = 0.0174532924f` (`0x0053367C`):
     $$\Delta_{\text{recoil}, 20} = (r_x \cdot \text{recoilSpread}_{674} + \text{recoilBase}_{66C}) \times \frac{\pi}{180}$$
     $$\Delta_{\text{recoil}, 24} = (r_y \cdot \text{recoilSpread}_{678} + \text{recoilBase}_{670}) \times \frac{\pi}{180}$$
   - Written to `FireMessage + 0x20` and `FireMessage + 0x24`.
3. **Per-Tick Exponential Damping (`Muzzle_Eye` @ `0x00462FB4–0x00462FE0`)**:
   - Every tick (whether a shot fired or not), `Muzzle_Eye` updates the camera recoil accumulators using damping factor `0.899999976f` (`0x3F666666` at `0x005355B0`, i.e., $10\%$ decay per tick at 30 Hz):
     $$\text{viewCam}\to\text{recoil}_{128} = (\Delta_{\text{recoil}, 20} + \text{viewCam}\to\text{recoil}_{128}) \times 0.9\text{f}$$
     $$\text{viewCam}\to\text{recoil}_{134} = (\Delta_{\text{recoil}, 24} + \text{viewCam}\to\text{recoil}_{134}) \times 0.9\text{f}$$
4. **Application to View Pitch (`0x00464909`)**:
   - In `0x00464800`, `viewCam->pitchTotal_120 = viewCam->pitchAim_124 + viewCam->pitchRecoil_128`, which is then clamped to $[-\pi/2, +\pi/2]$.

### 5.4 Hitscan Raycast, Ricochet, Penetration & Damage (`Gun_CastRound` @ `0x0047B750`)
Cross-checked between `r2` (`0x0047B190`, `0x0047B750`, `0x0047BB00`) and `Binary Ninja`:
- **Slot Allocation (`0x0047B190`)**: Each `GunShot` task holds up to `15` (`0x0F`) concurrent ray slots of `0x48` bytes (`18` dwords) starting at `gunShot + 0xE0`, with active count at `gunShot + 0x94`.
- **World Scale**: `slot->remainingDist_34 = weaponDef->effectiveRangeMeters_650 * 4096.0f` (`1 meter = 4096.0 world units`).
- **Penetration & Ricochet Loop (`0x0047B750`)**:
  - Casts a ray from `slot->pos` along `slot->dir * slot->remainingDist_34` via `0x004CF4A0`.
  - Records up to `10` (`0x0A`) entity/bone intersections along the segment and dispatches damage via `0x004083C0` (`Damage = slot->baseDamage_38 * slot->damageMult_44`, where `damageMult_44` comes from `human + 0x4D4`).
  - If a world surface with material descriptor `v_608` is hit:
    1. **Ricochet Check (`0x0047BB00`)**: Computes angle between `slot->dir` and surface normal. If the grazing angle is within `material->ricochetAngleDeg_44`, reflects `slot->dir`, multiplies `slot->baseDamage_38` by `0.5f`, sets `slot->penetration_3c = 0.0f`, and continues the ray from the impact point!
    2. **Penetration Check (`0x0047B866–0x0047B925`)**: Otherwise, subtracts `material->penetrationResistance_40` from `slot->penetration_3c`. If the remaining penetration is `> 0.0f`, steps the ray origin forward through the surface by `20.48f` world units (`0.005m`) along `slot->dir`, scales `slot->baseDamage_38` proportionally (`newPenetration / oldPenetration`), and continues the raycast loop!

---

## 6. Unresolved Questions & Uncertainties

1. **`ViewCam + 0x134` (`yawRecoilRad`) Downstream Consumption**:
   - **Confirmed Fact**: `Muzzle_Eye` (`0x00462E50` at `0x00462FD4`) writes `viewCam + 0x134 = (msg.recoil_24 + viewCam->recoil_134) * 0.9f`, and `0x004647B0` initializes `viewCam + 0x134 = 0.0f`.
   - **Uncertainty**: While `viewCam + 0x128` is explicitly added into `viewCam + 0x120` at `0x00464909` (`fld dword [esi + 0x124]; fadd dword [esi + 0x128]; fstp dword [esi + 0x120]`), `0x00464800` does not contain a symmetric `fadd dword [esi + 0x134]` into `viewCam + 0x12C`. Whether `viewCam + 0x134` is read by a separate view-model sway routine or was left partially unwired in retail `igi.exe` requires a wider cross-reference scan or hardware watchpoint on `viewCam + 0x134`.
2. **Exact M16A2 Data Values in Compiled Mission/Weapon QVM Scripts**:
   - **Confirmed Fact**: `DefineWeaponType` (`0x00413F90`) reads the M16A2's numerical stats (`roundsPerMinute`, `magazineCapacity`, `burstCount`, `effectiveRangeMeters`, `baseDamage`, `penetrationPower`, spread/recoil angles) at runtime from the compiled QVM weapon definition script (`weapons.qvm` / level scripts), while `GunM16A2_Update` (`0x004737F0`) hardcodes fallback defaults only for the M203 attachment (`270.0 km/h` muzzle velocity, `5.0 m` explosion radius, `1.0 m` activation radius).
   - **Uncertainty**: The exact M16A2 primary fire stat numbers must be read from the game's `.qvm` asset files (or dumped from `0x0056E258` at runtime after `DefineWeaponType` executes).

---

## 7. Implementation Boundary (Portable Game Logic vs. Platform/Engine Dependencies)

### Portable Gameplay Logic (Direct C Port Candidates)
- **Weapon State Machine (`0x0040E9C0–0x0040F550`, `0x00410700`)**: Pure state-table and bitflag logic driving idle, firing, dry-fire, M203 secondary fire, and reload transitions.
- **`Gun_Fire` & `Gun_Tick` (`0x00478BA0`, `0x00478640`)**: Pure deterministic math for RPM cooldown ticks (`(60.0 / rpm) * 30.0`), burst counting (`+0x140` vs `+0x64C`), magazine decrement (`+0x144`), orthonormal basis construction (`0x00414A60`), and cubic radial spread cone sampling.
- **Recoil Generation & Damping (`0x00479780`, `0x00462E50`, `0x00464800`)**: Pure floating-point unit-disk rejection sampling, degree-to-radian scaling, `0.9f` per-tick exponential decay, and `±pi/2` pitch clamping.
- **`Gun_MagFill` & Ammo Queries (`0x004798C0`, `0x00479AA0`)**: Pure integer array arithmetic over `human + 0x340` and `gun + 0x144`.
- **`Gun_CastRound` & `Gun_CheckRicochet` (`0x0047B750`, `0x0047BB00`)**: Portable ray-march, ricochet reflection, and linear penetration resistance math once paired with the engine's raycast callback (`0x004CF4A0`).

### Platform / Engine Subsystem Dependencies (Require Adapter Layer)
- **Audio Playback (`SoundSys_*` @ `0x00478EC0–0x00479080`, `0x0040F0D0`, `0x004735D9`)**: Starting/stopping looping gunfire samples (`fireSound1`/`fireSound2`), `"guns_dry_1"`, and `"m203_launch_1"` depends on the DirectSound-backed sound engine.
- **1st/3rd-Person Skeletal Animation & View-Model Rendering (`0x004137E0`, `0x004787B0`, `0x00473620`)**: Triggering bone animations, rendering muzzle flash/barrel smoke sprites, and drawing HUD ammo icons/text depend on the rendering/animation subsystem.
- **QVM Script Loader (`0x00413F90`, `0x004737F0`)**: Reading weapon parameters at level load depends on the QVM/symbol table parser (`0x004B8A50`).
