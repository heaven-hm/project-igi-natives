// IGI native provenance: RenderLight_Invoke9 - 0x005280E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005280E0-RenderLight_Invoke9.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_Invoke9.h"

int32_t* RenderLight_Invoke9(void* arg1)

{
    int32_t i_1 = 5;
    *(arg1 + 0x20) = g_a44344;
    int32_t* result_val = arg1 + 0x50;
    int32_t i;

    do
    {
        result_val[-1] = 0;
        *result_val = 0;
        result_val[1] = 0;
        result_val[2] = 0x3f800000;
        result_val[3] = 0x3f800000;
        result_val[4] = 0x3f800000;
        result_val[5] = 0;
        result_val[6] = 0x3f800000;
        result_val[7] = 0;
        result_val[8] = 0;
        result_val[9] = 0;
        result_val[0xa] = 0x3f800000;
        result_val[0xb] = 0;
        result_val[0xc] = 0;
        result_val[0xd] = 0;
        result_val[0xe] = 0x3f800000;
        result_val = &result_val[0x10];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    int32_t* result = Sys_ExecuteBytecode_9(arg1 + 0x198);
    *(arg1 + 0x1b5) = 1;
    *(arg1 + 0x1b4) = 0;
    g_a8437c = arg1;
    return result;
}
