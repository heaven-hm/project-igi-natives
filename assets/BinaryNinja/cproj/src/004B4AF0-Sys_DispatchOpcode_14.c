#include "gi_platform.h"
#include "004B4AF0-Sys_DispatchOpcode_14.h"
int32_t Sys_DispatchOpcode_14(float a1, float a2, float a3, float a4, float a5, float a6, float a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11)

{
    long double x87_r7_1 = a5 * 0.0078125.0f;
    float v_30 = x87_r7_1;
    float v_c = x87_r7_1;
    long double x87_r7_3 = a6 * 0.0078125.0f;
    float v_2c = x87_r7_3;
    float v_8 = x87_r7_3;
    long double x87_r7_5 = a7 * 0.0078125.0f;
    float v_48 = a1;
    int32_t v_5c = 0;
    int32_t* v_4c = &v_48;
    float v_28 = x87_r7_5;
    float v_4 = x87_r7_5;
    g_a84a50 = 0;
    g_a84a58 = 0;
    int32_t result = ((int(*)())(uintptr_t)(*((g_a84a54 << 2) + &g_a94e84)))(&v_5c, v_5c, a10, a11, 2,
        v_4c, v_48, a2, a9, 0, 0, a8, v_30, v_2c, v_28, a1 + a3, a2 + a4,
        a9, 0x3f800000, 0x3f800000, a8, v_c, v_8, v_4);
    return result;
}
