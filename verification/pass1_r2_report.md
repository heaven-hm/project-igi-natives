# Pass 1 — radare2 Deep Analysis Report (all 238 HASH natives)

**Binary**: /Users/haseeb-mir/Downloads/IGI/IGI.EXE (IGI 1 retail, PE32, image base 0x400000, .text 0x401000–0x532510)

## Method

1. Parsed all `(NAME, address)` pairs from `IGI_Internal/Natives/Natives.hpp` HASH enum (comments stripped; 7-digit addresses normalized to 8-digit form). Result: **238 entries, 237 unique addresses** (`PLAYER_XP_HIT` is a documented alias of `HUMAN_HIT_DAMAGE`, both 0x00416D80).
2. Full-binary function discovery: `r2 -q -c "aaa; aflj"` → 3254 functions. NOTE: `aaa` produces several junk "giant functions" (data segments misread as code, e.g. fcn.00402930 size 837131), so containment checks were done against the natives' own verified ranges, NOT against junk afl boundaries.
3. Per-address forced analysis in ONE batched r2 session (`af` + `afi` + `pdf` per address, marker-separated script, 238×4 commands).
4. Per native checked: exact function start (afi minaddr == target, size > 0); size sanity (6–2481B observed); prologue recorded; ret-exit present (trailing `jmp` cases individually resolved to INTERNAL loop back-edges with a real `ret` path — 11 such functions); pairwise improper-overlap check across all native ranges (**0 overlaps**).

## Verdict summary

- **PASS: 237 / 238**
- **FAIL: 1 / 238** — `DEBUG_KEYS_ENABLE = 0x00041502`: outside .text (already annotated in Natives.hpp as UNVERIFIED/INVALID, do-not-invoke).
- SUSPECT: 0
- Size distribution of passing functions: min 6B (QHASH_VAL_GET), median ~94B, max 2481B (QSCRIPT_ASSEMBLE).
- Small thunks ≤16 bytes ending in `mov/mov/mov/ret` patterns (legitimate getters/wrappers): 7 → MUSIC_SFX_VOLUME (10B), QHASH_VAL_SET (8B), QHASH_VAL_GET (6B), WEAPON_TOTAL (6B), HUMAN_HIT_DAMAGE (12B), HUMAN_CAM_VIEW (15B), GAME_DATA_SYMBOL_REMOVE (12B).
- Trailing-instruction audit: 11 functions end in an internal `jmp` back-edge (loop); all were individually resolved to INTERNAL jumps inside `[minaddr,maxaddr]` with a real `ret` exit path present (e.g. ANIM_TRIGGER_PARSE, MENU_MANAGER, AI_FUNCTION_SEND_RESPONSE).

## Non-PASS entries

| name | address | verdict | note |
|---|---|---|---|
| DEBUG_KEYS_ENABLE | 0x00041502 | FAIL | address outside .text (0x401000-0x532510) |

## Conclusion

Every in-range native address in the HASH enum is the exact start of a well-formed cdecl-style x86 function in IGI 1 igi.exe with a valid exit path, sane size, zero inter-native overlap. The single FAIL is pre-existing and already quarantined in source. Machine-readable evidence: `pass1_r2_results.json`.
