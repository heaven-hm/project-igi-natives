#include "0047CAB0-Ammo_TypeOpen.h"
/* 0x0047cab0 Ammo_TypeOpen full linked: callers=1 callees=2 */
int32_t Ammo_TypeOpen()

// Sig: void Ammo_TypeOpen(void)
// Note: Open ammo qvm file to memory for all weapons loaded.
{
    Game_DefineOptions("DefineAmmoType", Define_AmmoType, 0, 0xffffffff);
    /* tailcall */
    return sub_47ccf0();
}
