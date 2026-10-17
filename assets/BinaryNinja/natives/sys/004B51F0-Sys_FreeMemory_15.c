// Original IGI.EXE function: Sys_FreeMemory_15 (VA 0x004B51F0; static CFG gate FAIL, CFG score 0.667).
#include "Sys_FreeMemory_15.h"
int32_t Sys_FreeMemory_15(int32_t* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, float a10, float a11, float a12, int32_t a13, int32_t a14, int32_t a15)

{
    int32_t v_7c = 0x3f800000;
    int32_t v_58 = 0x3f800000;
    int32_t v_34 = 0x3f800000;
    int32_t v_10 = 0x3f800000;
    int32_t* valA2 = a1[2] + a13 * 0x24;
    int32_t v_88 = 0x3f800000;
    int32_t v_64 = 0x3f800000;
    int32_t v_40 = 0x3f800000;
    int32_t v_1c = 0x3f800000;
    int32_t tmpD1 = valA2[5];
    int32_t tmpD2 = valA2[6];
    int32_t tmpD3 = valA2[7];
    int32_t tmpD4 = valA2[6];
    int32_t tmpD5 = valA2[5];
    int32_t tmpD6 = valA2[8];
    int32_t tmpD7 = valA2[7];
    int32_t tmpD8 = valA2[8];
    long double x87_r7_1 = a10 * 0.0078125f;
    int32_t v_90 = a2;
    float v_78 = x87_r7_1;
    float v_54 = x87_r7_1;
    float v_30 = x87_r7_1;
    float v_c = x87_r7_1;
    long double x87_r7_3 = a11 * 0.0078125f;
    float v_74 = x87_r7_3;
    float v_50 = x87_r7_3;
    float v_2c = x87_r7_3;
    float v_8 = x87_r7_3;
    long double x87_r7_5 = a12 * 0.0078125f;
    int32_t* v_94 = &v_90;
    float v_70 = x87_r7_5;
    float v_4c = x87_r7_5;
    float v_28 = x87_r7_5;
    float v_4 = x87_r7_5;
    int32_t v_a4 = 0;
    int32_t v_98 = 4;
    g_a84a50 = *valA2;
    int32_t valA4 = g_a84a54;
    g_a84a58 = *a1;
    int32_t result = (*((valA4 << 2) + &g_a94e84))(&v_a4, v_a4, a14, a15, v_98,
        v_94, v_90, a3, v_88, tmpD1, tmpD2, v_7c, v_78, v_74, v_70, a4, a5,
        v_64, tmpD3, tmpD4, v_58, v_54, v_50, v_4c, a6, a7, v_40, tmpD5, tmpD6,
        v_34, v_30, v_2c, v_28, a8, a9, v_1c, tmpD7, tmpD8, v_10, v_c, v_8,
        v_4);
    return result;
}
