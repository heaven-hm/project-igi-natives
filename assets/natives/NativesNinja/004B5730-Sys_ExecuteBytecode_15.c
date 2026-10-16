#include "004B5730-Sys_ExecuteBytecode_15.h"
/* 0x004b5730 Sys_ExecuteBytecode_15 full linked: callers=5 callees=0 */
int32_t sub_4b5730(float a1, float a2, int32_t a3, float a4, float a5, int32_t a6, float a7, float a8, float a9, float a10, float a11, float a12, int32_t a13, int32_t a14, int32_t a15)

{
    float var_30 = a7 * 0.0078125f;
    float var_2c = a8 * 0.0078125f;
    int32_t edx_2 = g_a84a54;
    float var_48;
    int32_t* var_4c = &var_48;
    float var_28 = a9 * 0.0078125f;
    int32_t var_3c = 0;
    int32_t var_38 = 0;
    int32_t var_18 = 0;
    int32_t var_14 = 0;
    int32_t var_5c = 1;
    int32_t var_50 = 2;
    var_48 = a1 - 0.5f;
    g_a84a50 = 0;
    g_a84a58 = 0;
    int32_t result = (*((edx_2 << 2) + &g_a94e84))(&var_5c, var_5c, a14, a15, var_50,
        var_4c, var_48, a2 - 0.5f, a3, var_3c, var_38, a13, var_30, var_2c, var_28,
        a4 - 0.5f, a5 - 0.5f, a6, var_18, var_14, a13, a10 * 0.0078125f,
        a11 * 0.0078125f, a12 * 0.0078125f);
    return result;
}
