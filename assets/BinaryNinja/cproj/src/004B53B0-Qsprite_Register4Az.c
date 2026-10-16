#include "gi_platform.h"
#include "004B53B0-Qsprite_Register4Az.h"
int32_t Qsprite_Register4Az(int32_t* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, float a10, float a11, float a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16, int32_t a17)

// Sig: void Qsprite_Register4Az(/*14 args*/)
// Note: Registers a QUAD-SPRITE with full transform data: 14 args, float
// parameters scaled by constant 0x534AB0, writes sprite tables
// 0xA84A50/0xA84A58 (verified). Low-level renderer API - map arg layout from
// callers before use.
{
    int32_t* valA4 = a1[2] + a15 * 0x24;
    long double x87_r7_1 = a10 * 0.0078125.0f;
    int32_t tmpD3 = valA4[5];
    int32_t tmpD4 = valA4[6];
    int32_t tmpD5 = valA4[7];
    int32_t tmpD6 = valA4[6];
    int32_t tmpD7 = valA4[5];
    int32_t tmpD8 = valA4[8];
    int32_t tmpD9 = valA4[7];
    int32_t tmpD10 = valA4[8];
    int32_t v_90 = a2;
    float v_78 = x87_r7_1;
    float v_54 = x87_r7_1;
    float v_30 = x87_r7_1;
    float v_c = x87_r7_1;
    long double x87_r7_3 = a11 * 0.0078125.0f;
    float v_74 = x87_r7_3;
    float v_50 = x87_r7_3;
    float v_2c = x87_r7_3;
    float v_8 = x87_r7_3;
    long double x87_r7_5 = a12 * 0.0078125.0f;
    int32_t* v_94 = &v_90;
    float v_70 = x87_r7_5;
    float v_4c = x87_r7_5;
    float v_28 = x87_r7_5;
    float v_4 = x87_r7_5;
    int32_t v_a4 = 0;
    int32_t v_98 = 4;
    g_a84a50 = *valA4;
    g_a84a58 = *a1;
    int32_t result = ((int(*)())(uintptr_t)(*((g_a84a54 << 2) + &g_a94e84)))(&v_a4, v_a4, a16, a17, v_98,
        v_94, v_90, a3, a13, tmpD3, tmpD4, a14, v_78, v_74, v_70, a4, a5,
        a13, tmpD5, tmpD6, a14, v_54, v_50, v_4c, a6, a7, a13, tmpD7, tmpD8, a14,
        v_30, v_2c, v_28, a8, a9, a13, tmpD9, tmpD10, a14, v_c, v_8, v_4);
    return result;
}
