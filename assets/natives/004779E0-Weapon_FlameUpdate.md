# Weapon_FlameUpdate

| Field | Value |
|---|---|
| Address/hash | `0x004779E0` |
| Signature | `void Weapon_FlameUpdate(void* weaponCtx, int* state)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

FLAME-weapon effect update: resolves effect object via [ctx+0x14]+0x20 then updates through 0x477C10. Param state is read, passed by address to the selected effect callback, and used to update weaponCtx+0xEC. Ghidra and r2 agree on two cdecl stack arguments.

## How it was found

Retail evidence: Ghidra signature: void Weapon_FlameUpdate(int param_1, int* param_2); param_1 resolves the flame effect through [weaponCtx+0x14]+0x20 and param_2 is passed by address to the selected effect callback.; r2 prototype/disassembly: two cdecl stack arguments at 0x004779E0; exact 0x004779E0-0x00477A6A body and callback table lookup through 0x00A96AE0.; Registration stack review: the callback pointer pushed at 0x004772FB remains for the following registrar call; it is not an argument to Weapon_FlameUpdate..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
