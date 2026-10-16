#include "gi_platform.h"
#include "004B2C70-Sys_PopStack_10.h"
int32_t Sys_PopStack_10(int32_t* a1, float* a2, float* a3, float* a4)

{
    long double x87_r7_3 = a3[1] * a4[1] + *a3 * *a4 + a4[2] * a3[2];
    long double f0 = 9.99999975e-06.0f;
    x87_r7_3 - f0;

    if (*(&((x87_r7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f0) ? 1 : 0) << 0xa
        | (x87_r7_3 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double f1_1 = -9.99999975e-06.0f;
        x87_r7_3 - f1_1;

        if (!(*(&((x87_r7_3 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            *a1 = 0;
            a1[1] = 0;
            a1[2] = 0;
            return 0;
        }
    }

    long double x87_r6_7 = a2[2] * a4[2] + *a2 * *a4 + a2[1] * a4[1];
    long double x87_r7_5 = x87_r6_7 / x87_r6_7;
    *a1 = *a2 - x87_r7_5 * *a3;
    a1[1] = a2[1] - x87_r7_5 * a3[1];
    a1[2] = a2[2] - x87_r7_5 * a3[2];
    return 1;
}
