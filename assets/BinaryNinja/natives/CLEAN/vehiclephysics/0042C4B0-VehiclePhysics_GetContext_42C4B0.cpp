// IGI native provenance: VehiclePhysics_GetContext_42C4B0 - 0x0042C4B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042C4B0-VehiclePhysics_GetContext_42C4B0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_GetContext_42C4B0.h"

int32_t VehiclePhysics_GetContext_42C4B0(void* arg1)

{
    void* context_val = *(arg1 + 0xc);
    void* var_4 = arg1 + 0x24;
    int32_t var_8 = *(arg1 + 0x1c);
    int32_t var_c = *(arg1 + 0x20);
    int32_t var_10 = *(arg1 + 0x18);
    int32_t result = *(arg1 + 0x10);
    int32_t var_14 = *(arg1 + 0x14);
    int32_t var_18 = *(context_val + 0x48);
    int32_t result_1 = result;
    void* var_20 = context_val;
    return result;
}
