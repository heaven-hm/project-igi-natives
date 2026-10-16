#include "gi_platform.h"
#include "004B4F40-Sys_CheckHeap_14.h"
int32_t Sys_CheckHeap_14(int32_t* a1, float a2, float a3, float a4, float a5, float a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10)

{
    int32_t v_34 = 0x3f800000;
    int32_t v_10 = 0x3f800000;
    int32_t* valA3 = a1[2] + a7 * 0x24;
    long double x87_r7_1 = a4 * 0.0078125.0f;
    int32_t tmpD1 = valA3[5];
    int32_t tmpD2 = valA3[6];
    int32_t tmpD3 = valA3[7];
    int32_t tmpD4 = valA3[8];
    float v_30 = x87_r7_1;
    float v_c = x87_r7_1;
    long double x87_r7_3 = a5 * 0.0078125.0f;
    float v_2c = x87_r7_3;
    float v_8 = x87_r7_3;
    long double x87_r7_5 = a6 * 0.0078125.0f;
    float v_28 = x87_r7_5;
    float v_4 = x87_r7_5;
    float v_48 = valA3[2] + a2;
    float v_44 = *(valA3 + 0xa) + a3;
    float v_24 = valA3[3] + valA3[2] + a2;
    long double x87_r7_14 = *(valA3 + 0xe) + *(valA3 + 0xa);
    float* v_4c = &v_48;
    int32_t v_5c = 0;
    int32_t v_50 = 2;
    float v_20 = x87_r7_14 + a3;
    g_a84a50 = *valA3;
    int32_t valA5 = g_a84a54;
    g_a84a58 = *a1;
    return ((int(*)())(uintptr_t)(*((valA5 << 2) + &g_a94e84)))(&v_5c, v_5c, a8, a9, v_50, v_4c, v_48,
        v_44, a10, tmpD1, tmpD2, v_34, v_30, v_2c, v_28, v_24, v_20, a10, tmpD3,
        tmpD4, v_10, v_c, v_8, v_4);
}
