#include "Sys_AllocateMemory_15.h"
int32_t Sys_AllocateMemory_15(int32_t* a1, float a2, float a3, float a4, float a5, float a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11)

{
    long double x87_r7_1 = a4 * 0.0078125f;
    int32_t* valA4 = a1[2] + a9 * 0x24;
    int32_t tmpD2 = valA4[5];
    int32_t tmpD3 = valA4[6];
    int32_t tmpD4 = valA4[7];
    int32_t tmpD5 = valA4[8];
    float v_30 = x87_r7_1;
    float v_c = x87_r7_1;
    long double x87_r7_3 = a5 * 0.0078125f;
    float v_2c = x87_r7_3;
    float v_8 = x87_r7_3;
    long double x87_r7_5 = a6 * 0.0078125f;
    float v_28 = x87_r7_5;
    float v_4 = x87_r7_5;
    float v_48 = valA4[2] + a2;
    float v_44 = *(valA4 + 0xa) + a3;
    float v_24 = valA4[3] + valA4[2] + a2;
    long double x87_r7_14 = *(valA4 + 0xe) + *(valA4 + 0xa);
    float* v_4c = &v_48;
    int32_t v_5c = 0;
    int32_t v_50 = 2;
    float v_20 = x87_r7_14 + a3;
    g_a84a50 = *valA4;
    int32_t valA6 = g_a84a54;
    g_a84a58 = *a1;
    return (*((valA6 << 2) + &g_a94e84))(&v_5c, v_5c, a10, a11, v_50, v_4c, v_48,
        v_44, a8, tmpD2, tmpD3, a7, v_30, v_2c, v_28, v_24, v_20, a8, tmpD4,
        tmpD5, a7, v_c, v_8, v_4);
}
