// IGI native provenance: VehiclePhysics_Invoke3_432F60 - 0x00432F60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00432F60-VehiclePhysics_Invoke3_432F60.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_Invoke3_432F60.h"

int32_t VehiclePhysics_Invoke3_432F60(int32_t* arg1)

{
    return Vehicle_InitHeli_3(*arg1, &arg1[2], arg1[1]);
}
