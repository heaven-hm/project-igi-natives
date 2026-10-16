#include "0046A970-AI_CheckHearing_27.h"
/* 0x0046a970 AI_CheckHearing_27 full linked: callers=1 callees=1 */
double* sub_46a970(double* a1 @ 0x8)

{
    double* result = sub_466f60();

    if (result)
    {
        long double x87_r7_3 = result[3] * 0.5f * 4096f;
        long double x87_r6_2 = *a1 - *result;
        double var_10_1 = a1[1] - result[1];
        double var_20_1 = -(x87_r7_3);
        long double temp0_1 = var_20_1;
        x87_r6_2 - temp0_1;
        result = (x87_r6_2 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, temp0_1) ? 1 : 0) << 0xa
            | (x87_r6_2 == temp0_1 ? 1 : 0) << 0xe | 0x3000;

        if (1 & *(&result + 1))
        {
            result = 0;
            return result;
        }

        x87_r6_2 - x87_r7_3;
        result = (x87_r6_2 < x87_r7_3 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_3) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x41))
        {
            result = 0;
            return result;
        }

        long double x87_r6_3 = var_10_1;
        long double temp1_1 = var_20_1;
        x87_r6_3 - temp1_1;
        result = (x87_r6_3 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, temp1_1) ? 1 : 0) << 0xa
            | (x87_r6_3 == temp1_1 ? 1 : 0) << 0xe | 0x3800;

        if (1 & *(&result + 1))
        {
            result = 0;
            return result;
        }

        long double x87_r6_4 = var_10_1;
        x87_r6_4 - x87_r7_3;
        result = (x87_r6_4 < x87_r7_3 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, x87_r7_3) ? 1 : 0) << 0xa
            | (x87_r6_4 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x41))
        {
            result = 0;
            return result;
        }
    }

    result = 1;
    return result;
}
