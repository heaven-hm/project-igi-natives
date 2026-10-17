// Original IGI.EXE function: Sys_CloseFileStream_15 (VA 0x004B5560; static CFG gate FAIL, CFG score 0.667).
#include "Sys_CloseFileStream_15.h"
int32_t Sys_CloseFileStream_15(int32_t* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, float a18, float a19, float a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25)

{
    int32_t v_a4 = 0;
    long double x87_r7_1 = a18 * 0.0078125f;
    float v_78 = x87_r7_1;
    float v_54 = x87_r7_1;
    float v_30 = x87_r7_1;
    float v_c = x87_r7_1;
    long double x87_r7_3 = a19 * 0.0078125f;
    float v_74 = x87_r7_3;
    float v_50 = x87_r7_3;
    float v_2c = x87_r7_3;
    float v_8 = x87_r7_3;
    int32_t v_90 = a2;
    long double x87_r7_5 = a20 * 0.0078125f;
    int32_t* v_94 = &v_90;
    float v_70 = x87_r7_5;
    float v_4c = x87_r7_5;
    float v_28 = x87_r7_5;
    float v_4 = x87_r7_5;
    int32_t v_98 = 4;
    g_a84a50 = *(a1[2] + a23 * 0x24);
    g_a84a58 = *a1;
    int32_t result = (*((g_a84a54 << 2) + &g_a94e84))(&v_a4, v_a4, a24, a25, v_98,
        v_94, v_90, a3, a21, a10, a11, a22, v_78, v_74, v_70, a4, a5,
        a21, a12, a13, a22, v_54, v_50, v_4c, a6, a7, a21, a14, a15, a22,
        v_30, v_2c, v_28, a8, a9, a21, a16, a17, a22, v_c, v_8, v_4);
    return result;
}
