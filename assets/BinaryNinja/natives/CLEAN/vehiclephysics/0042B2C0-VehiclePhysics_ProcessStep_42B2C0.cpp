// IGI native provenance: VehiclePhysics_ProcessStep_42B2C0 - 0x0042B2C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042B2C0-VehiclePhysics_ProcessStep_42B2C0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_ProcessStep_42B2C0.h"

void* VehiclePhysics_ProcessStep_42B2C0(int32_t* arg1)

{
    int32_t result = *arg1;

    if (result >= 0 && result < 2)
    {
        arg1[1] = &(&data_53bce8)[result * 4];
        return &(&data_53bce8)[result * 4];
    }

    arg1[1] = 0;
    return result;
}
