// IGI native provenance: VehiclePhysics_GetContext_427F30 - 0x00427F30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00427F30-VehiclePhysics_GetContext_427F30.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_GetContext_427F30.h"

void* VehiclePhysics_GetContext_427F30(void* arg1)

{
    *(arg1 + 0xdc) = 0;
    *(arg1 + 0xe8) = 0;
    *(arg1 + 0x6c) = 0;
    return arg1;
}
