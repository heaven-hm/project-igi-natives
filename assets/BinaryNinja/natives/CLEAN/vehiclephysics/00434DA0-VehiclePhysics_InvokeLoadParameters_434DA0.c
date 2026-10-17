// IGI native provenance: VehiclePhysics_InvokeLoadParameters_434DA0 - 0x00434DA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00434DA0-VehiclePhysics_InvokeLoadParameters_434DA0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_InvokeLoadParameters_434DA0.h"

int32_t VehiclePhysics_InvokeLoadParameters_434DA0(void* arg1, int32_t* arg2)

{
    void* source_ptr = *arg2;
    Vehicle_LoadParameters(arg1, arg2);
    *(source_ptr + 0x70) = *(arg1 + 0x82c);
    *(source_ptr + 0x71) = *(arg1 + 0x82d);
    *(source_ptr + 0x72) = *(arg1 + 0x744);
    char result = *(arg1 + 0x82e);
    *(source_ptr + 0x73) = result;
    *(source_ptr + 0x74) = *(arg1 + 0x82f);
    return result;
}
