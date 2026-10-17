// Original IGI.EXE function: Sys_ResolveSymbol_14 (VA 0x004B4E00; static CFG gate FAIL, CFG score 0.667).
#include "Sys_ResolveSymbol_14.h"
int32_t Sys_ResolveSymbol_14(int32_t* a1, int32_t a2, float a3, float a4, float a5, float a6, int32_t a7, int32_t a8, int32_t a9)

{
    long double x87_r7_1 = a4 * 0.0078125f;
    int32_t* valA2 = a1[2] + a7 * 0x24;
    int32_t v_34 = 0x3f800000;
    int32_t v_10 = 0x3f800000;
    int32_t v_40 = 0x3f800000;
    int32_t v_1c = 0x3f800000;
    int32_t tmpD1 = valA2[5];
    int32_t tmpD2 = valA2[6];
    int32_t tmpD3 = valA2[7];
    int32_t tmpD4 = valA2[8];
    float v_30 = x87_r7_1;
    float v_c = x87_r7_1;
    long double x87_r7_3 = a5 * 0.0078125f;
    float v_2c = x87_r7_3;
    float v_8 = x87_r7_3;
    long double x87_r7_5 = a6 * 0.0078125f;
    float v_28 = x87_r7_5;
    float v_4 = x87_r7_5;
    float v_48 = valA2[2] + a2;
    float v_44 = *(valA2 + 0xa) + a3;
    float v_24 = valA2[3] + valA2[2] + a2;
    long double x87_r7_14 = *(valA2 + 0xe) + *(valA2 + 0xa);
    float* v_4c = &v_48;
    int32_t v_5c = 0;
    int32_t v_50 = 2;
    float v_20 = x87_r7_14 + a3;
    g_a84a50 = *valA2;
    int32_t valA4 = g_a84a54;
    g_a84a58 = *a1;
    return (*((valA4 << 2) + &g_a94e84))(&v_5c, v_5c, a8, a9, v_50, v_4c, v_48,
        v_44, v_40, tmpD1, tmpD2, v_34, v_30, v_2c, v_28, v_24, v_20, v_1c,
        tmpD3, tmpD4, v_10, v_c, v_8, v_4);
}
