#include "gi_platform.h"
#include "0050FD20-Physics_SolveConstraints_14.h"
int32_t Physics_SolveConstraints_14(int32_t* a1, float a2)

{
    g_a7da30 = *a1;
    long double fpu7 = g_a7da30;
    long double f0 = 0.0f;
    fpu7 - f0;
    g_a7da34 = a1[1];
    int32_t result = a1[2];
    g_a7da38 = result;
    g_a7da18 = a2;
    result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        long double x87_r7_1 = g_a7da30;
        long double f1_1 = 1.0f;
        x87_r7_1 - f1_1;
        result = (x87_r7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
            g_a7da30 = 0x3f800000;
    }
    else
        g_a7da30 = 0;

    long double x87_r7_2 = g_a7da34;
    long double f2 = 0.0f;
    x87_r7_2 - f2;
    result = (x87_r7_2 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f2) ? 1 : 0) << 0xa
        | (x87_r7_2 == f2 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        long double x87_r7_3 = g_a7da34;
        long double f3_1 = 1.0f;
        x87_r7_3 - f3_1;
        result = (x87_r7_3 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == f3_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
            g_a7da34 = 0x3f800000;
    }
    else
        g_a7da34 = 0;

    long double x87_r7_4 = g_a7da38;
    long double f4 = 0.0f;
    x87_r7_4 - f4;
    result = (x87_r7_4 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f4) ? 1 : 0) << 0xa
        | (x87_r7_4 == f4 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        long double x87_r7_5 = g_a7da38;
        long double f5_1 = 1.0f;
        x87_r7_5 - f5_1;
        result = (x87_r7_5 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f5_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == f5_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
            g_a7da38 = 0x3f800000;
    }
    else
        g_a7da38 = 0;

    long double x87_r7_6 = a2;
    long double f6 = 0.0f;
    x87_r7_6 - f6;
    result = (x87_r7_6 < f6 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f6) ? 1 : 0) << 0xa
        | (x87_r7_6 == f6 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        g_a7da18 = 0;
        return result;
    }

    long double x87_r7_7 = a2;
    long double f7 = 16384.0f;
    x87_r7_7 - f7;
    result = (x87_r7_7 < f7 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f7) ? 1 : 0) << 0xa
        | (x87_r7_7 == f7 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
        g_a7da18 = 0x46800000;

    return result;
}
