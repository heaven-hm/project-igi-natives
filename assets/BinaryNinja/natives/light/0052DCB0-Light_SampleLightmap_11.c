#include "Light_SampleLightmap_11.h"
long double Light_SampleLightmap_11(float a1, float a2, int32_t a3)

{
    float valA1 = a1;
    double* objC = a2;
    long double x87_r7_2 = fabsl(*(valA1 + 0x4870) - *objC);
    a1 = fabsl(*(valA1 + 0x4878) - objC[1]);
    a2 = fabsl(*(valA1 + 0x4880) - *(valA1 + 0x4a94));
    long double x87_r6_6 = a1;
    long double f0 = a2;
    x87_r6_6 - f0;
    long double x87_r6_7;

    x87_r6_7 = *(&((x87_r6_6 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_6, f0) ? 1 : 0) << 0xa
        | (x87_r6_6 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? a2 : a1;

    x87_r7_2 - x87_r6_7;

    if (*(&((x87_r7_2 < x87_r6_7 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, x87_r6_7) ? 1 : 0) << 0xa
        | (x87_r7_2 == x87_r6_7 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
    {
        long double x87_r7_4 = a1;
        long double f1_1 = a2;
        x87_r7_4 - f1_1;

        x87_r7_2 = *(&((x87_r7_4 < f1_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_4, f1_1) ? 1 : 0) << 0xa | (x87_r7_4 == f1_1 ? 1 : 0) << 0xe) + 1)
            & 0x41 ? a2 : a1;
    }

    long double x87_r6_9 = a3;
    long double result = (x87_r6_9 * 1.5f - x87_r7_2) / (x87_r6_9 * 0.5f);
    long double x87_r6_11 = 0f;
    x87_r6_11 - result;

    if (!(*(&((x87_r6_11 < result ? 1 : 0) << 8 | (FCMP_UO(x87_r6_11, result) ? 1 : 0) << 0xa
            | (x87_r6_11 == result ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        return 0f;

    long double x87_r6_12 = 1f;
    x87_r6_12 - result;

    if (!(*(&((x87_r6_12 < result ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, result) ? 1 : 0) << 0xa
            | (x87_r6_12 == result ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        return result;

    return 1f;
}
