// IGI native provenance: WeaponGun_InvokeValueSet - 0x00470540 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00470540-WeaponGun_InvokeValueSet.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_InvokeValueSet.h"

int32_t WeaponGun_InvokeValueSet(long double arg1, int32_t* arg2)

{
    float dest_ptr = arg2[2];
    float* base_val = *arg2;
    int32_t result = Profile_ValueSet(arg2[1], dest_ptr);
    *base_val = arg1;
    arg2[2] = dest_ptr + 1;
    return result;
}
