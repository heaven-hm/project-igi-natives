#include "005251D0-Light_CalculateAttenuation_4.h"
/* 0x005251d0 Light_CalculateAttenuation_4 full linked: callers=5 callees=0 */
float* sub_5251d0(float* a1, float a2, float* a3, float a4, float a5)

{
    float* ecx_4 = a2;
    float* esi = a4;
    long double x87_r7 = *ecx_4;
    long double temp0 = *esi;
    x87_r7 - temp0;

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_1 = ecx_4[1];
        long double temp2_1 = esi[1];
        x87_r7_1 - temp2_1;

        if (*(&((x87_r7_1 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            *a1 = *ecx_4;
            a1[1] = ecx_4[1];
            return a1;
        }
    }

    long double x87_r7_2 = *ecx_4;
    long double temp1 = *a5;
    x87_r7_2 - temp1;

    if (*(&((x87_r7_2 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp1) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp1 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_3 = ecx_4[1];
        long double temp4_1 = *(a5 + 4);
        x87_r7_3 - temp4_1;

        if (*(&((x87_r7_3 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp4_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            *a1 = *ecx_4;
            a1[1] = ecx_4[1];
            return a1;
        }
    }

    long double x87_r7_4 = *a3;
    long double temp3 = *esi;
    x87_r7_4 - temp3;

    if (*(&((x87_r7_4 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp3) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp3 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_5 = a3[1];
        long double temp6_1 = esi[1];
        x87_r7_5 - temp6_1;

        if (*(&((x87_r7_5 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp6_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            *a1 = *a3;
            a1[1] = a3[1];
            return a1;
        }
    }

    long double x87_r7_6 = *a3;
    long double temp5 = *a5;
    x87_r7_6 - temp5;

    if (*(&((x87_r7_6 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp5) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp5 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_7 = a3[1];
        long double temp7_1 = *(a5 + 4);
        x87_r7_7 - temp7_1;

        if (*(&((x87_r7_7 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp7_1) ? 1 : 0) << 0xa
            | (x87_r7_7 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            *a1 = *a3;
            a1[1] = a3[1];
            return a1;
        }
    }

    long double x87_r7_10 = -((a3[1] - ecx_4[1]));
    long double x87_r6_1 = *a3 - *ecx_4;
    a2 = -((*(a5 + 4) - esi[1]));
    long double x87_r5_4 = *a5 - *esi;
    a5 = -((x87_r7_10 * *ecx_4)) - x87_r6_1 * ecx_4[1];
    a4 = -((a2 * *esi)) - x87_r5_4 * esi[1];
    a3 = x87_r5_4 * x87_r7_10 - a2 * x87_r6_1;
    *a1 = -(((a5 * x87_r5_4 - a4 * x87_r6_1) / a3));
    a1[1] = -(((a4 * x87_r7_10 - a5 * a2) / a3));
    return a1;
}
