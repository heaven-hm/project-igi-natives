#include "004B4BE0-Sys_PushStack_14.h"
/* 0x004b4be0 Sys_PushStack_14 full linked: callers=1 callees=0 */
int32_t sub_4b4be0(float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15, float a16, int32_t a17, int32_t a18, int32_t a19, int32_t a20, int32_t a21, int32_t a22, int32_t a23)

{
    float var_78 = a5 * 0.0078125f;
    float var_54 = a8 * 0.0078125f;
    float var_30 = a11 * 0.0078125f;
    float var_90 = a1;
    float var_c = a14 * 0.0078125f;
    int32_t var_84 = 0;
    int32_t var_80 = 0;
    int32_t var_60 = 0x3f800000;
    int32_t var_5c = 0;
    int32_t var_3c = 0;
    int32_t var_38 = 0x3f800000;
    float var_74 = a6 * 0.0078125f;
    int32_t var_18 = 0x3f800000;
    int32_t var_14 = 0x3f800000;
    int32_t* var_94 = &var_90;
    float var_50 = a9 * 0.0078125f;
    float var_2c = a12 * 0.0078125f;
    float var_8 = a15 * 0.0078125f;
    float var_70 = a7 * 0.0078125f;
    float var_4c = a10 * 0.0078125f;
    float var_28 = a13 * 0.0078125f;
    float var_4 = a16 * 0.0078125f;
    long double x87_r7_25 = a1 + a3;
    float var_6c = x87_r7_25;
    long double x87_r6_1 = a2 + a4;
    float var_a8 = x87_r6_1;
    float var_44 = x87_r6_1;
    float var_24 = x87_r7_25;
    int32_t var_a4 = 0;
    g_a84a50 = 0;
    g_a84a58 = 0;
    int32_t result = (*((g_a84a54 << 2) + &g_a94e84))(&var_a4, var_a8, var_a4, a22, a23,
        4, var_94, var_90, a2, a21, var_84, var_80, a17, var_78, var_74, var_70, var_6c,
        a2, a21, var_60, var_5c, a18, var_54, var_50, var_4c, a1, var_44, a21, var_3c,
        var_38, a19, var_30, var_2c, var_28, var_24, var_a8, a21, var_18, var_14, a20, var_c,
        var_8, var_4);
    return result;
}
