#include "gi_platform.h"
#include "00486210-FX_ExplosionSpawn_7.h"
int32_t FX_ExplosionSpawn_7(int32_t a1, int32_t a2, float a3, float a4, int32_t a5)

{
    int32_t valA4 = a2 * 0x40b;
    float tmpD = (*(int32_t*)(uintptr_t)(a1 + (valA4 << 2) + 0x44));
    void* objC2 = a1 + (valA4 << 2);
    float v_d8 = *(objC2 + 0x48);
    int32_t valA7;
    int32_t tmpD2;
    tmpD2 = HIGHD(0x38e38e39 * (9 - *(objC2 + 0x24)));
    valA7 = LOWD(0x38e38e39 * (9 - *(objC2 + 0x24)));
    int32_t tmpD3 = tmpD2 >> 1;
    long double fpu7 = tmpD3 + (tmpD3 >> 0x1f);
    long double f0 = 0.0f;
    fpu7 - f0;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        fpu7 = 0.0f;

    void* objC3 = *(objC2 + 0x3c);
    float v_cc = fpu7 * 0.600000024.0f + 0.150000006.0f;
    long double x87_r7_4;

    if (!objC3)
        x87_r7_4 = 37.0f;
    else
    {
        int32_t valA11;
        valA11 = Sys_ExecuteBytecode_17(objC3);
        x87_r7_4 = valA11;
    }

    float v_dc = a3 + 117.5.0f;
    long double x87_r7_5 = x87_r7_4 * 0.5.0f;
    void* v_10c = objC3;
    g_a84a50 = 0;
    g_a84a58 = 0;
    float v_d4_2 = x87_r7_5 + a4;
    float v_e0_1 = tmpD * 117.5.0f;
    float v_d0 = v_dc - v_e0_1;
    long double x87_r7_6 = x87_r7_5 * v_d8;
    v_d8 = v_d4_2 - x87_r7_6;
    float v_dc_1 = v_e0_1 + v_dc;
    float v_e0_2 = x87_r7_6 + v_d4_2;
    void* v_110 = objC3;
    Sys_DispatchOpcode_14(v_d0, v_d8, v_dc_1 - v_d0, v_e0_2 - v_d8, 0.0f, 0.0f, 0.0f, 0x3ea8f5c3,
        0x3f800000, 0x80000, a5);
    float objC5 = v_d8;
    float v_b4 = v_d0;
    float v_b0 = objC5;
    float v_90 = v_dc_1;
    float v_8c = objC5;
    float v_6c = v_d0;
    int32_t v_9c = 0;
    int32_t v_98 = 0x3f000000;
    int32_t v_94 = 0;
    float v_a0 = v_cc;
    int32_t v_a8 = 0;
    int32_t v_a4 = 0;
    int32_t v_ac = 0x3f800000;
    int32_t v_78 = 0;
    int32_t v_74 = 0x3f000000;
    int32_t v_70 = 0;
    float v_7c = v_cc;
    int32_t v_84 = 0;
    int32_t v_80 = 0;
    int32_t v_88 = 0x3f800000;
    float v_68 = v_e0_2;
    int32_t v_54 = 0;
    int32_t v_50 = 0x3f000000;
    int32_t v_4c = 0;
    float v_58 = v_cc;
    int32_t v_60 = 0;
    int32_t v_5c = 0;
    int32_t v_64 = 0x3f800000;
    float v_48 = v_dc_1;
    float v_44 = v_e0_2;
    float v_34 = v_cc;
    int32_t tmpD7 = g_a84a54;
    int32_t v_30 = 0;
    int32_t v_2c = 0x3f800000;
    int32_t v_28 = 0;
    int32_t v_3c = 0;
    int32_t v_38 = 0;
    int32_t v_40 = 0x3f800000;
    int32_t v_c4 = 0x80000;
    int32_t v_c8 = 0;
    int32_t v_c0 = a5;
    int32_t v_bc = 4;
    float* v_b8 = &v_b4;
    ((int(*)())(uintptr_t)(*((tmpD7 << 2) + &g_a94e84)))(&v_c8);
    int32_t* valA16 = &v_98;
    int32_t i_1 = 4;
    int32_t i;

    do
    {
        valA16[-1] = 0;
        __builtin_strncpy(valA16, "fff?", 8);
        valA16[-2] = 0x3f000000;
        valA16[-4] = 0;
        valA16[-3] = 0;
        valA16[-5] = 0x3f800000;
        valA16 = &valA16[9];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    float objC7 = v_d8;
    v_b4 = v_d0;
    float v_b0_1 = objC7;
    float v_90_1 = v_dc_1;
    float v_6c_1 = v_dc_1;
    float v_8c_1 = objC7;
    float v_44_1 = v_e0_2;
    float v_68_1 = v_e0_2;
    v_48 = v_d0;
    char v_24;
    memcpy(&v_24, &v_b4, 0x24);
    int32_t objC10 = g_a84a54;
    v_c8 = 1;
    int32_t v_c0_1 = a5;
    int32_t v_bc_1 = 5;
    float* v_b8_1 = &v_b4;
    return ((int(*)())(uintptr_t)(*((objC10 << 2) + &g_a94e84)))(&v_c8);
}
