// IGI native provenance: DisplayRender_ExecutePipeline_498140 - 0x00498140 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00498140-DisplayRender_ExecutePipeline_498140.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_ExecutePipeline_498140.h"

int32_t DisplayRender_ExecutePipeline_498140(void* arg1)

{
    long double x87_r7 = *(arg1 + 0xc);
    long double temp0 = 0f;
    x87_r7 - temp0;

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_1 = g_bcaaa0;
        long double x87_r6_1 = *(arg1 + 0xc);
        x87_r7_1 - x87_r6_1;

        if (!(*(&((x87_r7_1 < x87_r6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, x87_r6_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == x87_r6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            x87_r7_1 = *(arg1 + 0xc);

        g_bcaac0 = x87_r7_1;
    }
    else
        g_bcaac0 = 0;

    long double x87_r7_3 = *(arg1 + 0x10);
    long double temp1 = 0f;
    x87_r7_3 - temp1;

    if (!(*(&((x87_r7_3 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp1) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp1 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_4 = g_bcaaa4;
        long double x87_r6_2 = *(arg1 + 0x10);
        x87_r7_4 - x87_r6_2;

        if (!(*(&((x87_r7_4 < x87_r6_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, x87_r6_2) ? 1 : 0) << 0xa
                | (x87_r7_4 == x87_r6_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            x87_r7_4 = *(arg1 + 0x10);

        g_bcaac4 = x87_r7_4;
    }
    else
        g_bcaac4 = 0;

    long double x87_r7_6 = *(arg1 + 0xc);
    long double x87_r6_3 = *(arg1 + 0x14);
    x87_r6_3 - x87_r7_6;
    long double x87_r7_7;

    if (!(*(&((x87_r6_3 < x87_r7_6 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, x87_r7_6) ? 1 : 0) << 0xa
        | (x87_r6_3 == x87_r7_6 ? 1 : 0) << 0xe) + 1) & 1))
    {
        x87_r7_7 = g_bcaaa0 - *(arg1 + 0xc);
        long double x87_r6_4 = *(arg1 + 0x14);
        x87_r7_7 - x87_r6_4;

        if (!(*(&((x87_r7_7 < x87_r6_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, x87_r6_4) ? 1 : 0) << 0xa
                | (x87_r7_7 == x87_r6_4 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            x87_r7_7 = *(arg1 + 0x14);
    }
    else
        x87_r7_7 = *(arg1 + 0xc);

    g_bcaac8 = x87_r7_7;
    long double x87_r7_10 = *(arg1 + 0x10);
    long double x87_r6_5 = *(arg1 + 0x18);
    x87_r6_5 - x87_r7_10;
    int16_t result = (x87_r6_5 < x87_r7_10 ? 1 : 0) << 8
        | (FCMP_UO(x87_r6_5, x87_r7_10) ? 1 : 0) << 0xa | (x87_r6_5 == x87_r7_10 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        g_bcaacc = *(arg1 + 0x10);
        return result;
    }

    long double x87_r7_13 = g_bcaaa4 - *(arg1 + 0x10);
    long double x87_r6_6 = *(arg1 + 0x18);
    x87_r7_13 - x87_r6_6;
    result = (x87_r7_13 < x87_r6_6 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, x87_r6_6) ? 1 : 0) << 0xa
        | (x87_r7_13 == x87_r6_6 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&result + 1) & 1))
        x87_r7_13 = *(arg1 + 0x18);

    g_bcaacc = x87_r7_13;
    return result;
}
