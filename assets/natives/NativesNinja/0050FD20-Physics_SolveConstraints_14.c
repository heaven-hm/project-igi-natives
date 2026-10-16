#include "0050FD20-Physics_SolveConstraints_14.h"
/* 0x0050fd20 Physics_SolveConstraints_14 full linked: callers=5 callees=0 */
int32_t sub_50fd20(int32_t* a1, float a2)

{
    g_a7da30 = *a1;
    long double x87_r7 = g_a7da30;
    long double temp0 = 0f;
    x87_r7 - temp0;
    g_a7da34 = a1[1];
    int32_t result = a1[2];
    g_a7da38 = result;
    g_a7da18 = a2;
    result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        long double x87_r7_1 = g_a7da30;
        long double temp1_1 = 1f;
        x87_r7_1 - temp1_1;
        result = (x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
            g_a7da30 = 0x3f800000;
    }
    else
        g_a7da30 = 0;

    long double x87_r7_2 = g_a7da34;
    long double temp2 = 0f;
    x87_r7_2 - temp2;
    result = (x87_r7_2 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp2) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp2 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        long double x87_r7_3 = g_a7da34;
        long double temp3_1 = 1f;
        x87_r7_3 - temp3_1;
        result = (x87_r7_3 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp3_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
            g_a7da34 = 0x3f800000;
    }
    else
        g_a7da34 = 0;

    long double x87_r7_4 = g_a7da38;
    long double temp4 = 0f;
    x87_r7_4 - temp4;
    result = (x87_r7_4 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp4) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp4 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        long double x87_r7_5 = g_a7da38;
        long double temp5_1 = 1f;
        x87_r7_5 - temp5_1;
        result = (x87_r7_5 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp5_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == temp5_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
            g_a7da38 = 0x3f800000;
    }
    else
        g_a7da38 = 0;

    long double x87_r7_6 = a2;
    long double temp6 = 0f;
    x87_r7_6 - temp6;
    result = (x87_r7_6 < temp6 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp6) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp6 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        g_a7da18 = 0;
        return result;
    }

    long double x87_r7_7 = a2;
    long double temp7 = 16384f;
    x87_r7_7 - temp7;
    result = (x87_r7_7 < temp7 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp7) ? 1 : 0) << 0xa
        | (x87_r7_7 == temp7 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
        g_a7da18 = 0x46800000;

    return result;
}
