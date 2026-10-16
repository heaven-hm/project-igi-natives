#include "004B50B0-Sys_AllocateMemory_15.h"
/* 0x004b50b0 Sys_AllocateMemory_15 full linked: callers=9 callees=0 */
int32_t sub_4b50b0(int32_t* a1, float a2, float a3, float a4, float a5, float a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11)

{
    long double x87_r7_1 = a4 * 0.0078125f;
    int32_t* eax_4 = a1[2] + a9 * 0x24;
    int32_t edx_2 = eax_4[5];
    int32_t edx_3 = eax_4[6];
    int32_t edx_4 = eax_4[7];
    int32_t edx_5 = eax_4[8];
    float var_30 = x87_r7_1;
    float var_c = x87_r7_1;
    long double x87_r7_3 = a5 * 0.0078125f;
    float var_2c = x87_r7_3;
    float var_8 = x87_r7_3;
    long double x87_r7_5 = a6 * 0.0078125f;
    float var_28 = x87_r7_5;
    float var_4 = x87_r7_5;
    float var_48 = eax_4[2] + a2;
    float var_44 = *(eax_4 + 0xa) + a3;
    float var_24 = eax_4[3] + eax_4[2] + a2;
    long double x87_r7_14 = *(eax_4 + 0xe) + *(eax_4 + 0xa);
    float* var_4c = &var_48;
    int32_t var_5c = 0;
    int32_t var_50 = 2;
    float var_20 = x87_r7_14 + a3;
    g_a84a50 = *eax_4;
    int32_t eax_6 = g_a84a54;
    g_a84a58 = *a1;
    return (*((eax_6 << 2) + &g_a94e84))(&var_5c, var_5c, a10, a11, var_50, var_4c, var_48,
        var_44, a8, edx_2, edx_3, a7, var_30, var_2c, var_28, var_24, var_20, a8, edx_4,
        edx_5, a7, var_c, var_8, var_4);
}
