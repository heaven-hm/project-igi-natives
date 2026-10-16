#include "004B4820-Sys_ReadFileBlock_14.h"
/* 0x004b4820 Sys_ReadFileBlock_14 full linked: callers=2 callees=0 */
int32_t sub_4b4820(float a1, float a2, float a3, float a4, float a5, float a6, float a7, int32_t a8, int32_t a9)

{
    long double x87_r7_1 = a5 * 0.0078125f;
    float var_48 = a1;
    float var_30 = x87_r7_1;
    float var_c = x87_r7_1;
    long double x87_r7_3 = a6 * 0.0078125f;
    int32_t var_5c = 0;
    g_a84a50 = 0;
    g_a84a58 = 0;
    long double x87_r7_5 = a7 * 0.0078125f;
    int32_t result = (*((g_a84a54 << 2) + &g_a94e84))(&var_5c, var_5c, a8, a9, 2,
        &var_48, var_48, a2, 0x3f800000, 0, 0, 0x3f800000, var_30, x87_r7_3, x87_r7_5,
        a1 + a3, a2 + a4, 0x3f800000, 0x3f800000, 0x3f800000, 0x3f800000, var_c, x87_r7_3,
        x87_r7_5);
    return result;
}
