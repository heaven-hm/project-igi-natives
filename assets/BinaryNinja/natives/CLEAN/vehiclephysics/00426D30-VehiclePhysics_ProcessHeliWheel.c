// IGI native provenance: VehiclePhysics_ProcessHeliWheel - 0x00426D30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00426D30-VehiclePhysics_ProcessHeliWheel.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_ProcessHeliWheel.h"

int32_t VehiclePhysics_ProcessHeliWheel(void* arg1, char* arg2)

{
    int32_t result = *(arg2 + 8);

    if (result != arg1 && *(arg2 + 0xc) != arg1 && *(arg1 + 0x130) != result)
    {
        *arg2 = 1;
        return result;
    }

    *arg2 = 0;
    return result;
}
