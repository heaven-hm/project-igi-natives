#include "AI_CheckSector_24.h"
float* AI_CheckSector_24(float* a1, float* a2, float a3, float a4)

{
    double* objC = a3;
    int32_t* srcS = a4;
    double* valA = *srcS;
    long double x87_r7_1 = *objC - *valA;
    long double x87_r6_1 = objC[1] - valA[1];
    long double x87_r5_1 = objC[2] - valA[2];
    float* valA1 = srcS[1];
    float v_8 = x87_r5_1 * valA1[5] + x87_r6_1 * valA1[4] + x87_r7_1 * valA1[3];
    float v_4 = x87_r5_1 * valA1[8] + x87_r6_1 * valA1[7] + x87_r7_1 * valA1[6];
    a4 = g_c28b44 * 0.5f / (v_4 * srcS[2]);
    *a1 =
        g_c28b44 * 0.5f + a4 * (x87_r5_1 * valA1[2] + x87_r6_1 * valA1[1] + x87_r7_1 * *valA1);
    a1[1] = Display_ClearSurfaces_4() * a4 * v_8 + g_c28b48 * 0.5f;

    if (a2)
        *a2 = v_4;

    return a2;
}
