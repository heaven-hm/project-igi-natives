#include "0052CE90-Light_ApplyLightmap_9.h"
/* 0x0052ce90 Light_ApplyLightmap_9 full linked: callers=2 callees=0 */
int32_t sub_52ce90(float* a1, float* a2, float* a3, float* a4, float a5, float a6)

{
    long double x87_r7_3 = (*a2 - *a1) * a5 + *a1;
    float var_20 = (a2[1] - a1[1]) * a5 + a1[1];
    float var_1c = (a2[2] - a1[2]) * a5 + a1[2];
    int32_t eax_2 = (x87_r7_3 + ((*a4 - *a3) * a5 + *a3 - x87_r7_3) * a6) * 255f;

    if (eax_2 >= 0xff)
        eax_2 = 0xff;

    int32_t var_24_1 = (((a4[1] - a3[1]) * a5 + a3[1] - var_20) * a6 + var_20) * 255f;
    int32_t edx = var_24_1;

    if (var_24_1 >= 0xff)
        edx = 0xff;

    int32_t ecx_3 = (((a4[2] - a3[2]) * a5 + a3[2] - var_1c) * a6 + var_1c) * 255f;

    if (ecx_3 >= 0xff)
        ecx_3 = 0xff;

    return (eax_2 << 8 | edx) << 8 | ecx_3;
}
