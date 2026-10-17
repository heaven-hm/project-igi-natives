// IGI native provenance: Weapon_TypeOpen - 0x00413B70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00413B70-Weapon_TypeOpen.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_TypeOpen.h"
int32_t Weapon_TypeOpen()

// Sig: void Weapon_TypeOpen(void)
// Note: Open all weapons defined in .qsc file for Humanplayer.
{
    g_57b18c = 0;
    return Sys_IllegalDeviceNameInP("LOCAL:weapons", sub_413a90, nullptr);
}
