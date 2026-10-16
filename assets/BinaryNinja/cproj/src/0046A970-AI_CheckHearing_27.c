#include "gi_platform.h"
#include "0046A970-AI_CheckHearing_27.h"
double* AI_CheckHearing_27(double* a1 )

{
    double* result = DefineComputerLimit_OnEvent();

    if (result)
    {
        long double x87_r7_3 = result[3] * 0.5.0f * 4096.0f;
        long double x87_r6_2 = *a1 - *result;
        double v_10_1 = a1[1] - result[1];
        double v_20_1 = -(x87_r7_3);
        long double f0_1 = v_20_1;
        x87_r6_2 - f0_1;
        result = (x87_r6_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, f0_1) ? 1 : 0) << 0xa
            | (x87_r6_2 == f0_1 ? 1 : 0) << 0xe | 0x3000;

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

        long double x87_r6_3 = v_10_1;
        long double f1_1 = v_20_1;
        x87_r6_3 - f1_1;
        result = (x87_r6_3 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, f1_1) ? 1 : 0) << 0xa
            | (x87_r6_3 == f1_1 ? 1 : 0) << 0xe | 0x3800;

        if (1 & *(&result + 1))
        {
            result = 0;
            return result;
        }

        long double x87_r6_4 = v_10_1;
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
