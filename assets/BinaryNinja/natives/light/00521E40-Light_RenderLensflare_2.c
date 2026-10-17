// Original IGI.EXE function: Light_RenderLensflare_2 (VA 0x00521E40; static CFG gate FAIL, CFG score 0.833).
#include "Light_RenderLensflare_2.h"
uint32_t Light_RenderLensflare_2(void* a1, double* a2, float* a3 @ 0x10, float* a4, void* a5, int32_t a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15 @ 0xf8, float a16, float a17, float a18, float a19, float a20, float a21, float a22)

{
    int32_t flagP;
    int32_t v_4 = flagP;
    Camera_UpdateTransform_5(0x3ab7c);
    int32_t srcS1 = a5 * a6;
    int32_t* tmpD = *(a1 + 0x88);
    int32_t* arg_ec = tmpD;

    if (srcS1 > 0)
        __builtin_memset(a3, 0xffffffff, srcS1 << 2);

    if (a12)
    {
        int32_t objC3;
        int32_t dstD3;

        if (!a10)
        {
            if (srcS1 > 0)
                dstD3 = __memfill_u32(a4, 0, srcS1);
        }
        else if (srcS1 > 0)
            dstD3 = __memfill_u32(a4, 0x7f7fffff, srcS1);
    }

    uint32_t result = *tmpD;
    int32_t dstD4 = 0;
    int32_t arg_e8 = 0;

    if (result > 0)
    {
        float* arg_c;
        float* ctxB1 = arg_c;
        double* srcS2 = a2;

        while (true)
        {
            int32_t objC4 = dstD4 * 9;
            int32_t valA4 = tmpD[objC4 + 0xd];

            if (valA4 > a9 || tmpD[objC4 + 0xc] != valA4 - 1)
                result = 0;
            else
                result = 1;

            uint32_t result_1 = result;

            if (tmpD[objC4 + 0xc] == a9 || result)
            {
                result = *(*(tmpD[objC4 + 7] + 0xc) + 0xc);

                if (*(result + 0x20) == 3)
                {
                    void* tmpD3 = *(result + 0x24);
                    void* arg_60 = tmpD3;
                    result = *(tmpD3 + 8);

                    if (result && tmpD3)
                    {
                        double* valA7 = tmpD[objC4 + 0xa];
                        long double x87_r7_2 = *valA7 - *srcS2;
                        long double x87_r6_2 = valA7[1] - srcS2[1];
                        long double x87_r5_2 = valA7[2] - srcS2[2];
                        float* valA8 = tmpD[objC4 + 9];
                        float arg_80 =
                            x87_r7_2 * *ctxB1 + x87_r5_2 * ctxB1[2] + x87_r6_2 * ctxB1[1];
                        float arg_84 =
                            x87_r7_2 * ctxB1[3] + x87_r5_2 * ctxB1[5] + x87_r6_2 * ctxB1[4];
                        float arg_88 =
                            x87_r5_2 * ctxB1[8] + x87_r6_2 * ctxB1[7] + x87_r7_2 * ctxB1[6];
                        float arg_8c = valA8[6] * ctxB1[2] + valA8[3] * ctxB1[1] + *valA8 * *ctxB1;
                        float arg_90 =
                            valA8[7] * ctxB1[2] + valA8[4] * ctxB1[1] + valA8[1] * *ctxB1;
                        float arg_94 =
                            *ctxB1 * valA8[2] + valA8[8] * ctxB1[2] + valA8[5] * ctxB1[1];
                        float arg_98 =
                            *valA8 * ctxB1[3] + ctxB1[5] * valA8[6] + ctxB1[4] * valA8[3];
                        float arg_9c =
                            valA8[1] * ctxB1[3] + valA8[7] * ctxB1[5] + valA8[4] * ctxB1[4];
                        float arg_a0 =
                            valA8[8] * ctxB1[5] + valA8[5] * ctxB1[4] + valA8[2] * ctxB1[3];
                        float arg_a4 =
                            ctxB1[8] * valA8[6] + ctxB1[7] * valA8[3] + *valA8 * ctxB1[6];
                        float arg_a8 =
                            ctxB1[8] * valA8[7] + ctxB1[7] * valA8[4] + valA8[1] * ctxB1[6];
                        int32_t valA10 = valA8[9] + ctxB1[9] + 1;
                        int32_t arg_b0 = valA10;
                        float arg_ac =
                            valA8[2] * ctxB1[6] + ctxB1[8] * valA8[8] + ctxB1[7] * valA8[5];
                        float arg_f4;
                        memcpy(&arg_f4, &arg_8c, 0x28);

                        if (valA10 > 0x3e8)
                        {
                            long double x87_r7_41 = arg_8c;
                            long double f1_1 = 0f;
                            x87_r7_41 - f1_1;
                            float arg_c0 = arg_8c;
                            float arg_c8 = arg_94;
                            float arg_c4 = arg_90;

                            if (!(*(&((x87_r7_41 < f1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_41, f1_1) ? 1 : 0) << 0xa
                                | (x87_r7_41 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            {
                            label_52211f:
                                long double x87_r7_44 = arg_94;
                                long double x87_r6_43 = arg_90;
                                long double x87_r5_6 = arg_8c;
                                long double x87_r7_46 = 1.0 / sqrtl(x87_r5_6 * x87_r5_6
                                    + x87_r6_43 * x87_r6_43 + x87_r7_44 * x87_r7_44);
                                arg_c0 = arg_8c * x87_r7_46;
                                arg_c4 = arg_c4 * x87_r7_46;
                                arg_c8 = arg_c8 * x87_r7_46;
                            }
                            else
                            {
                                long double x87_r7_42 = arg_90;
                                long double f2_1 = 0f;
                                x87_r7_42 - f2_1;

                                if (!(*(&((x87_r7_42 < f2_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_42, f2_1) ? 1 : 0) << 0xa
                                        | (x87_r7_42 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_52211f;

                                long double x87_r7_43 = arg_94;
                                long double f5_1 = 0f;
                                x87_r7_43 - f5_1;

                                if (!(*(&((x87_r7_43 < f5_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_43, f5_1) ? 1 : 0) << 0xa
                                        | (x87_r7_43 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_52211f;
                            }

                            float arg_44 = arg_a8 * arg_94 - arg_ac * arg_90;
                            long double x87_r6_54 = arg_ac * arg_8c;
                            float arg_cc = arg_44;
                            float arg_48 = -((arg_a4 * arg_94 - x87_r6_54));
                            float arg_4c = arg_a4 * arg_90 - arg_a8 * arg_8c;
                            float arg_70 = arg_4c * arg_c4 - arg_48 * arg_c8;
                            float arg_d8 = arg_70;
                            float arg_74 = -((arg_4c * arg_c0 - arg_44 * arg_c8));
                            float arg_78 = arg_48 * arg_c0 - arg_44 * arg_c4;
                            long double x87_r7_68 = arg_44;
                            long double f4_1 = 0f;
                            x87_r7_68 - f4_1;

                            if (!(*(&((x87_r7_68 < f4_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_68, f4_1) ? 1 : 0) << 0xa
                                | (x87_r7_68 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            {
                            label_5222c9:
                                long double x87_r7_71 = arg_44;
                                long double x87_r6_63 = arg_48;
                                long double x87_r5_8 = arg_4c;
                                long double x87_r7_73 = 1.0 / sqrtl(x87_r5_8 * x87_r5_8
                                    + x87_r6_63 * x87_r6_63 + x87_r7_71 * x87_r7_71);
                                arg_cc = arg_44 * x87_r7_73;
                                float arg_d0 = arg_48 * x87_r7_73;
                                float arg_d4 = arg_4c * x87_r7_73;
                            }
                            else
                            {
                                long double x87_r7_69 = arg_48;
                                long double f6_1 = 0f;
                                x87_r7_69 - f6_1;

                                if (!(*(&((x87_r7_69 < f6_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_69, f6_1) ? 1 : 0) << 0xa
                                        | (x87_r7_69 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_5222c9;

                                long double x87_r7_70 = arg_4c;
                                long double f8_1 = 0f;
                                x87_r7_70 - f8_1;

                                if (!(*(&((x87_r7_70 < f8_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_70, f8_1) ? 1 : 0) << 0xa
                                        | (x87_r7_70 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_5222c9;
                            }

                            long double x87_r7_75 = arg_70;
                            long double f7_1 = 0f;
                            x87_r7_75 - f7_1;

                            if (!(*(&((x87_r7_75 < f7_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_75, f7_1) ? 1 : 0) << 0xa
                                | (x87_r7_75 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            {
                            label_52235e:
                                long double x87_r7_78 = arg_78;
                                long double x87_r6_71 = arg_74;
                                long double x87_r5_10 = arg_70;
                                long double x87_r7_80 = 1.0 / sqrtl(x87_r5_10 * x87_r5_10
                                    + x87_r6_71 * x87_r6_71 + x87_r7_78 * x87_r7_78);
                                arg_d8 = arg_70 * x87_r7_80;
                                float arg_dc = arg_74 * x87_r7_80;
                                float arg_e0 = arg_78 * x87_r7_80;
                            }
                            else
                            {
                                long double x87_r7_76 = arg_74;
                                long double f9_1 = 0f;
                                x87_r7_76 - f9_1;

                                if (!(*(&((x87_r7_76 < f9_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_76, f9_1) ? 1 : 0) << 0xa
                                        | (x87_r7_76 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_52235e;

                                long double x87_r7_77 = arg_78;
                                long double f10_1 = 0f;
                                x87_r7_77 - f10_1;

                                if (!(*(&((x87_r7_77 < f10_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_77, f10_1) ? 1 : 0) << 0xa
                                        | (x87_r7_77 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_52235e;
                            }

                            memcpy(&arg_8c, &arg_c0, 0x28);
                            arg_b0 = 0;
                        }

                        int32_t i = 0;
                        void arg_1fc;

                        if (*(tmpD3 + 0x10) > 0)
                        {
                            int32_t dstD5 = 0;
                            float* objC11 = &arg_1fc;

                            do
                            {
                                int32_t* valA20 = dstD5 + *(tmpD3 + 0x14);
                                float tmpD4 = *valA20;
                                float tmpD5 = valA20[1];
                                float valA21 = valA20[2];
                                float arg_158 = a16 * valA21 + a15 * tmpD5 + arg_f4 * tmpD4;
                                a7 = arg_158;
                                long double x87_r7_95 = arg_158 + arg_80;
                                a9 = a22 * valA21 + a21 * tmpD5 + a20 * tmpD4;
                                a8 = a19 * valA21 + a18 * tmpD5 + a17 * tmpD4 + arg_84;
                                long double x87_r6_94 = a9 + arg_88;
                                long double f3_1 = 4.09600019f;
                                x87_r6_94 - f3_1;

                                if (*(&((x87_r6_94 < f3_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_94, f3_1) ? 1 : 0) << 0xa
                                    | (x87_r6_94 == f3_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                                {
                                    *objC11 = x87_r6_94 - 4.09600019f;
                                    objC11[-2] = x87_r7_95;
                                    objC11[-1] = a8;
                                }
                                else if (!a10)
                                {
                                    long double x87_r6_96 = 1f / x87_r6_94;
                                    *objC11 = x87_r6_96;
                                    float v_8_2 = a5 >> 1;
                                    objC11[-2] = x87_r6_96 * v_8_2 * x87_r7_95 + a7;
                                    objC11[-1] = v_8_2 * a8 * *objC11 + a8;
                                }
                                else
                                {
                                    *objC11 = x87_r6_94;
                                    float v_8_1 = a5 >> 1;
                                    objC11[-2] = x87_r7_95 / a13 * v_8_1 + a7;
                                    objC11[-1] = a8 / a13 * v_8_1 + a8;
                                }

                                tmpD3 = arg_60;
                                i += 1;
                                dstD5 += 0x28;
                                objC11 = &objC11[3];
                            } while (i < *(tmpD3 + 0x10));
                        }

                        void* objC12 = *(tmpD3 + 0x1c);

                        while (true)
                        {
                            int32_t tmpD10 = 0;
                            tmpD10 = *(objC12 + 0xc);
                            void* srcS3 = objC12 + 0x20;
                            int32_t valA28;
                            int32_t tmpD11;
                            tmpD11 = HIGHD(0x55555556 * tmpD10);
                            valA28 = LOWD(0x55555556 * tmpD10);
                            a5 = objC12;
                            result = tmpD11 >> 0x1f;
                            void* arg_7c = srcS3;
                            a6 = 0;

                            if (tmpD10 / 3 > 0)
                            {
                                while (true)
                                {
                                    int16_t tmpD13 = *(objC12 + 0x14);
                                    int16_t valA30 = *(srcS3 + 2) + tmpD13;
                                    int16_t objC13 = tmpD13 + *srcS3;
                                    int16_t srcS4 = *(srcS3 + 4) + tmpD13;
                                    int16_t arg_58 = objC13;

                                    if (objC13 != valA30 && valA30 != srcS4 && srcS4 != objC13
                                        && valA30 != srcS4 && srcS4 != objC13)
                                    {
                                        int32_t objC14 = 0;
                                        objC14 = !*(a5 + 0x18);
                                        int32_t valA31 = 0;
                                        valA31 = a11;

                                        if (objC14 != valA31)
                                        {
                                            int32_t valA32 = 0;
                                            valA32 = *(a5 + 0x12);
                                            void* tmpD16 = tmpD[objC4 + 6];
                                            uint32_t dstD7 = srcS4;
                                            float** objC18 = *(tmpD16 + 0x38) + valA32 * 0x28;
                                            uint32_t srcS8 = valA30;
                                            uint32_t objC21 = arg_58;
                                            uint32_t valA34 = objC21 * 3;
                                            long double x87_r7_108 = *(&arg_1fc + (valA34 << 2));
                                            long double f11_1 = 0f;
                                            x87_r7_108 - f11_1;
                                            int32_t saved_dst;
                                            arg_c = &(&saved_dst)[valA34 + 0x82];
                                            void arg_128;
                                            float arg_130;
                                            void arg_138;

                                            if (*(&((x87_r7_108 < f11_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_108, f11_1) ? 1 : 0) << 0xa
                                                | (x87_r7_108 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                            {
                                            label_52297f:
                                                uint32_t srcS23 = srcS8 * 5;
                                                uint32_t objC46 = objC21 * 5;
                                                int32_t valA67 = *(arg_60 + 0x14);
                                                long double x87_r7_134 = *(valA67 + (srcS23 << 3))
                                                    - *(valA67 + (objC46 << 3));
                                                float* objC47 = valA67 + (objC46 << 3);
                                                long double x87_r6_107 =
                                                    *(valA67 + (srcS23 << 3) + 4) - objC47[1];
                                                long double x87_r5_16 =
                                                    *(valA67 + (srcS23 << 3) + 8) - objC47[2];
                                                uint32_t srcS25 = dstD7 * 5;
                                                void* valA68 = valA67 + (srcS25 << 3);
                                                float arg_164 = *(valA67 + (srcS25 << 3)) - *objC47;
                                                float arg_168 = *(valA68 + 4) - objC47[1];
                                                long double x87_r4_29 = *(valA68 + 8) - objC47[2];
                                                float* valA69 = tmpD[objC4 + 9];
                                                double* srcS27 = tmpD[objC4 + 0xa];
                                                float arg_11c =
                                                    x87_r4_29 * x87_r6_107 - arg_168 * x87_r5_16;
                                                float arg_120 = -((x87_r4_29 * x87_r7_134
                                                    - arg_164 * x87_r5_16));
                                                long double x87_r7_136 =
                                                    x87_r7_134 * arg_168 - arg_164 * x87_r6_107;
                                                float arg_64 = arg_120 * valA69[1]
                                                    + arg_11c * *valA69 + x87_r7_136 * valA69[2];
                                                float arg_b4 = arg_64;
                                                float arg_68 = arg_120 * valA69[4]
                                                    + arg_11c * valA69[3] + x87_r7_136 * valA69[5];
                                                float arg_b8 = arg_68;
                                                float arg_6c = arg_120 * valA69[7]
                                                    + arg_11c * valA69[6] + x87_r7_136 * valA69[8];
                                                long double x87_r7_141 = *srcS27 - *a2
                                                    + objC47[2] * valA69[2] + valA69[1] * objC47[1]
                                                    + *valA69 * *objC47;
                                                long double x87_r6_131 = objC47[1] * valA69[4]
                                                    + objC47[2] * valA69[5] + *objC47 * valA69[3]
                                                    + srcS27[1] - a2[1];
                                                long double x87_r5_44 = objC47[1] * valA69[7]
                                                    + objC47[2] * valA69[8] + *objC47 * valA69[6]
                                                    + srcS27[2] - a2[2];
                                                long double f12_1 = 0f;
                                                x87_r7_141 - f12_1;

                                                if (!(*(&((x87_r7_141 < f12_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_141, f12_1) ? 1 : 0)
                                                    << 0xa | (x87_r7_141 == f12_1 ? 1 : 0) << 0xe
                                                    | 0x2800) + 1) & 0x40))
                                                {
                                                label_522b80:
                                                    long double x87_r4_46 = 1.0 / sqrtl(
                                                        x87_r7_141 * x87_r7_141
                                                        + x87_r6_131 * x87_r6_131
                                                        + x87_r5_44 * x87_r5_44);
                                                    x87_r7_141 = x87_r7_141 * x87_r4_46;
                                                    x87_r6_131 = x87_r6_131 * x87_r4_46;
                                                    x87_r5_44 = x87_r5_44 * x87_r4_46;
                                                }
                                                else
                                                {
                                                    long double f14_1 = 0f;
                                                    x87_r6_131 - f14_1;

                                                    if (!(*(&((x87_r6_131 < f14_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(x87_r6_131, f14_1) ? 1
                                                            : 0) << 0xa | (x87_r6_131 == f14_1 ? 1 : 0)
                                                            << 0xe | 0x2800) + 1) & 0x40))
                                                        goto label_522b80;

                                                    long double f17_1 = 0f;
                                                    x87_r5_44 - f17_1;

                                                    if (!(*(&((x87_r5_44 < f17_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(x87_r5_44, f17_1) ? 1
                                                            : 0) << 0xa | (x87_r5_44 == f17_1 ? 1 : 0)
                                                            << 0xe | 0x2800) + 1) & 0x40))
                                                        goto label_522b80;
                                                }

                                                long double x87_r4_57 = arg_64;
                                                long double f16_1 = 0f;
                                                x87_r4_57 - f16_1;
                                                long double x87_r4_64;

                                                if (!(*(&((x87_r4_57 < f16_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r4_57, f16_1) ? 1 : 0) << 0xa
                                                    | (x87_r4_57 == f16_1 ? 1 : 0) << 0xe
                                                    | 0x2800) + 1) & 0x40))
                                                {
                                                label_522bd0:
                                                    long double x87_r4_60 = arg_6c;
                                                    long double x87_r3_28 = arg_68;
                                                    long double x87_r2_5 = arg_64;
                                                    long double x87_r4_63 = 1.0 / sqrtl(
                                                        x87_r2_5 * x87_r2_5 + x87_r3_28 * x87_r3_28
                                                        + x87_r4_60 * x87_r4_60);
                                                    arg_b4 = arg_64 * x87_r4_63;
                                                    arg_b8 = arg_b8 * x87_r4_63;
                                                    x87_r4_64 = x87_r4_63 * arg_6c;
                                                }
                                                else
                                                {
                                                    long double x87_r4_58 = arg_68;
                                                    long double f19_1 = 0f;
                                                    x87_r4_58 - f19_1;

                                                    if (!(*(&((x87_r4_58 < f19_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(x87_r4_58, f19_1) ? 1
                                                            : 0) << 0xa | (x87_r4_58 == f19_1 ? 1 : 0)
                                                            << 0xe | 0x2800) + 1) & 0x40))
                                                        goto label_522bd0;

                                                    long double x87_r4_59 = arg_6c;
                                                    long double f21_1 = 0f;
                                                    x87_r4_59 - f21_1;

                                                    if (!(*(&((x87_r4_59 < f21_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(x87_r4_59, f21_1) ? 1
                                                            : 0) << 0xa | (x87_r4_59 == f21_1 ? 1 : 0)
                                                            << 0xe | 0x2800) + 1) & 0x40))
                                                        goto label_522bd0;

                                                    x87_r4_64 = arg_6c;
                                                }

                                                long double x87_r6_135 = x87_r5_44 * x87_r4_64
                                                    + x87_r6_131 * arg_b8 + x87_r7_141 * arg_b4;
                                                long double f20_1 = 0f;
                                                x87_r6_135 - f20_1;
                                                float v_8_6;

                                                if (!(*(&((x87_r6_135 < f20_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r6_135, f20_1) ? 1 : 0)
                                                    << 0xa | (x87_r6_135 == f20_1 ? 1 : 0) << 0xe
                                                    | 0x3800) + 1) & 1) && !result_1)
                                                {
                                                    void arg_188;
                                                    float* dstD17 = &arg_188;
                                                    __return_addr = &arg_58;
                                                    float** ctxB11 = &arg_c;
                                                    float* objC48 = &arg_128;
                                                    a1 = 3;
                                                    bool cond_10_1;

                                                    do
                                                    {
                                                        int32_t valA72 = 0;
                                                        valA72 = *__return_addr;
                                                        int32_t* srcS30 = valA67 + valA72 * 0x28;
                                                        *objC48 = srcS30[8];
                                                        objC48[1] = srcS30[9];
                                                        *objC48 = *(tmpD16 + valA32 * 0x2c + 0x64)
                                                            * *objC48;
                                                        float* valA78 = *ctxB11;
                                                        objC48[1] = *(tmpD16 + valA32 * 0x2c + 0x66)
                                                            * objC48[1];
                                                        long double x87_r7_149 = valA78[2];
                                                        long double f25_1 = 0f;
                                                        x87_r7_149 - f25_1;

                                                        if (!(*(&(
                                                            (x87_r7_149 < f25_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_149, f25_1) ? 1 : 0)
                                                            << 0xa
                                                            | (x87_r7_149 == f25_1 ? 1 : 0)
                                                            << 0xe) + 1) & 0x41))
                                                        {
                                                            float valA80 = *srcS30;
                                                            *ctxB11 = dstD17;
                                                            float valA81 = srcS30[1];
                                                            float valA82 = srcS30[2];
                                                            float arg_14c = valA82 * a16
                                                                + valA81 * a15 + valA80 * arg_f4;
                                                            a13 = arg_14c;
                                                            a14 = valA82 * a19 + valA81 * a18
                                                                + valA80 * a17 + arg_84;
                                                            dstD17[2] = valA82 * a22
                                                                + valA81 * a21 + valA80 * a20
                                                                + arg_88;
                                                            *dstD17 = arg_14c + arg_80;
                                                            dstD17[1] = a14;
                                                        }

                                                        objC48 = &objC48[2];
                                                        ctxB11 = &ctxB11[1];
                                                        __return_addr += 2;
                                                        dstD17 = &dstD17[3];
                                                        cond_10_1 = a1 != 1;
                                                        a1 -= 1;
                                                    } while (cond_10_1);

                                                    if (!a14)
                                                        a2 = objC18[9];
                                                    else if (a14 == 1)
                                                        a2 = *(tmpD16 + valA32 * 0x2c + 0x60);

                                                    v_8_6 = a5 >> 1;
                                                    Light_ComputeDirectionalLight_2(&(&saved_dst)[srcS8 * 3 + 0x82],
                                                        &(&saved_dst)[dstD7 * 3 + 0x82], a5,
                                                        a2, *(tmpD16 + valA32 * 0x2c + 0x64),
                                                        *(tmpD16 + valA32 * 0x2c + 0x66), 0,
                                                        nullptr, a5, a6, a7, a8, v_8_6,
                                                        v_8_6, arg_c,
                                                        &(&saved_dst)[srcS8 * 3 + 0x82],
                                                        &(&saved_dst)[dstD7 * 3 + 0x82],
                                                        &arg_128, &arg_130, &arg_138, a10);
                                                }
                                                else if (a10 || result_1)
                                                {
                                                    void arg_1d0;
                                                    float* dstD18 = &arg_1d0;
                                                    __return_addr = &arg_58;
                                                    float** ctxB12 = &arg_c;
                                                    float* objC52 = &arg_128;
                                                    a1 = 3;
                                                    bool cond_13_1;

                                                    do
                                                    {
                                                        int32_t valA97 = 0;
                                                        valA97 = *__return_addr;
                                                        int32_t* srcS33 = valA67 + valA97 * 0x28;
                                                        *objC52 = srcS33[8];
                                                        objC52[1] = srcS33[9];
                                                        *objC52 = *(tmpD16 + valA32 * 0x2c + 0x64)
                                                            * *objC52;
                                                        float* valA103 = *ctxB12;
                                                        objC52[1] = *(tmpD16 + valA32 * 0x2c + 0x66)
                                                            * objC52[1];
                                                        long double x87_r7_169 = valA103[2];
                                                        long double f24_1 = 0f;
                                                        x87_r7_169 - f24_1;

                                                        if (!(*(&(
                                                            (x87_r7_169 < f24_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_169, f24_1) ? 1 : 0)
                                                            << 0xa
                                                            | (x87_r7_169 == f24_1 ? 1 : 0)
                                                            << 0xe) + 1) & 0x41))
                                                        {
                                                            float valA111 = *srcS33;
                                                            *ctxB12 = dstD18;
                                                            float valA112 = srcS33[1];
                                                            float valA113 = srcS33[2];
                                                            float arg_140 = valA113 * a16
                                                                + valA112 * a15 + valA111 * arg_f4;
                                                            a10 = arg_140;
                                                            a11 = valA113 * a19
                                                                + valA112 * a18 + valA111 * a17
                                                                + arg_84;
                                                            dstD18[2] = (valA113 * a22
                                                                + valA112 * a21 + valA111 * a20
                                                                + arg_88) * 0.999000013f;
                                                            *dstD18 = arg_140 + arg_80;
                                                            dstD18[1] = a11;
                                                        }
                                                        else
                                                        {
                                                            *dstD18 = **ctxB12;
                                                            dstD18[1] = (*ctxB12)[1];
                                                            float* valA109 = *ctxB12;
                                                            *ctxB12 = dstD18;
                                                            dstD18[2] = valA109[2];
                                                            dstD18[2] = dstD18[2] * 1.001001f;
                                                        }

                                                        objC52 = &objC52[2];
                                                        ctxB12 = &ctxB12[1];
                                                        __return_addr += 2;
                                                        dstD18 = &dstD18[3];
                                                        cond_13_1 = a1 != 1;
                                                        a1 -= 1;
                                                    } while (cond_13_1);

                                                    if (!a14)
                                                        a2 = g_a83b28;
                                                    else if (a14 == 1)
                                                        a2 = *(tmpD16 + valA32 * 0x2c + 0x60);

                                                    v_8_6 = a5 >> 1;
                                                    Light_ComputeDirectionalLight_2(&(&saved_dst)[srcS8 * 3 + 0x82],
                                                        &(&saved_dst)[dstD7 * 3 + 0x82], a5,
                                                        a2, *(tmpD16 + valA32 * 0x2c + 0x64),
                                                        *(tmpD16 + valA32 * 0x2c + 0x66), 0,
                                                        nullptr, a5, a6, a7, a8, v_8_6,
                                                        v_8_6, arg_c,
                                                        &(&saved_dst)[srcS8 * 3 + 0x82],
                                                        &(&saved_dst)[dstD7 * 3 + 0x82],
                                                        &arg_128, &arg_130, &arg_138, a10);
                                                }
                                            }
                                            else
                                            {
                                                long double x87_r7_109 =
                                                    (&saved_dst)[srcS8 * 3 + 0x84];
                                                long double f13_1 = 0f;
                                                x87_r7_109 - f13_1;

                                                if (*(&((x87_r7_109 < f13_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_109, f13_1) ? 1 : 0)
                                                        << 0xa | (x87_r7_109 == f13_1 ? 1 : 0) << 0xe)
                                                        + 1) & 0x41)
                                                    goto label_52297f;

                                                long double x87_r7_110 =
                                                    (&saved_dst)[dstD7 * 3 + 0x84];
                                                long double f15_1 = 0f;
                                                x87_r7_110 - f15_1;

                                                if (*(&((x87_r7_110 < f15_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_110, f15_1) ? 1 : 0)
                                                        << 0xa | (x87_r7_110 == f15_1 ? 1 : 0) << 0xe)
                                                        + 1) & 0x41)
                                                    goto label_52297f;

                                                long double x87_r7_113 = (
                                                    (&saved_dst)[dstD7 * 3 + 0x83]
                                                    - (&saved_dst)[valA34 + 0x83]) * (
                                                    (&saved_dst)[srcS8 * 3 + 0x82]
                                                    - (&saved_dst)[valA34 + 0x82]);
                                                long double x87_r6_105 = (
                                                    (&saved_dst)[srcS8 * 3 + 0x83]
                                                    - (&saved_dst)[valA34 + 0x83]) * (
                                                    (&saved_dst)[dstD7 * 3 + 0x82]
                                                    - (&saved_dst)[valA34 + 0x82]);
                                                long double x87_r7_114 = x87_r7_113 - x87_r6_105;
                                                long double f18_1 = 0f;
                                                x87_r7_114 - f18_1;

                                                if (!(*(&((x87_r7_114 < f18_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_114, f18_1) ? 1 : 0)
                                                    << 0xa | (x87_r7_114 == f18_1 ? 1 : 0) << 0xe)
                                                    + 1) & 1) && !result_1)
                                                {
                                                    void** v_8_3 = &arg_c;
                                                    float* valA47 = &arg_128;
                                                    int32_t dstD8 = *(arg_60 + 0x14);
                                                    int16_t* srcS9 = &arg_58;
                                                    __return_addr = 3;
                                                    bool cond_9_1;

                                                    do
                                                    {
                                                        int32_t objC24 = 0;
                                                        objC24 = *srcS9;
                                                        int32_t objC25 = objC24 * 5;
                                                        *valA47 = *(dstD8 + (objC25 << 3) + 0x20);
                                                        valA47[1] = *(dstD8 + (objC25 << 3) + 0x24);
                                                        *valA47 = *(tmpD16 + valA32 * 0x2c + 0x64)
                                                            * *valA47;
                                                        valA47[1] = *(tmpD16 + valA32 * 0x2c + 0x66)
                                                            * valA47[1];

                                                        if (!a10)
                                                        {
                                                            void* objC30 = *v_8_3;
                                                            *valA47 = *(objC30 + 8) * *valA47;
                                                            valA47[1] = *(objC30 + 8) * valA47[1];
                                                        }

                                                        srcS9 = &srcS9[1];
                                                        valA47 = &valA47[2];
                                                        v_8_3 = &v_8_3[1];
                                                        cond_9_1 = __return_addr != 1;
                                                        __return_addr -= 1;
                                                    } while (cond_9_1);

                                                    if (!a14)
                                                        a2 = objC18[9];
                                                    else if (a14 == 1)
                                                        a2 = *(tmpD16 + valA32 * 0x2c + 0x60);

                                                    Light_SampleLightmap(&(&saved_dst)[srcS8 * 3 + 0x82],
                                                        &(&saved_dst)[dstD7 * 3 + 0x82], a5,
                                                        a2, *(tmpD16 + valA32 * 0x2c + 0x64),
                                                        *(tmpD16 + valA32 * 0x2c + 0x66), 0,
                                                        nullptr, a5, a6, arg_c,
                                                        &(&saved_dst)[srcS8 * 3 + 0x82],
                                                        &(&saved_dst)[dstD7 * 3 + 0x82],
                                                        &arg_128, &arg_130, &arg_138, a10);
                                                }
                                                else if (a10 || result_1)
                                                {
                                                    float** dstD9 = &arg_c;
                                                    float** arg_50 = &arg_c;
                                                    int32_t valA58 = *(arg_60 + 0x14);
                                                    void arg_1b4;
                                                    float* objC41 = &arg_1b4;
                                                    float* valA59 = &arg_128;
                                                    __return_addr = &arg_58;
                                                    a1 = 3;
                                                    bool cond_8_1;

                                                    do
                                                    {
                                                        int32_t srcS10 = 0;
                                                        srcS10 = *__return_addr;
                                                        int32_t srcS11 = srcS10 * 5;
                                                        *valA59 = *(valA58 + (srcS11 << 3) + 0x20);
                                                        valA59[1] =
                                                            *(valA58 + (srcS11 << 3) + 0x24);
                                                        *valA59 = *(tmpD16 + valA32 * 0x2c + 0x64)
                                                            * *valA59;
                                                        valA59[1] = *(tmpD16 + valA32 * 0x2c + 0x66)
                                                            * valA59[1];

                                                        if (!a10)
                                                        {
                                                            float* srcS16 = *dstD9;
                                                            *valA59 = *valA59 * srcS16[2];
                                                            valA59[1] = valA59[1] * srcS16[2];
                                                        }

                                                        float* dstD10 = *dstD9;
                                                        valA59 = &valA59[2];
                                                        objC41[-2] = *dstD10;
                                                        objC41[-1] = dstD10[1];
                                                        *objC41 = dstD10[2];
                                                        long double x87_r7_132 =
                                                            *objC41 * 1.001001f;
                                                        objC41 = &objC41[3];
                                                        *arg_50 = &objC41[-2];
                                                        dstD9 = &arg_50[1];
                                                        objC41[-3] = x87_r7_132;
                                                        __return_addr += 2;
                                                        cond_8_1 = a1 != 1;
                                                        arg_50 = dstD9;
                                                        a1 -= 1;
                                                    } while (cond_8_1);

                                                    if (!a14)
                                                        a2 = g_a83b28;
                                                    else if (a14 == 1)
                                                        a2 = *(tmpD16 + valA32 * 0x2c + 0x60);

                                                    Light_SampleLightmap(&(&saved_dst)[srcS8 * 3 + 0x82],
                                                        &(&saved_dst)[dstD7 * 3 + 0x82], a5,
                                                        a2, *(tmpD16 + valA32 * 0x2c + 0x64),
                                                        *(tmpD16 + valA32 * 0x2c + 0x66), 0,
                                                        nullptr, a5, a6, arg_c,
                                                        &(&saved_dst)[srcS8 * 3 + 0x82],
                                                        &(&saved_dst)[dstD7 * 3 + 0x82],
                                                        &arg_128, &arg_130, &arg_138, a10);
                                                }
                                            }
                                        }
                                    }

                                    int32_t objC66 = 0;
                                    objC66 = *(a5 + 0xc);
                                    int32_t valA128;
                                    void* tmpD23;
                                    tmpD23 = HIGHD(0x55555556 * objC66);
                                    valA128 = LOWD(0x55555556 * objC66);
                                    result = tmpD23 >> 0x1f;
                                    bool cond_6_1 = a6 + 1 < objC66 / 3;
                                    a6 += 1;
                                    arg_7c += 6;

                                    if (!cond_6_1)
                                        break;

                                    srcS3 = arg_7c;
                                    objC12 = a5;
                                }

                                ctxB1 = arg_c;
                                objC12 = a5;
                            }

                            result = *(objC12 + 0xe);

                            if (result == 0xffff)
                                break;

                            objC12 = objC12 + (result & 0xffff) + 0x20;
                        }

                        srcS2 = a2;
                        dstD4 = arg_e8;
                    }
                }
            }
            else
            {
                srcS2 = a2;
                dstD4 = arg_e8;
            }

            dstD4 += 1;
            arg_e8 = dstD4;

            if (dstD4 >= *arg_ec)
                break;

            tmpD = arg_ec;
        }
    }

    return result;
}
