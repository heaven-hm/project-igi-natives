// IGI native provenance: VehiclePhysics_DefaultHandler_42B240 - 0x0042B240 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042B240-VehiclePhysics_DefaultHandler_42B240.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_DefaultHandler_42B240.h"

int32_t* VehiclePhysics_DefaultHandler_42B240(void* arg1, int32_t* arg2)

{
    int32_t* result = *arg2;
    __builtin_memcpy(arg2[2], arg1 + 0x20, 0x18);
    *result = *(arg1 + 0x764);
    result[1] = *(arg1 + 0x768);
    result[2] = *(arg1 + 0x720);
    result[3] = *(arg1 + 0x730);
    return result;
}
