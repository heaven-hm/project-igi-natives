# Frames_GetTaskCounter

| Field | Value |
|---|---|
| Address/hash | `0x004028C0` |
| Signature | `int Frames_GetTaskCounter(void)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Returns the second task/processing counter at game-context field +0x38. Frames_Set resets it and the retail main loop increments it during the second processing pass.

## How it was found

Retail evidence: Ghidra: returns *(undefined4 *)(DAT_00567C8C + 0x38), reset by Frames_Set.; r2: mov eax,[0x00567C8C]; mov eax,[eax+0x38]; ret.; Main-loop r2 disassembly increments +0x38 during the second task/processing pass; FUN_00460C80 compares the getter result to detect counter changes..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
