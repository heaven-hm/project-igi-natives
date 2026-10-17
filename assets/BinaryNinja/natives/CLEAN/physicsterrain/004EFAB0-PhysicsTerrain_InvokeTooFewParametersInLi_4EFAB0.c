// IGI native provenance: PhysicsTerrain_InvokeTooFewParametersInLi_4EFAB0 - 0x004EFAB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EFAB0-PhysicsTerrain_InvokeTooFewParametersInLi_4EFAB0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_InvokeTooFewParametersInLi_4EFAB0.h"

int32_t PhysicsTerrain_InvokeTooFewParametersInLi_4EFAB0(long double arg1, long double arg2, long double arg3, float* arg4, int32_t* arg5)

{
    Script_TooFewParametersInLi(arg5, 3);
    float dest_ptr = *arg5;
    Profile_ValueSet(arg5[1], dest_ptr);
    *arg4 = arg1;
    Profile_ValueSet(arg5[1], dest_ptr + 1);
    arg4[1] = arg2;
    Profile_ValueSet(arg5[1], dest_ptr + 2);
    arg4[2] = arg3;
    int32_t result = *arg5 + 3;
    *arg5 = result;
    return result;
}
