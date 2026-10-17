// IGI native provenance: VehiclePhysics_InvokeValueSet - 0x00427F50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00427F50-VehiclePhysics_InvokeValueSet.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_InvokeValueSet.h"

int32_t VehiclePhysics_InvokeValueSet(long double arg1, long double arg2, int32_t* arg3)

{
    float dest_ptr = arg3[2];
    float* base_val = *arg3;
    Profile_ValueSet(arg3[1], dest_ptr);
    *base_val = arg1;
    int32_t result = Profile_ValueSet(arg3[1], dest_ptr + 1);
    base_val[1] = arg2;
    return result;
}
