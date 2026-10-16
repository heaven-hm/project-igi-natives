#include "Render_SetupLighting_13.h"
int32_t Render_SetupLighting_13(int32_t a1 @ 0x1c, int32_t a2 @ 0x38, int32_t a3 @ 0x54, void** a4, float a5)

{
    void arg_20;
    void* v_24 = &arg_20;
    void arg_3c;
    void* v_20 = &arg_3c;
    int32_t tmpD = a1;
    g_a5e350 += 1;
    int32_t objC2 = a2;
    void arg_4;
    void* v_28 = &arg_4;
    int32_t valA = a3;
    char ctxB2 = tmpD | objC2 | valA;
    int32_t flagP2 = tmpD & objC2 & valA;

    if (!flagP2)
    {
        void v_9c;
        void v_80;
        void v_64;
        float v_1c;
        float v_10;
        float v_c;
        float v_8;

        if (ctxB2 & 0x10)
        {
            int32_t tmpD1 = tmpD & 0x10;
            int32_t objC3 = objC2 & 0x10;
            int32_t valA3 = (valA & 0x10) + tmpD1 + objC3;
            valA3 &= 0xf0;

            if (valA3 != 0x20)
            {
                float* v_30_1;
                float* valA21;
                float* tmpD4;
                float* ctxB7;

                if (!tmpD1)
                {
                    if (!objC3)
                    {
                        valA21 = &arg_4;
                        v_30_1 = &arg_20;
                        tmpD4 = &arg_3c;
                    }
                    else
                    {
                        valA21 = &arg_3c;
                        v_30_1 = &arg_4;
                        tmpD4 = &arg_20;
                    }

                    ctxB7 = v_30_1;
                }
                else
                {
                    ctxB7 = &arg_3c;
                    valA21 = &arg_20;
                    v_30_1 = &arg_3c;
                    tmpD4 = &arg_4;
                }

                long double x87_r7_37 = (a5 - valA21[2]) / (tmpD4[2] - valA21[2]);
                memcpy(&v_1c, tmpD4, 0x1c);
                *tmpD4 = (*tmpD4 - *valA21) * x87_r7_37 + *valA21;
                tmpD4[1] = (tmpD4[1] - valA21[1]) * x87_r7_37 + valA21[1];
                long double x87_r7_39 = x87_r7_37 * (tmpD4[2] - valA21[2]) + valA21[2];
                tmpD4[2] = x87_r7_39;
                long double x87_r7_40 = 1f / x87_r7_39;
                tmpD4[5] = x87_r7_40;
                tmpD4[3] = x87_r7_40 * *tmpD4 * g_bcab28 + g_bcab30;
                tmpD4[4] = g_bcab2c * tmpD4[1] * tmpD4[5] + g_bcab34;
                long double x87_r7_48 = tmpD4[3];
                long double f3_1 = g_bcabd0;
                x87_r7_48 - f3_1;
                int32_t dstD2;

                dstD2 = !(*(&((x87_r7_48 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_48, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_48 == f3_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_49 = tmpD4[4];
                long double f9_1 = g_bcabd4;
                x87_r7_49 - f9_1;
                int32_t srcS4;

                srcS4 = !(*(&((x87_r7_49 < f9_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_49, f9_1) ? 1 : 0) << 0xa
                    | (x87_r7_49 == f9_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_50 = tmpD4[3];
                long double f17_1 = g_bcabd8;
                x87_r7_50 - f17_1;
                int32_t objC5;

                objC5 = *(&((x87_r7_50 < f17_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_50, f17_1) ? 1 : 0) << 0xa
                    | (x87_r7_50 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_51 = tmpD4[4];
                long double f24_1 = g_bcabdc;
                x87_r7_51 - f24_1;
                int32_t valA23;

                valA23 = *(&((x87_r7_51 < f24_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_51, f24_1) ? 1 : 0) << 0xa
                    | (x87_r7_51 == f24_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                tmpD4[6] = (((valA23 * 2) | objC5) << 1 | srcS4) << 1 | dstD2;
                float v_14;
                long double x87_r7_53 = v_14 - ctxB7[2];
                long double x87_r6_39 = (a5 - ctxB7[2]) / x87_r7_53;
                v_1c = (v_1c - *ctxB7) * x87_r6_39 + *ctxB7;
                long double x87_r7_57 = 1f / (x87_r7_53 * x87_r6_39 + ctxB7[2]);
                v_8 = x87_r7_57;
                long double x87_r7_60 = x87_r7_57 * v_1c * g_bcab28 + g_bcab30;
                v_10 = x87_r7_60;
                float v_18;
                long double x87_r6_46 =
                    v_8 * ((v_18 - ctxB7[1]) * x87_r6_39 + ctxB7[1]) * g_bcab2c
                    + g_bcab34;
                v_c = x87_r6_46;
                long double f30_1 = g_bcabd0;
                x87_r7_60 - f30_1;
                int32_t dstD3;

                dstD3 = !(*(&((x87_r7_60 < f30_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_60, f30_1) ? 1 : 0) << 0xa
                    | (x87_r7_60 == f30_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0 : 1;

                long double f36_1 = g_bcabd4;
                x87_r6_46 - f36_1;
                int32_t srcS5;

                srcS5 = !(*(&((x87_r6_46 < f36_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_46, f36_1) ? 1 : 0) << 0xa
                    | (x87_r6_46 == f36_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

                long double f39_1 = g_bcabd8;
                x87_r7_60 - f39_1;
                int32_t objC6;

                objC6 = *(&((x87_r7_60 < f39_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_60, f39_1) ? 1 : 0) << 0xa
                    | (x87_r7_60 == f39_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_61 = v_c;
                long double f41_1 = g_bcabdc;
                x87_r7_61 - f41_1;
                int32_t valA31;

                valA31 = *(&((x87_r7_61 < f41_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_61, f41_1) ? 1 : 0) << 0xa
                    | (x87_r7_61 == f41_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                int32_t v_4_1 = (((valA31 * 2) | objC6) << 1 | srcS5) << 1 | dstD3;
                flagP2 = a1 & a2 & a3;
                float v_44_1 = a5;
                void** v_48_1 = a4;
                ctxB2 = a1 | a2 | a3;
                memcpy(&v_64, tmpD4, 0x1c);
                memcpy(&v_80, &v_1c, 0x1c);
                memcpy(&v_9c, v_30_1, 0x1c);
                Render_SetupLighting_13();
                valA = a3;
                objC2 = a2;
                tmpD = a1;
            }
            else
            {
                float* valA4;
                float* objC4;
                float* tmpD2;
                float* srcS1;

                if (!tmpD1)
                {
                    valA4 = &arg_4;
                    tmpD2 = &arg_4;
                    srcS1 = &arg_20;
                    objC4 = &arg_3c;
                }
                else if (objC3)
                {
                    valA4 = &arg_3c;
                    tmpD2 = &arg_3c;
                    srcS1 = &arg_4;
                    objC4 = &arg_20;
                }
                else
                {
                    valA4 = &arg_20;
                    tmpD2 = &arg_20;
                    srcS1 = &arg_3c;
                    objC4 = &arg_4;
                }

                long double x87_r7_3 = (a5 - valA4[2]) / (srcS1[2] - valA4[2]);
                *srcS1 = (*srcS1 - *valA4) * x87_r7_3 + *valA4;
                srcS1[1] = (srcS1[1] - valA4[1]) * x87_r7_3 + valA4[1];
                long double x87_r7_5 = x87_r7_3 * (srcS1[2] - valA4[2]) + valA4[2];
                srcS1[2] = x87_r7_5;
                long double x87_r7_6 = 1f / x87_r7_5;
                srcS1[5] = x87_r7_6;
                srcS1[3] = x87_r7_6 * g_bcab28 * *srcS1 + g_bcab30;
                srcS1[4] = srcS1[5] * srcS1[1] * g_bcab2c + g_bcab34;
                long double x87_r7_14 = srcS1[3];
                long double f1_1 = g_bcabd0;
                x87_r7_14 - f1_1;
                int32_t dstD1;

                dstD1 = !(*(&((x87_r7_14 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_14, f1_1) ? 1 : 0) << 0xa
                    | (x87_r7_14 == f1_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_15 = srcS1[4];
                long double f4_1 = g_bcabd4;
                x87_r7_15 - f4_1;
                int32_t flagP3;

                flagP3 = !(*(&((x87_r7_15 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_15, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_15 == f4_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_16 = srcS1[3];
                long double f10_1 = g_bcabd8;
                x87_r7_16 - f10_1;
                int32_t ctxB3;

                ctxB3 = *(&((x87_r7_16 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_16, f10_1) ? 1 : 0) << 0xa
                    | (x87_r7_16 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_17 = srcS1[4];
                long double f18_1 = g_bcabdc;
                x87_r7_17 - f18_1;
                int32_t valA6;

                valA6 = *(&((x87_r7_17 < f18_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_17, f18_1) ? 1 : 0) << 0xa
                    | (x87_r7_17 == f18_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                srcS1[6] = (((valA6 * 2) | ctxB3) << 1 | flagP3) << 1 | dstD1;
                long double x87_r7_20 = (a5 - tmpD2[2]) / (objC4[2] - tmpD2[2]);
                *objC4 = (*objC4 - *tmpD2) * x87_r7_20 + *tmpD2;
                objC4[1] = (objC4[1] - tmpD2[1]) * x87_r7_20 + tmpD2[1];
                long double x87_r7_22 = x87_r7_20 * (objC4[2] - tmpD2[2]) + tmpD2[2];
                objC4[2] = x87_r7_22;
                long double x87_r7_23 = 1f / x87_r7_22;
                objC4[5] = x87_r7_23;
                objC4[3] = x87_r7_23 * *objC4 * g_bcab28 + g_bcab30;
                objC4[4] = g_bcab2c * objC4[5] * objC4[1] + g_bcab34;
                long double x87_r7_31 = objC4[3];
                long double f25_1 = g_bcabd0;
                x87_r7_31 - f25_1;
                int32_t ctxB4;

                ctxB4 = !(*(&((x87_r7_31 < f25_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_31, f25_1) ? 1 : 0) << 0xa
                    | (x87_r7_31 == f25_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_32 = objC4[4];
                long double f31_1 = g_bcabd4;
                x87_r7_32 - f31_1;
                int32_t srcS2;

                srcS2 = !(*(&((x87_r7_32 < f31_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_32, f31_1) ? 1 : 0) << 0xa
                    | (x87_r7_32 == f31_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_33 = objC4[3];
                long double f37_1 = g_bcabd8;
                x87_r7_33 - f37_1;
                int32_t tmpD3;

                tmpD3 = *(&((x87_r7_33 < f37_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_33, f37_1) ? 1 : 0) << 0xa
                    | (x87_r7_33 == f37_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_34 = objC4[4];
                long double f40_1 = g_bcabdc;
                x87_r7_34 - f40_1;
                int32_t valA14;

                valA14 = *(&((x87_r7_34 < f40_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_34, f40_1) ? 1 : 0) << 0xa
                    | (x87_r7_34 == f40_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                objC4[6] = (((valA14 * 2) | tmpD3) << 1 | srcS2) << 1 | ctxB4;
                tmpD = a1;
                objC2 = a2;
                valA = a3;
                ctxB2 = tmpD | objC2 | valA;
                flagP2 = tmpD & objC2 & valA;
            }
        }

        if (!flagP2)
        {
            if (!(ctxB2 & 1))
            {
            label_4db3f7:

                if (!(ctxB2 & 2))
                {
                label_4db72a:

                    if (!(ctxB2 & 4))
                    {
                    label_4db9f9:
                        int32_t flagP18;

                        if (ctxB2 & 8)
                        {
                            int32_t tmpD17 = tmpD & 8;
                            int32_t objC27 = objC2 & 8;
                            int32_t valA130 = (valA & 8) + tmpD17 + objC27;
                            valA130 &= 0xf8;

                            if (valA130 != 0x10)
                            {
                                void* valA132;
                                void* tmpD19;
                                void* ctxB26;

                                if (tmpD17)
                                {
                                    tmpD19 = &arg_20;
                                    ctxB26 = &arg_3c;
                                    valA132 = &arg_4;
                                }
                                else if (!objC27)
                                {
                                    tmpD19 = &arg_4;
                                    ctxB26 = &arg_20;
                                    valA132 = &arg_3c;
                                }
                                else
                                {
                                    tmpD19 = &arg_3c;
                                    ctxB26 = &arg_4;
                                    valA132 = &arg_20;
                                }

                                long double x87_r7_191 = (g_bcabdc - *(tmpD19 + 0x10))
                                    / (*(valA132 + 0x10) - *(tmpD19 + 0x10));
                                memcpy(&v_1c, valA132, 0x1c);
                                int32_t v_4_5 = 0;
                                *(valA132 + 0xc) = (*(valA132 + 0xc) - *(tmpD19 + 0xc)) * x87_r7_191
                                    + *(tmpD19 + 0xc);
                                *(valA132 + 0x10) =
                                    (*(valA132 + 0x10) - *(tmpD19 + 0x10)) * x87_r7_191
                                    + *(tmpD19 + 0x10);
                                long double x87_r6_174 =
                                    (*(valA132 + 0x14) - *(tmpD19 + 0x14)) * x87_r7_191
                                    + *(tmpD19 + 0x14);
                                *(valA132 + 0x18) = 0;
                                *(valA132 + 0x14) = x87_r6_174;
                                long double x87_r7_194 = v_c - *(ctxB26 + 0x10);
                                flagP18 = a1 & a2 & a3;
                                long double x87_r6_177 =
                                    (g_bcabdc - *(ctxB26 + 0x10)) / x87_r7_194;
                                float v_44_5 = a5;
                                void** v_48_5 = a4;
                                memcpy(&v_64, valA132, 0x1c);
                                float v_30_11 = x87_r6_177;
                                float v_10_1 =
                                    (v_10 - *(ctxB26 + 0xc)) * v_30_11 + *(ctxB26 + 0xc);
                                float v_c_1 = x87_r7_194 * v_30_11 + *(ctxB26 + 0x10);
                                float v_8_1 =
                                    (v_8 - *(ctxB26 + 0x14)) * v_30_11 + *(ctxB26 + 0x14);
                                memcpy(&v_80, &v_1c, 0x1c);
                                memcpy(&v_9c, ctxB26, 0x1c);
                                Render_SetupLighting_13();
                            }
                            else
                            {
                                void* valA131;
                                void* objC28;
                                void* tmpD18;
                                void* srcS27;

                                if (!tmpD17)
                                {
                                    valA131 = &arg_4;
                                    objC28 = &arg_4;
                                    tmpD18 = &arg_20;
                                    srcS27 = &arg_3c;
                                }
                                else if (objC27)
                                {
                                    valA131 = &arg_3c;
                                    objC28 = &arg_3c;
                                    tmpD18 = &arg_4;
                                    srcS27 = &arg_20;
                                }
                                else
                                {
                                    valA131 = &arg_20;
                                    objC28 = &arg_20;
                                    tmpD18 = &arg_3c;
                                    srcS27 = &arg_4;
                                }

                                long double x87_r7_183 = (g_bcabdc - *(valA131 + 0x10))
                                    / (*(tmpD18 + 0x10) - *(valA131 + 0x10));
                                *(tmpD18 + 0xc) = (*(tmpD18 + 0xc) - *(valA131 + 0xc)) * x87_r7_183
                                    + *(valA131 + 0xc);
                                *(tmpD18 + 0x10) =
                                    (*(tmpD18 + 0x10) - *(valA131 + 0x10)) * x87_r7_183
                                    + *(valA131 + 0x10);
                                long double x87_r6_146 =
                                    (*(tmpD18 + 0x14) - *(valA131 + 0x14)) * x87_r7_183
                                    + *(valA131 + 0x14);
                                *(tmpD18 + 0x18) = 0;
                                *(tmpD18 + 0x14) = x87_r6_146;
                                long double x87_r7_187 = (g_bcabdc - *(objC28 + 0x10))
                                    / (*(srcS27 + 0x10) - *(objC28 + 0x10));
                                *(srcS27 + 0xc) = (*(srcS27 + 0xc) - *(objC28 + 0xc)) * x87_r7_187
                                    + *(objC28 + 0xc);
                                *(srcS27 + 0x10) =
                                    (*(srcS27 + 0x10) - *(objC28 + 0x10)) * x87_r7_187
                                    + *(objC28 + 0x10);
                                long double x87_r6_160 =
                                    (*(srcS27 + 0x14) - *(objC28 + 0x14)) * x87_r7_187
                                    + *(objC28 + 0x14);
                                *(srcS27 + 0x18) = 0;
                                *(srcS27 + 0x14) = x87_r6_160;
                                flagP18 = a1 & a2 & a3;
                            }
                        }

                        if (!(ctxB2 & 8) || !flagP18)
                        {
                            void** dstD4 = &v_28;
                            int32_t i_1 = 3;
                            int32_t i;

                            do
                            {
                                float* tmpD22 = a4[1];
                                void* objC31 = *dstD4;
                                long double x87_r7_201 = *tmpD22;
                                long double x87_r6_182 = *(objC31 + 0xc);
                                x87_r6_182 - x87_r7_201;
                                long double x87_r7_202;

                                if (!(*(&((x87_r6_182 < x87_r7_201 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_182, x87_r7_201) ? 1 : 0) << 0xa
                                        | (x87_r6_182 == x87_r7_201 ? 1 : 0) << 0xe) + 1) & 1))
                                    x87_r7_202 = *(objC31 + 0xc);
                                else
                                    x87_r7_202 = *tmpD22;

                                *tmpD22 = x87_r7_202;
                                void* tmpD23 = a4[1];
                                long double x87_r7_203 = *(tmpD23 + 4);
                                long double x87_r6_183 = *(objC31 + 0x10);
                                x87_r6_183 - x87_r7_203;
                                long double x87_r7_204;

                                if (!(*(&((x87_r6_183 < x87_r7_203 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_183, x87_r7_203) ? 1 : 0) << 0xa
                                        | (x87_r6_183 == x87_r7_203 ? 1 : 0) << 0xe) + 1) & 1))
                                    x87_r7_204 = *(objC31 + 0x10);
                                else
                                    x87_r7_204 = *(tmpD23 + 4);

                                *(tmpD23 + 4) = x87_r7_204;
                                float* tmpD24 = *a4;
                                long double x87_r7_205 = *tmpD24;
                                long double x87_r6_184 = *(objC31 + 0xc);
                                x87_r6_184 - x87_r7_205;
                                long double x87_r7_206;

                                if (*(&((x87_r6_184 < x87_r7_205 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_184, x87_r7_205) ? 1 : 0) << 0xa
                                        | (x87_r6_184 == x87_r7_205 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    x87_r7_206 = *(objC31 + 0xc);
                                else
                                    x87_r7_206 = *tmpD24;

                                *tmpD24 = x87_r7_206;
                                void* tmpD25 = *a4;
                                long double x87_r7_207 = *(tmpD25 + 4);
                                long double x87_r6_185 = *(objC31 + 0x10);
                                x87_r6_185 - x87_r7_207;
                                long double x87_r7_208;

                                if (*(&((x87_r6_185 < x87_r7_207 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_185, x87_r7_207) ? 1 : 0) << 0xa
                                        | (x87_r6_185 == x87_r7_207 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    x87_r7_208 = *(objC31 + 0x10);
                                else
                                    x87_r7_208 = *(tmpD25 + 4);

                                dstD4 = &dstD4[1];
                                i = i_1;
                                i_1 -= 1;
                                *(tmpD25 + 4) = x87_r7_208;
                            } while (i != 1);
                        }
                    }
                    else
                    {
                        int32_t tmpD13 = tmpD & 4;
                        int32_t objC22 = objC2 & 4;
                        int32_t valA110 = (valA & 4) + tmpD13 + objC22;
                        valA110 &= 0xfc;
                        int32_t flagP15;

                        if (valA110 != 8)
                        {
                            void* v_2c_3;
                            void* valA117;
                            void* tmpD16;

                            if (tmpD13)
                            {
                                valA117 = &arg_20;
                                v_2c_3 = &arg_3c;
                                tmpD16 = &arg_4;
                            }
                            else if (!objC22)
                            {
                                valA117 = &arg_4;
                                v_2c_3 = &arg_20;
                                tmpD16 = &arg_3c;
                            }
                            else
                            {
                                valA117 = &arg_3c;
                                v_2c_3 = &arg_4;
                                tmpD16 = &arg_20;
                            }

                            long double x87_r7_161 = *(tmpD16 + 0xc) - *(valA117 + 0xc);
                            long double x87_r6_125 = (g_bcabd8 - *(valA117 + 0xc)) / x87_r7_161;
                            memcpy(&v_1c, tmpD16, 0x1c);
                            float v_30_9 = x87_r6_125;
                            *(tmpD16 + 0xc) = x87_r7_161 * v_30_9 + *(valA117 + 0xc);
                            *(tmpD16 + 0x10) = (*(tmpD16 + 0x10) - *(valA117 + 0x10)) * v_30_9
                                + *(valA117 + 0x10);
                            *(tmpD16 + 0x14) = (*(tmpD16 + 0x14) - *(valA117 + 0x14)) * v_30_9
                                + *(valA117 + 0x14);
                            long double x87_r7_172 = *(tmpD16 + 0x10);
                            long double f13_1 = g_bcabdc;
                            x87_r7_172 - f13_1;
                            int32_t valA119;

                            valA119 = *(&((x87_r7_172 < f13_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_172, f13_1) ? 1 : 0) << 0xa
                                | (x87_r7_172 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            *(tmpD16 + 0x18) = valA119 << 3;
                            long double x87_r7_174 = v_10 - *(v_2c_3 + 0xc);
                            float v_30_10 = (g_bcabd8 - *(v_2c_3 + 0xc)) / x87_r7_174;
                            v_10 = x87_r7_174 * v_30_10 + *(v_2c_3 + 0xc);
                            long double x87_r7_180 =
                                (v_c - *(v_2c_3 + 0x10)) * v_30_10 + *(v_2c_3 + 0x10);
                            v_c = x87_r7_180;
                            v_8 = (v_8 - *(v_2c_3 + 0x14)) * v_30_10 + *(v_2c_3 + 0x14);
                            long double f21_1 = g_bcabdc;
                            x87_r7_180 - f21_1;
                            int32_t valA123;

                            valA123 = *(&((x87_r7_180 < f21_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_180, f21_1) ? 1 : 0) << 0xa
                                | (x87_r7_180 == f21_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            int32_t v_4_4 = valA123 << 3;
                            flagP15 = a1 & a2 & a3;
                            float v_44_4 = a5;
                            void** v_48_4 = a4;
                            ctxB2 = a1 | a2 | a3;
                            memcpy(&v_64, tmpD16, 0x1c);
                            memcpy(&v_80, &v_1c, 0x1c);
                            memcpy(&v_9c, v_2c_3, 0x1c);
                            Render_SetupLighting_13();
                            valA = a3;
                            objC2 = a2;
                            tmpD = a1;
                        }
                        else
                        {
                            void* valA111;
                            void* objC23;
                            void* tmpD14;
                            void* srcS22;

                            if (!tmpD13)
                            {
                                valA111 = &arg_4;
                                tmpD14 = &arg_4;
                                srcS22 = &arg_20;
                                objC23 = &arg_3c;
                            }
                            else if (objC22)
                            {
                                valA111 = &arg_3c;
                                tmpD14 = &arg_3c;
                                srcS22 = &arg_4;
                                objC23 = &arg_20;
                            }
                            else
                            {
                                valA111 = &arg_20;
                                tmpD14 = &arg_20;
                                srcS22 = &arg_3c;
                                objC23 = &arg_4;
                            }

                            long double x87_r7_135 = *(srcS22 + 0xc) - *(valA111 + 0xc);
                            float v_30_7 = (g_bcabd8 - *(valA111 + 0xc)) / x87_r7_135;
                            *(srcS22 + 0xc) = x87_r7_135 * v_30_7 + *(valA111 + 0xc);
                            *(srcS22 + 0x10) = (*(srcS22 + 0x10) - *(valA111 + 0x10)) * v_30_7
                                + *(valA111 + 0x10);
                            *(srcS22 + 0x14) = (*(srcS22 + 0x14) - *(valA111 + 0x14)) * v_30_7
                                + *(valA111 + 0x14);
                            long double x87_r7_146 = *(srcS22 + 0x10);
                            long double f6_1 = g_bcabdc;
                            x87_r7_146 - f6_1;
                            int32_t valA113;

                            valA113 = *(&((x87_r7_146 < f6_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_146, f6_1) ? 1 : 0) << 0xa
                                | (x87_r7_146 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            *(srcS22 + 0x18) = valA113 << 3;
                            long double x87_r7_148 = *(objC23 + 0xc) - *(tmpD14 + 0xc);
                            float v_30_8 = (g_bcabd8 - *(tmpD14 + 0xc)) / x87_r7_148;
                            *(objC23 + 0xc) = x87_r7_148 * v_30_8 + *(tmpD14 + 0xc);
                            *(objC23 + 0x10) =
                                (*(objC23 + 0x10) - *(tmpD14 + 0x10)) * v_30_8 + *(tmpD14 + 0x10);
                            *(objC23 + 0x14) =
                                (*(objC23 + 0x14) - *(tmpD14 + 0x14)) * v_30_8 + *(tmpD14 + 0x14);
                            long double x87_r7_159 = *(objC23 + 0x10);
                            long double f14_1 = g_bcabdc;
                            x87_r7_159 - f14_1;
                            int32_t valA116;

                            valA116 = *(&((x87_r7_159 < f14_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_159, f14_1) ? 1 : 0) << 0xa
                                | (x87_r7_159 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            *(objC23 + 0x18) = valA116 << 3;
                            tmpD = a1;
                            objC2 = a2;
                            valA = a3;
                            ctxB2 = tmpD | objC2 | valA;
                            flagP15 = tmpD & objC2 & valA;
                        }

                        if (!flagP15)
                            goto label_4db9f9;
                    }
                }
                else
                {
                    int32_t tmpD9 = tmpD & 2;
                    int32_t objC16 = objC2 & 2;
                    int32_t valA81 = (valA & 2) + tmpD9 + objC16;
                    valA81 &= 0xfe;
                    int32_t flagP12;

                    if (valA81 != 4)
                    {
                        void* v_2c_2;
                        void* valA93;
                        void* tmpD12;
                        void* ctxB19;

                        if (!tmpD9)
                        {
                            if (!objC16)
                            {
                                valA93 = &arg_4;
                                v_2c_2 = &arg_20;
                                tmpD12 = &arg_3c;
                            }
                            else
                            {
                                valA93 = &arg_3c;
                                v_2c_2 = &arg_4;
                                tmpD12 = &arg_20;
                            }

                            ctxB19 = v_2c_2;
                        }
                        else
                        {
                            ctxB19 = &arg_3c;
                            valA93 = &arg_20;
                            v_2c_2 = &arg_3c;
                            tmpD12 = &arg_4;
                        }

                        long double x87_r7_126 = (g_bcabd4 - *(valA93 + 0x10))
                            / (*(tmpD12 + 0x10) - *(valA93 + 0x10));
                        memcpy(&v_1c, tmpD12, 0x1c);
                        *(tmpD12 + 0xc) =
                            (*(tmpD12 + 0xc) - *(valA93 + 0xc)) * x87_r7_126 + *(valA93 + 0xc);
                        *(tmpD12 + 0x10) =
                            (*(tmpD12 + 0x10) - *(valA93 + 0x10)) * x87_r7_126 + *(valA93 + 0x10);
                        *(tmpD12 + 0x14) =
                            (*(tmpD12 + 0x14) - *(valA93 + 0x14)) * x87_r7_126 + *(valA93 + 0x14);
                        long double x87_r7_128 = *(tmpD12 + 0xc);
                        long double f11_1 = g_bcabd8;
                        x87_r7_128 - f11_1;
                        int32_t objC18;

                        objC18 = *(&((x87_r7_128 < f11_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_128, f11_1) ? 1 : 0) << 0xa
                            | (x87_r7_128 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        long double x87_r7_129 = *(tmpD12 + 0x10);
                        long double f19_1 = g_bcabdc;
                        x87_r7_129 - f19_1;
                        int32_t valA95;

                        valA95 = *(&((x87_r7_129 < f19_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_129, f19_1) ? 1 : 0) << 0xa
                            | (x87_r7_129 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        *(tmpD12 + 0x18) = ((valA95 * 2) | objC18) << 2;
                        long double x87_r7_131 = v_c - *(ctxB19 + 0x10);
                        float v_30_6 = (g_bcabd4 - *(ctxB19 + 0x10)) / x87_r7_131;
                        v_10 = (v_10 - *(ctxB19 + 0xc)) * v_30_6 + *(ctxB19 + 0xc);
                        long double x87_r7_133 = x87_r7_131 * v_30_6 + *(ctxB19 + 0x10);
                        v_c = x87_r7_133;
                        v_8 = (v_8 - *(ctxB19 + 0x14)) * v_30_6 + *(ctxB19 + 0x14);
                        long double x87_r6_116 = v_10;
                        long double f26_1 = g_bcabd8;
                        x87_r6_116 - f26_1;
                        int32_t objC19;

                        objC19 = *(&((x87_r6_116 < f26_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_116, f26_1) ? 1 : 0) << 0xa
                            | (x87_r6_116 == f26_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

                        long double f33_1 = g_bcabdc;
                        x87_r7_133 - f33_1;
                        int32_t valA100;

                        valA100 = *(&((x87_r7_133 < f33_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_133, f33_1) ? 1 : 0) << 0xa
                            | (x87_r7_133 == f33_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        int32_t v_4_3 = ((valA100 * 2) | objC19) << 2;
                        flagP12 = a1 & a2 & a3;
                        float v_44_3 = a5;
                        void** v_48_3 = a4;
                        ctxB2 = a1 | a2 | a3;
                        memcpy(&v_64, tmpD12, 0x1c);
                        memcpy(&v_80, &v_1c, 0x1c);
                        memcpy(&v_9c, v_2c_2, 0x1c);
                        Render_SetupLighting_13();
                        valA = a3;
                        objC2 = a2;
                        tmpD = a1;
                    }
                    else
                    {
                        void* valA82;
                        void* objC17;
                        void* tmpD10;
                        void* srcS17;

                        if (!tmpD9)
                        {
                            valA82 = &arg_4;
                            tmpD10 = &arg_4;
                            srcS17 = &arg_20;
                            objC17 = &arg_3c;
                        }
                        else if (objC16)
                        {
                            valA82 = &arg_3c;
                            tmpD10 = &arg_3c;
                            srcS17 = &arg_4;
                            objC17 = &arg_20;
                        }
                        else
                        {
                            valA82 = &arg_20;
                            tmpD10 = &arg_20;
                            srcS17 = &arg_3c;
                            objC17 = &arg_4;
                        }

                        long double x87_r7_114 = (g_bcabd4 - *(valA82 + 0x10))
                            / (*(srcS17 + 0x10) - *(valA82 + 0x10));
                        *(srcS17 + 0xc) =
                            (*(srcS17 + 0xc) - *(valA82 + 0xc)) * x87_r7_114 + *(valA82 + 0xc);
                        *(srcS17 + 0x10) =
                            (*(srcS17 + 0x10) - *(valA82 + 0x10)) * x87_r7_114 + *(valA82 + 0x10);
                        *(srcS17 + 0x14) =
                            (*(srcS17 + 0x14) - *(valA82 + 0x14)) * x87_r7_114 + *(valA82 + 0x14);
                        long double x87_r7_116 = *(srcS17 + 0xc);
                        long double f5_1 = g_bcabd8;
                        x87_r7_116 - f5_1;
                        int32_t ctxB16;

                        ctxB16 = *(&((x87_r7_116 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_116, f5_1) ? 1 : 0) << 0xa
                            | (x87_r7_116 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        long double x87_r7_117 = *(srcS17 + 0x10);
                        long double f12_1 = g_bcabdc;
                        x87_r7_117 - f12_1;
                        int32_t valA84;

                        valA84 = *(&((x87_r7_117 < f12_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_117, f12_1) ? 1 : 0) << 0xa
                            | (x87_r7_117 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        *(srcS17 + 0x18) = ((valA84 * 2) | ctxB16) << 2;
                        long double x87_r7_120 = (g_bcabd4 - *(tmpD10 + 0x10))
                            / (*(objC17 + 0x10) - *(tmpD10 + 0x10));
                        *(objC17 + 0xc) =
                            (*(objC17 + 0xc) - *(tmpD10 + 0xc)) * x87_r7_120 + *(tmpD10 + 0xc);
                        *(objC17 + 0x10) =
                            (*(objC17 + 0x10) - *(tmpD10 + 0x10)) * x87_r7_120 + *(tmpD10 + 0x10);
                        *(objC17 + 0x14) =
                            (*(objC17 + 0x14) - *(tmpD10 + 0x14)) * x87_r7_120 + *(tmpD10 + 0x14);
                        long double x87_r7_122 = *(objC17 + 0xc);
                        long double f20_1 = g_bcabd8;
                        x87_r7_122 - f20_1;
                        int32_t tmpD11;

                        tmpD11 = *(&((x87_r7_122 < f20_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_122, f20_1) ? 1 : 0) << 0xa
                            | (x87_r7_122 == f20_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        long double x87_r7_123 = *(objC17 + 0x10);
                        long double f27_1 = g_bcabdc;
                        x87_r7_123 - f27_1;
                        int32_t valA89;

                        valA89 = *(&((x87_r7_123 < f27_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_123, f27_1) ? 1 : 0) << 0xa
                            | (x87_r7_123 == f27_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        *(objC17 + 0x18) = ((valA89 * 2) | tmpD11) << 2;
                        tmpD = a1;
                        objC2 = a2;
                        valA = a3;
                        ctxB2 = tmpD | objC2 | valA;
                        flagP12 = tmpD & objC2 & valA;
                    }

                    if (!flagP12)
                        goto label_4db72a;
                }
            }
            else
            {
                int32_t tmpD5 = tmpD & 1;
                int32_t objC9 = objC2 & 1;
                int32_t flagP9;

                if ((valA & 1) + tmpD5 + objC9 != 2)
                {
                    void* v_2c_1;
                    void* valA60;
                    void* tmpD8;
                    void* ctxB13;

                    if (!tmpD5)
                    {
                        void* objC11;

                        if (!objC9)
                        {
                            valA60 = &arg_4;
                            tmpD8 = &arg_20;
                            objC11 = &arg_3c;
                        }
                        else
                        {
                            valA60 = &arg_3c;
                            tmpD8 = &arg_4;
                            objC11 = &arg_20;
                        }

                        v_2c_1 = objC11;
                        ctxB13 = objC11;
                    }
                    else
                    {
                        ctxB13 = &arg_4;
                        valA60 = &arg_20;
                        tmpD8 = &arg_3c;
                        v_2c_1 = &arg_4;
                    }

                    long double x87_r7_93 = *(ctxB13 + 0xc) - *(valA60 + 0xc);
                    long double x87_r6_55 = (g_bcabd0 - *(valA60 + 0xc)) / x87_r7_93;
                    memcpy(&v_1c, ctxB13, 0x1c);
                    float v_30_4 = x87_r6_55;
                    *(ctxB13 + 0xc) = x87_r7_93 * v_30_4 + *(valA60 + 0xc);
                    *(ctxB13 + 0x10) =
                        (*(ctxB13 + 0x10) - *(valA60 + 0x10)) * v_30_4 + *(valA60 + 0x10);
                    *(ctxB13 + 0x14) =
                        (*(ctxB13 + 0x14) - *(valA60 + 0x14)) * v_30_4 + *(valA60 + 0x14);
                    long double x87_r7_104 = *(ctxB13 + 0x10);
                    long double f7_1 = g_bcabd4;
                    x87_r7_104 - f7_1;
                    int32_t srcS12;

                    srcS12 = !(*(&((x87_r7_104 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_104, f7_1) ? 1 : 0) << 0xa
                        | (x87_r7_104 == f7_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double x87_r7_105 = *(ctxB13 + 0xc);
                    long double f15_1 = g_bcabd8;
                    x87_r7_105 - f15_1;
                    int32_t objC12;

                    objC12 = *(&((x87_r7_105 < f15_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_105, f15_1) ? 1 : 0) << 0xa
                        | (x87_r7_105 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double x87_r7_106 = *(ctxB13 + 0x10);
                    long double f22_1 = g_bcabdc;
                    x87_r7_106 - f22_1;
                    int32_t valA62;

                    valA62 = *(&((x87_r7_106 < f22_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_106, f22_1) ? 1 : 0) << 0xa
                        | (x87_r7_106 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    *(ctxB13 + 0x18) = (((valA62 * 2) | objC12) << 1 | srcS12) << 1;
                    long double x87_r7_108 = v_10 - *(tmpD8 + 0xc);
                    float v_30_5 = (g_bcabd0 - *(tmpD8 + 0xc)) / x87_r7_108;
                    long double x87_r7_110 = x87_r7_108 * v_30_5 + *(tmpD8 + 0xc);
                    v_10 = x87_r7_110;
                    long double x87_r6_62 = (v_c - *(tmpD8 + 0x10)) * v_30_5 + *(tmpD8 + 0x10);
                    v_c = x87_r6_62;
                    v_8 = (v_8 - *(tmpD8 + 0x14)) * v_30_5 + *(tmpD8 + 0x14);
                    long double f28_1 = g_bcabd4;
                    x87_r6_62 - f28_1;
                    int32_t srcS13;

                    srcS13 = !(*(&((x87_r6_62 < f28_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_62, f28_1) ? 1 : 0) << 0xa
                        | (x87_r6_62 == f28_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

                    long double f34_1 = g_bcabd8;
                    x87_r7_110 - f34_1;
                    int32_t objC13;

                    objC13 = *(&((x87_r7_110 < f34_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_110, f34_1) ? 1 : 0) << 0xa
                        | (x87_r7_110 == f34_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double x87_r7_111 = v_c;
                    long double f38_1 = g_bcabdc;
                    x87_r7_111 - f38_1;
                    int32_t valA69;

                    valA69 = *(&((x87_r7_111 < f38_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_111, f38_1) ? 1 : 0) << 0xa
                        | (x87_r7_111 == f38_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    int32_t v_4_2 = (((valA69 * 2) | objC13) << 1 | srcS13) << 1;
                    flagP9 = a1 & a2 & a3;
                    float v_44_2 = a5;
                    void** v_48_2 = a4;
                    ctxB2 = a1 | a2 | a3;
                    memcpy(&v_64, v_2c_1, 0x1c);
                    memcpy(&v_80, &v_1c, 0x1c);
                    memcpy(&v_9c, tmpD8, 0x1c);
                    Render_SetupLighting_13();
                    valA = a3;
                    objC2 = a2;
                    tmpD = a1;
                }
                else
                {
                    void* valA45;
                    void* objC10;
                    void* tmpD6;
                    void* srcS9;

                    if (!tmpD5)
                    {
                        valA45 = &arg_4;
                        tmpD6 = &arg_4;
                        srcS9 = &arg_20;
                        objC10 = &arg_3c;
                    }
                    else if (objC9)
                    {
                        valA45 = &arg_3c;
                        tmpD6 = &arg_3c;
