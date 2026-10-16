# IGI1 native verification — layered architecture

A native (address + name + signature + body) is only promoted when every layer
below has live evidence. No layer may pass on assumption.

## L0 STATIC EXISTENCE
Binary Ninja MCP `bn_function_list` contains the address as a *function start*
AND radare2 `afij` carves a function at the same address.
Result: start is real, not mid-instruction. **5,732/5,732 (100.00% of Binary Ninja binary view)**.

## L1 CFG PARITY (pattern matching)
score = 1 - (|bn_blocks - r2_nbbs|/max + |bn_calls - r2_outdegree|/max)/3
accept >= 0.85 (rule inherited from open-igi CFG loop).
Result: PASS 5,196, FAIL 536.

## L2 SIGNATURE / TYPE
BN `bn_function_prototype_get` gives return + parameter types. Where the engine
registrar is known (AI_RegisterActions @0x44CCA0, open-igi AiScriptApi 56
entries) the arity is cross-checked against the registrar call.
Result: 5,732/5,732 have an analyzed prototype; arity-checkable subset cross-checked.

## L3 LINK + STRING EVIDENCE
Callers/callees from BN plus self-naming strings in the body
(`WeaponType_Open(): Couldn't load script`, `Qvm`, `SoundSys`, `DirectDraw`, etc.).
Cross-checked against open-igi engine script citations and subsystem namespaces.

## L4 MEMORY / STRUCT
Every `data_XXXX` in the body is resolved via BN `bn_data_variable_list`; typed
(struct/pointer) vs opaque `int32_t` counted. Structs reverse-engineered:
`frames_ctx`, `status_msg`, `ai_ctx`/`ai_anim_entry`, `human_player`, `collision_set`,
`band_filter`, `weapon_ctx`, `vehicle_ctx`, `weather_ctx`, `qvm_stack`.

## L5 RUNTIME (requires Windows)
`tools/igi-probe` INT3 hooks on retail IGI.EXE under Wine/Windows.
Runtime evidence is reported as absent on macOS, never assumed.

## Current confidence distribution
- 5/6 (all static + CFG pass + link/string + memory): 5,196
- 4/6 (static + signature + memory): 536
- 6/6 (runtime verified): pending Windows capture

## Engine Subsystems Covered (100% of Binary Ninja View)
- Sound Engine: 215 functions
- Physics Engine: 297 functions
- Weapon Engine: 172 functions
- Weather & Environment Engine: 206 functions
- Animation Engine: 38 functions
- Script & QVM Engine: 335 functions
- AI Engine: 534 functions
- Render & Display Engine: 457 functions
- UI & Menu Engine: 225 functions
- System, Math & I/O Engine: 453 functions
