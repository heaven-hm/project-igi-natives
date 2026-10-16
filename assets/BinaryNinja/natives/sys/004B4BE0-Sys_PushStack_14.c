#include "Sys_PushStack_14.h"
int32_t Sys_PushStack_14(float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15, float a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23)

{
    float v_78 = a5 * 0.0078125f;
    float v_54 = a8 * 0.0078125f;
    float v_30 = a11 * 0.0078125f;
    float v_90 = a1;
    float v_c = a14 * 0.0078125f;
    int32_t v_84 = 0;
    int32_t v_80 = 0;
    int32_t v_60 = 0x3f800000;
    int32_t v_5c = 0;
    int32_t v_3c = 0;
    int32_t v_38 = 0x3f800000;
    float v_74 = a6 * 0.0078125f;
    int32_t v_18 = 0x3f800000;
    int32_t v_14 = 0x3f800000;
    int32_t* v_94 = &v_90;
    float v_50 = a9 * 0.0078125f;
    float v_2c = a12 * 0.0078125f;
    float v_8 = a15 * 0.0078125f;
    float v_70 = a7 * 0.0078125f;
    float v_4c = a10 * 0.0078125f;
    float v_28 = a13 * 0.0078125f;
    float v_4 = a16 * 0.0078125f;
    long double x87_r7_25 = a1 + a3;
    float v_6c = x87_r7_25;
    long double x87_r6_1 = a2 + a4;
    float v_a8 = x87_r6_1;
    float v_44 = x87_r6_1;
    float v_24 = x87_r7_25;
    int32_t v_a4 = 0;
    g_a84a50 = 0;
    g_a84a58 = 0;
    int32_t result = (*((g_a84a54 << 2) + &g_a94e84))(&v_a4, v_a8, v_a4, a22, a23,
        4, v_94, v_90, a2, a21, v_84, v_80, a17, v_78, v_74, v_70, v_6c,
        a2, a21, v_60, v_5c, a18, v_54, v_50, v_4c, a1, v_44, a21, v_3c,
        v_38, a19, v_30, v_2c, v_28, v_24, v_a8, a21, v_18, v_14, a20, v_c,
        v_8, v_4);
    return result;
}
