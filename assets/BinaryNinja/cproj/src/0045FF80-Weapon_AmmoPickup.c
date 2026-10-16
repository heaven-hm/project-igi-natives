#include "gi_platform.h"
#include "0045FF80-Weapon_AmmoPickup.h"
int32_t Weapon_AmmoPickup(void* a1, int32_t* a2)

// Sig: void Weapon_AmmoPickup(void* player, void* pickupEntity)
// Note: Gives an AMMO pickup to the player (same struct conventions as
// Weapon_GunPickup: player carry-flags and pickup-entity fields drive the
// grant; plays the pickup sound). Params: player = player struct ptr,
// pickupEntity = ammo world entity. Use for custom ammo pickups.
{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0xcf5));

    if (result)
        return result;

    Weapon_EjectShell_8(a1 + 0x340, *a2, a2[1]);
    return Sound_EventTrigger("weaponpickup_1", nullptr, 0);
}
