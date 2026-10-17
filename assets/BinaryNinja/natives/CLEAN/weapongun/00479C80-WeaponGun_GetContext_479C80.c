// IGI native provenance: WeaponGun_GetContext_479C80 - 0x00479C80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00479C80-WeaponGun_GetContext_479C80.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_GetContext_479C80.h"

void* WeaponGun_GetContext_479C80(void* arg1, int32_t* arg2)

{
    *arg2 = *(arg1 + 0x128);
    return arg1;
}
