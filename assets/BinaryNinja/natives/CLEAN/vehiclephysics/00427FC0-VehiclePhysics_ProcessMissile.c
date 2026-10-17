// IGI native provenance: VehiclePhysics_ProcessMissile - 0x00427FC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00427FC0-VehiclePhysics_ProcessMissile.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_ProcessMissile.h"

char* VehiclePhysics_ProcessMissile(void* arg1, char* arg2)

{
    if (arg1 != *(arg2 + 4) && arg1 != *(arg2 + 8) && arg1 != *(arg2 + 0xc)
        && *(arg1 + 0x1c) != g_53bb8c)
    {
        *arg2 = 1;
        return arg2;
    }

    *arg2 = 0;
    return arg2;
}
