#include "00486210-FX_ExplosionSpawn_7.h"
/* 0x00486210 FX_ExplosionSpawn_7 full linked: callers=1 callees=6 */
int32_t sub_486210(int32_t a1, int32_t a2, float a3, float a4, int32_t a5)

{
    int32_t eax_4 = a2 * 0x40b;
    float edx = *(a1 + (eax_4 << 2) + 0x44);
    void* ecx_2 = a1 + (eax_4 << 2);
    float var_d8 = *(ecx_2 + 0x48);
    int32_t eax_7;
    int32_t edx_2;
    edx_2 = HIGHD(0x38e38e39 * (9 - *(ecx_2 + 0x24)));
    eax_7 = LOWD(0x38e38e39 * (9 - *(ecx_2 + 0x24)));
    int32_t edx_3 = edx_2 >> 1;
    long double x87_r7 = edx_3 + (edx_3 >> 0x1f);
    long double temp0 = 0f;
    x87_r7 - temp0;

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
            | (x87_r7 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        x87_r7 = 0f;

    void* ecx_3 = *(ecx_2 + 0x3c);
    float var_cc = x87_r7 * 0.600000024f + 0.150000006f;
    long double x87_r7_4;

    if (!ecx_3)
        x87_r7_4 = 37f;
    else
    {
        int32_t eax_11;
        eax_11 = sub_4b6d00(ecx_3);
        x87_r7_4 = eax_11;
    }

    float var_dc = a3 + 117.5f;
    long double x87_r7_5 = x87_r7_4 * 0.5f;
    void* var_10c = ecx_3;
    g_a84a50 = 0;
    g_a84a58 = 0;
    float var_d4_2 = x87_r7_5 + a4;
    float var_e0_1 = edx * 117.5f;
    float var_d0 = var_dc - var_e0_1;
    long double x87_r7_6 = x87_r7_5 * var_d8;
    var_d8 = var_d4_2 - x87_r7_6;
    float var_dc_1 = var_e0_1 + var_dc;
    float var_e0_2 = x87_r7_6 + var_d4_2;
    void* var_110 = ecx_3;
    sub_4b4af0(var_d0, var_d8, var_dc_1 - var_d0, var_e0_2 - var_d8, 0f, 0f, 0f, 0x3ea8f5c3,
        0x3f800000, 0x80000, a5);
    float ecx_5 = var_d8;
    float var_b4 = var_d0;
    float var_b0 = ecx_5;
    float var_90 = var_dc_1;
    float var_8c = ecx_5;
    float var_6c = var_d0;
    int32_t var_9c = 0;
    int32_t var_98 = 0x3f000000;
    int32_t var_94 = 0;
    float var_a0 = var_cc;
    int32_t var_a8 = 0;
    int32_t var_a4 = 0;
    int32_t var_ac = 0x3f800000;
    int32_t var_78 = 0;
    int32_t var_74 = 0x3f000000;
    int32_t var_70 = 0;
    float var_7c = var_cc;
    int32_t var_84 = 0;
    int32_t var_80 = 0;
    int32_t var_88 = 0x3f800000;
    float var_68 = var_e0_2;
    int32_t var_54 = 0;
    int32_t var_50 = 0x3f000000;
    int32_t var_4c = 0;
    float var_58 = var_cc;
    int32_t var_60 = 0;
    int32_t var_5c = 0;
    int32_t var_64 = 0x3f800000;
    float var_48 = var_dc_1;
    float var_44 = var_e0_2;
    float var_34 = var_cc;
    int32_t edx_7 = g_a84a54;
    int32_t var_30 = 0;
    int32_t var_2c = 0x3f800000;
    int32_t var_28 = 0;
    int32_t var_3c = 0;
    int32_t var_38 = 0;
    int32_t var_40 = 0x3f800000;
    int32_t var_c4 = 0x80000;
    int32_t var_c8 = 0;
    int32_t var_c0 = a5;
    int32_t var_bc = 4;
    float* var_b8 = &var_b4;
    (*((edx_7 << 2) + &g_a94e84))(&var_c8);
    int32_t* eax_16 = &var_98;
    int32_t i_1 = 4;
    int32_t i;

    do
    {
        eax_16[-1] = 0;
        __builtin_strncpy(eax_16, "fff?", 8);
        eax_16[-2] = 0x3f000000;
        eax_16[-4] = 0;
        eax_16[-3] = 0;
        eax_16[-5] = 0x3f800000;
        eax_16 = &eax_16[9];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    float ecx_7 = var_d8;
    var_b4 = var_d0;
    float var_b0_1 = ecx_7;
    float var_90_1 = var_dc_1;
    float var_6c_1 = var_dc_1;
    float var_8c_1 = ecx_7;
    float var_44_1 = var_e0_2;
    float var_68_1 = var_e0_2;
    var_48 = var_d0;
    void var_24;
    memcpy(&var_24, &var_b4, 0x24);
    int32_t ecx_10 = g_a84a54;
    var_c8 = 1;
    int32_t var_c0_1 = a5;
    int32_t var_bc_1 = 5;
    float* var_b8_1 = &var_b4;
    return (*((ecx_10 << 2) + &g_a94e84))(&var_c8);
}
