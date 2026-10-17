// IGI native provenance: WeaponGun_GetContext_472400 - 0x00472400 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00472400-WeaponGun_GetContext_472400.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_GetContext_472400.h"

int32_t WeaponGun_GetContext_472400(void* arg1)

{
    __builtin_memcpy(arg1 + 0x60, &g_bcab08, 0x18);
    *(arg1 + 0x7c) = g_bcaaf8;
    *(arg1 + 0x80) = g_bcaafc;
    *(arg1 + 0x84) = g_bcab00;
    return Weapon_WeaponsStringsBinocu(arg1);
}
