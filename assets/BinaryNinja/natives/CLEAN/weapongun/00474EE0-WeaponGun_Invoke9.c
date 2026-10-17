// IGI native provenance: WeaponGun_Invoke9 - 0x00474EE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00474EE0-WeaponGun_Invoke9.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_Invoke9.h"

int32_t* WeaponGun_Invoke9(void* arg1, int32_t* arg2)

{
    if (arg2[0x11])
    {
        *(arg1 + 0x21c) = 1;
        return arg2;
    }

    *(arg1 + 0x208) = *arg2;
    *(arg1 + 0x21c) = 1;
    return arg1;
}
