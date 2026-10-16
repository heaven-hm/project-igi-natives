#include "0046A200-AI_UpdatePatrol_27.h"
/* 0x0046a200 AI_UpdatePatrol_27 full linked: callers=1 callees=1 */
double* sub_46a200()

{
    double* result = sub_466f60();
    double* result_1 = result;

    if (result_1)
    {
        double var_28_1 = result_1[3] * 0.5f * 4096f;
        double var_18_1 = g_5bdd78 - *result_1;
        long double x87_r7_7 = g_5bdd80 - result_1[1];
        double var_8_1 = g_5bdd88 - result_1[2];
        long double x87_r6_4 = -(var_28_1);
        long double x87_r5_1 = var_18_1;
        x87_r5_1 - x87_r6_4;
        result = (x87_r5_1 < x87_r6_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_1, x87_r6_4) ? 1 : 0) << 0xa
            | (x87_r5_1 == x87_r6_4 ? 1 : 0) << 0xe | 0x3000;

        if (*(&result + 1) & 1)
            var_18_1 = x87_r6_4;

        long double x87_r5_2 = var_18_1;
        long double temp0_1 = var_28_1;
        x87_r5_2 - temp0_1;
        result = (x87_r5_2 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_2, temp0_1) ? 1 : 0) << 0xa
            | (x87_r5_2 == temp0_1 ? 1 : 0) << 0xe | 0x3000;

        if (!(*(&result + 1) & 0x41))
        {
            result = var_28_1;
            var_18_1 = result;
            *(&var_18_1 + 4) = *(&var_28_1 + 4);
        }

        x87_r7_7 - x87_r6_4;
        result = (x87_r7_7 < x87_r6_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, x87_r6_4) ? 1 : 0) << 0xa
            | (x87_r7_7 == x87_r6_4 ? 1 : 0) << 0xe | 0x3000;

        if (*(&result + 1) & 1)
            x87_r7_7 = x87_r6_4;

        long double temp1_1 = var_28_1;
        x87_r7_7 - temp1_1;
        result = (x87_r7_7 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_7 == temp1_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x41))
            x87_r7_7 = var_28_1;

        g_5bdd78 = var_18_1 + *result_1;
        g_5bdd80 = x87_r7_7 + result_1[1];
        g_5bdd88 = var_8_1 + result_1[2];
    }

    return result;
}
