// Original IGI.EXE function: Weapon_TypeOpen (VA 0x00413B70; static CFG gate PASS, CFG score 1.000).
#include "Weapon_TypeOpen.h"
int32_t Weapon_TypeOpen()

// Sig: void Weapon_TypeOpen(void)
// Note: Open all weapons defined in .qsc file for Humanplayer.
{
    g_57b18c = 0;
    return Sys_IllegalDeviceNameInP("LOCAL:weapons", sub_413a90, nullptr);
}
