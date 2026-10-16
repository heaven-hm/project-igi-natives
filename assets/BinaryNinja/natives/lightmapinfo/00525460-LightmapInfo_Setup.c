#include "LightmapInfo_Setup.h"
int32_t LightmapInfo_Setup(void* a1, int32_t* a2)

{
    void* srcS = a2[6];
    int32_t ctxB = a2[2];
    int32_t flagP = *(srcS + 0xa0);
    int32_t v_12c = flagP;
    long double fpu7 = v_12c;
    void* v_114 = srcS;
    float v_128 = fpu7;
    float* objC3 = a2[4];
    void** v_10c = *a2 + *a2[1] * 0xc + 4;
    int32_t valA2 = **(srcS + 0x88) << 2;
    float v_b8 = 1f / (fpu7 * v_128);
    void* valA3 = Mem_Alloc(valA2, 4);
    int32_t* objC4 = *(srcS + 0x88);
    int32_t i = 0;
    void* v_bc = valA3;

    if (*objC4 > 0)
    {
        int32_t v_140_1 = 0;

        do
        {
            i += 1;
            valA3 += 4;
            void* objC5 = *(v_140_1 + objC4 + 0x20);
            *(valA3 - 4) = *(objC5 + 0xa4);
            *(objC5 + 0xa4) = 0xffffffff;
            objC4 = *(srcS + 0x88);
            v_140_1 += 0x24;
        } while (i < *objC4);
    }

    int32_t dstD8 = (flagP * flagP) << 2;
    float* v_11c = Mem_Alloc(dstD8, 4);
    float* valA5 = Mem_Alloc(dstD8, 4);
    int32_t v_d0 = 0;
    float v_13c = v_128 * 0.5f - 0.5f;

    while (true)
    {
        int32_t v_144_1 = 0;
        float v_15c;
        float v_158;
        float v_154;

        if (!v_d0)
        {
            v_15c = *(a1 + 0x24);
            v_158 = *(a1 + 0x28);
            v_154 = *(a1 + 0x2c);
        }
        else if (v_d0 == 1)
        {
            v_15c = *(a1 + 0x24);
            float valA9 = *(a1 + 0x28);
            v_15c = -(v_15c);
            v_158 = -(valA9);
            v_154 = -(*(a1 + 0x2c));
        }

        v_15c = -(v_15c);
        void* srcS1 = *(srcS + 0x88);
        float v_158_2 = -(v_158);
        float v_154_2 = -(v_154);
        float objC10 = *(srcS1 + 0xc);
        float tmpD7 = *(srcS1 + 0x10);
        float valA12 = *(srcS1 + 0x14);
        float* valA13 = *(srcS1 + 0x24);
        float v_60_1 = valA12 * valA13[5] + tmpD7 * valA13[4] + objC10 * valA13[3];
        float v_5c_1 = valA12 * valA13[8] + tmpD7 * valA13[7] + objC10 * valA13[6];
        double v_7c =
            valA12 * valA13[2] + tmpD7 * valA13[1] + objC10 * *valA13 + **(srcS1 + 0x28);
        double v_74 = v_60_1 + *(*(srcS1 + 0x28) + 8);
        double v_6c_1 = v_5c_1 + *(*(srcS1 + 0x28) + 0x10);
        float objC12 = *(srcS1 + 8);
        float v_28;
        Sys_ResolveSymbol_12(&v_28, &v_15c);
        long double x87_r7_27 = v_154_2;
        long double x87_r6_13 = v_158_2;
        long double x87_r5_9 = v_15c;
        long double x87_r7_29 =
            objC12 / sqrtl(x87_r5_9 * x87_r5_9 + x87_r6_13 * x87_r6_13 + x87_r7_27 * x87_r7_27);
        double v_a0;
        memcpy(&v_a0, &v_7c, 0x18);
        v_15c = v_15c * x87_r7_29;
        v_158 = v_158_2 * x87_r7_29;
        v_154 = v_154_2 * x87_r7_29;
        v_7c = v_7c - v_15c;
        v_74 = v_74 - v_158;
        double v_6c_2 = v_6c_1 - v_154;
        long double x87_r7_38 = v_a0 - v_15c;
        double v_98 = v_98 - v_158;
        double v_90;
        double v_90_1 = v_90 - v_154;
        long double x87_r6_25 = v_15c;
        long double f3_1 = 0f;
        x87_r6_25 - f3_1;

        if (!(*(&((x87_r6_25 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_25, f3_1) ? 1 : 0) << 0xa
            | (x87_r6_25 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        {
        label_5257dc:
            long double x87_r6_28 = v_154;
            long double x87_r5_11 = v_158;
            long double x87_r4_6 = v_15c;
            long double x87_r6_30 =
                1.0 / sqrtl(x87_r4_6 * x87_r4_6 + x87_r5_11 * x87_r5_11 + x87_r6_28 * x87_r6_28);
            v_15c = v_15c * x87_r6_30;
            v_158 = v_158 * x87_r6_30;
            v_154 = v_154 * x87_r6_30;
        }
        else
        {
            long double x87_r6_26 = v_158;
            long double f4_1 = 0f;
            x87_r6_26 - f4_1;

            if (!(*(&((x87_r6_26 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_26, f4_1) ? 1 : 0) << 0xa
                    | (x87_r6_26 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_5257dc;

            long double x87_r6_27 = v_154;
            long double f5_1 = 0f;
            x87_r6_27 - f5_1;

            if (!(*(&((x87_r6_27 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_27, f5_1) ? 1 : 0) << 0xa
                    | (x87_r6_27 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_5257dc;
        }

        long double x87_r6_32 = objC12;
        long double x87_r6_34 = (x87_r6_32 + x87_r6_32) / v_128;
        float v_e8_1 = v_28 * x87_r6_34 + 0f;
        float v_150_1 = v_e8_1;
        float v_24;
        float v_e4_1 = v_24 * x87_r6_34 + 0f;
        float v_20;
        float v_e0_1 = v_20 * x87_r6_34 + 0f;
        float v_1c;
        float v_88_1 = x87_r6_34 * v_1c + 0f;
        float v_dc_1 = v_88_1;
        float v_150_2 = v_88_1;
        float v_18;
        float v_84_1 = x87_r6_34 * v_18 + 0f;
        float v_14;
        float v_80_1 = x87_r6_34 * v_14 + 0f;
        float v_148_2 = -((v_13c * v_e0_1));
        v_98 = -((v_13c * v_e4_1)) + v_98;
        double v_90_2 = v_148_2 + v_90_1;
        float v_14c_4 = -((v_13c * v_84_1));
        float v_148_4 = -((v_13c * v_80_1));
        v_a0 = -((v_13c * v_88_1)) + x87_r7_38 + -((v_13c * v_e8_1));
        v_98 = v_14c_4 + v_98;
        float v_150_3 = v_e8_1;
        float v_140_2 = 0f;
        v_90 = v_148_4 + v_90_2;
        float v_dc_2 = -((v_e8_1 * v_128)) + v_88_1;
        float v_d8_2 = -((v_e4_1 * v_128)) + v_84_1;
        float v_d4_2 = -((v_e0_1 * v_128)) + v_80_1;
        bool cond_0_1;

        do
        {
            double v_104;
            memcpy(&v_104, &v_a0, 0x18);
            float dstD11 = v_13c;
            float* srcS3 = valA5;
            Light_RenderLensflare_2(v_114, &v_7c, &v_28, v_11c, srcS3, flagP, flagP, dstD11, dstD11,
                v_140_2, 1.40129846e-45f, 0f, 1.40129846e-45f, objC12, 0f);
            double v_fc;
            double v_f4;

            if (flagP > 0)
            {
                float* v_118_1 = srcS3;
                int32_t v_138_1 = flagP;
                bool cond_4_1;

                do
                {
                    int32_t v_134_1 = flagP;
                    float* valA20 = v_118_1;
                    float* v_120_1 = &objC3[v_144_1];
                    int32_t* v_108_1 = ctxB + (v_144_1 << 2) - 4;
                    int32_t* objC19 = v_11c - srcS3;
                    float* v_130_1 = valA20;
                    int32_t* v_cc_1 = objC19;

                    while (true)
                    {
                        int32_t i_1 = *(objC19 + valA20);

                        if (i_1 != 0xffffffff)
                        {
                            long double x87_r7_54 = *valA20 - 40.9599991f;
                            long double x87_r6_55 = x87_r7_54 * v_15c;
                            double v_40;
                            memcpy(&v_40, &v_104, 0x18);
                            float v_150_4 = v_15c;
                            float tmpD14 = g_a44344;
                            float v_14c_8 = v_158 * x87_r7_54;
                            v_40 = x87_r6_55 + v_104;
                            double v_38 = v_14c_8 + v_38;
                            double v_30 = x87_r7_54 * v_154 + v_30;
                            float v_b4;
                            DynObj_RegisterSymbol_12(tmpD14, &v_104, &v_40, 0xff, 0f, 0xffffffff, 9, &v_b4);
                            long double x87_r7_57 = v_b4;
                            long double f13_1 = 0f;
                            x87_r7_57 - f13_1;

                            if (!(*(&((x87_r7_57 < f13_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_57, f13_1) ? 1 : 0) << 0xa
                                | (x87_r7_57 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                            {
                                long double x87_r7_59 = v_b4 * v_b8;
                                int32_t* valA23 = v_108_1;

                                if (v_108_1 < ctxB)
                                {
                                label_525bed:
                                    v_108_1[1] = i_1;
                                    *v_120_1 = x87_r7_59;
                                    v_144_1 += 1;
                                    v_108_1 = &v_108_1[1];
                                    v_120_1 = &v_120_1[1];
                                }
                                else
                                {
                                    while (i_1 != *valA23)
                                    {
                                        valA23 -= 4;

                                        if (valA23 < ctxB)
                                            goto label_525bed;
                                    }

                                    int32_t valA35 = (valA23 - ctxB) >> 2;
                                    objC3[valA35] = x87_r7_59 + objC3[valA35];
                                }
                            }
                        }

                        valA20 = &v_130_1[1];
                        bool cond_2_1 = v_134_1 != 1;
                        v_130_1 = valA20;
                        v_134_1 -= 1;
                        v_104 = v_e8_1 + v_104;
                        v_fc = v_e4_1 + v_fc;
                        v_f4 = v_e0_1 + v_f4;

                        if (!cond_2_1)
                            break;

                        objC19 = v_cc_1;
                    }

                    srcS3 = valA5;
                    flagP = v_12c;
                    v_104 = v_dc_2 + v_104;
                    cond_4_1 = v_138_1 != 1;
                    v_118_1 = &v_118_1[v_12c];
                    v_138_1 -= 1;
                    v_fc = v_d8_2 + v_fc;
                    v_f4 = v_d4_2 + v_f4;
                } while (cond_4_1);
                dstD11 = v_13c;
            }

            Light_RenderLensflare_2(v_114, &v_7c, &v_28, v_11c, srcS3, flagP, flagP, dstD11, dstD11,
                v_140_2, 1.40129846e-45f, 1.40129846e-45f, 0f, objC12, 0f);

            if (flagP > 0)
            {
                float* tmpD18 = srcS3;
                int32_t v_108_2 = flagP;
                float* v_120_2 = tmpD18;
                bool cond_6_1;

                do
                {
                    float* v_134_2 = tmpD18;
                    int32_t* flagP1 = ctxB + (v_144_1 << 2) - 4;
                    void* objC30 = v_11c - valA5;
                    void* v_cc_2 = objC30;
                    int32_t v_130_2 = v_12c;

                    while (true)
                    {
                        int32_t i_2 = *(tmpD18 + objC30);

                        if (i_2 != 0xffffffff)
                        {
                            long double x87_r7_74 = *tmpD18 - 40.9599991f;
                            long double x87_r6_63 = x87_r7_74 * v_15c;
                            double v_58;
                            memcpy(&v_58, &v_104, 0x18);
                            float v_150_6 = v_15c;
                            float tmpD19 = g_a44344;
                            float v_14c_10 = v_158 * x87_r7_74;
                            v_58 = x87_r6_63 + v_104;
                            double v_50 = v_14c_10 + v_50;
                            double v_48 = x87_r7_74 * v_154 + v_48;
                            float v_b0;
                            DynObj_RegisterSymbol_12(tmpD19, &v_104, &v_58, 0xff, 0f, 0xffffffff, 9, &v_b0);
                            long double x87_r7_77 = v_b0;
                            long double f15_1 = 0f;
                            x87_r7_77 - f15_1;

                            if (!(*(&((x87_r7_77 < f15_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_77, f15_1) ? 1 : 0) << 0xa
                                | (x87_r7_77 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                            {
                                long double x87_r7_79 = v_b0 * v_b8;
                                int32_t* objC34 = 4 - ctxB + flagP1;
                                int32_t* valA41 = flagP1;

                                if (flagP1 < ctxB)
                                {
                                label_525e4b:
                                    *(objC34 + ctxB) = i_2;
                                    *(objC34 + objC3) = x87_r7_79;
                                    flagP1 = &flagP1[1];
                                    v_144_1 += 1;
                                }
                                else
                                {
                                    while (i_2 != *valA41)
                                    {
                                        valA41 -= 4;

                                        if (valA41 < ctxB)
                                            goto label_525e4b;
                                    }

                                    int32_t valA53 = (valA41 - ctxB) >> 2;
                                    objC3[valA53] = x87_r7_79 + objC3[valA53];
                                }
                            }
                        }

                        tmpD18 = &v_134_2[1];
                        bool cond_3_1 = v_130_2 != 1;
                        v_134_2 = tmpD18;
                        v_130_2 -= 1;
                        v_104 = v_e8_1 + v_104;
                        v_fc = v_e4_1 + v_fc;
                        v_f4 = v_e0_1 + v_f4;

                        if (!cond_3_1)
                            break;

                        objC30 = v_cc_2;
                    }

                    v_104 = v_dc_2 + v_104;
                    tmpD18 = &v_120_2[v_12c];
                    cond_6_1 = v_108_2 != 1;
                    v_120_2 = tmpD18;
                    v_108_2 -= 1;
                    v_fc = v_d8_2 + v_fc;
                    v_f4 = v_d4_2 + v_f4;
                } while (cond_6_1);
                flagP = v_12c;
            }

            cond_0_1 = v_140_2 + 1 < 5;
            v_140_2 += 1;
        } while (cond_0_1);
        int32_t objC38 = v_144_1;
        int32_t* srcS7;

        if (objC38 <= 0)
            srcS7 = a2;
        else
        {
            float* dstD13 = objC3;
            int32_t* valA51 = ctxB - dstD13;
            int32_t v_134_3 = objC38;
            int32_t* v_130_3 = valA51;

            while (true)
            {
                srcS7 = a2;
                int32_t valA55 = *(valA51 + dstD13);
                float* tmpD25 = *(srcS7[3] + (valA55 << 2));
                float* objC41 = *(srcS7[5] + (valA55 << 2));
                long double x87_r7_93 = *tmpD25;
                long double f7_1 = 0f;
                x87_r7_93 - f7_1;

                if (!(*(&((x87_r7_93 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_93, f7_1) ? 1 : 0) << 0xa
                    | (x87_r7_93 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    float* valA59 = *(*(v_114 + 0x88) + 0x24);
                    long double x87_r4_21 = *(*(srcS7[6] + 0x88) + 8);
                    long double x87_r4_22 = x87_r4_21 + x87_r4_21;
                    float v_138_3 = *tmpD25 / (x87_r4_22 * x87_r4_22);
                    long double x87_r6_81 = (valA59[2] * objC41[2] + valA59[1] * objC41[1]
                        + *objC41 * *valA59) * *(a1 + 0x24);
                    long double x87_r7_100 = ((valA59[6] * *objC41 + valA59[8] * objC41[2]
                        + valA59[7] * objC41[1]) * *(a1 + 0x2c)
                        + (valA59[3] * *objC41 + valA59[5] * objC41[2] + valA59[4] * objC41[1]) *
                        *(a1 + 0x28) + x87_r6_81) * v_138_3;
                    long double f11_1 = 0f;
                    x87_r7_100 - f11_1;

                    if (!(*(&((x87_r7_100 < f11_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_100, f11_1) ? 1 : 0) << 0xa
                        | (x87_r7_100 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    {
                        long double x87_r6_84 = (x87_r7_100 - *dstD13) / v_138_3;
                        long double f14_1 = 0.100000001f;
                        x87_r6_84 - f14_1;

                        if (*(&((x87_r6_84 < f14_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_84, f14_1) ? 1 : 0) << 0xa
                                | (x87_r6_84 == f14_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                            *dstD13 = x87_r7_100;
                    }
                }

                dstD13 = &dstD13[1];
                bool cond_8_1 = v_134_3 != 1;
                v_134_3 -= 1;

                if (!cond_8_1)
                    break;

                valA51 = v_130_3;
            }

            objC38 = v_144_1;
        }

        if (!objC38)
        {
            v_10c[1] = 0;
            *v_10c = nullptr;
        }
        else
        {
            int32_t srcS8 = objC38 << 2;
            v_10c[1] = Mem_Alloc(srcS8, 4);
            *v_10c = Mem_Alloc(srcS8, 4);
            int32_t srcS10;
            int32_t dstD16;
            dstD16 = memcpy(v_10c[1], ctxB, srcS8 & 0xfffffffc);
            memcpy(dstD16, srcS10, srcS8 & 3);
            int32_t objC47 = v_144_1 << 2;
            int32_t srcS12;
            int32_t dstD18;
            dstD18 = memcpy(*v_10c, objC3, objC47 & 0xfffffffc);
            memcpy(dstD18, srcS12, objC47 & 3);
            srcS7 = a2;
            objC38 = v_144_1;
        }

        v_10c[2] = objC38;
        int32_t* srcS13 = srcS7[1];
        v_10c = &v_10c[3];
        *srcS13 += 1;
        bool cond_9_1 = v_d0 + 1 < 1;
        v_d0 += 1;

        if (!cond_9_1)
            break;

        srcS = v_114;
    }

    Sys_ExecuteBytecode_2(valA5);
    Sys_ExecuteBytecode_2(v_11c);
    int32_t i_5 = **(v_114 + 0x88);

    if (i_5 - 1 >= 0)
    {
        int32_t valA76 = (i_5 - 1) * 0x24;
        int32_t* tmpD30 = v_bc + ((i_5 - 1) << 2);
        int32_t i_4 = i_5;
        int32_t i_3;

        do
        {
            int32_t ctxB1 = *tmpD30;
            tmpD30 -= 4;
            void* dstD22 = *(*(v_114 + 0x88) + valA76 + 0x20);
            valA76 -= 0x24;
            i_3 = i_4;
            i_4 -= 1;
            *(dstD22 + 0xa4) = ctxB1;
        } while (i_3 != 1);
    }

    return Sys_ExecuteBytecode_2(v_bc);
}
