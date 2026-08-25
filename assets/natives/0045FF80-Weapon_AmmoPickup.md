# Weapon_AmmoPickup

Address: 0x0045FF80
Signature: void Weapon_AmmoPickup(void* player, void* pickupEntity)
Data types: HumanPlayer, WeaponContext, WeaponEntityView

## Recovered behavior

Gives an AMMO pickup to the player (same struct conventions as Weapon_GunPickup: player carry-flags and pickup-entity fields drive the grant; plays the pickup sound). Params: player = player struct ptr, pickupEntity = ammo world entity. Use for custom ammo pickups.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
