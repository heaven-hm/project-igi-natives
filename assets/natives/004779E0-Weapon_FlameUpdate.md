# Weapon_FlameUpdate

Address: 0x004779E0
Signature: void Weapon_FlameUpdate(WeaponContext* weaponCtx, int* state)
Data types: WeaponContext

## Recovered behavior

FLAME-weapon effect update: resolves effect object via [ctx+0x14]+0x20 then updates through 0x477C10. Param state is read, passed by address to the selected effect callback, and used to update weaponCtx+0xEC. Ghidra and r2 agree on two cdecl stack arguments.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
