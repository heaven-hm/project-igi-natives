#include "00472050-Weapon_ComputeAccuracy_2.h"
/* 0x00472050 Weapon_ComputeAccuracy_2 full linked: callers=1 callees=11 */
int32_t sub_472050(void* a1)

{
    int32_t eax = g_c28b44;
    int32_t ecx = g_c28b48;
    float var_b0;
    float var_70;
    sub_4b2d00(a1 + 0x7c, &var_70, &var_b0);
    long double x87_r7 = eax;
    float var_a4 = x87_r7 * 0.625f;
    float var_a0 = ecx * 0.791666687f;
    float var_9c = x87_r7 * 0.28125f;
    long double x87_r7_2 = sub_4b7e00(*(a1 + 0x24));
    float var_98 = x87_r7_2 + x87_r7_2 + 26f;
    float var_94 = var_9c * 0.5f;
    float var_90 = var_98 * 0.5f;
    float var_a8 = var_9c * 0.015625f;
    long double x87_r7_11 = var_b0;
    long double temp0 = 0f;
    x87_r7_11 - temp0;

    if (*(&((x87_r7_11 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp0) ? 1 : 0) << 0xa
            | (x87_r7_11 == temp0 ? 1 : 0) << 0xe) + 1) & 1)
        var_b0 = var_b0 + 6.28318548f;

    int32_t i = 0;
    float var_c0 = var_9c * var_b0 * 0.159154937f;
    float var_88 = var_90 + var_a0;

    do
    {
        int32_t* esi_1 = nullptr;
        long double x87_r7_19;

        if (!(i & 0xf))
        {
            x87_r7_19 = 12f;
            esi_1 = *(a1 + (i >> 4 << 2) + 0x24);
        }
        else if (i & 7)
            x87_r7_19 = 4f;
        else
            x87_r7_19 = 8f;

        long double x87_r7_20 = x87_r7_19 * 0.5f;
        float var_bc_2 = x87_r7_20 + var_90 + var_a0;
        float var_8c_1 = var_c0 + var_a4;
        float var_b4_1 = var_88 - x87_r7_20;
        sub_4b5730(var_8c_1, var_b4_1, 0x3f800000, var_8c_1, var_bc_2, 0x3f800000, 0f, 64f, 0f, 0f,
            64f, 0f, 0x3f800000, 0, 0);

        if (esi_1)
        {
            float var_b8_1 = sub_4b7df0(esi_1);
            long double x87_r7_23 = sub_4b7e00(esi_1);
            long double x87_r6_13 = var_8c_1 - var_b8_1 * 0.5f;
            esi_1[1] = x87_r6_13;
            esi_1[2] = var_b4_1 - x87_r7_23 - 2f;
            sub_4b6f50(esi_1);
            esi_1[1] = x87_r6_13;
            esi_1[2] = var_bc_2 + 2f;
            sub_4b6f50(esi_1);
        }

        long double x87_r7_28 = var_c0 + var_a8;
        var_c0 = x87_r7_28;
        long double temp1_1 = var_9c;
        x87_r7_28 - temp1_1;

        if (!(*(&((x87_r7_28 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_28, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_28 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1))
            var_c0 = var_c0 - var_9c;

        i += 1;
    } while (i < 0x40);

    float var_6c;
    int32_t* var_74 = &var_6c;
    int32_t var_58 = 0x3f800000;
    float var_c0_1 = var_94 + var_a4;
    int32_t var_54 = 0;
    int32_t var_50 = 0x42800000;
    int32_t var_4c = 0;
    int32_t var_60 = 0;
    int32_t var_5c = 0;
    int32_t var_64 = 0x3f800000;
    float var_48;
    memcpy(&var_48, &var_6c, 0x24);
    float var_24;
    memcpy(&var_24, &var_6c, 0x24);
    float var_68 = var_a0 + 4f;
    long double x87_r7_36 = var_c0_1 - 4f;
    float var_a8_1 = x87_r7_36;
    var_48 = x87_r7_36;
    long double x87_r7_38 = var_c0_1 + 4f;
    var_6c = var_c0_1;
    var_24 = x87_r7_38;
    float var_44 = var_a0;
    int32_t eax_12 = g_a84a54;
    int32_t var_80 = 0x800000;
    int32_t var_84 = 0;
    int32_t var_7c = 0;
    int32_t var_78 = 3;
    g_a84a50 = 0;
    float var_20 = var_a0;
    (*((eax_12 << 2) + &g_a94e84))(&var_84);
    long double x87_r7_40 = var_98 + var_a0;
    var_6c = var_c0_1;
    var_48 = var_a8_1;
    int32_t edx_4 = g_a84a54;
    var_24 = x87_r7_38;
    float var_68_1 = x87_r7_40 - 4f;
    float var_44_1 = x87_r7_40;
    float var_20_1 = x87_r7_40;
    return (*((edx_4 << 2) + &g_a94e84))(&var_84);
}
