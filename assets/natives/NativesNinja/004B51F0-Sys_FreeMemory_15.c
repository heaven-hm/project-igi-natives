#include "004B51F0-Sys_FreeMemory_15.h"
/* 0x004b51f0 Sys_FreeMemory_15 full linked: callers=11 callees=0 */
int32_t sub_4b51f0(int32_t* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, float a10, float a11, float a12, int32_t a13, int32_t a14, int32_t a15)

{
    int32_t var_7c = 0x3f800000;
    int32_t var_58 = 0x3f800000;
    int32_t var_34 = 0x3f800000;
    int32_t var_10 = 0x3f800000;
    int32_t* eax_2 = a1[2] + a13 * 0x24;
    int32_t var_88 = 0x3f800000;
    int32_t var_64 = 0x3f800000;
    int32_t var_40 = 0x3f800000;
    int32_t var_1c = 0x3f800000;
    int32_t edx_1 = eax_2[5];
    int32_t edx_2 = eax_2[6];
    int32_t edx_3 = eax_2[7];
    int32_t edx_4 = eax_2[6];
    int32_t edx_5 = eax_2[5];
    int32_t edx_6 = eax_2[8];
    int32_t edx_7 = eax_2[7];
    int32_t edx_8 = eax_2[8];
    long double x87_r7_1 = a10 * 0.0078125f;
    int32_t var_90 = a2;
    float var_78 = x87_r7_1;
    float var_54 = x87_r7_1;
    float var_30 = x87_r7_1;
    float var_c = x87_r7_1;
    long double x87_r7_3 = a11 * 0.0078125f;
    float var_74 = x87_r7_3;
    float var_50 = x87_r7_3;
    float var_2c = x87_r7_3;
    float var_8 = x87_r7_3;
    long double x87_r7_5 = a12 * 0.0078125f;
    int32_t* var_94 = &var_90;
    float var_70 = x87_r7_5;
    float var_4c = x87_r7_5;
    float var_28 = x87_r7_5;
    float var_4 = x87_r7_5;
    int32_t var_a4 = 0;
    int32_t var_98 = 4;
    g_a84a50 = *eax_2;
    int32_t eax_4 = g_a84a54;
    g_a84a58 = *a1;
    int32_t result = (*((eax_4 << 2) + &g_a94e84))(&var_a4, var_a4, a14, a15, var_98,
        var_94, var_90, a3, var_88, edx_1, edx_2, var_7c, var_78, var_74, var_70, a4, a5,
        var_64, edx_3, edx_4, var_58, var_54, var_50, var_4c, a6, a7, var_40, edx_5, edx_6,
        var_34, var_30, var_2c, var_28, a8, a9, var_1c, edx_7, edx_8, var_10, var_c, var_8,
        var_4);
    return result;
}
