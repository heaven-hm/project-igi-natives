# Weapon_GunPickup

Address: 0x0045FFC0
Signature: void Weapon_GunPickup(void* player, void* pickupEntity)
Data types: HumanPlayer, WeaponContext, WeaponEntityView

## Recovered behavior

Gives a GUN pickup to the player: checks the player's already-carried flag (player+0xCF5), reads the weapon id from pickupEntity+8 -> word +0x1C, validates the weapon category via 0x401CF0, hands the weapon over (0x477BF0/0x477C50) and plays the 'weaponpickup_1' sound (0x47CE00/0x4E7200). Params: player = player/Human struct ptr, pickupEntity = the picked-up world entity. Use for custom weapon pickups.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
