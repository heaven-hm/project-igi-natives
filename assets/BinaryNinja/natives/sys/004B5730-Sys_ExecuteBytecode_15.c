#include "Sys_ExecuteBytecode_15.h"
int32_t Sys_ExecuteBytecode_15(float a1, float a2, int32_t a3, float a4, float a5, int32_t a6, float a7, float a8, float a9, float a10, float a11, float a12, int32_t a13, int32_t a14, int32_t a15)

{
    float v_30 = a7 * 0.0078125f;
    float v_2c = a8 * 0.0078125f;
    int32_t tmpD2 = g_a84a54;
    float v_48;
    int32_t* v_4c = &v_48;
    float v_28 = a9 * 0.0078125f;
    int32_t v_3c = 0;
    int32_t v_38 = 0;
    int32_t v_18 = 0;
    int32_t v_14 = 0;
    int32_t v_5c = 1;
    int32_t v_50 = 2;
    v_48 = a1 - 0.5f;
    g_a84a50 = 0;
    g_a84a58 = 0;
    int32_t result = (*((tmpD2 << 2) + &g_a94e84))(&v_5c, v_5c, a14, a15, v_50,
        v_4c, v_48, a2 - 0.5f, a3, v_3c, v_38, a13, v_30, v_2c, v_28,
        a4 - 0.5f, a5 - 0.5f, a6, v_18, v_14, a13, a10 * 0.0078125f,
        a11 * 0.0078125f, a12 * 0.0078125f);
    return result;
}
