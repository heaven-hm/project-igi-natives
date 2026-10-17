// Original IGI.EXE function: Weapon_LocalAmmo (VA 0x0047CCF0; static CFG gate PASS, CFG score 1.000).
#include "Weapon_LocalAmmo.h"
int32_t Weapon_LocalAmmo()

{
    g_5c10e4 = 0;
    return Sys_IllegalDeviceNameInP("LOCAL:ammo", AmmoType_Open, nullptr);
}
