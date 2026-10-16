#include "gi_platform.h"
#include "00413B70-Weapon_TypeOpen.h"
int32_t Weapon_TypeOpen()

// Sig: void Weapon_TypeOpen(void)
// Note: Open all weapons defined in .qsc file for Humanplayer.
{
    g_57b18c = 0;
    return Sys_IllegalDeviceNameInP("LOCAL:weapons", sub_413a90, nullptr);
}
