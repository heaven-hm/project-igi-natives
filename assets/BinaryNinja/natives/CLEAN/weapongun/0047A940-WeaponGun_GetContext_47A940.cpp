// IGI native provenance: WeaponGun_GetContext_47A940 - 0x0047A940 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047A940-WeaponGun_GetContext_47A940.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_GetContext_47A940.h"

void* WeaponGun_GetContext_47A940(void* arg1, int32_t* arg2)

{
    *arg2 = **(arg1 + 0x130);
    arg2[1] = arg1 + 0x178;
    return arg1 + 0x178;
}
