#include "0048A340-FX_ExplosionSpawn_16.h"
/* 0x0048a340 FX_ExplosionSpawn_16 full linked: callers=4 callees=0 */
float* sub_48a340(float* a1, void* a2, int32_t a3)

{
    int32_t* ecx_3 = *(a2 + 0x70) + a3 * 0x84 + 0x18;
    float edx_1 = *ecx_3;
    float edx_2 = ecx_3[1];
    float ecx_4 = ecx_3[2];
    float var_c = ecx_4 * *(a2 + 0x90) + edx_2 * *(a2 + 0x84) + edx_1 * *(a2 + 0x78);
    float var_18_1 = var_c;
    long double x87_r7_15 =
        ecx_4 * *(a2 + 0x94) + edx_2 * *(a2 + 0x88) + edx_1 * *(a2 + 0x7c) + *(a2 + 0x518);
    long double x87_r7_17 =
        ecx_4 * *(a2 + 0x98) + edx_2 * *(a2 + 0x8c) + edx_1 * *(a2 + 0x80) + *(a2 + 0x51c);
    *a1 = var_c + *(a2 + 0x514);
    a1[1] = x87_r7_15;
    a1[2] = x87_r7_17;
    return a1;
}
