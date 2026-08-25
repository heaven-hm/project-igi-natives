# Weapons_CountGet

Address: 0x00413BB0
Signature: int Weapons_CountGet()
Data types: WeaponContext

## Recovered behavior

RETURNS the number of weapons defined for the human player: reads global counter 0x57B18C (exactly `mov eax,[0x57B18C]; ret`). That counter is written by the DefineHumanPlayerWeaponCycle definition parser - so this reflects the current weapon-cycle list length. Use to bounds-check weapon indexes before Weapon_GunPickup-style calls.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
