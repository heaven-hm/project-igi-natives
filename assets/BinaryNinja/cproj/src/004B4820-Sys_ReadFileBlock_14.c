#include "gi_platform.h"
#include "004B4820-Sys_ReadFileBlock_14.h"
int32_t Sys_ReadFileBlock_14(float a1, float a2, float a3, float a4, float a5, float a6, float a7, int32_t a8, int32_t a9)

{
    long double x87_r7_1 = a5 * 0.0078125.0f;
    float v_48 = a1;
    float v_30 = x87_r7_1;
    float v_c = x87_r7_1;
    long double x87_r7_3 = a6 * 0.0078125.0f;
    int32_t v_5c = 0;
    g_a84a50 = 0;
    g_a84a58 = 0;
    long double x87_r7_5 = a7 * 0.0078125.0f;
    int32_t result = ((int(*)())(uintptr_t)(*((g_a84a54 << 2) + &g_a94e84)))(&v_5c, v_5c, a8, a9, 2,
        &v_48, v_48, a2, 0x3f800000, 0, 0, 0x3f800000, v_30, x87_r7_3, x87_r7_5,
        a1 + a3, a2 + a4, 0x3f800000, 0x3f800000, 0x3f800000, 0x3f800000, v_c, x87_r7_3,
        x87_r7_5);
    return result;
}
