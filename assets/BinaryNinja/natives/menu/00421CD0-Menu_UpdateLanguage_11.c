#include "Menu_UpdateLanguage_11.h"
int32_t Menu_UpdateLanguage_11(void* a1)

{
    float v_e8 = *(a1 + 0x9c) + 1f;
    float v_e0 = (g_c28b48 >> 1) - 0xf0 + *(a1 + 0xa4) + 1f;
    float v_dc = *(a1 + 0xa0) + 1f;
    void* tmpD = *(a1 + 0x44);
    float v_d8 = (g_c28b48 >> 1) - 0xf0 + *(a1 + 0xa8) + 1f;
    float v_d0 = v_e0 + 20f;
    long double x87_r7_13 = Menu_FormatScreen_4(tmpD) * 0.125f;
    long double f0 = 1f;
    x87_r7_13 - f0;
    float v_e4;

    if (!(*(&((x87_r7_13 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, f0) ? 1 : 0) << 0xa
            | (x87_r7_13 == f0 ? 1 : 0) << 0xe) + 1) & 1))
        v_e4 = 1f;
    else
        v_e4 = Menu_FormatScreen_4(*(a1 + 0x44)) * 0.125f;

    float v_cc = v_e4 * 0.200000003f;
    float v_ec_4 = v_e4 * 0.0500000007f;
    float v_e8_1 = (g_c28b44 >> 1) - 0x140 + (v_e8 - 320f) * v_e4 + 320f;
    int32_t v_98;
    int32_t* valA7 = &v_98;
    int32_t tmpD3 = (g_c28b44 >> 1) - 0x140;
    g_a84a50 = 0;
    g_a84a58 = 0;
    int32_t i_1 = 4;
    long double x87_r7_25 = tmpD3 + (v_dc - 320f) * v_e4 + 320f;
    float v_dc_1 = x87_r7_25;
    int32_t i;

    do
    {
        valA7[-1] = 0;
        *valA7 = 0x3f400000;
        valA7[1] = 0;
        valA7[-2] = v_e4;
        valA7[-4] = 0;
        valA7[-3] = 0;
        valA7[-5] = 0x3f800000;
        valA7 = &valA7[9];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    float v_90 = x87_r7_25;
    float v_6c = x87_r7_25;
    float v_b4 = v_e8_1;
    float valA9 = v_d8;
    float v_b0 = v_e0;
    float v_8c = v_e0;
    float v_48 = v_e8_1;
    float v_68 = valA9;
    float v_44 = valA9;
    int32_t tmpD7 = g_a84a54;
    void v_24;
    memcpy(&v_24, &v_b4, 0x24);
    int32_t v_c4 = 0x80000;
    int32_t v_c8 = 1;
    int32_t v_c0 = 0;
    int32_t v_bc = 5;
    float* v_b8 = &v_b4;
    (*((tmpD7 << 2) + &g_a94e84))(&v_c8);
    v_b4 = v_e8_1;
    float v_b0_1 = v_d0;
    float v_90_1 = v_dc_1;
    float v_8c_1 = v_d0;
    int32_t v_bc_1 = 2;
    (*((g_a84a54 << 2) + &g_a94e84))(&v_c8);
    v_b4 = v_e8_1;
    float v_b0_2 = v_e0;
    float v_90_2 = v_dc_1;
    float v_a0 = v_cc;
    float v_8c_2 = v_e0;
    float objC10 = v_d8;
    float v_7c = v_cc;
    float v_6c_1 = v_e8_1;
    int32_t v_9c = 0;
    v_98 = 0x3f800000;
    int32_t v_94 = 0;
    int32_t v_a8 = 0;
    int32_t v_a4 = 0;
    int32_t v_ac = 0x3f800000;
    int32_t v_78 = 0;
    int32_t v_74 = 0x3f800000;
    int32_t v_70 = 0;
    int32_t v_84 = 0;
    int32_t v_80 = 0;
    int32_t v_88 = 0x3f800000;
    float v_68_1 = objC10;
    int32_t v_54 = 0;
    int32_t v_50 = 0;
    int32_t v_4c = 0;
    float v_58 = v_ec_4;
    int32_t v_60 = 0;
    int32_t v_5c = 0;
    int32_t v_64 = 0x3f800000;
    v_48 = v_dc_1;
    float v_44_1 = objC10;
    int32_t v_30 = 0;
    float v_34 = v_ec_4;
    int32_t tmpD12 = g_a84a54;
    int32_t v_2c = 0;
    int32_t v_28 = 0;
    int32_t v_3c = 0;
    int32_t v_38 = 0;
    int32_t v_40 = 0x3f800000;
    v_c8 = 0;
    int32_t v_c0_1 = 0;
    int32_t v_bc_2 = 4;
    float* v_b8_1 = &v_b4;
    int32_t objC11 = (*((tmpD12 << 2) + &g_a94e84))(&v_c8);
    int32_t result = *(a1 + 0x94);

    if (result)
        return result;

    int32_t v_104_1 = objC11;
    int32_t v_114_1 = objC11;
    int32_t v_118_1 = objC11;
    return Sys_DispatchOpcode_14(v_e8_1, v_e0, v_dc_1 - v_e8_1, v_d8 - v_e0, 0f, 0f, 0f,
        v_e4 * 0.660000026f, 0x3f800000, 0x80000, 0);
}
