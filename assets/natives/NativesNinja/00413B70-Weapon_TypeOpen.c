#include "00413B70-Weapon_TypeOpen.h"
/* 0x00413b70 Weapon_TypeOpen full linked: callers=1 callees=1 */
int32_t Weapon_TypeOpen()

// Sig: void Weapon_TypeOpen(void)
// Note: Open all weapons defined in .qsc file for Humanplayer.
{
    g_57b18c = 0;
    return sub_4b1420("LOCAL:weapons", sub_413a90, nullptr);
}
