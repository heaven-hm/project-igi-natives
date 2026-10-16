#include "Ammo_TypeOpen.h"
int32_t Ammo_TypeOpen()

// Sig: void Ammo_TypeOpen(void)
// Note: Open ammo qvm file to memory for all weapons loaded.
{
    Game_DefineOptions("DefineAmmoType", Define_AmmoType, 0, 0xffffffff);
    /* tailcall */
    return Weapon_LocalAmmo();
}
