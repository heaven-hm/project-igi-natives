#include "0052A230-AnimRigidDynCubeObj_Update.h"
/* 0x0052a230 AnimRigidDynCubeObj_Update full linked: callers=0 callees=14 */
int32_t sub_52a230(void* a1, int32_t* a2)

{
    if (!*a2)
    {
        long double x87_r7_1 = *(a1 + 0x9c);
        long double x87_r6_1 = *(a1 + 0xa0);
        x87_r6_1 - x87_r7_1;
        memcpy(a1 + 0x70, a1 + 0x108, 0x28);
        memcpy(a1 + 0x130, a1 + 0x108, 0x28);
        long double x87_r7_2;

        if (!(*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_2 = *(a1 + 0xa0);
        else
            x87_r7_2 = *(a1 + 0x9c);

        long double x87_r6_2 = *(a1 + 0x98);
        x87_r6_2 - x87_r7_2;
        long double x87_r7_4;

        if (*(&((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_5 = *(a1 + 0x9c);
            long double x87_r6_3 = *(a1 + 0xa0);
            x87_r6_3 - x87_r7_5;

            if (!(*(&((x87_r6_3 < x87_r7_5 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_4 = *(a1 + 0xa0);
            else
                x87_r7_4 = *(a1 + 0x9c);
        }
        else
            x87_r7_4 = *(a1 + 0x98);

        long double x87_r7_7 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_4;
        sub_4c6940(*(a1 + 0x68), a1, a1 + 0xf0, x87_r7_7);
    }

    void* eax_4 = a2[1];
    long double x87_r7_9 = *(eax_4 + 0xc) * 0.0009765625f;
    float var_54 = *(eax_4 + 0x10) * 0.0009765625f;
    float var_50 = *(eax_4 + 0x14) * 0.0009765625f;
    *(eax_4 + 0xc) = *(eax_4 + 0x18) + *(eax_4 + 0xc);
    void* eax_5 = a2[1];
    *(eax_5 + 0x10) = *(eax_5 + 0x1c) + *(eax_5 + 0x10);
    void* eax_6 = a2[1];
    *(eax_6 + 0x14) = *(eax_6 + 0x20) + *(eax_6 + 0x14);
    float* eax_8 = a2[1];
    float edx_3 = *(a1 + 0x84);
    float ecx_4 = *(a1 + 0x90);
    float var_54_2 = *(a1 + 0x80) * eax_8[0xa] * 0.0009765625f
        + *(a1 + 0x7c) * eax_8[9] * 0.0009765625f + var_54;
    float var_50_2 = *(a1 + 0x8c) * eax_8[0xa] * 0.0009765625f
        + *(a1 + 0x88) * eax_8[9] * 0.0009765625f + var_50;
    long double x87_r6_39 = *(a1 + 0x78) * eax_8[0xb] * 0.0009765625f + x87_r7_9
        + *(a1 + 0x70) * eax_8[9] * 0.0009765625f + *(a1 + 0x74) * eax_8[0xa] * 0.0009765625f;
    float var_58 = x87_r6_39;
    float var_54_3 = edx_3 * eax_8[0xb] * 0.0009765625f + var_54_2;
    float var_a0_3 = ecx_4;
    float var_50_3 = ecx_4 * eax_8[0xb] * 0.0009765625f + var_50_2;
    *eax_8 = var_58 + *eax_8;
    void* eax_9 = a2[1];
    *(eax_9 + 4) = var_54_3 + *(eax_9 + 4);
    void* eax_10 = a2[1];
    *(eax_10 + 8) = var_50_3 + *(eax_10 + 8);
    void* eax_11 = a2[1];
    *(eax_11 + 0x24) = *(eax_11 + 0x30) + *(eax_11 + 0x24);
    void* eax_12 = a2[1];
    *(eax_12 + 0x28) = *(eax_12 + 0x34) + *(eax_12 + 0x28);
    void* eax_13 = a2[1];
    *(eax_13 + 0x2c) = *(eax_13 + 0x38) + *(eax_13 + 0x2c);
    void* eax_14 = a2[1];
    *(eax_14 + 0x3c) = *(eax_14 + 0x48) + *(eax_14 + 0x3c);
    void* eax_15 = a2[1];
    *(eax_15 + 0x40) = *(eax_15 + 0x4c) + *(eax_15 + 0x40);
    void* eax_16 = a2[1];
    *(eax_16 + 0x44) = *(eax_16 + 0x50) + *(eax_16 + 0x44);
    void* eax_17 = a2[1];
    float var_a4_2 = ecx_4;
    float var_a8_2 = ecx_4;
    float var_80;
    int32_t ecx_5 = sub_4b38e0(&var_80,
        *(eax_17 + 0x3c) * 0.0009765625f * 3.1415926535897944 * 0.000244140625,
        *(eax_17 + 0x40) * 0.0009765625f * 3.1415926535897944 * 0.000244140625,
        *(eax_17 + 0x44) * 0.0009765625f * 3.1415926535897944 * 0.000244140625);
    float eax_19 = *(a2[1] + 0x54);

    if (eax_19 <= 0)
        eax_19 = nanf;

    void* eax_20 = sub_4f1030(eax_19);
    double var_18;
    long double x87_r7_137;
    float var_7c;
    float var_78;
    float var_74;
    float var_70;
    float var_6c;
    float var_68;
    float var_64;
    float var_60;
    int32_t var_5c;
    float var_40;
    float var_30;

    if (!eax_20)
    {
        var_40 = var_68 * *(a1 + 0x78) + var_80 * *(a1 + 0x70) + var_74 * *(a1 + 0x74);
        float var_3c_2 =
            var_64 * *(a1 + 0x78) + var_7c * *(a1 + 0x70) + var_70 * *(a1 + 0x74);
        float var_38_2 =
            var_60 * *(a1 + 0x78) + var_78 * *(a1 + 0x70) + var_6c * *(a1 + 0x74);
        float var_34_2 =
            var_74 * *(a1 + 0x80) + var_68 * *(a1 + 0x84) + var_80 * *(a1 + 0x7c);
        var_30 = var_70 * *(a1 + 0x80) + var_64 * *(a1 + 0x84) + var_7c * *(a1 + 0x7c);
        float var_2c_2 =
            var_6c * *(a1 + 0x80) + var_60 * *(a1 + 0x84) + var_78 * *(a1 + 0x7c);
        float var_28_2 =
            var_68 * *(a1 + 0x90) + var_80 * *(a1 + 0x88) + var_74 * *(a1 + 0x8c);
        float var_24_2 =
            var_64 * *(a1 + 0x90) + var_7c * *(a1 + 0x88) + var_70 * *(a1 + 0x8c);
        int32_t var_1c_2 = *(a1 + 0x94) + var_5c + 1;
        float var_20_2 =
            var_60 * *(a1 + 0x90) + var_78 * *(a1 + 0x88) + var_6c * *(a1 + 0x8c);
        long double x87_r7_175 = var_58 + *(a1 + 0x20);
        memcpy(a1 + 0x70, &var_40, 0x28);
        var_18 = x87_r7_175;
        double var_10_2 = var_54_3 + *(a1 + 0x28);
        x87_r7_137 = var_50_3 + *(a1 + 0x30);
    }
    else
    {
        int16_t eax_21 = sub_4c48c0();
        ecx_5 = *(eax_20 + 0x1c);
        float var_8c_1;
        float* eax_23;

        if (!TaskType_IsDerivedFrom(ecx_5, eax_21))
        {
            var_8c_1 = eax_20 + 0x20;
            eax_23 = eax_20 + 0x78;
        }
        else
        {
            eax_23 = eax_20 + 0x70;
            var_8c_1 = eax_20 + 0x20;
        }

        var_40 = var_68 * *(a1 + 0x138) + var_80 * *(a1 + 0x130) + var_74 * *(a1 + 0x134);
        float var_3c =
            var_64 * *(a1 + 0x138) + var_7c * *(a1 + 0x130) + var_70 * *(a1 + 0x134);
        float var_38 =
            var_60 * *(a1 + 0x138) + var_78 * *(a1 + 0x130) + var_6c * *(a1 + 0x134);
        float var_34 =
            var_68 * *(a1 + 0x144) + var_80 * *(a1 + 0x13c) + var_74 * *(a1 + 0x140);
        var_30 = var_64 * *(a1 + 0x144) + var_7c * *(a1 + 0x13c) + var_70 * *(a1 + 0x140);
        float var_2c =
            var_60 * *(a1 + 0x144) + var_78 * *(a1 + 0x13c) + var_6c * *(a1 + 0x140);
        float var_28 =
            var_80 * *(a1 + 0x148) + var_74 * *(a1 + 0x14c) + var_68 * *(a1 + 0x150);
        float var_24 =
            var_70 * *(a1 + 0x14c) + var_64 * *(a1 + 0x150) + var_7c * *(a1 + 0x148);
        int32_t var_1c = *(a1 + 0x154) + var_5c + 1;
        float var_20 =
            var_6c * *(a1 + 0x14c) + var_60 * *(a1 + 0x150) + var_78 * *(a1 + 0x148);
        memcpy(a1 + 0x130, &var_40, 0x28);
        var_40 =
            *(a1 + 0x148) * eax_23[2] + *(a1 + 0x130) * *eax_23 + *(a1 + 0x13c) * eax_23[1];
        float var_3c_1 =
            *(a1 + 0x14c) * eax_23[2] + *eax_23 * *(a1 + 0x134) + eax_23[1] * *(a1 + 0x140);
        float var_38_1 =
            *(a1 + 0x150) * eax_23[2] + *(a1 + 0x138) * *eax_23 + *(a1 + 0x144) * eax_23[1];
        float var_34_1 =
            *(a1 + 0x148) * eax_23[5] + eax_23[3] * *(a1 + 0x130) + eax_23[4] * *(a1 + 0x13c);
        var_30 =
            eax_23[3] * *(a1 + 0x134) + eax_23[5] * *(a1 + 0x14c) + eax_23[4] * *(a1 + 0x140);
        float var_2c_1 =
            *(a1 + 0x150) * eax_23[5] + eax_23[3] * *(a1 + 0x138) + eax_23[4] * *(a1 + 0x144);
        int32_t var_1c_1 = eax_23[9] + *(a1 + 0x154) + 1;
        float var_28_1 =
            eax_23[7] * *(a1 + 0x13c) + *(a1 + 0x148) * eax_23[8] + eax_23[6] * *(a1 + 0x130);
        float var_24_1 =
            eax_23[6] * *(a1 + 0x134) + eax_23[7] * *(a1 + 0x140) + *(a1 + 0x14c) * eax_23[8];
        float var_20_1 =
            eax_23[7] * *(a1 + 0x144) + *(a1 + 0x150) * eax_23[8] + eax_23[6] * *(a1 + 0x138);
        long double x87_r7_124 = var_58;
        memcpy(a1 + 0x70, &var_40, 0x28);
        float* ecx_9 = a2[1];
        *ecx_9 = x87_r7_124 + *ecx_9;
        void* ecx_10 = a2[1];
        *(ecx_10 + 4) = var_54_3 + *(ecx_10 + 4);
        void* ecx_11 = a2[1];
        *(ecx_11 + 8) = var_50_3 + *(ecx_11 + 8);
        float* ebp_1 = a2[1];
        long double x87_r7_130 = *ebp_1;
        var_18 = x87_r7_130;
        long double x87_r6_112 = ebp_1[1];
        double var_10 = x87_r6_112;
        long double x87_r5_1 = ebp_1[2];
        double var_8_1 = x87_r5_1;
        var_58 = eax_23[2] * x87_r5_1 + eax_23[1] * x87_r6_112 + *eax_23 * x87_r7_130;
        var_50_3 = eax_23[3] * x87_r7_130 + eax_23[5] * x87_r5_1 + eax_23[4] * x87_r6_112;
        double var_48_1 = eax_23[6] * x87_r7_130 + eax_23[8] * x87_r5_1 + eax_23[7] * x87_r6_112;
        long double x87_r7_132 = var_58;
        memcpy(&var_18, &var_58, 0x18);
        var_18 = x87_r7_132 + *var_8c_1;
        double var_10_1 = var_10 + *(var_8c_1 + 8);
        x87_r7_137 = var_8_1 + *(var_8c_1 + 0x10);
    }
    double var_8_2 = x87_r7_137;
    long double x87_r7_179 = *(a1 + 0x9c);
    long double x87_r6_150 = *(a1 + 0xa0);
    x87_r6_150 - x87_r7_179;
    long double x87_r7_180;

    if (!(*(&((x87_r6_150 < x87_r7_179 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_150, x87_r7_179) ? 1 : 0) << 0xa
            | (x87_r6_150 == x87_r7_179 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_180 = *(a1 + 0xa0);
    else
        x87_r7_180 = *(a1 + 0x9c);

    long double x87_r6_151 = *(a1 + 0x98);
    x87_r6_151 - x87_r7_180;
    long double x87_r7_182;

    if (*(&((x87_r6_151 < x87_r7_180 ? 1 : 0) << 8
        | (FCMP_UO(x87_r6_151, x87_r7_180) ? 1 : 0) << 0xa
        | (x87_r6_151 == x87_r7_180 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_183 = *(a1 + 0x9c);
        long double x87_r6_152 = *(a1 + 0xa0);
        x87_r6_152 - x87_r7_183;

        if (!(*(&((x87_r6_152 < x87_r7_183 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_152, x87_r7_183) ? 1 : 0) << 0xa
                | (x87_r6_152 == x87_r7_183 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_182 = *(a1 + 0xa0);
        else
            x87_r7_182 = *(a1 + 0x9c);
    }
    else
        x87_r7_182 = *(a1 + 0x98);

    long double x87_r7_185 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_182;
    return sub_4c6940(*(a1 + 0x68), a1, &var_18, x87_r7_185);
}
