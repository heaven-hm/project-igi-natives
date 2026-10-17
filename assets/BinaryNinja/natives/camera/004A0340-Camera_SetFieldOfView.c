// Original IGI.EXE function: Camera_SetFieldOfView (VA 0x004A0340; static CFG gate FAIL, CFG score 0.733).
#include "Camera_SetFieldOfView.h"
int32_t Camera_SetFieldOfView(float a1 @ 0x18, int32_t a2, float a3 @ 0x34, int32_t a4, float a5 @ 0x50, int32_t a6, float* a7, float a8)

{
    int32_t tmpD = a4;
    int32_t valA = a6;
    g_7af1e0 += 1;
    int32_t objC1 = a2;
    char ctxB2 = objC1 | tmpD | valA;
    int32_t flagP2 = objC1 & tmpD & valA;

    if (!flagP2)
    {
        void v_90;
        void v_74;
        void v_58;
        float v_38;
        float v_1c;
        float v_10;
        float v_c;
        float v_8;
        void arg_4;
        void arg_20;
        void arg_3c;

        if (ctxB2 & 0x10)
        {
            int32_t objC2 = objC1 & 0x10;
            int32_t tmpD1 = tmpD & 0x10;
            int32_t valA3 = (valA & 0x10) + objC2 + tmpD1;
            valA3 &= 0xf0;

            if (valA3 != 0x20)
            {
                float* v_24_1;
                float* valA21;
                float* tmpD4;
                float* ctxB6;

                if (!objC2)
                {
                    if (!tmpD1)
                    {
                        valA21 = &arg_4;
                        v_24_1 = &arg_20;
                        tmpD4 = &arg_3c;
                    }
                    else
                    {
                        valA21 = &arg_3c;
                        v_24_1 = &arg_4;
                        tmpD4 = &arg_20;
                    }

                    ctxB6 = v_24_1;
                }
                else
                {
                    ctxB6 = &arg_3c;
                    valA21 = &arg_20;
                    v_24_1 = &arg_3c;
                    tmpD4 = &arg_4;
                }

                long double x87_r7_37 = (a8 - valA21[2]) / (tmpD4[2] - valA21[2]);
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
                int32_t dstD3;

                dstD3 = !(*(&((x87_r7_48 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_48, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_48 == f3_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_49 = tmpD4[4];
                long double f8_1 = g_bcabd4;
                x87_r7_49 - f8_1;
                int32_t srcS4;

                srcS4 = !(*(&((x87_r7_49 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_49, f8_1) ? 1 : 0) << 0xa
                    | (x87_r7_49 == f8_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_50 = tmpD4[3];
                long double f16_1 = g_bcabd8;
                x87_r7_50 - f16_1;
                int32_t objC4;

                objC4 = *(&((x87_r7_50 < f16_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_50, f16_1) ? 1 : 0) << 0xa
                    | (x87_r7_50 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_51 = tmpD4[4];
                long double f25_1 = g_bcabdc;
                x87_r7_51 - f25_1;
                int32_t valA23;

                valA23 = *(&((x87_r7_51 < f25_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_51, f25_1) ? 1 : 0) << 0xa
                    | (x87_r7_51 == f25_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                tmpD4[6] = (((valA23 * 2) | objC4) << 1 | srcS4) << 1 | dstD3;
                float v_14;
                long double x87_r7_53 = v_14 - ctxB6[2];
                long double x87_r6_39 = (a8 - ctxB6[2]) / x87_r7_53;
                v_1c = (v_1c - *ctxB6) * x87_r6_39 + *ctxB6;
                long double x87_r7_57 = 1f / (x87_r7_53 * x87_r6_39 + ctxB6[2]);
                v_8 = x87_r7_57;
                long double x87_r7_60 = x87_r7_57 * v_1c * g_bcab28 + g_bcab30;
                v_10 = x87_r7_60;
                float v_18;
                long double x87_r6_46 =
                    v_8 * ((v_18 - ctxB6[1]) * x87_r6_39 + ctxB6[1]) * g_bcab2c
                    + g_bcab34;
                v_c = x87_r6_46;
                long double f33_1 = g_bcabd0;
                x87_r7_60 - f33_1;
                int32_t dstD4;

                dstD4 = !(*(&((x87_r7_60 < f33_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_60, f33_1) ? 1 : 0) << 0xa
                    | (x87_r7_60 == f33_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0 : 1;

                long double f38_1 = g_bcabd4;
                x87_r6_46 - f38_1;
                int32_t srcS5;

                srcS5 = !(*(&((x87_r6_46 < f38_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_46, f38_1) ? 1 : 0) << 0xa
                    | (x87_r6_46 == f38_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

                long double f41_1 = g_bcabd8;
                x87_r7_60 - f41_1;
                int32_t objC5;

                objC5 = *(&((x87_r7_60 < f41_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_60, f41_1) ? 1 : 0) << 0xa
                    | (x87_r7_60 == f41_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_61 = v_c;
                long double f43_1 = g_bcabdc;
                x87_r7_61 - f43_1;
                int32_t valA31;

                valA31 = *(&((x87_r7_61 < f43_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_61, f43_1) ? 1 : 0) << 0xa
                    | (x87_r7_61 == f43_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                int32_t v_4_1 = (((valA31 * 2) | objC5) << 1 | srcS5) << 1 | dstD4;
                ctxB2 = a2 | a4 | a6;
                flagP2 = a2 & a4 & a6;
                v_38 = a8;
                float* v_3c_1 = a7;
                memcpy(&v_58, tmpD4, 0x1c);
                memcpy(&v_74, &v_1c, 0x1c);
                memcpy(&v_90, v_24_1, 0x1c);
                Camera_SetFieldOfView();
                objC1 = a2;
                tmpD = a4;
                valA = a6;
            }
            else
            {
                float* valA4;
                float* objC3;
                float* tmpD2;
                float* srcS1;

                if (!objC2)
                {
                    valA4 = &arg_4;
                    tmpD2 = &arg_4;
                    srcS1 = &arg_20;
                    objC3 = &arg_3c;
                }
                else if (tmpD1)
                {
                    valA4 = &arg_3c;
                    tmpD2 = &arg_3c;
                    srcS1 = &arg_4;
                    objC3 = &arg_20;
                }
                else
                {
                    valA4 = &arg_20;
                    tmpD2 = &arg_20;
                    srcS1 = &arg_3c;
                    objC3 = &arg_4;
                }

                long double x87_r7_3 = (a8 - valA4[2]) / (srcS1[2] - valA4[2]);
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
                int32_t flagP3;

                flagP3 = !(*(&((x87_r7_14 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_14, f1_1) ? 1 : 0) << 0xa
                    | (x87_r7_14 == f1_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_15 = srcS1[4];
                long double f4_1 = g_bcabd4;
                x87_r7_15 - f4_1;
                int32_t ctxB3;

                ctxB3 = !(*(&((x87_r7_15 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_15, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_15 == f4_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_16 = srcS1[3];
                long double f9_1 = g_bcabd8;
                x87_r7_16 - f9_1;
                int32_t dstD1;

                dstD1 = *(&((x87_r7_16 < f9_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_16, f9_1) ? 1 : 0) << 0xa
                    | (x87_r7_16 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_17 = srcS1[4];
                long double f17_1 = g_bcabdc;
                x87_r7_17 - f17_1;
                int32_t valA6;

                valA6 = *(&((x87_r7_17 < f17_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_17, f17_1) ? 1 : 0) << 0xa
                    | (x87_r7_17 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                srcS1[6] = (((valA6 * 2) | dstD1) << 1 | ctxB3) << 1 | flagP3;
                long double x87_r7_20 = (a8 - tmpD2[2]) / (objC3[2] - tmpD2[2]);
                *objC3 = (*objC3 - *tmpD2) * x87_r7_20 + *tmpD2;
                objC3[1] = (objC3[1] - tmpD2[1]) * x87_r7_20 + tmpD2[1];
                long double x87_r7_22 = x87_r7_20 * (objC3[2] - tmpD2[2]) + tmpD2[2];
                objC3[2] = x87_r7_22;
                long double x87_r7_23 = 1f / x87_r7_22;
                objC3[5] = x87_r7_23;
                objC3[3] = x87_r7_23 * *objC3 * g_bcab28 + g_bcab30;
                objC3[4] = g_bcab2c * objC3[5] * objC3[1] + g_bcab34;
                long double x87_r7_31 = objC3[3];
                long double f26_1 = g_bcabd0;
                x87_r7_31 - f26_1;
                int32_t dstD2;

                dstD2 = !(*(&((x87_r7_31 < f26_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_31, f26_1) ? 1 : 0) << 0xa
                    | (x87_r7_31 == f26_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_32 = objC3[4];
                long double f34_1 = g_bcabd4;
                x87_r7_32 - f34_1;
                int32_t srcS2;

                srcS2 = !(*(&((x87_r7_32 < f34_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_32, f34_1) ? 1 : 0) << 0xa
                    | (x87_r7_32 == f34_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_33 = objC3[3];
                long double f39_1 = g_bcabd8;
                x87_r7_33 - f39_1;
                int32_t tmpD3;

                tmpD3 = *(&((x87_r7_33 < f39_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_33, f39_1) ? 1 : 0) << 0xa
                    | (x87_r7_33 == f39_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_34 = objC3[4];
                long double f42_1 = g_bcabdc;
                x87_r7_34 - f42_1;
                int32_t valA14;

                valA14 = *(&((x87_r7_34 < f42_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_34, f42_1) ? 1 : 0) << 0xa
                    | (x87_r7_34 == f42_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                objC3[6] = (((valA14 * 2) | tmpD3) << 1 | srcS2) << 1 | dstD2;
                objC1 = a2;
                tmpD = a4;
                valA = a6;
                ctxB2 = objC1 | tmpD | valA;
                flagP2 = objC1 & tmpD & valA;
            }
        }

        if (!flagP2)
        {
            if (ctxB2 & 1)
            {
                int32_t objC8 = objC1 & 1;
                int32_t tmpD5 = tmpD & 1;

                if ((valA & 1) + objC8 + tmpD5 != 2)
                {
                    void* v_20_1;
                    void* valA58;
                    void* tmpD8;
                    void* ctxB12;

                    if (!objC8)
                    {
                        void* objC10;

                        if (!tmpD5)
                        {
                            valA58 = &arg_4;
                            tmpD8 = &arg_20;
                            objC10 = &arg_3c;
                        }
                        else
                        {
                            valA58 = &arg_3c;
                            tmpD8 = &arg_4;
                            objC10 = &arg_20;
                        }

                        v_20_1 = objC10;
                        ctxB12 = objC10;
                    }
                    else
                    {
                        ctxB12 = &arg_4;
                        valA58 = &arg_20;
                        tmpD8 = &arg_3c;
                        v_20_1 = &arg_4;
                    }

                    long double x87_r7_93 = *(ctxB12 + 0xc) - *(valA58 + 0xc);
                    long double x87_r6_55 = (g_bcabd0 - *(valA58 + 0xc)) / x87_r7_93;
                    memcpy(&v_1c, ctxB12, 0x1c);
                    float v_24_4 = x87_r6_55;
                    *(ctxB12 + 0xc) = x87_r7_93 * v_24_4 + *(valA58 + 0xc);
                    *(ctxB12 + 0x10) =
                        (*(ctxB12 + 0x10) - *(valA58 + 0x10)) * v_24_4 + *(valA58 + 0x10);
                    *(ctxB12 + 0x14) =
                        (*(ctxB12 + 0x14) - *(valA58 + 0x14)) * v_24_4 + *(valA58 + 0x14);
                    long double x87_r7_104 = *(ctxB12 + 0x10);
                    long double f6_1 = g_bcabd4;
                    x87_r7_104 - f6_1;
                    int32_t srcS11;

                    srcS11 = !(*(&((x87_r7_104 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_104, f6_1) ? 1 : 0) << 0xa
                        | (x87_r7_104 == f6_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double x87_r7_105 = *(ctxB12 + 0xc);
                    long double f14_1 = g_bcabd8;
                    x87_r7_105 - f14_1;
                    int32_t objC11;

                    objC11 = *(&((x87_r7_105 < f14_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_105, f14_1) ? 1 : 0) << 0xa
                        | (x87_r7_105 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double x87_r7_106 = *(ctxB12 + 0x10);
                    long double f23_1 = g_bcabdc;
                    x87_r7_106 - f23_1;
                    int32_t valA60;

                    valA60 = *(&((x87_r7_106 < f23_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_106, f23_1) ? 1 : 0) << 0xa
                        | (x87_r7_106 == f23_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    *(ctxB12 + 0x18) = (((valA60 * 2) | objC11) << 1 | srcS11) << 1;
                    long double x87_r7_108 = v_10 - *(tmpD8 + 0xc);
                    float v_24_5 = (g_bcabd0 - *(tmpD8 + 0xc)) / x87_r7_108;
                    long double x87_r7_110 = x87_r7_108 * v_24_5 + *(tmpD8 + 0xc);
                    v_10 = x87_r7_110;
                    long double x87_r6_62 = (v_c - *(tmpD8 + 0x10)) * v_24_5 + *(tmpD8 + 0x10);
                    v_c = x87_r6_62;
                    v_8 = (v_8 - *(tmpD8 + 0x14)) * v_24_5 + *(tmpD8 + 0x14);
                    long double f31_1 = g_bcabd4;
                    x87_r6_62 - f31_1;
                    int32_t srcS12;

                    srcS12 = !(*(&((x87_r6_62 < f31_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_62, f31_1) ? 1 : 0) << 0xa
                        | (x87_r6_62 == f31_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

                    long double f36_1 = g_bcabd8;
                    x87_r7_110 - f36_1;
                    int32_t objC12;

                    objC12 = *(&((x87_r7_110 < f36_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_110, f36_1) ? 1 : 0) << 0xa
                        | (x87_r7_110 == f36_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double x87_r7_111 = v_c;
                    long double f40_1 = g_bcabdc;
                    x87_r7_111 - f40_1;
                    int32_t valA67;

                    valA67 = *(&((x87_r7_111 < f40_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_111, f40_1) ? 1 : 0) << 0xa
                        | (x87_r7_111 == f40_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    int32_t v_4_2 = (((valA67 * 2) | objC12) << 1 | srcS12) << 1;
                    ctxB2 = a2 | a4 | a6;
                    flagP2 = a2 & a4 & a6;
                    v_38 = a8;
                    float* v_3c_2 = a7;
                    memcpy(&v_58, v_20_1, 0x1c);
                    memcpy(&v_74, &v_1c, 0x1c);
                    memcpy(&v_90, tmpD8, 0x1c);
                    Camera_SetFieldOfView();
                    objC1 = a2;
                    tmpD = a4;
                    valA = a6;
                }
                else
                {
                    void* valA43;
                    void* objC9;
                    void* tmpD6;
                    void* srcS8;

                    if (!objC8)
                    {
                        valA43 = &arg_4;
                        tmpD6 = &arg_4;
                        srcS8 = &arg_20;
                        objC9 = &arg_3c;
                    }
                    else if (tmpD5)
                    {
                        valA43 = &arg_3c;
                        tmpD6 = &arg_3c;
                        srcS8 = &arg_4;
                        objC9 = &arg_20;
                    }
                    else
                    {
                        valA43 = &arg_20;
                        tmpD6 = &arg_20;
                        srcS8 = &arg_3c;
                        objC9 = &arg_4;
                    }

                    long double x87_r7_63 = *(srcS8 + 0xc) - *(valA43 + 0xc);
                    float v_24_2 = (g_bcabd0 - *(valA43 + 0xc)) / x87_r7_63;
                    *(srcS8 + 0xc) = x87_r7_63 * v_24_2 + *(valA43 + 0xc);
                    *(srcS8 + 0x10) =
                        (*(srcS8 + 0x10) - *(valA43 + 0x10)) * v_24_2 + *(valA43 + 0x10);
                    *(srcS8 + 0x14) =
                        (*(srcS8 + 0x14) - *(valA43 + 0x14)) * v_24_2 + *(valA43 + 0x14);
                    long double x87_r7_74 = *(srcS8 + 0x10);
                    long double f2_1 = g_bcabd4;
                    x87_r7_74 - f2_1;
                    int32_t ctxB9;

                    ctxB9 = !(*(&((x87_r7_74 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_74, f2_1) ? 1 : 0) << 0xa
                        | (x87_r7_74 == f2_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double x87_r7_75 = *(srcS8 + 0xc);
                    long double f7_1 = g_bcabd8;
                    x87_r7_75 - f7_1;
                    int32_t dstD5;

                    dstD5 = *(&((x87_r7_75 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_75, f7_1) ? 1 : 0) << 0xa
                        | (x87_r7_75 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double x87_r7_76 = *(srcS8 + 0x10);
                    long double f15_1 = g_bcabdc;
                    x87_r7_76 - f15_1;
                    int32_t valA45;

                    valA45 = *(&((x87_r7_76 < f15_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_76, f15_1) ? 1 : 0) << 0xa
                        | (x87_r7_76 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    *(srcS8 + 0x18) = (((valA45 * 2) | dstD5) << 1 | ctxB9) << 1;
                    long double x87_r7_78 = *(objC9 + 0xc) - *(tmpD6 + 0xc);
                    float v_24_3 = (g_bcabd0 - *(tmpD6 + 0xc)) / x87_r7_78;
                    *(objC9 + 0xc) = x87_r7_78 * v_24_3 + *(tmpD6 + 0xc);
                    *(objC9 + 0x10) =
                        (*(objC9 + 0x10) - *(tmpD6 + 0x10)) * v_24_3 + *(tmpD6 + 0x10);
                    *(objC9 + 0x14) =
                        (*(objC9 + 0x14) - *(tmpD6 + 0x14)) * v_24_3 + *(tmpD6 + 0x14);
                    long double x87_r7_89 = *(objC9 + 0x10);
                    long double f24_1 = g_bcabd4;
                    x87_r7_89 - f24_1;
                    int32_t srcS9;

                    srcS9 = !(*(&((x87_r7_89 < f24_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_89, f24_1) ? 1 : 0) << 0xa
                        | (x87_r7_89 == f24_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double x87_r7_90 = *(objC9 + 0xc);
                    long double f32_1 = g_bcabd8;
                    x87_r7_90 - f32_1;
                    int32_t tmpD7;

                    tmpD7 = *(&((x87_r7_90 < f32_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_90, f32_1) ? 1 : 0) << 0xa
                        | (x87_r7_90 == f32_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double x87_r7_91 = *(objC9 + 0x10);
                    long double f37_1 = g_bcabdc;
                    x87_r7_91 - f37_1;
                    int32_t valA52;

                    valA52 = *(&((x87_r7_91 < f37_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_91, f37_1) ? 1 : 0) << 0xa
                        | (x87_r7_91 == f37_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    *(objC9 + 0x18) = (((valA52 * 2) | tmpD7) << 1 | srcS9) << 1;
                    objC1 = a2;
                    tmpD = a4;
                    valA = a6;
                    ctxB2 = objC1 | tmpD | valA;
                    flagP2 = objC1 & tmpD & valA;
                }
            }

            if (!flagP2)
            {
                if (ctxB2 & 2)
                {
                    int32_t objC15 = objC1 & 2;
                    int32_t tmpD9 = tmpD & 2;
                    int32_t valA77 = (valA & 2) + objC15 + tmpD9;
                    valA77 &= 0xfe;

                    if (valA77 != 4)
                    {
                        void* v_20_2;
                        void* valA89;
                        void* tmpD12;
                        void* ctxB17;

                        if (!objC15)
                        {
                            if (!tmpD9)
                            {
                                valA89 = &arg_4;
                                v_20_2 = &arg_20;
                                tmpD12 = &arg_3c;
                            }
                            else
                            {
                                valA89 = &arg_3c;
                                v_20_2 = &arg_4;
                                tmpD12 = &arg_20;
                            }

                            ctxB17 = v_20_2;
                        }
                        else
                        {
                            ctxB17 = &arg_3c;
                            valA89 = &arg_20;
                            v_20_2 = &arg_3c;
                            tmpD12 = &arg_4;
                        }

                        long double x87_r7_126 = (g_bcabd4 - *(valA89 + 0x10))
                            / (*(tmpD12 + 0x10) - *(valA89 + 0x10));
                        memcpy(&v_1c, tmpD12, 0x1c);
                        *(tmpD12 + 0xc) =
                            (*(tmpD12 + 0xc) - *(valA89 + 0xc)) * x87_r7_126 + *(valA89 + 0xc);
                        *(tmpD12 + 0x10) =
                            (*(tmpD12 + 0x10) - *(valA89 + 0x10)) * x87_r7_126 + *(valA89 + 0x10);
                        *(tmpD12 + 0x14) =
                            (*(tmpD12 + 0x14) - *(valA89 + 0x14)) * x87_r7_126 + *(valA89 + 0x14);
                        long double x87_r7_128 = *(tmpD12 + 0xc);
                        long double f12_1 = g_bcabd8;
                        x87_r7_128 - f12_1;
                        int32_t objC17;

                        objC17 = *(&((x87_r7_128 < f12_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_128, f12_1) ? 1 : 0) << 0xa
                            | (x87_r7_128 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        long double x87_r7_129 = *(tmpD12 + 0x10);
                        long double f21_1 = g_bcabdc;
                        x87_r7_129 - f21_1;
                        int32_t valA91;

                        valA91 = *(&((x87_r7_129 < f21_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_129, f21_1) ? 1 : 0) << 0xa
                            | (x87_r7_129 == f21_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        *(tmpD12 + 0x18) = ((valA91 * 2) | objC17) << 2;
                        long double x87_r7_131 = v_c - *(ctxB17 + 0x10);
                        float v_24_6 = (g_bcabd4 - *(ctxB17 + 0x10)) / x87_r7_131;
                        v_10 = (v_10 - *(ctxB17 + 0xc)) * v_24_6 + *(ctxB17 + 0xc);
                        long double x87_r7_133 = x87_r7_131 * v_24_6 + *(ctxB17 + 0x10);
                        v_c = x87_r7_133;
                        v_8 = (v_8 - *(ctxB17 + 0x14)) * v_24_6 + *(ctxB17 + 0x14);
                        long double x87_r6_116 = v_10;
                        long double f29_1 = g_bcabd8;
                        x87_r6_116 - f29_1;
                        int32_t objC18;

                        objC18 = *(&((x87_r6_116 < f29_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_116, f29_1) ? 1 : 0) << 0xa
                            | (x87_r6_116 == f29_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

                        long double f35_1 = g_bcabdc;
                        x87_r7_133 - f35_1;
                        int32_t valA96;

                        valA96 = *(&((x87_r7_133 < f35_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_133, f35_1) ? 1 : 0) << 0xa
                            | (x87_r7_133 == f35_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        int32_t v_4_3 = ((valA96 * 2) | objC18) << 2;
                        ctxB2 = a2 | a4 | a6;
                        flagP2 = a2 & a4 & a6;
                        v_38 = a8;
                        float* v_3c_3 = a7;
                        memcpy(&v_58, tmpD12, 0x1c);
                        memcpy(&v_74, &v_1c, 0x1c);
                        memcpy(&v_90, v_20_2, 0x1c);
                        Camera_SetFieldOfView();
                        objC1 = a2;
                        tmpD = a4;
                        valA = a6;
                    }
                    else
                    {
                        void* valA78;
                        void* objC16;
                        void* tmpD10;
                        void* srcS15;

                        if (!objC15)
                        {
                            valA78 = &arg_4;
                            tmpD10 = &arg_4;
                            srcS15 = &arg_20;
                            objC16 = &arg_3c;
                        }
                        else if (tmpD9)
                        {
                            valA78 = &arg_3c;
                            tmpD10 = &arg_3c;
                            srcS15 = &arg_4;
                            objC16 = &arg_20;
                        }
                        else
                        {
                            valA78 = &arg_20;
                            tmpD10 = &arg_20;
                            srcS15 = &arg_3c;
                            objC16 = &arg_4;
                        }

                        long double x87_r7_114 = (g_bcabd4 - *(valA78 + 0x10))
                            / (*(srcS15 + 0x10) - *(valA78 + 0x10));
                        *(srcS15 + 0xc) =
                            (*(srcS15 + 0xc) - *(valA78 + 0xc)) * x87_r7_114 + *(valA78 + 0xc);
                        *(srcS15 + 0x10) =
                            (*(srcS15 + 0x10) - *(valA78 + 0x10)) * x87_r7_114 + *(valA78 + 0x10);
                        *(srcS15 + 0x14) =
                            (*(srcS15 + 0x14) - *(valA78 + 0x14)) * x87_r7_114 + *(valA78 + 0x14);
                        long double x87_r7_116 = *(srcS15 + 0xc);
                        long double f5_1 = g_bcabd8;
                        x87_r7_116 - f5_1;
                        int32_t dstD6;

                        dstD6 = *(&((x87_r7_116 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_116, f5_1) ? 1 : 0) << 0xa
                            | (x87_r7_116 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        long double x87_r7_117 = *(srcS15 + 0x10);
                        long double f13_1 = g_bcabdc;
                        x87_r7_117 - f13_1;
                        int32_t valA80;

                        valA80 = *(&((x87_r7_117 < f13_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_117, f13_1) ? 1 : 0) << 0xa
                            | (x87_r7_117 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        *(srcS15 + 0x18) = ((valA80 * 2) | dstD6) << 2;
                        long double x87_r7_120 = (g_bcabd4 - *(tmpD10 + 0x10))
                            / (*(objC16 + 0x10) - *(tmpD10 + 0x10));
                        *(objC16 + 0xc) =
                            (*(objC16 + 0xc) - *(tmpD10 + 0xc)) * x87_r7_120 + *(tmpD10 + 0xc);
                        *(objC16 + 0x10) =
                            (*(objC16 + 0x10) - *(tmpD10 + 0x10)) * x87_r7_120 + *(tmpD10 + 0x10);
                        *(objC16 + 0x14) =
                            (*(objC16 + 0x14) - *(tmpD10 + 0x14)) * x87_r7_120 + *(tmpD10 + 0x14);
                        long double x87_r7_122 = *(objC16 + 0xc);
                        long double f22_1 = g_bcabd8;
                        x87_r7_122 - f22_1;
                        int32_t tmpD11;

                        tmpD11 = *(&((x87_r7_122 < f22_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_122, f22_1) ? 1 : 0) << 0xa
                            | (x87_r7_122 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        long double x87_r7_123 = *(objC16 + 0x10);
                        long double f30_1 = g_bcabdc;
                        x87_r7_123 - f30_1;
                        int32_t valA85;

                        valA85 = *(&((x87_r7_123 < f30_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_123, f30_1) ? 1 : 0) << 0xa
                            | (x87_r7_123 == f30_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        *(objC16 + 0x18) = ((valA85 * 2) | tmpD11) << 2;
                        objC1 = a2;
                        tmpD = a4;
                        valA = a6;
                        ctxB2 = objC1 | tmpD | valA;
                        flagP2 = objC1 & tmpD & valA;
                    }
                }

                if (!flagP2)
                {
                    if (ctxB2 & 4)
                    {
                        int32_t objC21 = objC1 & 4;
                        int32_t tmpD13 = tmpD & 4;
                        int32_t valA104 = (valA & 4) + objC21 + tmpD13;
                        valA104 &= 0xfc;

                        if (valA104 != 8)
                        {
                            void* v_20_3;
                            void* valA111;
                            void* tmpD16;
                            void* ctxB22;

                            if (!objC21)
                            {
                                if (!tmpD13)
                                {
                                    valA111 = &arg_4;
                                    v_20_3 = &arg_20;
                                    tmpD16 = &arg_3c;
                                }
                                else
                                {
                                    valA111 = &arg_3c;
                                    v_20_3 = &arg_4;
                                    tmpD16 = &arg_20;
                                }

                                ctxB22 = v_20_3;
                            }
                            else
                            {
                                ctxB22 = &arg_3c;
                                valA111 = &arg_20;
                                v_20_3 = &arg_3c;
                                tmpD16 = &arg_4;
                            }

                            long double x87_r7_161 = *(tmpD16 + 0xc) - *(valA111 + 0xc);
                            long double x87_r6_125 = (g_bcabd8 - *(valA111 + 0xc)) / x87_r7_161;
                            memcpy(&v_1c, tmpD16, 0x1c);
                            float v_24_9 = x87_r6_125;
                            *(tmpD16 + 0xc) = x87_r7_161 * v_24_9 + *(valA111 + 0xc);
                            *(tmpD16 + 0x10) = (*(tmpD16 + 0x10) - *(valA111 + 0x10)) * v_24_9
                                + *(valA111 + 0x10);
                            *(tmpD16 + 0x14) = (*(tmpD16 + 0x14) - *(valA111 + 0x14)) * v_24_9
                                + *(valA111 + 0x14);
                            long double x87_r7_172 = *(tmpD16 + 0x10);
                            long double f19_1 = g_bcabdc;
                            x87_r7_172 - f19_1;
                            int32_t valA113;

                            valA113 = *(&((x87_r7_172 < f19_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_172, f19_1) ? 1 : 0) << 0xa
                                | (x87_r7_172 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            *(tmpD16 + 0x18) = valA113 << 3;
                            long double x87_r7_174 = v_10 - *(ctxB22 + 0xc);
                            float v_24_10 = (g_bcabd8 - *(ctxB22 + 0xc)) / x87_r7_174;
                            v_10 = x87_r7_174 * v_24_10 + *(ctxB22 + 0xc);
                            long double x87_r7_180 =
                                (v_c - *(ctxB22 + 0x10)) * v_24_10 + *(ctxB22 + 0x10);
                            v_c = x87_r7_180;
                            v_8 = (v_8 - *(ctxB22 + 0x14)) * v_24_10 + *(ctxB22 + 0x14);
                            long double f28_1 = g_bcabdc;
                            x87_r7_180 - f28_1;
                            int32_t valA116;

                            valA116 = *(&((x87_r7_180 < f28_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_180, f28_1) ? 1 : 0) << 0xa
                                | (x87_r7_180 == f28_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            int32_t v_4_4 = valA116 << 3;
                            ctxB2 = a2 | a4 | a6;
                            flagP2 = a2 & a4 & a6;
                            v_38 = a8;
                            float* v_3c_4 = a7;
                            memcpy(&v_58, tmpD16, 0x1c);
                            memcpy(&v_74, &v_1c, 0x1c);
                            memcpy(&v_90, v_20_3, 0x1c);
                            Camera_SetFieldOfView();
                            objC1 = a2;
                            tmpD = a4;
                            valA = a6;
                        }
                        else
                        {
                            void* valA105;
                            void* objC22;
                            void* tmpD14;
                            void* srcS19;

                            if (!objC21)
                            {
                                valA105 = &arg_4;
                                tmpD14 = &arg_4;
                                srcS19 = &arg_20;
                                objC22 = &arg_3c;
                            }
                            else if (tmpD13)
                            {
                                valA105 = &arg_3c;
                                tmpD14 = &arg_3c;
                                srcS19 = &arg_4;
                                objC22 = &arg_20;
                            }
                            else
                            {
                                valA105 = &arg_20;
                                tmpD14 = &arg_20;
                                srcS19 = &arg_3c;
                                objC22 = &arg_4;
                            }

                            long double x87_r7_135 = *(srcS19 + 0xc) - *(valA105 + 0xc);
                            float v_24_7 = (g_bcabd8 - *(valA105 + 0xc)) / x87_r7_135;
                            *(srcS19 + 0xc) = x87_r7_135 * v_24_7 + *(valA105 + 0xc);
                            *(srcS19 + 0x10) = (*(srcS19 + 0x10) - *(valA105 + 0x10)) * v_24_7
                                + *(valA105 + 0x10);
                            *(srcS19 + 0x14) = (*(srcS19 + 0x14) - *(valA105 + 0x14)) * v_24_7
                                + *(valA105 + 0x14);
                            long double x87_r7_146 = *(srcS19 + 0x10);
                            long double f11_1 = g_bcabdc;
                            x87_r7_146 - f11_1;
                            int32_t valA107;

                            valA107 = *(&((x87_r7_146 < f11_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_146, f11_1) ? 1 : 0) << 0xa
                                | (x87_r7_146 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            *(srcS19 + 0x18) = valA107 << 3;
                            long double x87_r7_148 = *(objC22 + 0xc) - *(tmpD14 + 0xc);
                            float v_24_8 = (g_bcabd8 - *(tmpD14 + 0xc)) / x87_r7_148;
                            *(objC22 + 0xc) = x87_r7_148 * v_24_8 + *(tmpD14 + 0xc);
                            *(objC22 + 0x10) =
                                (*(objC22 + 0x10) - *(tmpD14 + 0x10)) * v_24_8 + *(tmpD14 + 0x10);
                            *(objC22 + 0x14) =
                                (*(objC22 + 0x14) - *(tmpD14 + 0x14)) * v_24_8 + *(tmpD14 + 0x14);
                            long double x87_r7_159 = *(objC22 + 0x10);
                            long double f20_1 = g_bcabdc;
                            x87_r7_159 - f20_1;
                            int32_t valA110;

                            valA110 = *(&((x87_r7_159 < f20_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_159, f20_1) ? 1 : 0) << 0xa
                                | (x87_r7_159 == f20_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            *(objC22 + 0x18) = valA110 << 3;
                            objC1 = a2;
                            tmpD = a4;
                            valA = a6;
                            ctxB2 = objC1 | tmpD | valA;
                            flagP2 = objC1 & tmpD & valA;
                        }
                    }

                    if (!flagP2)
                    {
                        if (ctxB2 & 8)
                        {
                            int32_t objC26 = objC1 & 8;
                            int32_t tmpD17 = tmpD & 8;
                            int32_t valA121 = (valA & 8) + objC26 + tmpD17;
                            valA121 &= 0xf8;

                            if (valA121 != 0x10)
                            {
                                void* valA123;
                                void* tmpD19;
                                void* ctxB25;

                                if (objC26)
                                {
                                    tmpD19 = &arg_20;
                                    ctxB25 = &arg_3c;
                                    valA123 = &arg_4;
                                }
                                else if (!tmpD17)
                                {
                                    tmpD19 = &arg_4;
                                    ctxB25 = &arg_20;
                                    valA123 = &arg_3c;
                                }
                                else
                                {
                                    tmpD19 = &arg_3c;
                                    ctxB25 = &arg_4;
                                    valA123 = &arg_20;
                                }

                                long double x87_r7_191 = (g_bcabdc - *(tmpD19 + 0x10))
                                    / (*(valA123 + 0x10) - *(tmpD19 + 0x10));
                                memcpy(&v_1c, valA123, 0x1c);
                                int32_t v_4_5 = 0;
                                *(valA123 + 0xc) = (*(valA123 + 0xc) - *(tmpD19 + 0xc)) * x87_r7_191
                                    + *(tmpD19 + 0xc);
                                *(valA123 + 0x10) =
                                    (*(valA123 + 0x10) - *(tmpD19 + 0x10)) * x87_r7_191
                                    + *(tmpD19 + 0x10);
                                long double x87_r6_174 =
                                    (*(valA123 + 0x14) - *(tmpD19 + 0x14)) * x87_r7_191
                                    + *(tmpD19 + 0x14);
                                *(valA123 + 0x18) = 0;
                                *(valA123 + 0x14) = x87_r6_174;
                                long double x87_r7_194 = v_c - *(ctxB25 + 0x10);
                                flagP2 = a2 & a4 & a6;
                                long double x87_r6_177 =
                                    (g_bcabdc - *(ctxB25 + 0x10)) / x87_r7_194;
                                v_38 = a8;
                                float* v_3c_5 = a7;
                                memcpy(&v_58, valA123, 0x1c);
                                float v_24_11 = x87_r6_177;
                                float v_10_1 =
                                    (v_10 - *(ctxB25 + 0xc)) * v_24_11 + *(ctxB25 + 0xc);
                                float v_c_1 = x87_r7_194 * v_24_11 + *(ctxB25 + 0x10);
                                float v_8_1 =
                                    (v_8 - *(ctxB25 + 0x14)) * v_24_11 + *(ctxB25 + 0x14);
                                memcpy(&v_74, &v_1c, 0x1c);
                                memcpy(&v_90, ctxB25, 0x1c);
                                Camera_SetFieldOfView();
                            }
                            else
                            {
                                void* valA122;
                                void* objC27;
                                void* tmpD18;
                                void* srcS23;

                                if (!objC26)
                                {
                                    valA122 = &arg_4;
                                    objC27 = &arg_4;
                                    tmpD18 = &arg_20;
                                    srcS23 = &arg_3c;
                                }
                                else if (tmpD17)
                                {
                                    valA122 = &arg_3c;
                                    objC27 = &arg_3c;
                                    tmpD18 = &arg_4;
                                    srcS23 = &arg_20;
                                }
                                else
                                {
                                    valA122 = &arg_20;
                                    objC27 = &arg_20;
                                    tmpD18 = &arg_3c;
                                    srcS23 = &arg_4;
                                }

                                long double x87_r7_183 = (g_bcabdc - *(valA122 + 0x10))
                                    / (*(tmpD18 + 0x10) - *(valA122 + 0x10));
                                *(tmpD18 + 0xc) = (*(tmpD18 + 0xc) - *(valA122 + 0xc)) * x87_r7_183
                                    + *(valA122 + 0xc);
                                *(tmpD18 + 0x10) =
                                    (*(tmpD18 + 0x10) - *(valA122 + 0x10)) * x87_r7_183
                                    + *(valA122 + 0x10);
                                long double x87_r6_146 =
                                    (*(tmpD18 + 0x14) - *(valA122 + 0x14)) * x87_r7_183
                                    + *(valA122 + 0x14);
                                *(tmpD18 + 0x18) = 0;
                                *(tmpD18 + 0x14) = x87_r6_146;
                                long double x87_r7_187 = (g_bcabdc - *(objC27 + 0x10))
                                    / (*(srcS23 + 0x10) - *(objC27 + 0x10));
                                *(srcS23 + 0xc) = (*(srcS23 + 0xc) - *(objC27 + 0xc)) * x87_r7_187
                                    + *(objC27 + 0xc);
                                *(srcS23 + 0x10) =
                                    (*(srcS23 + 0x10) - *(objC27 + 0x10)) * x87_r7_187
                                    + *(objC27 + 0x10);
                                long double x87_r6_160 =
                                    (*(srcS23 + 0x14) - *(objC27 + 0x14)) * x87_r7_187
