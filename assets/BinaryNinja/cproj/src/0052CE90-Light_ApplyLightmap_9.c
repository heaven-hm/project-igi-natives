#include "gi_platform.h"
#include "0052CE90-Light_ApplyLightmap_9.h"
int32_t Light_ApplyLightmap_9(float* a1, float* a2, float* a3, float* a4, float a5, float a6)

{
    long double x87_r7_3 = (*a2 - *a1) * a5 + *a1;
    float v_20 = (a2[1] - a1[1]) * a5 + a1[1];
    float v_1c = (a2[2] - a1[2]) * a5 + a1[2];
    int32_t valA2 = (x87_r7_3 + ((*a4 - *a3) * a5 + *a3 - x87_r7_3) * a6) * 255.0f;

    if (valA2 >= 0xff)
        valA2 = 0xff;

    int32_t v_24_1 = (((a4[1] - a3[1]) * a5 + a3[1] - v_20) * a6 + v_20) * 255.0f;
    int32_t tmpD = v_24_1;

    if (v_24_1 >= 0xff)
        tmpD = 0xff;

    int32_t objC3 = (((a4[2] - a3[2]) * a5 + a3[2] - v_1c) * a6 + v_1c) * 255.0f;

    if (objC3 >= 0xff)
        objC3 = 0xff;

    return (valA2 << 8 | tmpD) << 8 | objC3;
}
