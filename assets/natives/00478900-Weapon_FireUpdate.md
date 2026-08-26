# Weapon_FireUpdate

Address: 0x00478900
Signature: void Weapon_FireUpdate(WeaponContext* weaponCtx, int* state)
Data types: WeaponContext

## Recovered behavior

Weapon FIRE update - processes firing state using config byte 0x5407B9 and weapon-table entry ([ctx+0x14] -> +0x1C). Param state is read, passed by address to the selected weapon callback, and used to update weaponCtx+0xEC. Ghidra and r2 agree on two cdecl stack arguments; the registration site pushes this callback before the following registrar call.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
