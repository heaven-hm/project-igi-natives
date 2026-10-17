// IGI native provenance: VehiclePhysics_InvokeGetArg_427D40 - 0x00427D40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00427D40-VehiclePhysics_InvokeGetArg_427D40.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_InvokeGetArg_427D40.h"

int32_t VehiclePhysics_InvokeGetArg_427D40(int32_t* arg1)

{
    int32_t* source_ptr = *arg1;
    int32_t result = Script_GetArg(arg1[1], arg1[2]) * 3;
    *source_ptr = result * 0xa;
    return result;
}
