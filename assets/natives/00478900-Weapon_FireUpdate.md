# Weapon_FireUpdate

| Field | Value |
|---|---|
| Address/hash | `0x00478900` |
| Signature | `void Weapon_FireUpdate(void* weaponCtx, int* state)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Weapon FIRE update - processes firing state using config byte 0x5407B9 and weapon-table entry ([ctx+0x14] -> +0x1C). Param state is read, passed by address to the selected weapon callback, and used to update weaponCtx+0xEC. Ghidra and r2 agree on two cdecl stack arguments; the registration site pushes this callback before the following registrar call.

## How it was found

Retail evidence: Ghidra signature: void Weapon_FireUpdate(int param_1, int* param_2); param_1 reads weaponCtx+0x14 and param_2 is read then passed by address to the selected weapon callback.; r2 prototype/disassembly: two cdecl stack arguments at 0x00478900; exact 0x00478900-0x0047896C body and callback table lookup through 0x00A96AE0.; Registration stack review: the callback pointer pushed at 0x00477ED2 remains for the following FUN_00401400 registrar call; it is not a third argument to Weapon_FireUpdate..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
