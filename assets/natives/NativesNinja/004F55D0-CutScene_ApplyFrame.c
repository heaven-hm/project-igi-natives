#include "004F55D0-CutScene_ApplyFrame.h"
/* 0x004f55d0 CutScene_ApplyFrame full linked: callers=1 callees=38 */
int32_t* sub_4f55d0(void* a1, int32_t* a2, int32_t a3, int32_t a4, double a5, char a6)

{
    int32_t __saved_ebp_1;
    int32_t __saved_ebp = __saved_ebp_1;
    int32_t __saved_ebx_2;
    int32_t __saved_ebx_1 = __saved_ebx_2;
    int32_t __saved_esi_1;
    int32_t __saved_esi = __saved_esi_1;
    int32_t __saved_edi_1;
    int32_t __saved_edi = __saved_edi_1;
    float var_b8 = 1f;
    float var_38 = 1f;
    void* ecx = **a2;
    float var_c4 = *(ecx + 0x98);
    void* edx = *a2[1];
    float var_d0 = *(edx + 0x98);
    void* eax_5 = *a2[2];
    float var_cc = *(eax_5 + 0x98);
    void* eax_8 = *a2[3];
    long double x87_r7 = *(eax_8 + 0x98);
    float var_c0 = x87_r7;
    long double x87_r6 = var_c4;
    long double temp0 = 0f;
    x87_r6 - temp0;

    if (*(&((x87_r6 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, temp0) ? 1 : 0) << 0xa
            | (x87_r6 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        var_c4 = *(a1 + 0x210);

    long double x87_r6_1 = var_d0;
    long double temp1 = 0f;
    x87_r6_1 - temp1;

    if (*(&((x87_r6_1 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp1) ? 1 : 0) << 0xa
            | (x87_r6_1 == temp1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        var_d0 = *(a1 + 0x210);

    long double x87_r6_2 = var_cc;
    long double temp2 = 0f;
    x87_r6_2 - temp2;

    if (*(&((x87_r6_2 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, temp2) ? 1 : 0) << 0xa
            | (x87_r6_2 == temp2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        var_cc = *(a1 + 0x210);

    long double temp3 = 0f;
    x87_r7 - temp3;

    if (*(&((x87_r7 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp3) ? 1 : 0) << 0xa
            | (x87_r7 == temp3 ? 1 : 0) << 0xe) + 1) & 1)
        var_c0 = *(a1 + 0x210);

    int32_t var_e4 = a4;
    int32_t var_10c = *(eax_8 + 0x24);
    int32_t var_114 = *(eax_5 + 0x24);
    int32_t var_11c = *(edx + 0x24);
    int32_t var_124 = *(ecx + 0x24);
    long double st0 = sub_4f6290(*(ecx + 0x20), *(edx + 0x20), *(eax_5 + 0x20), *(eax_8 + 0x20),
        *(*a2 + 4), *(a2[1] + 4), *(a2[2] + 4), *(a2[3] + 4), a3);
    int32_t* eax_28 = a2[3];
    double var_54 = st0;
    int32_t* ecx_2 = a2[2];
    int32_t var_e4_1 = a4;
    void* edx_4 = *eax_28;
    int32_t var_10c_1 = *(edx_4 + 0x2c);
    void* eax_30 = *ecx_2;
    int32_t var_114_1 = *(eax_30 + 0x2c);
    void* eax_32 = *a2[1];
    int32_t var_11c_1 = *(eax_32 + 0x2c);
    void* eax_34 = **a2;
    int32_t var_124_1 = *(eax_34 + 0x2c);
    long double st0_1 = sub_4f6290(*(eax_34 + 0x28), *(eax_32 + 0x28), *(eax_30 + 0x28),
        *(edx_4 + 0x28), *(*a2 + 4), *(a2[1] + 4), ecx_2[1], eax_28[1], a3);
    int32_t* eax_35 = a2[3];
    double var_4c = st0_1;
    int32_t* ecx_6 = a2[2];
    int32_t var_e4_2 = a4;
    void* eax_36 = *eax_35;
    void* ecx_7 = *ecx_6;
    int32_t var_10c_2 = *(eax_36 + 0x34);
    int32_t var_110_2 = *(eax_36 + 0x30);
    int32_t var_114_2 = *(ecx_7 + 0x34);
    int32_t var_118_2 = *(ecx_7 + 0x30);
    void* ecx_8 = *a2[1];
    int32_t var_11c_2 = *(ecx_8 + 0x34);
    int32_t var_120_2 = *(ecx_8 + 0x30);
    void* ecx_9 = **a2;
    int32_t var_124_2 = *(ecx_9 + 0x34);
    int32_t var_128_2 = *(ecx_9 + 0x30);
    long double st0_2 = sub_4f6290(var_128_2, var_120_2, var_118_2, var_110_2, *(*a2 + 4),
        *(a2[1] + 4), ecx_6[1], eax_35[1], a3);
    int32_t* eax_43 = a2[3];
    double var_44 = st0_2;
    int32_t* ecx_10 = a2[2];
    int32_t var_e4_3 = a4;
    int32_t* edx_16 = *a2;
    var_110_2 = *(*eax_43 + 0x3c);
    var_118_2 = *(*ecx_10 + 0x3c);
    var_120_2 = *(*a2[1] + 0x3c);
    var_128_2 = *(*edx_16 + 0x3c);
    long double st0_3 = sub_4f6290(var_128_2, var_120_2, var_118_2, var_110_2, edx_16[1],
        *(a2[1] + 4), ecx_10[1], eax_43[1], a3);
    int32_t* eax_47 = a2[3];
    float var_3c = st0_3;
    int32_t* ecx_13 = a2[2];
    int32_t var_e4_4 = a4;
    int32_t* edx_18 = *a2;
    var_110_2 = *(*eax_47 + 0x40);
    var_118_2 = *(*ecx_13 + 0x40);
    var_120_2 = *(*a2[1] + 0x40);
    var_128_2 = *(*edx_18 + 0x40);
    long double st0_4 = sub_4f6290(var_128_2, var_120_2, var_118_2, var_110_2, edx_18[1],
        *(a2[1] + 4), ecx_13[1], eax_47[1], a3);
    int32_t* eax_51 = a2[3];
    int32_t* ecx_16 = a2[2];
    int32_t var_e4_5 = a4;
    int32_t* edx_20 = *a2;
    var_110_2 = *(*eax_51 + 0x44);
    var_118_2 = *(*ecx_16 + 0x44);
    var_120_2 = *(*a2[1] + 0x44);
    var_128_2 = *(*edx_20 + 0x44);
    long double st0_5 = sub_4f6290(var_128_2, var_120_2, var_118_2, var_110_2, edx_20[1],
        *(a2[1] + 4), ecx_16[1], eax_51[1], a3);
    int32_t* eax_55 = a2[3];
    int32_t* ecx_19 = a2[2];
    int32_t var_e4_6 = a4;
    int32_t* edx_22 = *a2;
    var_110_2 = *(*eax_55 + 0x88);
    var_118_2 = *(*ecx_19 + 0x88);
    var_120_2 = *(*a2[1] + 0x88);
    var_128_2 = *(*edx_22 + 0x88);
    long double st0_6 = sub_4f6290(var_128_2, var_120_2, var_118_2, var_110_2, edx_22[1],
        *(a2[1] + 4), ecx_19[1], eax_55[1], a3);
    int32_t var_e4_7 = a4;
    var_110_2 = var_c0;
    var_118_2 = var_cc;
    var_120_2 = var_d0;
    var_128_2 = var_c4;
    long double st0_7 = sub_4f6290(var_128_2, var_120_2, var_118_2, var_110_2, *(*a2 + 4),
        *(a2[1] + 4), *(a2[2] + 4), *(a2[3] + 4), a3);
    int32_t* eax_60 = a2[3];
    float var_34 = st0_7;
    int32_t* ecx_23 = a2[2];
    int32_t var_e4_8 = a4;
    int32_t* edx_26 = *a2;
    var_110_2 = *(*eax_60 + 0xe0);
    var_118_2 = *(*ecx_23 + 0xe0);
    var_120_2 = *(*a2[1] + 0xe0);
    var_128_2 = *(*edx_26 + 0xe0);
    long double st0_8 = sub_4f6290(var_128_2, var_120_2, var_118_2, var_110_2, edx_26[1],
        *(a2[1] + 4), ecx_23[1], eax_60[1], a3);
    int32_t* eax_64 = a2[3];
    float var_cc_1 = st0_8;
    int32_t* ecx_26 = a2[2];
    int32_t var_e4_9 = a4;
    int32_t* esi_2 = a2[1];
    int32_t* edx_27 = *a2;
    double var_f0_10 = eax_64[1];
    double var_f8_10 = ecx_26[1];
    double var_100_9 = esi_2[1];
    double var_108_9 = edx_27[1];
    var_110_2 = *(*eax_64 + 0xd0);
    var_118_2 = *(*ecx_26 + 0xd0);
    var_120_2 = *(*esi_2 + 0xd0);
    var_128_2 = *(*edx_27 + 0xd0);
    long double st0_9 = sub_4f6290(var_128_2, var_120_2, var_118_2, var_110_2, var_108_9,
        var_100_9, var_f8_10, var_f0_10, a3);
    int32_t* edx_28 = a2[2];
    int32_t* ecx_29 = a2[1];
    float var_c4_1 = st0_9;
    long double x87_r7_80 = edx_28[1] - ecx_29[1];
    float var_d0_1 = x87_r7_80;
    long double temp4 = 0f;
    x87_r7_80 - temp4;
    float var_88;
    float var_84;
    float var_80;
    void* edi_1;

    if (*(&((x87_r7_80 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_80, temp4) ? 1 : 0) << 0xa
        | (x87_r7_80 == temp4 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        edi_1 = a1;
        int32_t* edx_31 = *ecx_29 + 0xd4;
        var_88 = *edx_31;
        var_84 = edx_31[1];
        var_80 = edx_31[2];
    }
    else
    {
        edi_1 = a1;
        long double x87_r7_81;
        long double temp5_1;

        if (*(edi_1 + 0x264))
        {
            x87_r7_81 = var_c4_1;
            temp5_1 = 0f;
            x87_r7_81 - temp5_1;
        }

        long double x87_r7_85;

        if (!*(edi_1 + 0x264) || !(*(&((x87_r7_81 < temp5_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_81, temp5_1) ? 1 : 0) << 0xa
                | (x87_r7_81 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            x87_r7_85 = (a3 - ecx_29[1]) / var_d0_1;
        else
        {
            long double x87_r7_82 = var_d0_1;
            long double temp6_1 = 0.5f;
            x87_r7_82 - temp6_1;

            if (*(&((x87_r7_82 < temp6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_82, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_82 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                x87_r7_85 = 1f;
            else
            {
                x87_r7_85 = (a3 - ecx_29[1]) / (var_d0_1 - 0.5f);
                long double x87_r6_5 = 0f;
                x87_r6_5 - x87_r7_85;

                if (*(&((x87_r6_5 < x87_r7_85 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_5, x87_r7_85) ? 1 : 0) << 0xa
                    | (x87_r6_5 == x87_r7_85 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double x87_r6_6 = 1f;
                    x87_r6_6 - x87_r7_85;

                    if (*(&((x87_r6_6 < x87_r7_85 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_6, x87_r7_85) ? 1 : 0) << 0xa
                            | (x87_r6_6 == x87_r7_85 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        x87_r7_85 = 1f;
                }
                else
                    x87_r7_85 = 0f;
            }
        }

        void* edx_29 = *edx_28;
        void* ecx_30 = *ecx_29;
        var_88 = (*(edx_29 + 0xd4) - *(ecx_30 + 0xd4)) * x87_r7_85 + *(ecx_30 + 0xd4);
        var_84 = (*(edx_29 + 0xd8) - *(ecx_30 + 0xd8)) * x87_r7_85 + *(ecx_30 + 0xd8);
        var_80 = (*(edx_29 + 0xdc) - *(ecx_30 + 0xdc)) * x87_r7_85 + *(ecx_30 + 0xdc);
    }

    *(&var_f0_10 + 4) = var_3c;
    float var_b0;
    var_f0_10 = &var_b0;
    sub_4b38e0(var_f0_10, st0_4, st0_5);
    void* eax_73 = *a2[1];
    int32_t esi_3 = *(eax_73 + 0x8c);

    if (esi_3 >= 0)
    {
        double* esi_4;
        double* edi_2;

        if (a6 || *(eax_73 + 0x95))
        {
            int32_t var_e4_11 = esi_3;
            void* var_e8_11 = eax_73 + 0x60;
            *(&var_f0_10 + 4) = eax_73 + 0x48;
            var_f0_10 = &var_b0;
            *(&var_f8_10 + 4) = &var_54;
            sub_508940();
            edi_2 = edi_1 + 0x218;
            esi_4 = &var_54;
        }
        else
        {
            esi_4 = edi_1 + 0x218;
            edi_2 = &var_54;
        }

        memcpy(edi_2, esi_4, 0x18);
        edi_1 = a1;
    }

    void* eax_75 = *a2[1];
    int32_t esi_5 = *(eax_75 + 0x90);

    if (esi_5 >= 0)
    {
        int32_t* esi_6;
        int32_t* edi_3;

        if (a6 || *(eax_75 + 0x96))
        {
            int32_t var_e4_12 = esi_5;
            float* var_e8_12 = &var_b0;
            *(&var_f0_10 + 4) = &var_54;
            sub_508620();
            edi_3 = edi_1 + 0x230;
            esi_6 = &var_b0;
        }
        else
        {
            esi_6 = edi_1 + 0x230;
            edi_3 = &var_b0;
        }

        memcpy(edi_3, esi_6, 0x28);
        edi_1 = a1;
    }

    long double x87_r7_91 = *(edi_1 + 0x74);
    long double temp7 = 0f;
    x87_r7_91 - temp7;

    if (!(*(&((x87_r7_91 < temp7 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_91, temp7) ? 1 : 0) << 0xa
        | (x87_r7_91 == temp7 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double x87_r7_92 = *(edi_1 + 0x74);
        long double temp9_1 = a3;
        x87_r7_92 - temp9_1;

        if (!(*(&((x87_r7_92 < temp9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_92, temp9_1) ? 1 : 0) << 0xa
                | (x87_r7_92 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            var_b8 = a3 / *(edi_1 + 0x74);
    }

    long double x87_r7_95 = *(edi_1 + 0x78);
    long double temp8 = 0f;
    x87_r7_95 - temp8;
    long double x87_r6_19;
    long double x87_r7_97;

    if (!(*(&((x87_r7_95 < temp8 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_95, temp8) ? 1 : 0) << 0xa
        | (x87_r7_95 == temp8 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        x87_r7_97 = a5 - a3;
        x87_r6_19 = *(edi_1 + 0x78);
        x87_r7_97 - x87_r6_19;
    }

    long double x87_r7_98;

    if (*(&((x87_r7_95 < temp8 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_95, temp8) ? 1 : 0) << 0xa
            | (x87_r7_95 == temp8 ? 1 : 0) << 0xe) + 1) & 0x40 || !(*(&(
            (x87_r7_97 < x87_r6_19 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_97, x87_r6_19) ? 1 : 0) << 0xa
            | (x87_r7_97 == x87_r6_19 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        x87_r7_98 = var_38;
    else
        x87_r7_98 = x87_r7_97 / *(edi_1 + 0x78);

    long double x87_r6_20 = var_b8;
    x87_r6_20 - x87_r7_98;
    float var_d0_2;

    var_d0_2 = !(*(&((x87_r6_20 < x87_r7_98 ? 1 : 0) << 8
        | (FCMP_UO(x87_r6_20, x87_r7_98) ? 1 : 0) << 0xa | (x87_r6_20 == x87_r7_98 ? 1 : 0) << 0xe
        | 0x3800) + 1) & 1) ? x87_r7_98 : var_b8;

    long double x87_r7_101 = 0f;
    long double temp10 = var_d0_2;
    x87_r7_101 - temp10;

    if (*(&((x87_r7_101 < temp10 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_101, temp10) ? 1 : 0) << 0xa
        | (x87_r7_101 == temp10 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_102 = 1f;
        long double temp11_1 = var_d0_2;
        x87_r7_102 - temp11_1;

        if (*(&((x87_r7_102 < temp11_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_102, temp11_1) ? 1 : 0) << 0xa
                | (x87_r7_102 == temp11_1 ? 1 : 0) << 0xe) + 1) & 1)
            var_d0_2 = 1f;
    }
    else
        var_d0_2 = 0f;

    int32_t var_e4_13 = 0xa76c70;
    int32_t var_e8_13 = 0xa76c70;
    var_54 = (0.5f - sub_4b4770(0xa76c70)) * var_cc_1 * 4096f + var_54;
    *(&var_f0_10 + 4) = 0xa76c70;
    double var_4c_1 = (0.5f - sub_4b4770(0xa76c70)) * var_cc_1 * 4096f + var_4c;
    var_f0_10 = 0xa76c70;
    double var_44_1 = (0.5f - sub_4b4770()) * var_cc_1 * 4096f + var_44;
    float var_e4_14 = (0.5f - sub_4b4770(0xa76c70)) * var_cc_1 * 0.53407079f;
    int32_t var_e8_14 = 0xa76c70;
    float var_e8_15 = (0.5f - sub_4b4770(0xa76c70)) * var_cc_1 * 0.53407079f;
    *(&var_f0_10 + 4) = 0xa76c70;
    *(&var_f0_10 + 4) = (0.5f - sub_4b4770()) * var_cc_1 * 0.53407079f;
    float var_7c;
    var_f0_10 = &var_7c;
    sub_4b38e0(var_f0_10, var_e8_15, var_e4_14);
    float var_ac;
    float var_a8;
    float var_70;
    float var_64;
    float var_30 = var_64 * var_a8 + var_70 * var_ac + var_7c * var_b0;
    float var_78;
    float var_6c;
    float var_60;
    float var_2c = var_60 * var_a8 + var_6c * var_ac + var_78 * var_b0;
    float var_74;
    float var_68;
    float var_5c;
    float var_28 = var_5c * var_a8 + var_68 * var_ac + var_74 * var_b0;
    int32_t var_8c;
    int32_t var_58;
    int32_t var_c = var_58 + var_8c + 1;
    float var_a4;
    float var_a0;
    float var_9c;
    float var_24 = var_9c * var_64 + var_a0 * var_70 + var_a4 * var_7c;
    float var_20 = var_9c * var_60 + var_a0 * var_6c + var_a4 * var_78;
    float var_1c = var_9c * var_5c + var_a0 * var_68 + var_a4 * var_74;
    float var_98;
    float var_94;
    float var_90;
    float var_18 = var_90 * var_64 + var_94 * var_70 + var_98 * var_7c;
    float var_14 = var_90 * var_60 + var_94 * var_6c + var_98 * var_78;
    float var_10 = var_90 * var_5c + var_94 * var_68 + var_98 * var_74;
    memcpy(&var_b0, &var_30, 0x28);
    int32_t var_e4_15 = 0;
    *(&var_f0_10 + 4) = 0;
    float var_c0_1 = var_d0_2 * *(a1 + 0x70) + 1f - var_d0_2;
    var_f0_10 = sub_4e75a0();
    *(&var_f8_10 + 4) = 0x447a0000;
    var_f8_10 = 0x3f800000;
    *(&var_100_9 + 4) = st0_6;
    var_100_9 = &var_b0;
    *(&var_108_9 + 4) = &var_54;
    var_108_9 = g_a76c7c;
    int32_t* eax_79;
    float ecx_38;
    eax_79 =
        Camera_SubmitFrame(var_108_9, var_100_9, 0x447a00003f800000, var_f0_10, var_34, nullptr);
    eax_79 = *(a1 + 0x26c);

    if (!eax_79)
    {
        if (g_a76c80 && a6)
        {
            int32_t* eax_81 = *(a1 + 0x25c);

            if (eax_81)
            {
                QTask_FindType(eax_81);
                *(a1 + 0x25c) = 0;
            }

            void* eax_83 = *a2[1];

            if (*(eax_83 + 0xcc) == 1)
            {
                int32_t var_e4_17 = 1;
                int32_t var_e8_17 = 0x4419999a;
                *(&var_f0_10 + 4) = *(eax_83 + 0xdc);
                var_f0_10 = *(eax_83 + 0xd8);
                *(&var_f8_10 + 4) = *(eax_83 + 0xd4);
                var_f8_10 = g_a76c80;
                *(a1 + 0x25c) = sub_4a23e0(var_f8_10, var_f0_10, 0x4419999a, 1);
            }

            if (*(*a2[1] + 0xcc) == 3)
                sub_4a28f0();

            int32_t* eax_87 = *(a1 + 0x264);

            if (eax_87)
            {
                QTask_FindType(eax_87);
                *(a1 + 0x264) = 0;
            }

            void* eax_88 = *a2[1];
            ecx_38 = *(eax_88 + 0xcc);

            if (ecx_38 == 2 || ecx_38 == 3)
            {
                int32_t var_e8_18 = 0x5a;
                *(&var_f0_10 + 4) = 0x3c;
                var_f0_10 = *(eax_88 + 0xdc);
                *(&var_f8_10 + 4) = *(eax_88 + 0xd8);
                var_f8_10 = *(eax_88 + 0xd4);
                *(&var_100_9 + 4) = 0x4419999a;
                var_100_9 = g_a76c80;
                struct status_msg* eax_90;
                eax_90 = sub_4a2490(var_100_9, var_f8_10, var_f0_10, 1.26116862e-43f, var_c4_1);
                *(a1 + 0x264) = eax_90;
            }

            int32_t* eax_91 = *(a1 + 0x268);

            if (eax_91)
            {
                ecx_38 = QTask_FindType(eax_91);
                *(a1 + 0x268) = 0;
            }

            void* eax_92 = *a2[1];

            if (*(eax_92 + 0xcc) == 4)
            {
                int32_t var_e4_21 = 0x4419999a;
                int32_t var_e8_19 = *(eax_92 + 0xdc);
                *(&var_f0_10 + 4) = *(eax_92 + 0xd8);
                var_f0_10 = *(eax_92 + 0xd4);
                *(&var_f8_10 + 4) = g_a76c80;
                int32_t eax_94;
                eax_94 = sub_4a2910();
                *(a1 + 0x268) = eax_94;
            }
        }

        int32_t eax_95 = *(a1 + 0x264);

        if (eax_95)
        {
            *(&var_f0_10 + 4) = var_88;
            var_f0_10 = eax_95;
            ecx_38 = sub_4a2800(var_f0_10, var_84, var_80);
        }

        void* eax_96 = *(a1 + 0x25c);

        if (eax_96)
        {
            ecx_38 = var_c4_1;
            sub_4a4ff0(eax_96, ecx_38);
        }

        long double x87_r7_169;
        long double temp12_1;

        if (g_a76c80)
        {
            x87_r7_169 = var_c0_1;
            temp12_1 = 1f;
            x87_r7_169 - temp12_1;
        }

        if (!g_a76c80 || *(&((x87_r7_169 < temp12_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_169, temp12_1) ? 1 : 0) << 0xa
            | (x87_r7_169 == temp12_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            eax_79 = *(a1 + 0x260);

            if (eax_79)
            {
                eax_79 = QTask_FindType(eax_79);
                *(a1 + 0x260) = 0;
            }
        }
        else
        {
            float var_c8_2 = g_c28b48 + 1f;
            eax_79 = Display_GetActiveMode();

            if (!*(a1 + 0x260))
            {
                float var_e4_24 = ecx_38;
                int32_t var_e8_22 = 0;
                *(&var_f0_10 + 4) = 0;
                var_f0_10 = var_c8_2;
                *(&var_f8_10 + 4) = g_c28b44 + 1f;
                var_f8_10 = 0x43cccccd;
                *(&var_100_9 + 4) = 0;
                var_100_9 = 0;
                *(&var_108_9 + 4) = 0;
                var_108_9 = g_a76c80;
                struct status_msg* eax_99 = sub_4a2430(var_108_9, 0, 0x43cccccd, var_f0_10, 0,
                    (1f - var_c0_1) * var_c8_2 * 0.5f + 1f);
                *(a1 + 0x260) = eax_99;
                return eax_99;
            }
        }
    }

    return eax_79;
}
