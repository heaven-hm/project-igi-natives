# Triple Verification Report — all 251 IGI 1 natives

**Binary (ground truth):** `/Users/haseeb-mir/Downloads/IGI/IGI.EXE` — Project IGI 1 retail,
PE32, image base 0x400000, `.text` = 0x401000–0x532510.
Per the RE.md trust model, `igi2.pdb` was NOT used as evidence anywhere.

Every native in `IGI_Internal/Natives/Natives.hpp` / `IGI-Natives.json` was put through
three independent verification passes. Machine-readable evidence:
`pass1_r2_results.json`, `pass2_decompile_results.json`, `pass2_semantic_results.json`,
`pass3_registration_results.json`, plus raw dumps (`pass1_raw.txt`, `pass2_raw.txt`).

---

## Pass 1 — radare2 deep structural analysis (all natives)

Full-binary function discovery (`aflj`, 3254 functions), then per-address forced
analysis (`af`+`afi`+`pdf`) for every native address:

- exact function start: **PASS 237/237 in-range addresses**
- sane sizes (6–2481 B; small thunks individually justified)
- valid exit path for every function (11 internal-jmp loop tails resolved to real `ret`s)
- **zero pairwise overlap** between native ranges
- single FAIL: `DEBUG_KEYS_ENABLE = 0x00041502` — outside `.text`; already quarantined
  in source as UNVERIFIED/INVALID do-not-invoke. Left in place with warning comment.

## Pass 2 — decompilation + semantic analysis (r2dec, all natives)

Every function decompiled (`pdd`); verdicts from structural rules (Get*/Is* must return;
Set* take+store args; Define* parse with multiple calls) combined with external
corroboration (OpenIGI C# reimplementation command names; BlanknameES/IGIPatch symbols):

| Verdict | Count | Meaning |
|---|---|---|
| STRONG | 136 | registration-bound + structurally sound + externally corroborated |
| MATCH | 22 | registration-bound + structurally sound |
| WEAK | 79 | pre-existing IDA-labeled natives: structurally sound, verified function start + decompile OK; no string binding expected since names are analyst labels |
| MISMATCH | 0 | 1 heuristic false positive (`DEFINE_HUMAN_PLAYER_WEAPON_CYCLE`) manually deep-read: r2dec shows weapon-list loop filling the cycle array 0x56DF1C — reclassified MATCH |

## Pass 3 — registration cross-check (address ↔ name-string binding)

Byte-level search of `.text` for each native's registration name-string VA and the
native address within ±48 bytes of the reference site:

- **158/237 confirmed** — exactly the natives discovered from igi.exe's own
  script-command tables (registrar 0x004B8890 family).
- 78 no-string: pre-existing analyst-labeled natives (see WEAK above).
- 1 anomaly resolved: the `"MenuManager"` string belongs to a class-factory
  registration (`push 0x2898; push str; call 0x401900`), not our MENU_MANAGER native
  (an IDA-label native) — no action needed.

## External sources (user-requested research)

- **BlanknameES/IGIPatch** (GitHub): 25 named igi.exe symbols extracted.
  13 function candidates triple-checked (r2 function start + r2dec semantics +
  IGIPatch third-party usage) and **added as new natives** (SDK 238 → 251):
  AppContext_SetDebugged/SetDebugtextState/SetLightmapsUsed/SetTerrainLightmapsUsed,
  AppMain_ParseCmdLineArgs, Config_GetActiveGraphicOptions, Display_GetActiveMode/
  SetBackgroundColourFn/SetMode, Picture_GetWidth/GetHeight, QSprite_Register4AZ,
  TransContext_SetActiveTransContext. The other 12 IGIPatch locations are data
  globals (documented in `external_sources.md`, correctly NOT registered as natives).
- **OpenIGI** (local `~/Documents/Code/open-igi`): 202 script-command names extracted;
  heavy overlap with our registration names provides independent semantic corroboration.
- **Jones-HM/project-igi-internals-data**: canonical 81-native JSON — already the base
  of our file; all pre-existing entries verified untouched by both discovery commits.

## Final disposition

- **251/251 natives accounted for**: 237 in-range addresses PASS structural analysis;
  158 carry direct igi.exe registration-binding evidence; 136 additionally corroborated
  by OpenIGI/IGIPatch; 13 new IGIPatch-corroborated additions; 1 known-invalid entry
  (DEBUG_KEYS_ENABLE) explicitly quarantined rather than silently trusted or removed.
- No fabricated replacements were introduced anywhere (RE.md: unknown > fabricated).
