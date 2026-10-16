#include "0052FE60-Light_RenderLensflare_13.h"
/* 0x0052fe60 Light_RenderLensflare_13 full linked: callers=3 callees=1 */
uint32_t sub_52fe60(void* a1, double* a2)

{
    int32_t var_20 = 0;
    uint32_t result = a2[4] >> 1;
    uint32_t result_1 = result;
    long double x87_r7 = result_1;
    double var_10 = x87_r7 + a2[1];
    double var_8 = *(a1 + 0x4a94);
    result_1 = x87_r7 + *a2 - *(a1 + 0x4870);
    float var_20_1 = var_10 - *(a1 + 0x4878);
    float var_1c = var_8 - *(a1 + 0x4880);
    long double x87_r6_8 = fabsl(result_1);
    x87_r6_8 - x87_r7;
    result = (x87_r6_8 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_8, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6_8 == x87_r7 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&result + 1) & 1))
    {
    label_52feec:
        long double x87_r7_3 = result_1;
        long double temp0_1 = 0f;
        x87_r7_3 - temp0_1;

        if (!(*(&((x87_r7_3 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_52ff1f:
            long double x87_r7_6 = var_1c;
            long double x87_r6_11 = var_20_1;
            long double x87_r5_3 = result_1;
            long double x87_r7_8 =
                1.0 / sqrtl(x87_r5_3 * x87_r5_3 + x87_r6_11 * x87_r6_11 + x87_r7_6 * x87_r7_6);
            result_1 = result_1 * x87_r7_8;
            float var_20_2 = var_20_1 * x87_r7_8;
            float var_1c_1 = var_1c * x87_r7_8;
        }
        else
        {
            long double x87_r7_4 = var_20_1;
            long double temp1_1 = 0f;
            x87_r7_4 - temp1_1;

            if (!(*(&((x87_r7_4 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_52ff1f;

            long double x87_r7_5 = var_1c;
            long double temp3_1 = 0f;
            x87_r7_5 - temp3_1;

            if (!(*(&((x87_r7_5 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_5, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_5 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_52ff1f;
        }

        long double st0_1;
        st0_1 = sub_4b2b30(&result_1, a1 + 0x4a48);
        long double x87_r7_11 = fabsl(st0_1);
        long double temp2_1 = 1.72787607f;
        x87_r7_11 - temp2_1;
        result = (x87_r7_11 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == temp2_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
        {
            *(a2 + 0x24) = 0;
            return result;
        }
    }
    else
    {
        long double x87_r6_10 = fabsl(var_20_1);
        x87_r6_10 - x87_r7;
        result = (x87_r6_10 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_10, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6_10 == x87_r7 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 1))
            goto label_52feec;
    }

    *(a2 + 0x24) = 1;
    return result;
}
