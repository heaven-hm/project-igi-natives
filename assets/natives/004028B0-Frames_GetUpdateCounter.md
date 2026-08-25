# Frames_GetUpdateCounter

| Field | Value |
|---|---|
| Address/hash | `0x004028B0` |
| Signature | `int Frames_GetUpdateCounter(void)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Returns the update-loop counter at game-context field +0x34. Frames_Set resets it and the retail main loop increments it once per simulation/update pass; gameplay timeout code compares against this value.

## How it was found

Retail evidence: Ghidra: returns *(undefined4 *)(DAT_00567C8C + 0x34), reset by Frames_Set.; r2: mov eax,[0x00567C8C]; mov eax,[eax+0x34]; ret.; Main-loop r2 disassembly increments +0x34 once per simulation/update pass; Ghidra callers use the return value for gameplay timeout and update scheduling comparisons..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
