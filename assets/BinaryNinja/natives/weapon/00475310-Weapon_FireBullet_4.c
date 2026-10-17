// IGI native provenance: Weapon_FireBullet_4 - 0x00475310 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00475310-Weapon_FireBullet_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_FireBullet_4.h"
int32_t Weapon_FireBullet_4(int32_t context, int32_t param_2, int32_t param_3)

{
    memcpy(param_3, context + 0x188, 0x28);
    memcpy(param_2, context + 0x170, 0x18);
    return context;
}
