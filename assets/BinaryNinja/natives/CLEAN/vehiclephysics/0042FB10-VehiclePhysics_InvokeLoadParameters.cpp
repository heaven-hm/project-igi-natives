// IGI native provenance: VehiclePhysics_InvokeLoadParameters - 0x0042FB10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042FB10-VehiclePhysics_InvokeLoadParameters.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_InvokeLoadParameters.h"

int32_t VehiclePhysics_InvokeLoadParameters(void* arg1, int32_t* arg2)

{
    void* source_ptr = *arg2;
    Vehicle_LoadParameters(arg1, arg2);
    *(source_ptr + 0x70) = 0;
    *(source_ptr + 0x74) = *(arg1 + 0x744);
    *(source_ptr + 0x75) = 0;
    return 0;
}
