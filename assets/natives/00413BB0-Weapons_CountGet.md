# Weapons_CountGet

| Field | Value |
|---|---|
| Address/hash | `0x00413BB0` |
| Signature | `int Weapons_CountGet()` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS the number of weapons defined for the human player: reads global counter 0x57B18C (exactly `mov eax,[0x57B18C]; ret`). That counter is written by the DefineHumanPlayerWeaponCycle definition parser - so this reflects the current weapon-cycle list length. Use to bounds-check weapon indexes before Weapon_GunPickup-style calls.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
