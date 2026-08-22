# External Source Cross-References (research input for verification/discovery)

Collected per user request: BlankName's IGIPatch (GitHub), OpenIGI (local
`~/Documents/Code/open-igi`), and GitHub natives data repos.

## 1. BlanknameES/IGIPatch (github.com/BlanknameES/IGIPatch)

Assembly patch DLL with named igi.exe symbols (`;Name:0xAddress` annotations).
25 named locations extracted; 24 NOT yet in our SDK. These are third-party
verified engine locations usable as corroborating evidence — but each must
still pass our own igi.exe machine-code verification before becoming a native.

Functions (candidates for new natives after verification):
- AppContext_SetDebugged 0x0048F1A0
- AppContext_SetDebugtextState 0x0048F1E0
- AppContext_SetLightmapsUsed 0x0048F240
- AppContext_SetTerrainLightmapsUsed 0x0048F260
- AppMain_ParseCmdLineArgs 0x0048F360
- Config_GetActiveGraphicOptions 0x00404590
- Display_GetActiveMode 0x00491CF0
- Display_SetBackgroundColourFn 0x00491E70
- Display_SetMode 0x00491A90
- Picture_GetHeight 0x004B6E80
- Picture_GetWidth 0x004B6E70
- QSprite_Register4AZ 0x004B53B0
- TransContext_SetActiveTransContext 0x00497E70

Globals / data (NOT natives; document only):
- Config_nNumDisplayDevices 0x00567C90, Cursor_nMouseX/Y 0x0057BC58/5C,
  GameFunctions_isEnableDebugKeys 0x0057B194, Mesh3D_avOverrideFOV 0x00B81700,
  Mouse_tMouse_bButton 0x00C28F8C, TransContext_tActiveTransContext 0x00BCAAE0,
  AppContext_isFixmeSmall 0x005C8E00, dword_57BC0C, flt_533504, sdefault.

Already in SDK: _LDebug_Error 0x004AF7B0 (= ERROR_SHOW).

## 2. OpenIGI (local ~/Documents/Code/open-igi, C# reimplementation)

- `src/OpenIGI.Engine/Tasks/TaskScriptCommands.cs` implements IGI script
  commands; its command names should corroborate the registration-table
  names we mined from igi.exe (AIAction_*, AIFunction_*, Define*, etc.).
- Use as semantic corroboration in the reconciliation pass: name sets should
  intersect heavily with our 238 natives' registration names.
- Other useful files: `tests/OpenIGI.Engine.Tests/Tasks/TaskScriptCommandsTests.cs`,
  `src/OpenIGI.Scripting` (QVM interpreter).

## 3. GitHub natives data

- Jones-HM/project-igi-internals-data (a.k.a. IGI-Research-Devs mirror):
  canonical `IGI-Natives.json` (81 natives) — already the base of our JSON;
  all 80 pre-existing entries verified additive-preserved.
- Jones-HM/project-igi-natives-analyzer / -info: search tools over the same
  JSON; no additional addresses.

## Disposition

Feed sections 1-2 into the triple-verification reconciliation pass:
verify the 13 candidate functions against igi.exe (r2 prologue + Ghidra
semantics + IGIPatch usage as third-party corroboration) and add the ones
that pass as new natives with dual evidence comments; record globals in the
report but do not register them as natives.
