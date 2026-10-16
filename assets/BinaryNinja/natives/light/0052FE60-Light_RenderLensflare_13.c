#include "Light_RenderLensflare_13.h"
uint32_t Light_RenderLensflare_13(void* a1, double* a2)

{
    int32_t v_20 = 0;
    uint32_t result = a2[4] >> 1;
    uint32_t result_1 = result;
    long double fpu7 = result_1;
    double v_10 = fpu7 + a2[1];
    double v_8 = *(a1 + 0x4a94);
    result_1 = fpu7 + *a2 - *(a1 + 0x4870);
    float v_20_1 = v_10 - *(a1 + 0x4878);
    float v_1c = v_8 - *(a1 + 0x4880);
    long double x87_r6_8 = fabsl(result_1);
    x87_r6_8 - fpu7;
    result = (x87_r6_8 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_8, fpu7) ? 1 : 0) << 0xa
        | (x87_r6_8 == fpu7 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&result + 1) & 1))
    {
    label_52feec:
        long double x87_r7_3 = result_1;
        long double f0_1 = 0f;
        x87_r7_3 - f0_1;

        if (!(*(&((x87_r7_3 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_52ff1f:
            long double x87_r7_6 = v_1c;
            long double x87_r6_11 = v_20_1;
            long double x87_r5_3 = result_1;
            long double x87_r7_8 =
                1.0 / sqrtl(x87_r5_3 * x87_r5_3 + x87_r6_11 * x87_r6_11 + x87_r7_6 * x87_r7_6);
            result_1 = result_1 * x87_r7_8;
            float v_20_2 = v_20_1 * x87_r7_8;
            float v_1c_1 = v_1c * x87_r7_8;
        }
        else
        {
            long double x87_r7_4 = v_20_1;
            long double f1_1 = 0f;
            x87_r7_4 - f1_1;

            if (!(*(&((x87_r7_4 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, f1_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_52ff1f;

            long double x87_r7_5 = v_1c;
            long double f3_1 = 0f;
            x87_r7_5 - f3_1;

            if (!(*(&((x87_r7_5 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_5, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_5 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_52ff1f;
        }

        long double fp0_1;
        fp0_1 = Sys_PushStack_10(&result_1, a1 + 0x4a48);
        long double x87_r7_11 = fabsl(fp0_1);
        long double f2_1 = 1.72787607f;
        x87_r7_11 - f2_1;
        result = (x87_r7_11 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == f2_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
        {
            *(a2 + 0x24) = 0;
            return result;
        }
    }
    else
    {
        long double x87_r6_10 = fabsl(v_20_1);
        x87_r6_10 - fpu7;
        result = (x87_r6_10 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_10, fpu7) ? 1 : 0) << 0xa
            | (x87_r6_10 == fpu7 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 1))
            goto label_52feec;
    }

    *(a2 + 0x24) = 1;
    return result;
}
