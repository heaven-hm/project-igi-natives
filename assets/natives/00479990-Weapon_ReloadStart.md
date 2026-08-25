# Weapon_ReloadStart

Address: 0x00479990
Signature: void Weapon_ReloadStart(void* soldierCtx)
Data types: Soldier, WeaponContext

## Recovered behavior

Starts weapon RELOAD: uses soldier object ref +0x4C4 with spawner 0x4F2060 (arg 0x4C3). IGI-MP hooks this as reloadhook.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
