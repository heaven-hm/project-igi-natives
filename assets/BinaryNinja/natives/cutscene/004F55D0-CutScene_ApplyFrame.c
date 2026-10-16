#include "CutScene_ApplyFrame.h"
int32_t* CutScene_ApplyFrame(void* a1, int32_t* a2, int32_t a3, int32_t a4, double a5, char a6)

{
    int32_t __saved_ebp_1;
    int32_t saved_frame = __saved_ebp_1;
    int32_t __saved_ebx_2;
    int32_t __saved_ebx_1 = __saved_ebx_2;
    int32_t __saved_esi_1;
    int32_t saved_src = __saved_esi_1;
    int32_t __saved_edi_1;
    int32_t saved_dst = __saved_edi_1;
    float v_b8 = 1f;
    float v_38 = 1f;
    void* objC = **a2;
    float v_c4 = *(objC + 0x98);
    void* tmpD = *a2[1];
    float v_d0 = *(tmpD + 0x98);
    void* valA5 = *a2[2];
    float v_cc = *(valA5 + 0x98);
    void* valA8 = *a2[3];
    long double fpu7 = *(valA8 + 0x98);
    float v_c0 = fpu7;
    long double fpu6 = v_c4;
    long double f0 = 0f;
    fpu6 - f0;

    if (*(&((fpu6 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu6, f0) ? 1 : 0) << 0xa
            | (fpu6 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        v_c4 = *(a1 + 0x210);

    long double x87_r6_1 = v_d0;
    long double f1 = 0f;
    x87_r6_1 - f1;

    if (*(&((x87_r6_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, f1) ? 1 : 0) << 0xa
            | (x87_r6_1 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        v_d0 = *(a1 + 0x210);

    long double x87_r6_2 = v_cc;
    long double f2 = 0f;
    x87_r6_2 - f2;

    if (*(&((x87_r6_2 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, f2) ? 1 : 0) << 0xa
            | (x87_r6_2 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        v_cc = *(a1 + 0x210);

    long double f3 = 0f;
    fpu7 - f3;

    if (*(&((fpu7 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f3) ? 1 : 0) << 0xa
            | (fpu7 == f3 ? 1 : 0) << 0xe) + 1) & 1)
        v_c0 = *(a1 + 0x210);

    int32_t v_e4 = a4;
    int32_t v_10c = *(valA8 + 0x24);
    int32_t v_114 = *(valA5 + 0x24);
    int32_t v_11c = *(tmpD + 0x24);
    int32_t v_124 = *(objC + 0x24);
    long double fp0 = Script_ParseEnumString_18(*(objC + 0x20), *(tmpD + 0x20), *(valA5 + 0x20), *(valA8 + 0x20),
        *(*a2 + 4), *(a2[1] + 4), *(a2[2] + 4), *(a2[3] + 4), a3);
    int32_t* valA28 = a2[3];
    double v_54 = fp0;
    int32_t* objC2 = a2[2];
    int32_t v_e4_1 = a4;
    void* tmpD4 = *valA28;
    int32_t v_10c_1 = *(tmpD4 + 0x2c);
    void* valA30 = *objC2;
    int32_t v_114_1 = *(valA30 + 0x2c);
    void* valA32 = *a2[1];
    int32_t v_11c_1 = *(valA32 + 0x2c);
    void* valA34 = **a2;
    int32_t v_124_1 = *(valA34 + 0x2c);
    long double fp0_1 = Script_ParseEnumString_18(*(valA34 + 0x28), *(valA32 + 0x28), *(valA30 + 0x28),
        *(tmpD4 + 0x28), *(*a2 + 4), *(a2[1] + 4), objC2[1], valA28[1], a3);
    int32_t* valA35 = a2[3];
    double v_4c = fp0_1;
    int32_t* objC6 = a2[2];
    int32_t v_e4_2 = a4;
    void* valA36 = *valA35;
    void* objC7 = *objC6;
    int32_t v_10c_2 = *(valA36 + 0x34);
    int32_t v_110_2 = *(valA36 + 0x30);
    int32_t v_114_2 = *(objC7 + 0x34);
    int32_t v_118_2 = *(objC7 + 0x30);
    void* objC8 = *a2[1];
    int32_t v_11c_2 = *(objC8 + 0x34);
    int32_t v_120_2 = *(objC8 + 0x30);
    void* objC9 = **a2;
    int32_t v_124_2 = *(objC9 + 0x34);
    int32_t v_128_2 = *(objC9 + 0x30);
    long double fp0_2 = Script_ParseEnumString_18(v_128_2, v_120_2, v_118_2, v_110_2, *(*a2 + 4),
        *(a2[1] + 4), objC6[1], valA35[1], a3);
    int32_t* valA43 = a2[3];
    double v_44 = fp0_2;
    int32_t* objC10 = a2[2];
    int32_t v_e4_3 = a4;
    int32_t* tmpD16 = *a2;
    v_110_2 = *(*valA43 + 0x3c);
    v_118_2 = *(*objC10 + 0x3c);
    v_120_2 = *(*a2[1] + 0x3c);
    v_128_2 = *(*tmpD16 + 0x3c);
    long double fp0_3 = Script_ParseEnumString_18(v_128_2, v_120_2, v_118_2, v_110_2, tmpD16[1],
        *(a2[1] + 4), objC10[1], valA43[1], a3);
    int32_t* valA47 = a2[3];
    float v_3c = fp0_3;
    int32_t* objC13 = a2[2];
    int32_t v_e4_4 = a4;
    int32_t* tmpD18 = *a2;
    v_110_2 = *(*valA47 + 0x40);
    v_118_2 = *(*objC13 + 0x40);
    v_120_2 = *(*a2[1] + 0x40);
    v_128_2 = *(*tmpD18 + 0x40);
    long double fp0_4 = Script_ParseEnumString_18(v_128_2, v_120_2, v_118_2, v_110_2, tmpD18[1],
        *(a2[1] + 4), objC13[1], valA47[1], a3);
    int32_t* valA51 = a2[3];
    int32_t* objC16 = a2[2];
    int32_t v_e4_5 = a4;
    int32_t* tmpD20 = *a2;
    v_110_2 = *(*valA51 + 0x44);
    v_118_2 = *(*objC16 + 0x44);
    v_120_2 = *(*a2[1] + 0x44);
    v_128_2 = *(*tmpD20 + 0x44);
    long double fp0_5 = Script_ParseEnumString_18(v_128_2, v_120_2, v_118_2, v_110_2, tmpD20[1],
        *(a2[1] + 4), objC16[1], valA51[1], a3);
    int32_t* valA55 = a2[3];
    int32_t* objC19 = a2[2];
    int32_t v_e4_6 = a4;
    int32_t* tmpD22 = *a2;
    v_110_2 = *(*valA55 + 0x88);
    v_118_2 = *(*objC19 + 0x88);
    v_120_2 = *(*a2[1] + 0x88);
    v_128_2 = *(*tmpD22 + 0x88);
    long double fp0_6 = Script_ParseEnumString_18(v_128_2, v_120_2, v_118_2, v_110_2, tmpD22[1],
        *(a2[1] + 4), objC19[1], valA55[1], a3);
    int32_t v_e4_7 = a4;
    v_110_2 = v_c0;
    v_118_2 = v_cc;
    v_120_2 = v_d0;
    v_128_2 = v_c4;
    long double fp0_7 = Script_ParseEnumString_18(v_128_2, v_120_2, v_118_2, v_110_2, *(*a2 + 4),
        *(a2[1] + 4), *(a2[2] + 4), *(a2[3] + 4), a3);
    int32_t* valA60 = a2[3];
    float v_34 = fp0_7;
    int32_t* objC23 = a2[2];
    int32_t v_e4_8 = a4;
    int32_t* tmpD26 = *a2;
    v_110_2 = *(*valA60 + 0xe0);
    v_118_2 = *(*objC23 + 0xe0);
    v_120_2 = *(*a2[1] + 0xe0);
    v_128_2 = *(*tmpD26 + 0xe0);
    long double fp0_8 = Script_ParseEnumString_18(v_128_2, v_120_2, v_118_2, v_110_2, tmpD26[1],
        *(a2[1] + 4), objC23[1], valA60[1], a3);
    int32_t* valA64 = a2[3];
    float v_cc_1 = fp0_8;
    int32_t* objC26 = a2[2];
    int32_t v_e4_9 = a4;
    int32_t* srcS2 = a2[1];
    int32_t* tmpD27 = *a2;
    double v_f0_10 = valA64[1];
    double v_f8_10 = objC26[1];
    double v_100_9 = srcS2[1];
    double v_108_9 = tmpD27[1];
    v_110_2 = *(*valA64 + 0xd0);
    v_118_2 = *(*objC26 + 0xd0);
    v_120_2 = *(*srcS2 + 0xd0);
    v_128_2 = *(*tmpD27 + 0xd0);
    long double fp0_9 = Script_ParseEnumString_18(v_128_2, v_120_2, v_118_2, v_110_2, v_108_9,
        v_100_9, v_f8_10, v_f0_10, a3);
    int32_t* tmpD28 = a2[2];
    int32_t* objC29 = a2[1];
    float v_c4_1 = fp0_9;
    long double x87_r7_80 = tmpD28[1] - objC29[1];
    float v_d0_1 = x87_r7_80;
    long double f4 = 0f;
    x87_r7_80 - f4;
    float v_88;
    float v_84;
    float v_80;
    void* dstD1;

    if (*(&((x87_r7_80 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_80, f4) ? 1 : 0) << 0xa
        | (x87_r7_80 == f4 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        dstD1 = a1;
        int32_t* tmpD31 = *objC29 + 0xd4;
        v_88 = *tmpD31;
        v_84 = tmpD31[1];
        v_80 = tmpD31[2];
    }
    else
    {
        dstD1 = a1;
        long double x87_r7_81;
        long double f5_1;

        if (*(dstD1 + 0x264))
        {
            x87_r7_81 = v_c4_1;
            f5_1 = 0f;
            x87_r7_81 - f5_1;
        }

        long double x87_r7_85;

        if (!*(dstD1 + 0x264) || !(*(&((x87_r7_81 < f5_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_81, f5_1) ? 1 : 0) << 0xa
                | (x87_r7_81 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            x87_r7_85 = (a3 - objC29[1]) / v_d0_1;
        else
        {
            long double x87_r7_82 = v_d0_1;
            long double f6_1 = 0.5f;
            x87_r7_82 - f6_1;

            if (*(&((x87_r7_82 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_82, f6_1) ? 1 : 0) << 0xa
                    | (x87_r7_82 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                x87_r7_85 = 1f;
            else
            {
                x87_r7_85 = (a3 - objC29[1]) / (v_d0_1 - 0.5f);
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

        void* tmpD29 = *tmpD28;
        void* objC30 = *objC29;
        v_88 = (*(tmpD29 + 0xd4) - *(objC30 + 0xd4)) * x87_r7_85 + *(objC30 + 0xd4);
        v_84 = (*(tmpD29 + 0xd8) - *(objC30 + 0xd8)) * x87_r7_85 + *(objC30 + 0xd8);
        v_80 = (*(tmpD29 + 0xdc) - *(objC30 + 0xdc)) * x87_r7_85 + *(objC30 + 0xdc);
    }

    *(&v_f0_10 + 4) = v_3c;
    float v_b0;
    v_f0_10 = &v_b0;
    Sys_ReadFileBlock_12(v_f0_10, fp0_4, fp0_5);
    void* valA73 = *a2[1];
    int32_t srcS3 = *(valA73 + 0x8c);

    if (srcS3 >= 0)
    {
        double* srcS4;
        double* dstD2;

        if (a6 || *(valA73 + 0x95))
        {
            int32_t v_e4_11 = srcS3;
            void* v_e8_11 = valA73 + 0x60;
            *(&v_f0_10 + 4) = valA73 + 0x48;
            v_f0_10 = &v_b0;
            *(&v_f8_10 + 4) = &v_54;
            Physics_EvaluateAreaCriteria_7();
            dstD2 = dstD1 + 0x218;
            srcS4 = &v_54;
        }
        else
        {
            srcS4 = dstD1 + 0x218;
            dstD2 = &v_54;
        }

        memcpy(dstD2, srcS4, 0x18);
        dstD1 = a1;
    }

    void* valA75 = *a2[1];
    int32_t srcS5 = *(valA75 + 0x90);

    if (srcS5 >= 0)
    {
        int32_t* srcS6;
        int32_t* dstD3;

        if (a6 || *(valA75 + 0x96))
        {
            int32_t v_e4_12 = srcS5;
            float* v_e8_12 = &v_b0;
            *(&v_f0_10 + 4) = &v_54;
            Physics_InterpolateWaypoint_7();
            dstD3 = dstD1 + 0x230;
            srcS6 = &v_b0;
        }
        else
        {
            srcS6 = dstD1 + 0x230;
            dstD3 = &v_b0;
        }

        memcpy(dstD3, srcS6, 0x28);
        dstD1 = a1;
    }

    long double x87_r7_91 = *(dstD1 + 0x74);
    long double f7 = 0f;
    x87_r7_91 - f7;

    if (!(*(&((x87_r7_91 < f7 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_91, f7) ? 1 : 0) << 0xa
        | (x87_r7_91 == f7 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double x87_r7_92 = *(dstD1 + 0x74);
        long double f9_1 = a3;
        x87_r7_92 - f9_1;

        if (!(*(&((x87_r7_92 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_92, f9_1) ? 1 : 0) << 0xa
                | (x87_r7_92 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            v_b8 = a3 / *(dstD1 + 0x74);
    }

    long double x87_r7_95 = *(dstD1 + 0x78);
    long double f8 = 0f;
    x87_r7_95 - f8;
    long double x87_r6_19;
    long double x87_r7_97;

    if (!(*(&((x87_r7_95 < f8 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_95, f8) ? 1 : 0) << 0xa
        | (x87_r7_95 == f8 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        x87_r7_97 = a5 - a3;
        x87_r6_19 = *(dstD1 + 0x78);
        x87_r7_97 - x87_r6_19;
    }

    long double x87_r7_98;

    if (*(&((x87_r7_95 < f8 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_95, f8) ? 1 : 0) << 0xa
            | (x87_r7_95 == f8 ? 1 : 0) << 0xe) + 1) & 0x40 || !(*(&(
            (x87_r7_97 < x87_r6_19 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_97, x87_r6_19) ? 1 : 0) << 0xa
            | (x87_r7_97 == x87_r6_19 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        x87_r7_98 = v_38;
    else
        x87_r7_98 = x87_r7_97 / *(dstD1 + 0x78);

    long double x87_r6_20 = v_b8;
    x87_r6_20 - x87_r7_98;
    float v_d0_2;

    v_d0_2 = !(*(&((x87_r6_20 < x87_r7_98 ? 1 : 0) << 8
        | (FCMP_UO(x87_r6_20, x87_r7_98) ? 1 : 0) << 0xa | (x87_r6_20 == x87_r7_98 ? 1 : 0) << 0xe
        | 0x3800) + 1) & 1) ? x87_r7_98 : v_b8;

    long double x87_r7_101 = 0f;
    long double f10 = v_d0_2;
    x87_r7_101 - f10;

    if (*(&((x87_r7_101 < f10 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_101, f10) ? 1 : 0) << 0xa
        | (x87_r7_101 == f10 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_102 = 1f;
        long double f11_1 = v_d0_2;
        x87_r7_102 - f11_1;

        if (*(&((x87_r7_102 < f11_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_102, f11_1) ? 1 : 0) << 0xa
                | (x87_r7_102 == f11_1 ? 1 : 0) << 0xe) + 1) & 1)
            v_d0_2 = 1f;
    }
    else
        v_d0_2 = 0f;

    int32_t v_e4_13 = 0xa76c70;
    int32_t v_e8_13 = 0xa76c70;
    v_54 = (0.5f - Sys_AllocateMemory_14(0xa76c70)) * v_cc_1 * 4096f + v_54;
    *(&v_f0_10 + 4) = 0xa76c70;
    double v_4c_1 = (0.5f - Sys_AllocateMemory_14(0xa76c70)) * v_cc_1 * 4096f + v_4c;
    v_f0_10 = 0xa76c70;
    double v_44_1 = (0.5f - Sys_AllocateMemory_14()) * v_cc_1 * 4096f + v_44;
    float v_e4_14 = (0.5f - Sys_AllocateMemory_14(0xa76c70)) * v_cc_1 * 0.53407079f;
    int32_t v_e8_14 = 0xa76c70;
    float v_e8_15 = (0.5f - Sys_AllocateMemory_14(0xa76c70)) * v_cc_1 * 0.53407079f;
    *(&v_f0_10 + 4) = 0xa76c70;
    *(&v_f0_10 + 4) = (0.5f - Sys_AllocateMemory_14()) * v_cc_1 * 0.53407079f;
    float v_7c;
    v_f0_10 = &v_7c;
    Sys_ReadFileBlock_12(v_f0_10, v_e8_15, v_e4_14);
    float v_ac;
    float v_a8;
    float v_70;
    float v_64;
    float v_30 = v_64 * v_a8 + v_70 * v_ac + v_7c * v_b0;
    float v_78;
    float v_6c;
    float v_60;
    float v_2c = v_60 * v_a8 + v_6c * v_ac + v_78 * v_b0;
    float v_74;
    float v_68;
    float v_5c;
    float v_28 = v_5c * v_a8 + v_68 * v_ac + v_74 * v_b0;
    int32_t v_8c;
    int32_t v_58;
    int32_t v_c = v_58 + v_8c + 1;
    float v_a4;
    float v_a0;
    float v_9c;
    float v_24 = v_9c * v_64 + v_a0 * v_70 + v_a4 * v_7c;
    float v_20 = v_9c * v_60 + v_a0 * v_6c + v_a4 * v_78;
    float v_1c = v_9c * v_5c + v_a0 * v_68 + v_a4 * v_74;
    float v_98;
    float v_94;
    float v_90;
    float v_18 = v_90 * v_64 + v_94 * v_70 + v_98 * v_7c;
    float v_14 = v_90 * v_60 + v_94 * v_6c + v_98 * v_78;
    float v_10 = v_90 * v_5c + v_94 * v_68 + v_98 * v_74;
    memcpy(&v_b0, &v_30, 0x28);
    int32_t v_e4_15 = 0;
    *(&v_f0_10 + 4) = 0;
    float v_c0_1 = v_d0_2 * *(a1 + 0x70) + 1f - v_d0_2;
    v_f0_10 = SoundSys_SetFrequency_9();
    *(&v_f8_10 + 4) = 0x447a0000;
    v_f8_10 = 0x3f800000;
    *(&v_100_9 + 4) = fp0_6;
    v_100_9 = &v_b0;
    *(&v_108_9 + 4) = &v_54;
    v_108_9 = g_a76c7c;
    int32_t* valA79;
    float objC38;
    valA79 =
        Camera_SubmitFrame(v_108_9, v_100_9, 0x447a00003f800000, v_f0_10, v_34, nullptr);
    valA79 = *(a1 + 0x26c);

    if (!valA79)
    {
        if (g_a76c80 && a6)
        {
            int32_t* valA81 = *(a1 + 0x25c);

            if (valA81)
            {
                QTask_FindType(valA81);
                *(a1 + 0x25c) = 0;
            }

            void* valA83 = *a2[1];

            if (*(valA83 + 0xcc) == 1)
            {
                int32_t v_e4_17 = 1;
                int32_t v_e8_17 = 0x4419999a;
                *(&v_f0_10 + 4) = *(valA83 + 0xdc);
                v_f0_10 = *(valA83 + 0xd8);
                *(&v_f8_10 + 4) = *(valA83 + 0xd4);
                v_f8_10 = g_a76c80;
                *(a1 + 0x25c) = Camera_ApplyWideScreen(v_f8_10, v_f0_10, 0x4419999a, 1);
            }

            if (*(*a2[1] + 0xcc) == 3)
                Camera_ApplyHandiCam_2();

            int32_t* valA87 = *(a1 + 0x264);

            if (valA87)
            {
                QTask_FindType(valA87);
                *(a1 + 0x264) = 0;
            }

            void* valA88 = *a2[1];
            objC38 = *(valA88 + 0xcc);

            if (objC38 == 2 || objC38 == 3)
            {
                int32_t v_e8_18 = 0x5a;
                *(&v_f0_10 + 4) = 0x3c;
                v_f0_10 = *(valA88 + 0xdc);
                *(&v_f8_10 + 4) = *(valA88 + 0xd8);
                v_f8_10 = *(valA88 + 0xd4);
                *(&v_100_9 + 4) = 0x4419999a;
                v_100_9 = g_a76c80;
                struct status_msg* valA90;
                valA90 = Camera_UpdateViewCone(v_100_9, v_f8_10, v_f0_10, 1.26116862e-43f, v_c4_1);
                *(a1 + 0x264) = valA90;
            }

            int32_t* valA91 = *(a1 + 0x268);

            if (valA91)
            {
                objC38 = QTask_FindType(valA91);
                *(a1 + 0x268) = 0;
            }

            void* valA92 = *a2[1];

            if (*(valA92 + 0xcc) == 4)
            {
                int32_t v_e4_21 = 0x4419999a;
                int32_t v_e8_19 = *(valA92 + 0xdc);
                *(&v_f0_10 + 4) = *(valA92 + 0xd8);
                v_f0_10 = *(valA92 + 0xd4);
                *(&v_f8_10 + 4) = g_a76c80;
                int32_t valA94;
                valA94 = Camera_ApplyWideScreen_2();
                *(a1 + 0x268) = valA94;
            }
        }

        int32_t valA95 = *(a1 + 0x264);

        if (valA95)
        {
            *(&v_f0_10 + 4) = v_88;
            v_f0_10 = valA95;
            objC38 = Camera_ApplyLineFilter_2(v_f0_10, v_84, v_80);
        }

        void* valA96 = *(a1 + 0x25c);

        if (valA96)
        {
            objC38 = v_c4_1;
            Camera_SetFieldOfView_3(valA96, objC38);
        }

        long double x87_r7_169;
        long double f12_1;

        if (g_a76c80)
        {
            x87_r7_169 = v_c0_1;
            f12_1 = 1f;
            x87_r7_169 - f12_1;
        }

        if (!g_a76c80 || *(&((x87_r7_169 < f12_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_169, f12_1) ? 1 : 0) << 0xa
            | (x87_r7_169 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            valA79 = *(a1 + 0x260);

            if (valA79)
            {
                valA79 = QTask_FindType(valA79);
                *(a1 + 0x260) = 0;
            }
        }
        else
        {
            float v_c8_2 = g_c28b48 + 1f;
            valA79 = Display_GetActiveMode();

            if (!*(a1 + 0x260))
            {
                float v_e4_24 = objC38;
                int32_t v_e8_22 = 0;
                *(&v_f0_10 + 4) = 0;
                v_f0_10 = v_c8_2;
                *(&v_f8_10 + 4) = g_c28b44 + 1f;
                v_f8_10 = 0x43cccccd;
                *(&v_100_9 + 4) = 0;
                v_100_9 = 0;
                *(&v_108_9 + 4) = 0;
                v_108_9 = g_a76c80;
                struct status_msg* valA99 = Camera_ApplyPostProcess(v_108_9, 0, 0x43cccccd, v_f0_10, 0,
                    (1f - v_c0_1) * v_c8_2 * 0.5f + 1f);
                *(a1 + 0x260) = valA99;
                return valA99;
            }
        }
    }

    return valA79;
}
