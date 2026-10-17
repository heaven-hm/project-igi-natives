// IGI native provenance: WeaponGun_GetContext_474F30 - 0x00474F30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00474F30-WeaponGun_GetContext_474F30.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_GetContext_474F30.h"

int32_t WeaponGun_GetContext_474F30(void* arg1, int32_t* arg2)

{
    int32_t context_val = 0;
    arg2[2] = 0;
    arg2[1] = 0;
    *arg2 = 0;
    context_val = *(arg1 + 0x1c);
    return (*((context_val << 2) + &g_a970e0))(arg1);
}
