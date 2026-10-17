// IGI native provenance: VehiclePhysics_InvokeGetArg_4277C0 - 0x004277C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004277C0-VehiclePhysics_InvokeGetArg_4277C0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_InvokeGetArg_4277C0.h"

int32_t VehiclePhysics_InvokeGetArg_4277C0(long double arg1, long double arg2, int32_t* arg3)

{
    int32_t dest_ptr = arg3[2];
    int32_t* base_val = *arg3;
    *base_val = Script_GetArg(arg3[1], dest_ptr);
    Profile_ValueSet(arg3[1], dest_ptr + 1);
    base_val[1] = arg1 * 136.53334f;
    int32_t result = Profile_ValueSet(arg3[1], dest_ptr + 2);
    base_val[2] = arg2 * 4096f;
    return result;
}
