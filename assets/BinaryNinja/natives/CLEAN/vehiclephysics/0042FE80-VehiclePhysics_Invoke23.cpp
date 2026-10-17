// IGI native provenance: VehiclePhysics_Invoke23 - 0x0042FE80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042FE80-VehiclePhysics_Invoke23.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_Invoke23.h"

int32_t VehiclePhysics_Invoke23(long double arg1, long double arg2, int32_t* arg3)

{
    void* dest_ptr = *arg3;
    int32_t result_val = arg3[2];
    float base_val = arg3[1];
    arg3[2] = result_val + 1;
    Sys_ResolveSymbol_23(base_val, result_val, dest_ptr + 0x2d8, 0x10);
    float eax_1 = arg3[2];
    arg3[2] = eax_1 + 1;
    Profile_ValueSet(base_val, eax_1);
    *(dest_ptr + 0x2e8) = arg1 * 4096f;
    float eax_2 = arg3[2];
    arg3[2] = eax_2 + 1;
    int32_t result = Profile_ValueSet(base_val, eax_2);
    *(dest_ptr + 0x2ec) = arg2 * 4096f;
    return result;
}
