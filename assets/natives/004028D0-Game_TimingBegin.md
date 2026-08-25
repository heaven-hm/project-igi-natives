# Game_TimingBegin

| Field | Value |
|---|---|
| Address/hash | `0x004028D0` |
| Signature | `void Game_TimingBegin(void)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Begins a nested timing interval: starts the retail timer when the timing depth is zero, then increments the depth counter. Level_Start and Game_Restart bracket their load work with this helper and Game_TimingEnd.

## How it was found

Retail evidence: Ghidra: if DAT_00567C80 is zero, stores FUN_00490370() in DAT_00567C78; then increments DAT_00567C80.; r2 confirms the zero-depth timer start and nested depth increment.; Ghidra callers Level_Start and Game_Restart bracket load work with this helper and Game_TimingEnd..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
