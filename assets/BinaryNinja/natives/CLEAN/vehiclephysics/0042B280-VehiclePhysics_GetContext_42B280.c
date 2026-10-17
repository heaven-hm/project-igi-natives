// IGI native provenance: VehiclePhysics_GetContext_42B280 - 0x0042B280 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042B280-VehiclePhysics_GetContext_42B280.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_GetContext_42B280.h"

char* VehiclePhysics_GetContext_42B280(void* arg1, int32_t* arg2)

{
    int32_t* result_val = *arg2;
    *(arg1 + 0x764) = *result_val;
    *(arg1 + 0x768) = result_val[1];
    *(arg1 + 0x720) = result_val[2];
    *(arg1 + 0x730) = result_val[3];
    return Menu_LeaveMenus_21(arg1, 0);
}
