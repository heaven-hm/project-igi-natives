#include "Light_CalculateAttenuation_4.h"
float* Light_CalculateAttenuation_4(float* a1, float a2, float* a3, float a4, float a5)

{
    float* objC4 = a2;
    float* srcS = a4;
    long double fpu7 = *objC4;
    long double f0 = *srcS;
    fpu7 - f0;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_1 = objC4[1];
        long double f2_1 = srcS[1];
        x87_r7_1 - f2_1;

        if (*(&((x87_r7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            *a1 = *objC4;
            a1[1] = objC4[1];
            return a1;
        }
    }

    long double x87_r7_2 = *objC4;
    long double f1 = *a5;
    x87_r7_2 - f1;

    if (*(&((x87_r7_2 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f1) ? 1 : 0) << 0xa
        | (x87_r7_2 == f1 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_3 = objC4[1];
        long double f4_1 = *(a5 + 4);
        x87_r7_3 - f4_1;

        if (*(&((x87_r7_3 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f4_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            *a1 = *objC4;
            a1[1] = objC4[1];
            return a1;
        }
    }

    long double x87_r7_4 = *a3;
    long double f3 = *srcS;
    x87_r7_4 - f3;

    if (*(&((x87_r7_4 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f3) ? 1 : 0) << 0xa
        | (x87_r7_4 == f3 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_5 = a3[1];
        long double f6_1 = srcS[1];
        x87_r7_5 - f6_1;

        if (*(&((x87_r7_5 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f6_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            *a1 = *a3;
            a1[1] = a3[1];
            return a1;
        }
    }

    long double x87_r7_6 = *a3;
    long double f5 = *a5;
    x87_r7_6 - f5;

    if (*(&((x87_r7_6 < f5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f5) ? 1 : 0) << 0xa
        | (x87_r7_6 == f5 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_7 = a3[1];
        long double f7_1 = *(a5 + 4);
        x87_r7_7 - f7_1;

        if (*(&((x87_r7_7 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f7_1) ? 1 : 0) << 0xa
            | (x87_r7_7 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            *a1 = *a3;
            a1[1] = a3[1];
            return a1;
        }
    }

    long double x87_r7_10 = -((a3[1] - objC4[1]));
    long double x87_r6_1 = *a3 - *objC4;
    a2 = -((*(a5 + 4) - srcS[1]));
    long double x87_r5_4 = *a5 - *srcS;
    a5 = -((x87_r7_10 * *objC4)) - x87_r6_1 * objC4[1];
    a4 = -((a2 * *srcS)) - x87_r5_4 * srcS[1];
    a3 = x87_r5_4 * x87_r7_10 - a2 * x87_r6_1;
    *a1 = -(((a5 * x87_r5_4 - a4 * x87_r6_1) / a3));
    a1[1] = -(((a4 * x87_r7_10 - a5 * a2) / a3));
    return a1;
}
