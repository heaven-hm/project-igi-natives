// IGI native provenance: VehiclePhysics_InvokeLoadParameters_432F40 - 0x00432F40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00432F40-VehiclePhysics_InvokeLoadParameters_432F40.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_InvokeLoadParameters_432F40.h"

int32_t* VehiclePhysics_InvokeLoadParameters_432F40(void* arg1, int32_t* arg2)

{
    void* source_ptr = *arg2;
    int32_t* result = Vehicle_LoadParameters(arg1, arg2);
    *(source_ptr + 0x70) = 0;
    return result;
}
