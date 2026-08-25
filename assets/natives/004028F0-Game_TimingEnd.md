# Game_TimingEnd

| Field | Value |
|---|---|
| Address/hash | `0x004028F0` |
| Signature | `void Game_TimingEnd(void)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Ends a nested timing interval: decrements the depth counter and, at zero, adds elapsed timer ticks to game-context field +0x50 and clears the interval start timestamp.

## How it was found

Retail evidence: Ghidra: decrements DAT_00567C80; at zero, adds FUN_00490370()-DAT_00567C78 to DAT_00567C8C+0x50 and clears DAT_00567C78.; r2 confirms the nested depth decrement and elapsed-time accumulation.; Ghidra callers Level_Start and Game_Restart pair it with Game_TimingBegin..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
