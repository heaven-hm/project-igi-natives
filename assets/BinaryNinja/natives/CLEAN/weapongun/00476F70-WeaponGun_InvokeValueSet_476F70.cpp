// IGI native provenance: WeaponGun_InvokeValueSet_476F70 - 0x00476F70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00476F70-WeaponGun_InvokeValueSet_476F70.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_InvokeValueSet_476F70.h"

int32_t WeaponGun_InvokeValueSet_476F70(long double arg1, int32_t* arg2)

{
    float dest_ptr = arg2[2];
    float base_val = arg2[1];
    float* source_ptr = *arg2;
    Profile_ValueSet(base_val, dest_ptr);
    *source_ptr = arg1;
    int32_t result = Script_GetArg(base_val, dest_ptr + 1);
    source_ptr[1] = result;
    return result;
}
