#include "004B4AF0-Sys_DispatchOpcode_14.h"
/* 0x004b4af0 Sys_DispatchOpcode_14 full linked: callers=4 callees=0 */
int32_t sub_4b4af0(float a1, float a2, float a3, float a4, float a5, float a6, float a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11)

{
    long double x87_r7_1 = a5 * 0.0078125f;
    float var_30 = x87_r7_1;
    float var_c = x87_r7_1;
    long double x87_r7_3 = a6 * 0.0078125f;
    float var_2c = x87_r7_3;
    float var_8 = x87_r7_3;
    long double x87_r7_5 = a7 * 0.0078125f;
    float var_48 = a1;
    int32_t var_5c = 0;
    int32_t* var_4c = &var_48;
    float var_28 = x87_r7_5;
    float var_4 = x87_r7_5;
    g_a84a50 = 0;
    g_a84a58 = 0;
    int32_t result = (*((g_a84a54 << 2) + &g_a94e84))(&var_5c, var_5c, a10, a11, 2,
        var_4c, var_48, a2, a9, 0, 0, a8, var_30, var_2c, var_28, a1 + a3, a2 + a4,
        a9, 0x3f800000, 0x3f800000, a8, var_c, var_8, var_4);
    return result;
}
