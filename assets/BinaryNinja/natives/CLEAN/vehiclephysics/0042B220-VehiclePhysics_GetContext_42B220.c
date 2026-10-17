// IGI native provenance: VehiclePhysics_GetContext_42B220 - 0x0042B220 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042B220-VehiclePhysics_GetContext_42B220.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_GetContext_42B220.h"

int32_t* VehiclePhysics_GetContext_42B220(void* arg1, int32_t* arg2)

{
    arg2[1] = 0;
    *arg2 = arg1 + 0x20;
    arg2[2] = *(arg1 + 0x884);
    return arg2;
}
