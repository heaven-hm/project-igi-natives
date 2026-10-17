// IGI native provenance: Weapon_FireBullet_8 - 0x0047CDA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047CDA0-Weapon_FireBullet_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_FireBullet_8.h"
int32_t Weapon_FireBullet_8(int32_t context)

{
    Qhash_Init(1);
    int32_t result = Sys_CheckHeap_22(context);
    Qhash_Reset();
    return result;
}
