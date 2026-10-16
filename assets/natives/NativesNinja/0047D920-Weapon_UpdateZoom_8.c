#include "0047D920-Weapon_UpdateZoom_8.h"
/* 0x0047d920 Weapon_UpdateZoom_8 full linked: callers=4 callees=9 */
int32_t sub_47d920(double* a1, float* a2, void* a3, int32_t* a4, void* a5, int32_t a6, int32_t a7, float a8)

{
    a4[0x12] = a6;
    a4[0x13] = a7;
    a4[0x15] = 0;
    a4[0x14] = a8;
    a4[3] = *(a5 + 0x20);
    a4[4] = *(a5 + 0x24);
    a4[5] = *(a5 + 0x28);
    *a4 = *(a5 + 0x2c);
    a4[1] = *(a5 + 0x30);
    a4[2] = *(a5 + 0x34);
    long double x87_r7 = *a4;
    long double temp0 = 0f;
    x87_r7 - temp0;

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_47d9b2:
        long double x87_r7_3 = a4[2];
        long double x87_r6_1 = a4[1];
        long double x87_r5_1 = *a4;
        long double x87_r7_5 =
            1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_3 * x87_r7_3);
        *a4 = *a4 * x87_r7_5;
        a4[1] = a4[1] * x87_r7_5;
        a4[2] = a4[2] * x87_r7_5;
    }
    else
    {
        long double x87_r7_1 = a4[1];
        long double temp1_1 = 0f;
        x87_r7_1 - temp1_1;

        if (!(*(&((x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_47d9b2;

        long double x87_r7_2 = a4[2];
        long double temp2_1 = 0f;
        x87_r7_2 - temp2_1;

        if (!(*(&((x87_r7_2 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_47d9b2;
    }

    a4[6] = a8;
    a4[8] = 0x41449ba6;
    a4[0xb] = 0x41449ba6;
    a4[0xe] = 0x41449ba6;
    a4[0x11] = 0x41449ba6;
    long double x87_r7_8 = -(a8);
    a4[9] = x87_r7_8;
    a4[0xd] = x87_r7_8;
    a4[0xf] = x87_r7_8;
    a4[0x10] = x87_r7_8;
    a4[7] = a8;
    a4[0xa] = a8;
    a4[0xc] = a8;
    float var_d0;
    sub_4b4010(&var_d0, a5 + 0x2c);
    float var_cc;
    float var_c0;
    float var_b4;
    float var_f0 = var_c0 * a4[7] + var_b4 * a4[8] + var_cc * a4[6];
    float var_bc;
    float var_b0;
    long double x87_r7_19 = var_bc * a4[7] + var_b0 * a4[8];
    float var_c8;
    long double x87_r6_20 = var_c8 * a4[6];
    float var_c4;
    float var_b8;
    a4[6] = var_c4 * a4[7] + var_b8 * a4[8] + var_d0 * a4[6];
    a4[7] = var_f0;
    long double x87_r7_22 = var_c4 * a4[0xa];
    long double x87_r6_22 = var_b8 * a4[0xb];
    a4[8] = x87_r7_19 + x87_r6_20;
    float var_f0_1 = var_c0 * a4[0xa] + var_b4 * a4[0xb] + var_cc * a4[9];
    long double x87_r7_32 = var_bc * a4[0xa] + var_b0 * a4[0xb] + var_c8 * a4[9];
    a4[9] = x87_r7_22 + x87_r6_22 + var_d0 * a4[9];
    a4[0xa] = var_f0_1;
    long double x87_r7_34 = var_b8 * a4[0xe];
    long double x87_r6_34 = var_d0 * a4[0xc];
    a4[0xb] = x87_r7_32;
    float var_f0_2 = var_b4 * a4[0xe] + var_cc * a4[0xc] + var_c0 * a4[0xd];
    long double x87_r7_43 = var_b0 * a4[0xe] + var_c8 * a4[0xc];
    long double x87_r6_44 = var_bc * a4[0xd];
    a4[0xc] = x87_r7_34 + x87_r6_34 + var_c4 * a4[0xd];
    a4[0xd] = var_f0_2;
    long double x87_r7_46 = var_c4 * a4[0x10];
    long double x87_r6_46 = var_b8 * a4[0x11];
    a4[0xe] = x87_r7_43 + x87_r6_44;
    float var_f0_3 = var_c0 * a4[0x10] + var_b4 * a4[0x11] + var_cc * a4[0xf];
    long double x87_r7_55 = var_bc * a4[0x10] + var_b0 * a4[0x11];
    long double x87_r6_56 = var_c8 * a4[0xf];
    a4[0xf] = x87_r7_46 + x87_r6_46 + var_d0 * a4[0xf];
    a4[0x10] = var_f0_3;
    long double x87_r7_57 = a4[6];
    a4[0x11] = x87_r7_55 + x87_r6_56;
    a4[6] = x87_r7_57 + *(a5 + 0x20);
    a4[7] = a4[7] + *(a5 + 0x24);
    a4[8] = a4[8] + *(a5 + 0x28);
    a4[9] = a4[9] + *(a5 + 0x20);
    a4[0xa] = a4[0xa] + *(a5 + 0x24);
    a4[0xb] = *(a5 + 0x28) + a4[0xb];
    a4[0xc] = a4[0xc] + *(a5 + 0x20);
    a4[0xd] = *(a5 + 0x24) + a4[0xd];
    a4[0xe] = a4[0xe] + *(a5 + 0x28);
    a4[0xf] = a4[0xf] + *(a5 + 0x20);
    a4[0x10] = a4[0x10] + *(a5 + 0x24);
    a4[0x11] = *(a5 + 0x28) + a4[0x11];
    *(a3 + 0xe138) = 1;
    float ecx_10 = *(a5 + 0x38);
    float edx_13 = *(a5 + 0x3c);
    float eax_9 = *(a5 + 0x40);
    long double x87_r7_81 = eax_9;
    long double x87_r6_57 = edx_13;
    long double x87_r5_3 = ecx_10;
    long double x87_r7_83 =
        24.5760002f / sqrtl(x87_r5_3 * x87_r5_3 + x87_r6_57 * x87_r6_57 + x87_r7_81 * x87_r7_81);
    float var_f4_5 = ecx_10 * x87_r7_83;
    float var_f0_5 = edx_13 * x87_r7_83;
    long double x87_r7_84 = x87_r7_83 * eax_9;
    long double x87_r6_63 = a4[6];
    long double x87_r5_5 = a4[7];
    double var_70 = x87_r5_5;
    long double x87_r4_11 = a4[8];
    double var_68 = x87_r4_11;
    double var_e8 = a2[1] * x87_r5_5 + a2[2] * x87_r4_11 + *a2 * x87_r6_63;
    double var_e0 = a2[3] * x87_r6_63 + a2[4] * x87_r5_5 + a2[5] * x87_r4_11;
    double var_d8 = a2[7] * x87_r5_5 + a2[8] * x87_r4_11 + a2[6] * x87_r6_63;
    double var_78;
    memcpy(&var_78, &var_e8, 0x18);
    long double x87_r6_66 = var_e8 + *a1;
    var_78 = x87_r6_66;
    double var_70_1 = var_70 + a1[1];
    double var_68_1 = var_68 + a1[2];
    long double x87_r5_11 = a4[9];
    long double x87_r4_13 = a4[0xa];
    double var_88 = x87_r4_13;
    long double x87_r3_21 = a4[0xb];
    double var_80 = x87_r3_21;
    var_e8 = a2[1] * x87_r4_13 + a2[2] * x87_r3_21 + *a2 * x87_r5_11;
    double var_e0_1 = a2[4] * x87_r4_13 + a2[5] * x87_r3_21 + a2[3] * x87_r5_11;
    double var_d8_1 = a2[7] * x87_r4_13 + a2[8] * x87_r3_21 + a2[6] * x87_r5_11;
    long double x87_r5_14 = var_e8 + *a1;
    double var_90;
    memcpy(&var_90, &var_e8, 0x18);
    var_90 = x87_r5_14;
    double var_88_1 = var_88 + a1[1];
    double var_80_1 = var_80 + a1[2];
    long double x87_r5_19 = a4[0xc];
    long double x87_r4_15 = a4[0xd];
    double var_a0 = x87_r4_15;
    long double x87_r3_23 = a4[0xe];
    double var_98 = x87_r3_23;
    var_e8 = a2[1] * x87_r4_15 + a2[2] * x87_r3_23 + *a2 * x87_r5_19;
    double var_e0_2 = a2[4] * x87_r4_15 + a2[5] * x87_r3_23 + a2[3] * x87_r5_19;
    double var_d8_2 = a2[7] * x87_r4_15 + a2[8] * x87_r3_23 + a2[6] * x87_r5_19;
    double var_a8;
    memcpy(&var_a8, &var_e8, 0x18);
    var_a8 = var_e8 + *a1;
    double var_a0_1 = var_a0 + a1[1];
    double var_98_1 = var_98 + a1[2];
    long double x87_r5_27 = a4[0xf];
    long double x87_r4_17 = a4[0x10];
    double var_e0_3 = x87_r4_17;
    long double x87_r3_25 = a4[0x11];
    double var_d8_3 = x87_r3_25;
    double var_60 = a2[1] * x87_r4_17 + a2[2] * x87_r3_25 + *a2 * x87_r5_27;
    double var_58 = a2[4] * x87_r4_17 + a2[5] * x87_r3_25 + a2[3] * x87_r5_27;
    float eax_11 = g_a44344;
    double var_50 = a2[8] * x87_r3_25 + a2[6] * x87_r5_27 + a2[7] * x87_r4_17;
    memcpy(&var_e8, &var_60, 0x18);
    var_e8 = var_60 + *a1;
    double var_e0_4 = var_e0_3 + a1[1];
    double var_d8_4 = var_d8_3 + a1[2];
    var_60 = x87_r6_66 - var_f4_5;
    double var_58_1 = var_70_1 - var_f0_5;
    double var_50_1 = var_68_1 - x87_r7_84;
    double var_18 = var_90 - var_f4_5;
    double var_10 = var_88_1 - var_f0_5;
    double var_8 = var_80_1 - x87_r7_84;
    double var_48 = var_a8 - var_f4_5;
    double var_40 = var_a0_1 - var_f0_5;
    double var_38 = var_98_1 - x87_r7_84;
    double var_30 = var_e8 - var_f4_5;
    double var_28 = var_e0_4 - var_f0_5;
    double var_20 = var_d8_4 - x87_r7_84;
    int32_t eax_12 =
        sub_4ce410(eax_11, &var_78, &var_60, 0xff, 0f, 0xffffffff, 0xffffffff, nullptr);
    char temp3 = eax_12;
    eax_12 = -(eax_12);
    int32_t eax_16 =
        sub_4ce410(g_a44344, &var_90, &var_18, 0xff, 0f, 0xffffffff, 0xffffffff, nullptr);
    char temp4 = eax_16;
    eax_16 = -(eax_16);
    int32_t eax_20 =
        sub_4ce410(g_a44344, &var_a8, &var_48, 0xff, 0f, 0xffffffff, 0xffffffff, nullptr);
    char temp5 = eax_20;
    eax_20 = -(eax_20);
    int32_t eax_24 =
        sub_4ce410(g_a44344, &var_e8, &var_30, 0xff, 0f, 0xffffffff, 0xffffffff, nullptr);
    char temp6 = eax_24;
    eax_24 = -(eax_24);

    if (!((eax_12 - eax_12 + 1) & (eax_16 - eax_16 + 1) & (eax_20 - eax_20 + 1)
            & (eax_24 - eax_24 + 1)))
        a4[0x12] = 0xffffffff;

    return eax_24 - eax_24 + 1;
}
