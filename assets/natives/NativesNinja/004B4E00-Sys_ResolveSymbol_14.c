#include "004B4E00-Sys_ResolveSymbol_14.h"
/* 0x004b4e00 Sys_ResolveSymbol_14 full linked: callers=11 callees=0 */
int32_t sub_4b4e00(int32_t* a1, int32_t a2, float a3, float a4, float a5, float a6, int32_t a7, int32_t a8, int32_t a9)

{
    long double x87_r7_1 = a4 * 0.0078125f;
    int32_t* eax_2 = a1[2] + a7 * 0x24;
    int32_t var_34 = 0x3f800000;
    int32_t var_10 = 0x3f800000;
    int32_t var_40 = 0x3f800000;
    int32_t var_1c = 0x3f800000;
    int32_t edx_1 = eax_2[5];
    int32_t edx_2 = eax_2[6];
    int32_t edx_3 = eax_2[7];
    int32_t edx_4 = eax_2[8];
    float var_30 = x87_r7_1;
    float var_c = x87_r7_1;
    long double x87_r7_3 = a5 * 0.0078125f;
    float var_2c = x87_r7_3;
    float var_8 = x87_r7_3;
    long double x87_r7_5 = a6 * 0.0078125f;
    float var_28 = x87_r7_5;
    float var_4 = x87_r7_5;
    float var_48 = eax_2[2] + a2;
    float var_44 = *(eax_2 + 0xa) + a3;
    float var_24 = eax_2[3] + eax_2[2] + a2;
    long double x87_r7_14 = *(eax_2 + 0xe) + *(eax_2 + 0xa);
    float* var_4c = &var_48;
    int32_t var_5c = 0;
    int32_t var_50 = 2;
    float var_20 = x87_r7_14 + a3;
    g_a84a50 = *eax_2;
    int32_t eax_4 = g_a84a54;
    g_a84a58 = *a1;
    return (*((eax_4 << 2) + &g_a94e84))(&var_5c, var_5c, a8, a9, var_50, var_4c, var_48,
        var_44, var_40, edx_1, edx_2, var_34, var_30, var_2c, var_28, var_24, var_20, var_1c,
        edx_3, edx_4, var_10, var_c, var_8, var_4);
}
