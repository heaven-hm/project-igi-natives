#include "004B2B30-Sys_PushStack_10.h"
/* 0x004b2b30 Sys_PushStack_10 full linked: callers=6 callees=1 */
long double sub_4b2b30(float a1, float* a2)

{
    float* edx = a1;
    long double x87_r7 = *edx;
    long double temp1 = 0f;
    x87_r7 - temp1;

    if (*(&((x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_1 = edx[1];
        long double temp3_1 = 0f;
        x87_r7_1 - temp3_1;

        if (*(&((x87_r7_1 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            long double x87_r7_2 = edx[2];
            long double temp6_1 = 0f;
            x87_r7_2 - temp6_1;

            if (*(&((x87_r7_2 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                return 0f;
        }
    }

    long double x87_r7_4 = *a2;
    long double temp2 = 0f;
    x87_r7_4 - temp2;

    if (*(&((x87_r7_4 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp2) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp2 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_5 = a2[1];
        long double temp5_1 = 0f;
        x87_r7_5 - temp5_1;

        if (*(&((x87_r7_5 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp5_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            long double x87_r7_6 = a2[2];
            long double temp8_1 = 0f;
            x87_r7_6 - temp8_1;

            if (*(&((x87_r7_6 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp8_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                return 0f;
        }
    }

    double var_8 = a2[2];
    double var_10 = a2[1];
    double var_18 = *a2;
    long double x87_r7_11 = edx[2];
    long double x87_r6 = edx[1];
    long double x87_r5 = *edx;
    long double x87_r3_13 = sqrtl(var_18 * var_18 + var_10 * var_10 + var_8 * var_8);
    a1 = x87_r3_13;
    long double x87_r7_15 = (edx[2] * a2[2] + edx[1] * a2[1] + *edx * *a2)
        / (sqrtl(x87_r5 * x87_r5 + x87_r6 * x87_r6 + x87_r7_11 * x87_r7_11) * x87_r3_13);
    double var_18_1 = x87_r7_15;
    long double x87_r7_19 = var_18_1;
    long double temp4 = 1.0;
    x87_r7_19 - temp4;

    if (!(*(&((x87_r7_19 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_19, temp4) ? 1 : 0) << 0xa
            | (x87_r7_19 == temp4 ? 1 : 0) << 0xe) + 1) & 1))
        return 0f;

    long double x87_r7_21 = var_18_1;
    long double temp7 = -1.0;
    x87_r7_21 - temp7;

    if (!(*(&((x87_r7_21 < temp7 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_21, temp7) ? 1 : 0) << 0xa
            | (x87_r7_21 == temp7 ? 1 : 0) << 0xe) + 1) & 0x41))
        return sub_516810(var_18_1);

    return 3.14159274f;
}
