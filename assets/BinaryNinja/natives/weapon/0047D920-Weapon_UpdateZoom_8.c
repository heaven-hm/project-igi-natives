#include "Weapon_UpdateZoom_8.h"
int32_t Weapon_UpdateZoom_8(double* a1, float* a2, void* a3, int32_t* a4, void* a5, int32_t a6, int32_t a7, float a8)

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
    long double fpu7 = *a4;
    long double f0 = 0f;
    fpu7 - f0;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
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
        long double f1_1 = 0f;
        x87_r7_1 - f1_1;

        if (!(*(&((x87_r7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_47d9b2;

        long double x87_r7_2 = a4[2];
        long double f2_1 = 0f;
        x87_r7_2 - f2_1;

        if (!(*(&((x87_r7_2 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
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
    float v_d0;
    Sys_ResolveSymbol_12(&v_d0, a5 + 0x2c);
    float v_cc;
    float v_c0;
    float v_b4;
    float v_f0 = v_c0 * a4[7] + v_b4 * a4[8] + v_cc * a4[6];
    float v_bc;
    float v_b0;
    long double x87_r7_19 = v_bc * a4[7] + v_b0 * a4[8];
    float v_c8;
    long double x87_r6_20 = v_c8 * a4[6];
    float v_c4;
    float v_b8;
    a4[6] = v_c4 * a4[7] + v_b8 * a4[8] + v_d0 * a4[6];
    a4[7] = v_f0;
    long double x87_r7_22 = v_c4 * a4[0xa];
    long double x87_r6_22 = v_b8 * a4[0xb];
    a4[8] = x87_r7_19 + x87_r6_20;
    float v_f0_1 = v_c0 * a4[0xa] + v_b4 * a4[0xb] + v_cc * a4[9];
    long double x87_r7_32 = v_bc * a4[0xa] + v_b0 * a4[0xb] + v_c8 * a4[9];
    a4[9] = x87_r7_22 + x87_r6_22 + v_d0 * a4[9];
    a4[0xa] = v_f0_1;
    long double x87_r7_34 = v_b8 * a4[0xe];
    long double x87_r6_34 = v_d0 * a4[0xc];
    a4[0xb] = x87_r7_32;
    float v_f0_2 = v_b4 * a4[0xe] + v_cc * a4[0xc] + v_c0 * a4[0xd];
    long double x87_r7_43 = v_b0 * a4[0xe] + v_c8 * a4[0xc];
    long double x87_r6_44 = v_bc * a4[0xd];
    a4[0xc] = x87_r7_34 + x87_r6_34 + v_c4 * a4[0xd];
    a4[0xd] = v_f0_2;
    long double x87_r7_46 = v_c4 * a4[0x10];
    long double x87_r6_46 = v_b8 * a4[0x11];
    a4[0xe] = x87_r7_43 + x87_r6_44;
    float v_f0_3 = v_c0 * a4[0x10] + v_b4 * a4[0x11] + v_cc * a4[0xf];
    long double x87_r7_55 = v_bc * a4[0x10] + v_b0 * a4[0x11];
    long double x87_r6_56 = v_c8 * a4[0xf];
    a4[0xf] = x87_r7_46 + x87_r6_46 + v_d0 * a4[0xf];
    a4[0x10] = v_f0_3;
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
    float objC10 = *(a5 + 0x38);
    float tmpD13 = *(a5 + 0x3c);
    float valA9 = *(a5 + 0x40);
    long double x87_r7_81 = valA9;
    long double x87_r6_57 = tmpD13;
    long double x87_r5_3 = objC10;
    long double x87_r7_83 =
        24.5760002f / sqrtl(x87_r5_3 * x87_r5_3 + x87_r6_57 * x87_r6_57 + x87_r7_81 * x87_r7_81);
    float v_f4_5 = objC10 * x87_r7_83;
    float v_f0_5 = tmpD13 * x87_r7_83;
    long double x87_r7_84 = x87_r7_83 * valA9;
    long double x87_r6_63 = a4[6];
    long double x87_r5_5 = a4[7];
    double v_70 = x87_r5_5;
    long double x87_r4_11 = a4[8];
    double v_68 = x87_r4_11;
    double v_e8 = a2[1] * x87_r5_5 + a2[2] * x87_r4_11 + *a2 * x87_r6_63;
    double v_e0 = a2[3] * x87_r6_63 + a2[4] * x87_r5_5 + a2[5] * x87_r4_11;
    double v_d8 = a2[7] * x87_r5_5 + a2[8] * x87_r4_11 + a2[6] * x87_r6_63;
    double v_78;
    memcpy(&v_78, &v_e8, 0x18);
    long double x87_r6_66 = v_e8 + *a1;
    v_78 = x87_r6_66;
    double v_70_1 = v_70 + a1[1];
    double v_68_1 = v_68 + a1[2];
    long double x87_r5_11 = a4[9];
    long double x87_r4_13 = a4[0xa];
    double v_88 = x87_r4_13;
    long double x87_r3_21 = a4[0xb];
    double v_80 = x87_r3_21;
    v_e8 = a2[1] * x87_r4_13 + a2[2] * x87_r3_21 + *a2 * x87_r5_11;
    double v_e0_1 = a2[4] * x87_r4_13 + a2[5] * x87_r3_21 + a2[3] * x87_r5_11;
    double v_d8_1 = a2[7] * x87_r4_13 + a2[8] * x87_r3_21 + a2[6] * x87_r5_11;
    long double x87_r5_14 = v_e8 + *a1;
    double v_90;
    memcpy(&v_90, &v_e8, 0x18);
    v_90 = x87_r5_14;
    double v_88_1 = v_88 + a1[1];
    double v_80_1 = v_80 + a1[2];
    long double x87_r5_19 = a4[0xc];
    long double x87_r4_15 = a4[0xd];
    double v_a0 = x87_r4_15;
    long double x87_r3_23 = a4[0xe];
    double v_98 = x87_r3_23;
    v_e8 = a2[1] * x87_r4_15 + a2[2] * x87_r3_23 + *a2 * x87_r5_19;
    double v_e0_2 = a2[4] * x87_r4_15 + a2[5] * x87_r3_23 + a2[3] * x87_r5_19;
    double v_d8_2 = a2[7] * x87_r4_15 + a2[8] * x87_r3_23 + a2[6] * x87_r5_19;
    double v_a8;
    memcpy(&v_a8, &v_e8, 0x18);
    v_a8 = v_e8 + *a1;
    double v_a0_1 = v_a0 + a1[1];
    double v_98_1 = v_98 + a1[2];
    long double x87_r5_27 = a4[0xf];
    long double x87_r4_17 = a4[0x10];
    double v_e0_3 = x87_r4_17;
    long double x87_r3_25 = a4[0x11];
    double v_d8_3 = x87_r3_25;
    double v_60 = a2[1] * x87_r4_17 + a2[2] * x87_r3_25 + *a2 * x87_r5_27;
    double v_58 = a2[4] * x87_r4_17 + a2[5] * x87_r3_25 + a2[3] * x87_r5_27;
    float valA11 = g_a44344;
    double v_50 = a2[8] * x87_r3_25 + a2[6] * x87_r5_27 + a2[7] * x87_r4_17;
    memcpy(&v_e8, &v_60, 0x18);
    v_e8 = v_60 + *a1;
    double v_e0_4 = v_e0_3 + a1[1];
    double v_d8_4 = v_d8_3 + a1[2];
    v_60 = x87_r6_66 - v_f4_5;
    double v_58_1 = v_70_1 - v_f0_5;
    double v_50_1 = v_68_1 - x87_r7_84;
    double v_18 = v_90 - v_f4_5;
    double v_10 = v_88_1 - v_f0_5;
    double v_8 = v_80_1 - x87_r7_84;
    double v_48 = v_a8 - v_f4_5;
    double v_40 = v_a0_1 - v_f0_5;
    double v_38 = v_98_1 - x87_r7_84;
    double v_30 = v_e8 - v_f4_5;
    double v_28 = v_e0_4 - v_f0_5;
    double v_20 = v_d8_4 - x87_r7_84;
    int32_t valA12 =
        DynObj_RegisterSymbol_12(valA11, &v_78, &v_60, 0xff, 0f, 0xffffffff, 0xffffffff, nullptr);
    char f3 = valA12;
    valA12 = -(valA12);
    int32_t valA16 =
        DynObj_RegisterSymbol_12(g_a44344, &v_90, &v_18, 0xff, 0f, 0xffffffff, 0xffffffff, nullptr);
    char f4 = valA16;
    valA16 = -(valA16);
    int32_t valA20 =
        DynObj_RegisterSymbol_12(g_a44344, &v_a8, &v_48, 0xff, 0f, 0xffffffff, 0xffffffff, nullptr);
    char f5 = valA20;
    valA20 = -(valA20);
    int32_t valA24 =
        DynObj_RegisterSymbol_12(g_a44344, &v_e8, &v_30, 0xff, 0f, 0xffffffff, 0xffffffff, nullptr);
    char f6 = valA24;
    valA24 = -(valA24);

    if (!((valA12 - valA12 + 1) & (valA16 - valA16 + 1) & (valA20 - valA20 + 1)
            & (valA24 - valA24 + 1)))
        a4[0x12] = 0xffffffff;

    return valA24 - valA24 + 1;
}
