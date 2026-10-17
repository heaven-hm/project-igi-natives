// IGI native provenance: PickupTrigger_InvokeGetActiveMode_46ABE0 - 0x0046ABE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046ABE0-PickupTrigger_InvokeGetActiveMode_46ABE0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PickupTrigger_InvokeGetActiveMode_46ABE0.h"

void* PickupTrigger_InvokeGetActiveMode_46ABE0(void* arg1)

{
    int32_t context_val;
    int32_t var_4_1 = context_val;
    float var_4 = g_c28b44;
    long double x87_r7_1 = g_c28b48;
    g_5be2b0 = arg1;
    *(arg1 + 0x20) = 0;
    *(arg1 + 0x2c) = 0;
    *(arg1 + 0x24) = var_4 * 0.5f;
    *(arg1 + 0x30) = 0;
    *(arg1 + 0x34) = 0;
    *(arg1 + 0x38) = 0;
    *(arg1 + 0x28) = x87_r7_1 * 0.5f;
    return arg1;
}
