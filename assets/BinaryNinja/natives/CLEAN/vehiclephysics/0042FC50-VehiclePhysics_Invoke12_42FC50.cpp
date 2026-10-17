// IGI native provenance: VehiclePhysics_Invoke12_42FC50 - 0x0042FC50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042FC50-VehiclePhysics_Invoke12_42FC50.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_Invoke12_42FC50.h"

char* VehiclePhysics_Invoke12_42FC50(int32_t arg1, char* arg2)

{
    if (*(arg2 + 8) != arg1 && *(arg2 + 0xc) != arg1)
    {
        *arg2 = 1;
        return arg2;
    }

    *arg2 = 0;
    return arg2;
}
