// IGI native provenance: DisplayRender_InvokeRestoreDevice_4A4CB0 - 0x004A4CB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A4CB0-DisplayRender_InvokeRestoreDevice_4A4CB0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_InvokeRestoreDevice_4A4CB0.h"

int32_t DisplayRender_InvokeRestoreDevice_4A4CB0(int32_t arg1)

{
    int32_t result_val = Timer_Now();
    g_936038 = (result_val - *(arg1 + 0x50)) * 0.0240000002f + g_936038;
    int32_t result = result_val - *(arg1 + 0x50);
    long double x87_r7_5 = result * 0.00100000005f + *(arg1 + 0x4c);
    *(arg1 + 0x4c) = x87_r7_5;
    long double temp0 = 1.5f;
    x87_r7_5 - temp0;
    result = (x87_r7_5 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp0) ? 1 : 0) << 0xa
        | (x87_r7_5 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
        *(arg1 + 0x4c) = 0;

    *(arg1 + 0x50) = result_val;
    return result;
}
