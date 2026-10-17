// IGI native provenance: VehiclePhysics_ProcessStep_42F870 - 0x0042F870 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042F870-VehiclePhysics_ProcessStep_42F870.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_ProcessStep_42F870.h"

void* VehiclePhysics_ProcessStep_42F870(int32_t* arg1)

{
    int32_t result = *arg1;

    if (result >= 0 && result < 5)
    {
        arg1[1] = &(&data_53bdb0)[result * 4];
        return &(&data_53bdb0)[result * 4];
    }

    arg1[1] = 0;
    return result;
}
