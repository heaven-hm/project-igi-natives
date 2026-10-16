#include "Display_SyncVSync_19.h"
int32_t* Display_SyncVSync_19(void* a1, void* a2)

{
    float valA = g_bcadc0;
    int32_t* valA1 = *(a1 + 0x6c);

    if (valA1)
    {
        float* valA2 = *(a1 + 0x5a0);
        long double x87_r7_2 = *(a1 + 0x20) - g_bcab08;
        void* dstD1 = *(*(*valA1 + 0xc) + 0xc);
        float v_70_1;
        float v_58;
        float v_50_2;

        if (!valA2)
        {
            long double x87_r6_14 = *(a1 + 0x28) - g_bcab10;
            long double x87_r5_14 = *(a1 + 0x30) - g_bcab18;
            long double x87_r4_6 = g_bcaaf4 * x87_r5_14;
            long double x87_r3_6 = g_bcaaf0 * x87_r6_14;
            v_58 = g_bcaae8 * x87_r5_14 + g_bcaae4 * x87_r6_14 + g_bcaae0 * x87_r7_2;
            v_70_1 = *(a1 + 0x44);
            float v_54_4 = x87_r4_6 + x87_r3_6 + g_bcaaec * x87_r7_2;
            v_50_2 = g_bcab00 * x87_r5_14 + g_bcaafc * x87_r6_14 + g_bcaaf8 * x87_r7_2;
        }
        else
        {
            v_58 = x87_r7_2;
            float v_54_1 = *(a1 + 0x28) - g_bcab10;
            float v_50_1 = *(a1 + 0x30) - g_bcab18;
            v_58 = v_58 + *valA2;
            float v_54_2 = v_54_1 + valA2[1];
            long double x87_r7_12 = v_50_1 + valA2[2];
            float v_54_3 =
                g_bcaaf4 * x87_r7_12 + g_bcaaf0 * v_54_2 + g_bcaaec * v_58;
            long double x87_r6_11 = g_bcab00 * x87_r7_12 + g_bcaafc * v_54_2;
            long double x87_r5_12 = g_bcaaf8 * v_58;
            v_58 = g_bcaae8 * x87_r7_12 + g_bcaae4 * v_54_2 + g_bcaae0 * v_58;
            v_50_2 = x87_r6_11 + x87_r5_12;
            v_70_1 = valA2[3];
        }

        valA1 = Render_DrawBoneMesh(&v_58, v_70_1, 0);

        if (!valA1)
        {
            long double x87_r7_16 = v_50_2 - v_70_1;
            long double f1_1 = *(a2 + 8);
            x87_r7_16 - f1_1;
            valA1 = (x87_r7_16 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_16, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_16 == f1_1 ? 1 : 0) << 0xe | 0x3800;

            if (*(&valA1 + 1) & 0x41)
            {
                valA1 = *(dstD1 + 0x20);

                if (!valA1)
                {
                    void* tmpD5 = *(dstD1 + 0x24);
                    char ctxB = *(a1 + 0x5b4);
                    float v_74 = *(a2 + 8);
                    float* objC7 = *(tmpD5 + 0x10);
                    void* v_5c = tmpD5;
                    long double x87_r6_17 = *(a1 + 0x100);
                    int32_t* valA6 = &g_723518;
                    float v_48;
                    float v_44;

                    if (!ctxB)
                    {
                        char valA7 = *(a1 + 0x5b5);
                        int32_t v_70_2 = 1f / (x87_r6_17 - *(a1 + 0xfc));
                        long double x87_r6_27;

                        if (!valA7)
                            x87_r6_27 = *(a1 + 0xfc);
                        else
                            x87_r6_27 = *(a1 + 0x100);

                        long double x87_r5_19 = *(a1 + 0x59c) * v_70_2;

                        if (valA7)
                            x87_r5_19 = -(x87_r5_19);

                        int32_t i_4 = 0;

                        if (*(tmpD5 + 0xc) > 0)
                        {
                            void* ctxB4 = &g_723520;
                            int32_t i;

                            do
                            {
                                long double x87_r4_19 = (-(x87_r6_27) + *objC7) * x87_r5_19;
                                v_70_2 = x87_r4_19;
                                int32_t tmpD6 = v_70_2;
                                v_70_2 = tmpD6;

                                if (tmpD6 == *(a1 + 0x59c))
                                {
                                    tmpD6 -= 1;
                                    v_70_2 = tmpD6;
                                }

                                long double x87_r4_20 = x87_r4_19 - v_70_2;
                                long double x87_r3_22 = 0f;
                                x87_r3_22 - x87_r4_20;

                                if (*(&((x87_r3_22 < x87_r4_20 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r3_22, x87_r4_20) ? 1 : 0) << 0xa
                                    | (x87_r3_22 == x87_r4_20 ? 1 : 0) << 0xe | 0x2000) + 1) & 0x41)
                                {
                                    long double x87_r3_23 = 1f;
                                    x87_r3_23 - x87_r4_20;

                                    if (*(&((x87_r3_23 < x87_r4_20 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r3_23, x87_r4_20) ? 1 : 0) << 0xa
                                            | (x87_r3_23 == x87_r4_20 ? 1 : 0) << 0xe | 0x2000) + 1) & 1)
                                        x87_r4_20 = 1f;
                                }
                                else
                                    x87_r4_20 = 0f;

                                int32_t valA11 = tmpD6 * 5;
                                long double x87_r3_25 = *(a1 + (valA11 << 3) + 0x208) * objC7[2];
                                void* valA12 = a1 + (valA11 << 3);
                                void* dstD3 = a1 + tmpD6 * 0xc;
                                long double x87_r2_10 = *(a1 + (valA11 << 3) + 0x204) * objC7[1];
                                objC7 = &objC7[8];
                                ctxB4 += 0x1c;
                                long double x87_r3_27 = x87_r3_25 + x87_r2_10 + *(dstD3 + 0x104);
                                long double x87_r2_18 = *(valA12 + 0x214) * objC7[-6]
                                    + *(valA12 + 0x210) * objC7[-7]
                                    + *(a1 + ((tmpD6 * 3 + 0x42) << 2));
                                v_48 = x87_r2_18;
                                v_44 = *(valA12 + 0x220) * objC7[-6]
                                    + *(valA12 + 0x21c) * objC7[-7] + *(dstD3 + 0x10c);
                                i = i_4 + 1;
                                i_4 = i;
                                long double x87_r1_14 = *(valA12 + 0x23c) * objC7[-6]
                                    + *(valA12 + 0x238) * objC7[-7]
                                    + *(a1 + ((tmpD6 * 3 + 0x45) << 2));
                                tmpD5 = v_5c;
                                float v_3c_5 = x87_r1_14;
                                float v_38_5 = *(valA12 + 0x248) * objC7[-6]
                                    + *(valA12 + 0x244) * objC7[-7] + *(dstD3 + 0x118);
                                *(ctxB4 - 0x24) = (*(valA12 + 0x230) * objC7[-6]
                                    + *(valA12 + 0x22c) * objC7[-7] + *(dstD3 + 0x110) - x87_r3_27)
                                    * x87_r4_20 + x87_r3_27;
                                *(ctxB4 - 0x20) = (v_3c_5 - v_48) * x87_r4_20 + v_48;
                                *(ctxB4 - 0x1c) = (v_38_5 - v_44) * x87_r4_20 + v_44;
                            } while (i < *(tmpD5 + 0xc));
                        }
                    }
                    else
                    {
                        int32_t i_1 = 0;
                        float v_34_1 = (x87_r6_17 + *(a1 + 0xfc)) * 0.5f;

                        if (*(tmpD5 + 0xc) > 0)
                        {
                            do
                            {
                                long double x87_r6_21 = *objC7 - v_34_1;
                                long double x87_r5_16 = objC7[1];
                                long double x87_r4_13 = objC7[2];
                                int32_t* ctxB2 = valA6;
                                i_1 += 1;
                                objC7 = &objC7[8];
                                valA6 = &valA6[7];
                                float v_3c_3 = x87_r4_13 * *(a1 + 0x84)
                                    + x87_r6_21 * *(a1 + 0x7c) + x87_r5_16 * *(a1 + 0x80);
                                long double x87_r6_23 =
                                    x87_r4_13 * *(a1 + 0x90) + x87_r6_21 * *(a1 + 0x88);
                                long double x87_r5_17 = x87_r5_16 * *(a1 + 0x8c);
                                *ctxB2 = x87_r4_13 * *(a1 + 0x78) + x87_r6_21 * *(a1 + 0x70)
                                    + x87_r5_16 * *(a1 + 0x74);
                                ctxB2[1] = v_3c_3;
                                ctxB2[2] = x87_r6_23 + x87_r5_17;
                            } while (i_1 < *(tmpD5 + 0xc));
                        }
                    }

                    long double x87_r6_31 = *(a1 + 0x20) - g_bcab08;
                    long double x87_r5_22 = *(a1 + 0x28) - g_bcab10;
                    long double x87_r4_25 = *(a1 + 0x30) - g_bcab18;
                    float v_34_2 =
                        x87_r4_25 * g_bcaae8 + x87_r5_22 * g_bcaae4 + x87_r6_31 * g_bcaae0;
                    float v_30 =
                        x87_r4_25 * g_bcaaf4 + x87_r5_22 * g_bcaaf0 + x87_r6_31 * g_bcaaec;
                    float v_2c =
                        x87_r4_25 * g_bcab00 + x87_r5_22 * g_bcaafc + x87_r6_31 * g_bcaaf8;
                    float v_28 = g_bcaae8 * *(a1 + 0x88) + g_bcaae0 * *(a1 + 0x70)
                        + g_bcaae4 * *(a1 + 0x7c);
                    float v_24 = g_bcaae8 * *(a1 + 0x8c) + g_bcaae0 * *(a1 + 0x74)
                        + g_bcaae4 * *(a1 + 0x80);
                    float v_20 = g_bcaae8 * *(a1 + 0x90) + g_bcaae0 * *(a1 + 0x78)
                        + g_bcaae4 * *(a1 + 0x84);
                    float v_1c = g_bcaaf4 * *(a1 + 0x88) + g_bcaaec * *(a1 + 0x70)
                        + g_bcaaf0 * *(a1 + 0x7c);
                    int32_t i_2 = 0;
                    int32_t v_4 = *(a1 + 0x94) + g_bcab04 + 1;
                    float v_18 = g_bcaaf4 * *(a1 + 0x8c) + g_bcaaec * *(a1 + 0x74)
                        + g_bcaaf0 * *(a1 + 0x80);
                    float v_14 = g_bcaaf4 * *(a1 + 0x90) + g_bcaaec * *(a1 + 0x78)
                        + g_bcaaf0 * *(a1 + 0x84);
                    float v_10 = g_bcab00 * *(a1 + 0x88) + g_bcaaf8 * *(a1 + 0x70)
                        + g_bcaafc * *(a1 + 0x7c);
                    float v_c = g_bcab00 * *(a1 + 0x8c) + g_bcaaf8 * *(a1 + 0x74)
                        + g_bcaafc * *(a1 + 0x80);
                    float v_8 = g_bcab00 * *(a1 + 0x90) + g_bcaaf8 * *(a1 + 0x78)
                        + g_bcaafc * *(a1 + 0x84);

                    if (*(tmpD5 + 0xc) > 0)
                    {
                        float* objC9 = &g_72351c;

                        do
                        {
                            float v_40_4 =
                                v_20 * objC9[1] + v_24 * *objC9 + v_28 * objC9[-1];
                            float v_70_3 = v_40_4;
                            float v_70_4 = v_40_4 + v_34_2;
                            float v_6c_2 =
                                v_14 * objC9[1] + v_18 * *objC9 + v_1c * objC9[-1] + v_30;
                            long double x87_r6_87 =
                                v_8 * objC9[1] + v_c * *objC9 + v_10 * objC9[-1] + v_2c;
                            float v_68_2 = x87_r6_87;
                            long double f3_1 = valA;
                            x87_r6_87 - f3_1;
                            float v_4c;
                            int32_t valA25;

                            if (*(&((x87_r6_87 < f3_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_87, f3_1) ? 1 : 0) << 0xa
                                    | (x87_r6_87 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                valA25 = 0x10;
                            else
                            {
                                long double x87_r6_89 = 1f / v_68_2;
                                v_44 = x87_r6_89;
                                long double x87_r6_92 =
                                    x87_r6_89 * v_70_4 * g_bcab28 + g_bcab30;
                                v_4c = x87_r6_92;
                                long double x87_r5_78 =
                                    g_bcab2c * v_44 * v_6c_2 + g_bcab34;
                                v_48 = x87_r5_78;
                                long double f4_1 = g_bcabd0;
                                x87_r6_92 - f4_1;
                                int32_t ctxB5;

                                ctxB5 = !(*(&((x87_r6_92 < f4_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_92, f4_1) ? 1 : 0) << 0xa
                                    | (x87_r6_92 == f4_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1) ? 0
                                    : 1;

                                long double f6_1 = g_bcabd4;
                                x87_r5_78 - f6_1;
                                int32_t dstD5;

                                dstD5 = !(*(&((x87_r5_78 < f6_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r5_78, f6_1) ? 1 : 0) << 0xa
                                    | (x87_r5_78 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0
                                    : 1;

                                long double f9_1 = g_bcabd8;
                                x87_r6_92 - f9_1;
                                int32_t srcS1;

                                srcS1 = *(&((x87_r6_92 < f9_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_92, f9_1) ? 1 : 0) << 0xa
                                    | (x87_r6_92 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0
                                    : 1;

                                long double x87_r6_93 = v_48;
                                long double f11_1 = g_bcabdc;
                                x87_r6_93 - f11_1;

                                valA25 = *(&((x87_r6_93 < f11_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_93, f11_1) ? 1 : 0) << 0xa
                                    | (x87_r6_93 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41
                                    ? (srcS1 << 1 | dstD5) << 1 | ctxB5
                                    : ((2 | srcS1) << 1 | dstD5) << 1 | ctxB5;
                            }

                            objC9[-1] = v_70_4;
                            *objC9 = v_6c_2;
                            objC9[1] = v_68_2;
                            objC9[2] = v_4c;
                            objC9[5] = valA25;
                            objC9[3] = v_48;
                            objC9[4] = v_44;

                            if (!valA25)
                            {
                                long double x87_r6_94 = v_68_2;
                                long double f5_1 = v_74;
                                x87_r6_94 - f5_1;

                                if (*(&((x87_r6_94 < f5_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_94, f5_1) ? 1 : 0) << 0xa
                                        | (x87_r6_94 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                    v_74 = v_68_2;
                            }

                            i_2 += 1;
                            objC9 = &objC9[7];
                        } while (i_2 < *(tmpD5 + 0xc));
                    }

                    long double f2 = valA;
                    x87_r7_16 - f2;

                    if (*(&((x87_r7_16 < f2 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_16, f2) ? 1 : 0) << 0xa
                        | (x87_r7_16 == f2 ? 1 : 0) << 0xe) + 1) & 1)
                    {
                        void* srcS6 = *(tmpD5 + 0x14);
                        void* v_70_5 = srcS6;

                        if (srcS6)
                        {
                            while (true)
                            {
                                int32_t objC10 = 0;
                                objC10 = *(srcS6 + 0xc);
                                int16_t* ctxB6 = srcS6 + 0x1c;
                                int32_t i_5 = 0;

                                if (objC10 / 3 > 0)
                                {
                                    int32_t objC22;
                                    int32_t i_3;

                                    do
                                    {
                                        int32_t valA34 = 0;
                                        int32_t objC13 = 0;
                                        valA34 = *(srcS6 + 0x12);
                                        objC13 = *ctxB6;
                                        int32_t objC14 = objC13 + valA34;
                                        int32_t objC15 = 0;
                                        objC15 = ctxB6[1];
                                        int32_t objC16 = objC15 + valA34;
                                        int32_t objC17 = 0;
                                        objC17 = ctxB6[2];
                                        int32_t objC18 = objC17 + valA34;
                                        int32_t valA37 = *(objC14 * 0x1c + 0x723530);
                                        int32_t objC20 = *(objC18 * 0x1c + 0x723530);

                                        if (valA37 | *(objC16 * 0x1c + 0x723530) | objC20
                                            && !(objC20 & valA37 & *(objC16 * 0x1c + 0x723530)))
                                        {
                                            long double x87_r7_17 = *(objC14 * 0x1c + &g_723520);
                                            long double f7_1 = v_74;
                                            x87_r7_17 - f7_1;

                                            if (*(&((x87_r7_17 < f7_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_17, f7_1) ? 1 : 0) << 0xa
                                                | (x87_r7_17 == f7_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            {
                                            label_49c730:
                                                float v_88_2 = valA;
                                                float* v_8c_2 = &v_74;
                                                void v_a8;
                                                memcpy(&v_a8,
                                                    objC18 * 0x1c + &g_723518, 0x1c);
                                                void v_c4;
                                                memcpy(&v_c4,
                                                    objC16 * 0x1c + &g_723518, 0x1c);
                                                void v_e0;
                                                memcpy(&v_e0,
                                                    objC14 * 0x1c + &g_723518, 0x1c);
                                                Camera_SetFieldOfView();
                                            }
                                            else
                                            {
                                                long double x87_r7_18 =
                                                    *(objC16 * 0x1c + &g_723520);
                                                long double f8_1 = v_74;
                                                x87_r7_18 - f8_1;

                                                if (*(&((x87_r7_18 < f8_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_18, f8_1) ? 1 : 0)
                                                        << 0xa | (x87_r7_18 == f8_1 ? 1 : 0) << 0xe)
                                                        + 1) & 1)
                                                    goto label_49c730;

                                                long double x87_r7_19 =
                                                    *(objC18 * 0x1c + &g_723520);
                                                long double f10_1 = v_74;
                                                x87_r7_19 - f10_1;

                                                if (*(&((x87_r7_19 < f10_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_19, f10_1) ? 1 : 0)
                                                        << 0xa | (x87_r7_19 == f10_1 ? 1 : 0) << 0xe)
                                                        + 1) & 1)
                                                    goto label_49c730;
                                            }
                                        }

                                        srcS6 = v_70_5;
                                        objC22 = 0;
                                        objC22 = *(srcS6 + 0xc);
                                        i_3 = i_5 + 1;
                                        ctxB6 = &ctxB6[3];
                                        i_5 = i_3;
                                    } while (i_3 < objC22 / 3);
                                }

                                int16_t valA40 = *(srcS6 + 0xe);

                                if (valA40 == 0xffff)
                                    break;

                                v_70_5 = srcS6 + valA40 + 0x1c;
                                srcS6 = srcS6 + valA40 + 0x1c;
                            }
                        }
                    }

                    float valA42 = v_74;
                    *(a2 + 8) = valA42;
                    return valA42;
                }
            }
        }
    }

    return valA1;
}
