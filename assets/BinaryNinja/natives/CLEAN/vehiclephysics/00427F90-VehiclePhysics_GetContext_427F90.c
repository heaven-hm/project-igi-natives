// IGI native provenance: VehiclePhysics_GetContext_427F90 - 0x00427F90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00427F90-VehiclePhysics_GetContext_427F90.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_GetContext_427F90.h"

void* VehiclePhysics_GetContext_427F90(int32_t* arg1)

{
    *(*(*arg1 + 0x20) + 0x58) = 0;
    *(*(*arg1 + 0x20) + 0x50) = 0;
    void* result = *arg1;
    *(*(result + 0x20) + 0x4c) = 0;
    return result;
}
