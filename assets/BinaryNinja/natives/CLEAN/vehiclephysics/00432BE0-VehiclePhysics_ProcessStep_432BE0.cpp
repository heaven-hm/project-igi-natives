// IGI native provenance: VehiclePhysics_ProcessStep_432BE0 - 0x00432BE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00432BE0-VehiclePhysics_ProcessStep_432BE0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_ProcessStep_432BE0.h"

void* VehiclePhysics_ProcessStep_432BE0(int32_t* arg1)

{
    int32_t result = *arg1;

    if (result >= 0 && result < 5)
    {
        arg1[1] = &(&data_53be60)[result * 4];
        return &(&data_53be60)[result * 4];
    }

    arg1[1] = 0;
    return result;
}
