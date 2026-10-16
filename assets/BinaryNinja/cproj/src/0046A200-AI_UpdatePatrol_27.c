#include "gi_platform.h"
#include "0046A200-AI_UpdatePatrol_27.h"
double* AI_UpdatePatrol_27()

{
    double* result = DefineComputerLimit_OnEvent();
    double* result_1 = result;

    if (result_1)
    {
        double v_28_1 = result_1[3] * 0.5.0f * 4096.0f;
        double v_18_1 = g_5bdd78 - *result_1;
        long double x87_r7_7 = g_5bdd80 - result_1[1];
        double v_8_1 = g_5bdd88 - result_1[2];
        long double x87_r6_4 = -(v_28_1);
        long double x87_r5_1 = v_18_1;
        x87_r5_1 - x87_r6_4;
        result = (x87_r5_1 < x87_r6_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_1, x87_r6_4) ? 1 : 0) << 0xa
            | (x87_r5_1 == x87_r6_4 ? 1 : 0) << 0xe | 0x3000;

        if (*(&result + 1) & 1)
            v_18_1 = x87_r6_4;

        long double x87_r5_2 = v_18_1;
        long double f0_1 = v_28_1;
        x87_r5_2 - f0_1;
        result = (x87_r5_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_2, f0_1) ? 1 : 0) << 0xa
            | (x87_r5_2 == f0_1 ? 1 : 0) << 0xe | 0x3000;

        if (!(*(&result + 1) & 0x41))
        {
            result = v_28_1;
            v_18_1 = result;
            *(&v_18_1 + 4) = *(&v_28_1 + 4);
        }

        x87_r7_7 - x87_r6_4;
        result = (x87_r7_7 < x87_r6_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, x87_r6_4) ? 1 : 0) << 0xa
            | (x87_r7_7 == x87_r6_4 ? 1 : 0) << 0xe | 0x3000;

        if (*(&result + 1) & 1)
            x87_r7_7 = x87_r6_4;

        long double f1_1 = v_28_1;
        x87_r7_7 - f1_1;
        result = (x87_r7_7 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_7 == f1_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x41))
            x87_r7_7 = v_28_1;

        g_5bdd78 = v_18_1 + *result_1;
        g_5bdd80 = x87_r7_7 + result_1[1];
        g_5bdd88 = v_8_1 + result_1[2];
    }

    return result;
}
