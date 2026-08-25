# Game_GetContext

| Field | Value |
|---|---|
| Address/hash | `0x00402880` |
| Signature | `void* Game_GetContext(void)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Returns the global IGI game-context pointer at DAT_00567C8C. Retail callers use it to dispatch context callbacks and initialize the main game state.

## How it was found

Retail evidence: Ghidra: returns DAT_00567C8C, the global game-context pointer initialized by the startup path.; r2: mov eax,[0x00567C8C]; ret.; Ghidra callers pass the result to context callback dispatch and FUN_004015F0..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
