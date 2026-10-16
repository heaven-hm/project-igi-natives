#include "004B5560-Sys_CloseFileStream_15.h"
/* 0x004b5560 Sys_CloseFileStream_15 full linked: callers=1 callees=0 */
int32_t sub_4b5560(int32_t* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17, float a18, float a19, float a20, int32_t a21, int32_t a22, int32_t a23, int32_t a24, int32_t a25)

{
    int32_t var_a4 = 0;
    long double x87_r7_1 = a18 * 0.0078125f;
    float var_78 = x87_r7_1;
    float var_54 = x87_r7_1;
    float var_30 = x87_r7_1;
    float var_c = x87_r7_1;
    long double x87_r7_3 = a19 * 0.0078125f;
    float var_74 = x87_r7_3;
    float var_50 = x87_r7_3;
    float var_2c = x87_r7_3;
    float var_8 = x87_r7_3;
    int32_t var_90 = a2;
    long double x87_r7_5 = a20 * 0.0078125f;
    int32_t* var_94 = &var_90;
    float var_70 = x87_r7_5;
    float var_4c = x87_r7_5;
    float var_28 = x87_r7_5;
    float var_4 = x87_r7_5;
    int32_t var_98 = 4;
    g_a84a50 = *(a1[2] + a23 * 0x24);
    g_a84a58 = *a1;
    int32_t result = (*((g_a84a54 << 2) + &g_a94e84))(&var_a4, var_a4, a24, a25, var_98,
        var_94, var_90, a3, a21, a10, a11, a22, var_78, var_74, var_70, a4, a5,
        a21, a12, a13, a22, var_54, var_50, var_4c, a6, a7, a21, a14, a15, a22,
        var_30, var_2c, var_28, a8, a9, a21, a16, a17, a22, var_c, var_8, var_4);
    return result;
}
