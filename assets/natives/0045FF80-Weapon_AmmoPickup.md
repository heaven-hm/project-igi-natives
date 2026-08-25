# Weapon_AmmoPickup

| Field | Value |
|---|---|
| Address/hash | `0x0045FF80` |
| Signature | `void Weapon_AmmoPickup(void* player, void* pickupEntity)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Gives an AMMO pickup to the player (same struct conventions as Weapon_GunPickup: player carry-flags and pickup-entity fields drive the grant; plays the pickup sound). Params: player = player struct ptr, pickupEntity = ammo world entity. Use for custom ammo pickups.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
