#include "004B2D90-Sys_CheckHeap_10.h"
/* 0x004b2d90 Sys_CheckHeap_10 full linked: callers=3 callees=0 */
float* sub_4b2d90(float* a1, float* a2, float* a3, float* a4, float* a5, int32_t* a6)

{
    char ebx = 1;
    float var_c = *a6;
    long double x87_r7 = var_c;
    long double temp1 = 0f;
    x87_r7 - temp1;
    float var_8 = a6[1];

    if (1 & *(&((x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
            | (x87_r7 == temp1 ? 1 : 0) << 0xe) + 1))
        var_c = -(var_c);

    long double x87_r7_3 = var_8;
    long double temp2 = 0f;
    x87_r7_3 - temp2;

    if (*(&((x87_r7_3 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp2) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp2 ? 1 : 0) << 0xe) + 1) & 1)
        var_8 = -(var_8);

    long double x87_r7_6 = a6[2];
    long double temp3 = 0f;
    x87_r7_6 - temp3;

    if (*(&((x87_r7_6 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp3) ? 1 : 0) << 0xa
            | (x87_r7_6 == temp3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_6 = -(x87_r7_6);

    long double x87_r6 = var_8;
    long double temp4 = var_c;
    x87_r6 - temp4;
    long double x87_r6_1;

    if (!(*(&((x87_r6 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, temp4) ? 1 : 0) << 0xa
        | (x87_r6 == temp4 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
    {
        x87_r6_1 = var_8;
        x87_r6_1 - x87_r7_6;
    }

    long double x87_r6_14;
    long double x87_r7_11;

    if (!(*(&((x87_r6 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, temp4) ? 1 : 0) << 0xa
        | (x87_r6 == temp4 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41) && !(*(&(
        (x87_r6_1 < x87_r7_6 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_6) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
    {
        long double x87_r7_10 = a5[2] * *a4 - *a5 * a4[2];
        long double temp8_1 = 0f;
        x87_r7_10 - temp8_1;

        if (*(&((x87_r7_10 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, temp8_1) ? 1 : 0) << 0xa
                | (x87_r7_10 == temp8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
            ebx = 0;

        long double x87_r6_6 = *a4 * a3[2] - *a3 * a4[2];
        x87_r7_11 = x87_r6_6 / x87_r6_6;
        long double temp11_1 = -9.99999975e-06f;
        x87_r7_11 - temp11_1;
        long double temp14_1;

        if (!(*(&((x87_r7_11 < temp11_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_11, temp11_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == temp11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            temp14_1 = 1.00001001f;
            x87_r7_11 - temp14_1;
        }

        if (*(&((x87_r7_11 < temp11_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp11_1) ? 1 : 0) << 0xa
                | (x87_r7_11 == temp11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1 || !(*(&(
                (x87_r7_11 < temp14_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp14_1) ? 1 : 0) << 0xa
                | (x87_r7_11 == temp14_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            ebx = 0;

        long double x87_r6_7 = *a4;
        long double temp17_1 = 0f;
        x87_r6_7 - temp17_1;
        long double x87_r6_8 = *a4;

        if (*(&((x87_r6_7 < temp17_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_7, temp17_1) ? 1 : 0) << 0xa
                | (x87_r6_7 == temp17_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
            x87_r6_8 = -(x87_r6_8);

        long double x87_r5_2 = a4[2];
        long double temp20_1 = 0f;
        x87_r5_2 - temp20_1;
        long double x87_r5_3 = a4[2];

        if (*(&((x87_r5_2 < temp20_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_2, temp20_1) ? 1 : 0) << 0xa
                | (x87_r5_2 == temp20_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
            x87_r5_3 = -(x87_r5_3);

        x87_r6_8 - x87_r5_3;

        if (*(&((x87_r6_8 < x87_r5_3 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_8, x87_r5_3) ? 1 : 0) << 0xa
            | (x87_r6_8 == x87_r5_3 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
        {
            long double x87_r6_15 = a4[2];
            long double temp23_1 = 0f;
            x87_r6_15 - temp23_1;

            if (*(&((x87_r6_15 < temp23_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_15, temp23_1) ? 1 : 0) << 0xa
                    | (x87_r6_15 == temp23_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
                ebx = 0;

            x87_r6_14 = (a3[2] - x87_r7_11 * a5[2]) / a4[2];
        }
        else
            x87_r6_14 = (*a3 - x87_r7_11 * *a5) / *a4;

        goto label_4b2f8e;
    }

    long double temp5_1 = var_c;
    x87_r7_6 - temp5_1;

    if (*(&((x87_r7_6 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp5_1) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_17 = a5[2] * a4[1] - a4[2] * a5[1];
        long double temp6_1 = 0f;
        x87_r7_17 - temp6_1;

        if (*(&((x87_r7_17 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_17, temp6_1) ? 1 : 0) << 0xa
                | (x87_r7_17 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
            ebx = 0;

        long double x87_r6_39 = a3[2] * a4[1] - a3[1] * a4[2];
        x87_r7_11 = x87_r6_39 / x87_r6_39;
        long double temp9_1 = -9.99999975e-06f;
        x87_r7_11 - temp9_1;
        long double temp12_1;

        if (!(*(&((x87_r7_11 < temp9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp9_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == temp9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            temp12_1 = 1.00001001f;
            x87_r7_11 - temp12_1;
        }

        if (*(&((x87_r7_11 < temp9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp9_1) ? 1 : 0) << 0xa
                | (x87_r7_11 == temp9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1 || !(*(&(
                (x87_r7_11 < temp12_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp12_1) ? 1 : 0) << 0xa
                | (x87_r7_11 == temp12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            ebx = 0;

        long double x87_r6_40 = a4[1];
        long double temp15_1 = 0f;
        x87_r6_40 - temp15_1;
        long double x87_r6_41 = a4[1];

        if (*(&((x87_r6_40 < temp15_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_40, temp15_1) ? 1 : 0) << 0xa
                | (x87_r6_40 == temp15_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
            x87_r6_41 = -(x87_r6_41);

        long double x87_r5_14 = a4[2];
        long double temp18_1 = 0f;
        x87_r5_14 - temp18_1;
        long double x87_r5_15 = a4[2];

        if (*(&((x87_r5_14 < temp18_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_14, temp18_1) ? 1 : 0) << 0xa
                | (x87_r5_14 == temp18_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
            x87_r5_15 = -(x87_r5_15);

        x87_r6_41 - x87_r5_15;

        if (*(&((x87_r6_41 < x87_r5_15 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_41, x87_r5_15) ? 1 : 0) << 0xa
            | (x87_r6_41 == x87_r5_15 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
        {
            long double x87_r6_47 = a4[2];
            long double temp21_1 = 0f;
            x87_r6_47 - temp21_1;

            if (*(&((x87_r6_47 < temp21_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_47, temp21_1) ? 1 : 0) << 0xa
                    | (x87_r6_47 == temp21_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
                ebx = 0;

            x87_r6_14 = (a3[2] - x87_r7_11 * a5[2]) / a4[2];
        }
        else
            x87_r6_14 = (a3[1] - x87_r7_11 * a5[1]) / a4[1];

        long double temp24_1 = -9.99999975e-06f;
        x87_r6_14 - temp24_1;

        if (*(&((x87_r6_14 < temp24_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_14, temp24_1) ? 1 : 0) << 0xa
                | (x87_r6_14 == temp24_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
            ebx = 0;
        else
        {
            long double x87_r5_18 = x87_r6_14 + x87_r7_11;
            long double temp26_1 = 1.00001001f;
            x87_r5_18 - temp26_1;

            if (!(*(&((x87_r5_18 < temp26_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_18, temp26_1) ? 1 : 0) << 0xa
                    | (x87_r5_18 == temp26_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                ebx = 0;
        }
    }
    else
    {
        long double x87_r7_14 = *a4 * a5[1] - *a5 * a4[1];
        long double temp7_1 = 0f;
        x87_r7_14 - temp7_1;

        if (*(&((x87_r7_14 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, temp7_1) ? 1 : 0) << 0xa
                | (x87_r7_14 == temp7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
            ebx = 0;

        long double x87_r6_23 = *a4 * a3[1] - *a3 * a4[1];
        x87_r7_11 = x87_r6_23 / x87_r6_23;
        long double temp10_1 = -9.99999975e-06f;
        x87_r7_11 - temp10_1;
        long double temp13_1;

        if (!(*(&((x87_r7_11 < temp10_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_11, temp10_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == temp10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            temp13_1 = 1.00001001f;
            x87_r7_11 - temp13_1;
        }

        if (*(&((x87_r7_11 < temp10_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp10_1) ? 1 : 0) << 0xa
                | (x87_r7_11 == temp10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1 || !(*(&(
                (x87_r7_11 < temp13_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp13_1) ? 1 : 0) << 0xa
                | (x87_r7_11 == temp13_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            ebx = 0;

        long double x87_r6_24 = *a4;
        long double temp16_1 = 0f;
        x87_r6_24 - temp16_1;
        long double x87_r6_25 = *a4;

        if (*(&((x87_r6_24 < temp16_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_24, temp16_1) ? 1 : 0) << 0xa
                | (x87_r6_24 == temp16_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
            x87_r6_25 = -(x87_r6_25);

        long double x87_r5_7 = a4[1];
        long double temp19_1 = 0f;
        x87_r5_7 - temp19_1;
        long double x87_r5_8 = a4[1];

        if (*(&((x87_r5_7 < temp19_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_7, temp19_1) ? 1 : 0) << 0xa
                | (x87_r5_7 == temp19_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
            x87_r5_8 = -(x87_r5_8);

        x87_r6_25 - x87_r5_8;

        if (*(&((x87_r6_25 < x87_r5_8 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_25, x87_r5_8) ? 1 : 0) << 0xa
            | (x87_r6_25 == x87_r5_8 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
        {
            long double x87_r6_31 = a4[1];
            long double temp22_1 = 0f;
            x87_r6_31 - temp22_1;

            if (*(&((x87_r6_31 < temp22_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_31, temp22_1) ? 1 : 0) << 0xa
                    | (x87_r6_31 == temp22_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
                ebx = 0;

            x87_r6_14 = (a3[1] - x87_r7_11 * a5[1]) / a4[1];
        }
        else
            x87_r6_14 = (*a3 - x87_r7_11 * *a5) / *a4;

    label_4b2f8e:
        long double temp25_1 = -9.99999975e-06f;
        x87_r6_14 - temp25_1;

        if (*(&((x87_r6_14 < temp25_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_14, temp25_1) ? 1 : 0) << 0xa
                | (x87_r6_14 == temp25_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
            ebx = 0;
        else
        {
            long double x87_r5_11 = x87_r6_14 + x87_r7_11;
            long double temp27_1 = 1.00001001f;
            x87_r5_11 - temp27_1;

            if (!(*(&((x87_r5_11 < temp27_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_11, temp27_1) ? 1 : 0) << 0xa
                    | (x87_r5_11 == temp27_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                ebx = 0;
        }
    }

    if (a1)
        *a1 = x87_r6_14;

    float* result = a2;

    if (!result)
    {
        result = ebx;
        return result;
    }

    *result = x87_r7_11;
    result = ebx;
    return result;
}
