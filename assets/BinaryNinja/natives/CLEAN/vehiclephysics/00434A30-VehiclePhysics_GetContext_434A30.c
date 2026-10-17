// IGI native provenance: VehiclePhysics_GetContext_434A30 - 0x00434A30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00434A30-VehiclePhysics_GetContext_434A30.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_GetContext_434A30.h"

int32_t* VehiclePhysics_GetContext_434A30(void* arg1, int32_t* arg2)

{
    arg2[1] = 0;
    *arg2 = arg1 + 0x20;
    arg2[2] = *(arg1 + 0x828);
    return arg2;
}
