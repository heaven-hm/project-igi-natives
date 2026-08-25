# Weapon_GunPickup

| Field | Value |
|---|---|
| Address/hash | `0x0045FFC0` |
| Signature | `void Weapon_GunPickup(void* player, void* pickupEntity)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Gives a GUN pickup to the player: checks the player's already-carried flag (player+0xCF5), reads the weapon id from pickupEntity+8 -> word +0x1C, validates the weapon category via 0x401CF0, hands the weapon over (0x477BF0/0x477C50) and plays the 'weaponpickup_1' sound (0x47CE00/0x4E7200). Params: player = player/Human struct ptr, pickupEntity = the picked-up world entity. Use for custom weapon pickups.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
