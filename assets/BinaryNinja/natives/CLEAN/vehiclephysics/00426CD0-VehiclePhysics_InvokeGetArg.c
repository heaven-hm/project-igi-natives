// IGI native provenance: VehiclePhysics_InvokeGetArg - 0x00426CD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00426CD0-VehiclePhysics_InvokeGetArg.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_InvokeGetArg.h"

int32_t VehiclePhysics_InvokeGetArg(long double arg1, long double arg2, int32_t* arg3)

{
    int32_t dest_ptr = arg3[2];
    int32_t* base_val = *arg3;
    *base_val = Script_GetArg(arg3[1], dest_ptr);
    Profile_ValueSet(arg3[1], dest_ptr + 1);
    base_val[1] = arg1 * 0.0174532924f * 0.0333333351f;
    int32_t result = Profile_ValueSet(arg3[1], dest_ptr + 2);
    base_val[2] = arg2 * 0.0174532924f;
    return result;
}
