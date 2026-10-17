// IGI native provenance: Weapon_LocalAmmo - 0x0047CCF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047CCF0-Weapon_LocalAmmo.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_LocalAmmo.h"
int32_t Weapon_LocalAmmo()

{
    g_5c10e4 = 0;
    return Sys_IllegalDeviceNameInP("LOCAL:ammo", AmmoType_Open, nullptr);
}
