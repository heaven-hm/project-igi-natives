// IGI native provenance: VehiclePhysics_ProcessStep_434A50 - 0x00434A50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00434A50-VehiclePhysics_ProcessStep_434A50.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_ProcessStep_434A50.h"

void* VehiclePhysics_ProcessStep_434A50(int32_t* arg1)

{
    int32_t result = *arg1;

    if (result >= 0 && result < 0xa)
    {
        arg1[1] = &(&data_53bef0)[result * 4];
        return &(&data_53bef0)[result * 4];
    }

    arg1[1] = 0;
    return result;
}
