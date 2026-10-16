#include "004B53B0-Qsprite_Register4Az.h"
/* 0x004b53b0 Qsprite_Register4Az full linked: callers=6 callees=0 */
int32_t Qsprite_Register4Az(int32_t* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, float a10, float a11, float a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17)

// Sig: void Qsprite_Register4Az(/*14 args*/)
// Note: Registers a QUAD-SPRITE with full transform data: 14 args, float
// parameters scaled by constant 0x534AB0, writes sprite tables
// 0xA84A50/0xA84A58 (verified). Low-level renderer API - map arg layout from
// callers before use.
{
    int32_t* eax_4 = a1[2] + a15 * 0x24;
    long double x87_r7_1 = a10 * 0.0078125f;
    int32_t edx_3 = eax_4[5];
    int32_t edx_4 = eax_4[6];
    int32_t edx_5 = eax_4[7];
    int32_t edx_6 = eax_4[6];
    int32_t edx_7 = eax_4[5];
    int32_t edx_8 = eax_4[8];
    int32_t edx_9 = eax_4[7];
    int32_t edx_10 = eax_4[8];
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
    g_a84a50 = *eax_4;
    g_a84a58 = *a1;
    int32_t result = (*((g_a84a54 << 2) + &g_a94e84))(&var_a4, var_a4, a16, a17, var_98,
        var_94, var_90, a3, a13, edx_3, edx_4, a14, var_78, var_74, var_70, a4, a5,
        a13, edx_5, edx_6, a14, var_54, var_50, var_4c, a6, a7, a13, edx_7, edx_8, a14,
        var_30, var_2c, var_28, a8, a9, a13, edx_9, edx_10, a14, var_c, var_8, var_4);
    return result;
}
