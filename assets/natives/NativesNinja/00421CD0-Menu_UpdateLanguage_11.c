#include "00421CD0-Menu_UpdateLanguage_11.h"
/* 0x00421cd0 Menu_UpdateLanguage_11 full linked: callers=1 callees=8 */
int32_t Menu_UpdateLanguage_11(void* a1)

{
    float var_e8 = *(a1 + 0x9c) + 1f;
    float var_e0 = (g_c28b48 >> 1) - 0xf0 + *(a1 + 0xa4) + 1f;
    float var_dc = *(a1 + 0xa0) + 1f;
    void* edx = *(a1 + 0x44);
    float var_d8 = (g_c28b48 >> 1) - 0xf0 + *(a1 + 0xa8) + 1f;
    float var_d0 = var_e0 + 20f;
    long double x87_r7_13 = Menu_FormatScreen_4(edx) * 0.125f;
    long double temp0 = 1f;
    x87_r7_13 - temp0;
    float var_e4;

    if (!(*(&((x87_r7_13 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, temp0) ? 1 : 0) << 0xa
            | (x87_r7_13 == temp0 ? 1 : 0) << 0xe) + 1) & 1))
        var_e4 = 1f;
    else
        var_e4 = Menu_FormatScreen_4(*(a1 + 0x44)) * 0.125f;

    float var_cc = var_e4 * 0.200000003f;
    float var_ec_4 = var_e4 * 0.0500000007f;
    float var_e8_1 = (g_c28b44 >> 1) - 0x140 + (var_e8 - 320f) * var_e4 + 320f;
    int32_t var_98;
    int32_t* eax_7 = &var_98;
    int32_t edx_3 = (g_c28b44 >> 1) - 0x140;
    g_a84a50 = 0;
    g_a84a58 = 0;
    int32_t i_1 = 4;
    long double x87_r7_25 = edx_3 + (var_dc - 320f) * var_e4 + 320f;
    float var_dc_1 = x87_r7_25;
    int32_t i;

    do
    {
        eax_7[-1] = 0;
        *eax_7 = 0x3f400000;
        eax_7[1] = 0;
        eax_7[-2] = var_e4;
        eax_7[-4] = 0;
        eax_7[-3] = 0;
        eax_7[-5] = 0x3f800000;
        eax_7 = &eax_7[9];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    float var_90 = x87_r7_25;
    float var_6c = x87_r7_25;
    float var_b4 = var_e8_1;
    float eax_9 = var_d8;
    float var_b0 = var_e0;
    float var_8c = var_e0;
    float var_48 = var_e8_1;
    float var_68 = eax_9;
    float var_44 = eax_9;
    int32_t edx_7 = g_a84a54;
    void var_24;
    memcpy(&var_24, &var_b4, 0x24);
    int32_t var_c4 = 0x80000;
    int32_t var_c8 = 1;
    int32_t var_c0 = 0;
    int32_t var_bc = 5;
    float* var_b8 = &var_b4;
    (*((edx_7 << 2) + &g_a94e84))(&var_c8);
    var_b4 = var_e8_1;
    float var_b0_1 = var_d0;
    float var_90_1 = var_dc_1;
    float var_8c_1 = var_d0;
    int32_t var_bc_1 = 2;
    (*((g_a84a54 << 2) + &g_a94e84))(&var_c8);
    var_b4 = var_e8_1;
    float var_b0_2 = var_e0;
    float var_90_2 = var_dc_1;
    float var_a0 = var_cc;
    float var_8c_2 = var_e0;
    float ecx_10 = var_d8;
    float var_7c = var_cc;
    float var_6c_1 = var_e8_1;
    int32_t var_9c = 0;
    var_98 = 0x3f800000;
    int32_t var_94 = 0;
    int32_t var_a8 = 0;
    int32_t var_a4 = 0;
    int32_t var_ac = 0x3f800000;
    int32_t var_78 = 0;
    int32_t var_74 = 0x3f800000;
    int32_t var_70 = 0;
    int32_t var_84 = 0;
    int32_t var_80 = 0;
    int32_t var_88 = 0x3f800000;
    float var_68_1 = ecx_10;
    int32_t var_54 = 0;
    int32_t var_50 = 0;
    int32_t var_4c = 0;
    float var_58 = var_ec_4;
    int32_t var_60 = 0;
    int32_t var_5c = 0;
    int32_t var_64 = 0x3f800000;
    var_48 = var_dc_1;
    float var_44_1 = ecx_10;
    int32_t var_30 = 0;
    float var_34 = var_ec_4;
    int32_t edx_12 = g_a84a54;
    int32_t var_2c = 0;
    int32_t var_28 = 0;
    int32_t var_3c = 0;
    int32_t var_38 = 0;
    int32_t var_40 = 0x3f800000;
    var_c8 = 0;
    int32_t var_c0_1 = 0;
    int32_t var_bc_2 = 4;
    float* var_b8_1 = &var_b4;
    int32_t ecx_11 = (*((edx_12 << 2) + &g_a94e84))(&var_c8);
    int32_t result = *(a1 + 0x94);

    if (result)
        return result;

    int32_t var_104_1 = ecx_11;
    int32_t var_114_1 = ecx_11;
    int32_t var_118_1 = ecx_11;
    return sub_4b4af0(var_e8_1, var_e0, var_dc_1 - var_e8_1, var_d8 - var_e0, 0f, 0f, 0f,
        var_e4 * 0.660000026f, 0x3f800000, 0x80000, 0);
}
