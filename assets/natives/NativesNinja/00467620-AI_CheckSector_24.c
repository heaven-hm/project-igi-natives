#include "00467620-AI_CheckSector_24.h"
/* 0x00467620 AI_CheckSector_24 full linked: callers=3 callees=4 */
float* sub_467620(float* a1, float* a2, float a3, float a4)

{
    double* ecx = a3;
    int32_t* esi = a4;
    double* eax = *esi;
    long double x87_r7_1 = *ecx - *eax;
    long double x87_r6_1 = ecx[1] - eax[1];
    long double x87_r5_1 = ecx[2] - eax[2];
    float* eax_1 = esi[1];
    float var_8 = x87_r5_1 * eax_1[5] + x87_r6_1 * eax_1[4] + x87_r7_1 * eax_1[3];
    float var_4 = x87_r5_1 * eax_1[8] + x87_r6_1 * eax_1[7] + x87_r7_1 * eax_1[6];
    a4 = g_c28b44 * 0.5f / (var_4 * esi[2]);
    *a1 =
        g_c28b44 * 0.5f + a4 * (x87_r5_1 * eax_1[2] + x87_r6_1 * eax_1[1] + x87_r7_1 * *eax_1);
    a1[1] = sub_491d40() * a4 * var_8 + g_c28b48 * 0.5f;

    if (a2)
        *a2 = var_4;

    return a2;
}
