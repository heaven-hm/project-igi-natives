// Original IGI.EXE function: Light_SampleLightmap (VA 0x00521110; static CFG gate PASS, CFG score 1.000).
#include "Light_SampleLightmap.h"
float* Light_SampleLightmap(int32_t a1, int32_t a2, int32_t a3, int32_t a4, void* a5, float* a6, int32_t a7, float* a8, int32_t a9, float* a10, float* a11, float* a12, float* a13, int32_t a14, float* a15, int32_t a16, int32_t a17)

{
    float* srcS = a11;
    float* dstD = a12;
    long double fpu7 = srcS[1];
    long double f1 = dstD[1];
    fpu7 - f1;
    int32_t v_24 = 0;
    long double x87_r7_1;
    long double f3_1;

    if (!(*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        x87_r7_1 = srcS[1];
        f3_1 = a13[1];
        x87_r7_1 - f3_1;
    }

    float* result_1;

    if (*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x41 || *(&((x87_r7_1 < f3_1 ? 1 : 0) << 8
        | (FCMP_UO(x87_r7_1, f3_1) ? 1 : 0) << 0xa | (x87_r7_1 == f3_1 ? 1 : 0) << 0xe) + 1)
        & 0x41)
    {
        long double x87_r7_2 = dstD[1];
        long double f2_1 = a13[1];
        x87_r7_2 - f2_1;

        if (*(&((x87_r7_2 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            a11 = a13;
            result_1 = a16;
        }
        else
        {
            a11 = dstD;
            result_1 = a15;
        }
    }
    else
    {
        a11 = srcS;
        result_1 = a14;
    }

    long double x87_r7_3 = srcS[1];
    long double f4 = dstD[1];
    x87_r7_3 - f4;
    long double x87_r7_4;
    long double f6_1;

    if (*(&((x87_r7_3 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f4) ? 1 : 0) << 0xa
        | (x87_r7_3 == f4 ? 1 : 0) << 0xe) + 1) & 1)
    {
        x87_r7_4 = srcS[1];
        f6_1 = a13[1];
        x87_r7_4 - f6_1;
    }

    float* v_20;
    float* tmpD2;
    float* ctxB;

    if (!(*(&((x87_r7_3 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f4) ? 1 : 0) << 0xa
        | (x87_r7_3 == f4 ? 1 : 0) << 0xe) + 1) & 1) || !(*(&((x87_r7_4 < f6_1 ? 1 : 0) << 8
        | (FCMP_UO(x87_r7_4, f6_1) ? 1 : 0) << 0xa | (x87_r7_4 == f6_1 ? 1 : 0) << 0xe) + 1)
        & 1))
    {
        long double x87_r7_5 = dstD[1];
        long double f5_1 = a13[1];
        x87_r7_5 - f5_1;

        if (!(*(&((x87_r7_5 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f5_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == f5_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            tmpD2 = a16;
            ctxB = a13;
            v_20 = ctxB;
        }
        else
        {
            tmpD2 = a15;
            ctxB = dstD;
            v_20 = ctxB;
        }
    }
    else
    {
        tmpD2 = a14;
        ctxB = srcS;
        v_20 = ctxB;
    }

    float* result = a11;
    long double x87_r7_6 = ctxB[1];
    long double f7 = result[1];
    x87_r7_6 - f7;
    result = (x87_r7_6 < f7 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f7) ? 1 : 0) << 0xa
        | (x87_r7_6 == f7 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        float* v_58_1;
        float* objC1;

        if (srcS != ctxB && srcS != a11)
        {
            objC1 = a14;
            dstD = srcS;
            v_58_1 = dstD;
        }
        else if (dstD == ctxB || dstD == a11)
        {
            dstD = a13;
            objC1 = a16;
            v_58_1 = dstD;
        }
        else
        {
            objC1 = a15;
            v_58_1 = dstD;
        }

        int32_t v_7c_1 = dstD[1];
        long double x87_r7_9 = (dstD[1] - ctxB[1]) / (a11[1] - ctxB[1]);
        float v_80 = (*a11 - *ctxB) * x87_r7_9 + *ctxB;
        result = result_1;
        float v_78_1 = (a11[2] - ctxB[2]) * x87_r7_9 + ctxB[2];
        float v_88 = (*result - *tmpD2) * x87_r7_9 + *tmpD2;
        float v_84_1 = (result[1] - tmpD2[1]) * x87_r7_9 + tmpD2[1];
        long double x87_r7_11 = *dstD;
        long double f8_1 = v_80;
        x87_r7_11 - f8_1;
        result = (x87_r7_11 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f8_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == f8_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
        {
            long double x87_r7_12 = *dstD;
            long double f9_1 = v_80;
            x87_r7_12 - f9_1;
            result = (x87_r7_12 < f9_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_12, f9_1) ? 1 : 0) << 0xa
                | (x87_r7_12 == f9_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
            {
                a15 = dstD;
                a13 = &v_80;
                a12 = &v_88;
                goto label_52128e;
            }
        }
        else
        {
            a12 = objC1;
            a13 = dstD;
            a15 = &v_80;
            objC1 = &v_88;
        label_52128e:
            void* objC2 = a5 - 1;
            void* objC4 = a6 - 1;
            int32_t eflags_1;
            int32_t valA4;
            valA4 = __bsr_gprv_memv(a5);
            long double x87_r7_13 = ctxB[1];
            long double f10_1 = 0f;
            x87_r7_13 - f10_1;
            long double x87_r7_14 = ctxB[1];
            int32_t srcS2;

            srcS2 = *(&((x87_r7_13 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_13, f10_1) ? 1 : 0) << 0xa
                | (x87_r7_13 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1 ? x87_r7_14
                : x87_r7_14 + 0.999989986f;

            long double x87_r7_16 = dstD[1];
            long double f11_1 = 0f;
            x87_r7_16 - f11_1;
            long double x87_r7_17 = dstD[1];
            a14 = srcS2;
            int64_t v_c_3;
            void* valA6;

            if (*(&((x87_r7_16 < f11_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_16, f11_1) ? 1 : 0) << 0xa
                | (x87_r7_16 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            {
                v_c_3 = x87_r7_17 - 0.999989986f;
                valA6 = v_c_3;
            }
            else
            {
                v_c_3 = x87_r7_17;
                valA6 = v_c_3;
            }

            float* valA7 = valA6 + 1;

            if (srcS2 < a8)
            {
                srcS2 = a8;
                a14 = srcS2;
            }

            if (valA7 > a10)
                valA7 = a10;

            double v_60;
            double v_54;
            float* objC13;
            long double x87_r6_36;
            long double x87_r7_25;

            if (srcS2 >= valA7)
            {
                x87_r7_25 = v_c_3;
                x87_r6_36 = v_c_3;
                objC13 = a12;
            }
            else
            {
                v_24 = 1;
                long double x87_r7_20 = *a15 - *a13;
                long double x87_r6_20 = dstD[1] - ctxB[1];
                long double x87_r5_3;

                if (a13 != dstD)
                    x87_r5_3 = (*a11 - *ctxB) / (a11[1] - ctxB[1]);
                else
                    x87_r5_3 = (*a13 - *ctxB) / x87_r6_20;

                v_60 = x87_r5_3;
                long double x87_r5_8;

                if (a15 != dstD)
                    x87_r5_8 = (*a11 - *ctxB) / (a11[1] - ctxB[1]);
                else
                    x87_r5_8 = (*a15 - *ctxB) / x87_r6_20;

                v_54 = x87_r5_8;
                objC13 = a12;
                double v_6c_1 = (a13[2] - v_20[2]) / x87_r6_20;
                double v_74_1 = (*objC13 - *tmpD2) / x87_r6_20;
                double v_1c_1 = (objC13[1] - tmpD2[1]) / x87_r6_20;
                double v_3c_1 = (a15[2] - a13[2]) / x87_r7_20;
                double v_48_1 = (*objC1 - *objC13) / x87_r7_20;
                int32_t ctxB5 = srcS2 * a3;
                a6 = valA7 - srcS2;
                double v_34_1 = (objC1[1] - objC13[1]) / x87_r7_20;
                long double x87_r7_23 = a14 - v_20[1];
                double v_14_1 = x87_r7_23;
                x87_r7_25 = x87_r7_23 * v_60 + *v_20;
                long double x87_r6_33 = v_14_1 * v_54 + *v_20;
                long double x87_r5_22 = v_14_1 * v_6c_1 + v_20[2];
                double v_2c_1 = v_14_1 * v_74_1 + *tmpD2;
                double v_14_2 = v_14_1 * v_1c_1 + tmpD2[1];
                bool cond_2_1;

                do
                {
                    long double f14_1 = 0.0;
                    x87_r7_25 - f14_1;
                    int32_t dstD2;

                    dstD2 = *(&((x87_r7_25 < f14_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_25, f14_1) ? 1 : 0) << 0xa
                        | (x87_r7_25 == f14_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1 ? x87_r7_25
                        : x87_r7_25 + 0.99998998641967773;

                    long double f15_1 = 0.0;
                    x87_r6_33 - f15_1;
                    a14 = dstD2;
                    int32_t valA9;

                    valA9 = *(&((x87_r6_33 < f15_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_33, f15_1) ? 1 : 0) << 0xa
                        | (x87_r6_33 == f15_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1
                        ? x87_r6_33 - 0.99998998641967773 : x87_r6_33;

                    int32_t valA10 = valA9 + 1;

                    if (dstD2 < a7)
                    {
                        dstD2 = a7;
                        a14 = dstD2;
                    }

                    if (valA10 > a9)
                        valA10 = a9;

                    long double x87_r2_3;
                    long double x87_r3_3;
                    long double x87_r4_20;

                    if (!a17)
                    {
                        if (dstD2 < valA10)
                        {
                            int32_t tmpD11 = (dstD2 + ctxB5) << 2;
                            long double x87_r4_23 = a14 - x87_r7_25;
                            float* srcS4 = tmpD11 + a2;
                            double v_c_11 = x87_r4_23;
                            int32_t* tmpD13 = tmpD11 - srcS4 + a1;
                            int32_t i_5 = valA10 - dstD2;
                            x87_r4_20 = x87_r4_23 * v_3c_1 + x87_r5_22;
                            x87_r3_3 = v_c_11 * v_48_1 + v_2c_1;
                            x87_r2_3 = v_c_11 * v_34_1 + v_14_2;
                            int32_t i;

                            do
                            {
                                long double x87_r1_5 = *srcS4;
                                x87_r4_20 - x87_r1_5;

                                if (!(*(&((x87_r4_20 < x87_r1_5 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r4_20, x87_r1_5) ? 1 : 0) << 0xa
                                    | (x87_r4_20 == x87_r1_5 ? 1 : 0) << 0xe | 0x1000) + 1) & 0x41))
                                {
                                    long double x87_r1_7 = 1.0 / x87_r4_20;
                                    *(tmpD13 + srcS4) = *(a4 + (((((x87_r1_7 * x87_r2_3) & objC4)
                                        << (valA4 & 0x1f)) + ((x87_r1_7 * x87_r3_3) & objC2)) << 2));
                                    *srcS4 = x87_r4_20;
                                }

                                x87_r4_20 = x87_r4_20 + v_3c_1;
                                x87_r3_3 = x87_r3_3 + v_48_1;
                                x87_r2_3 = x87_r2_3 + v_34_1;
                                srcS4 = &srcS4[1];
                                i = i_5;
                                i_5 -= 1;
                            } while (i != 1);
                            objC13 = a12;
                        }
                    }
                    else if (dstD2 < valA10)
                    {
                        int32_t tmpD7 = (dstD2 + ctxB5) << 2;
                        long double x87_r4_18 = a14 - x87_r7_25;
                        float* srcS3 = tmpD7 + a2;
                        double v_c_8 = x87_r4_18;
                        int32_t* tmpD9 = tmpD7 - srcS3 + a1;
                        int32_t i_4 = valA10 - dstD2;
                        x87_r4_20 = x87_r4_18 * v_3c_1 + x87_r5_22;
                        x87_r3_3 = v_c_8 * v_48_1 + v_2c_1;
                        x87_r2_3 = v_c_8 * v_34_1 + v_14_2;
                        int32_t i_1;

                        do
                        {
                            long double x87_r1_1 = *srcS3;
                            x87_r4_20 - x87_r1_1;

                            if (*(&((x87_r4_20 < x87_r1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r4_20, x87_r1_1) ? 1 : 0) << 0xa
                                | (x87_r4_20 == x87_r1_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
                            {
                                *(tmpD9 + srcS3) = *(a4 + ((((x87_r2_3 & objC4) << (valA4 & 0x1f))
                                    + (x87_r3_3 & objC2)) << 2));
                                *srcS3 = x87_r4_20;
                            }

                            x87_r4_20 = x87_r4_20 + v_3c_1;
                            x87_r3_3 = x87_r3_3 + v_48_1;
                            x87_r2_3 = x87_r2_3 + v_34_1;
                            srcS3 = &srcS3[1];
                            i_1 = i_4;
                            i_4 -= 1;
                        } while (i_1 != 1);
                        objC13 = a12;
                    }
                    x87_r7_25 = x87_r7_25 + v_60;
                    x87_r6_33 = x87_r6_33 + v_54;
                    x87_r5_22 = x87_r5_22 + v_6c_1;
                    ctxB5 += a3;
                    cond_2_1 = a6 != 1;
                    a6 -= 1;
                    v_2c_1 = v_2c_1 + v_74_1;
                    v_14_2 = v_14_2 + v_1c_1;
                } while (cond_2_1);
                v_c_3 = x87_r6_33;
                x87_r6_36 = x87_r6_33;
            }

            long double x87_r5_32 = v_58_1[1];
            long double f12_1 = 0f;
            x87_r5_32 - f12_1;
            long double x87_r5_33 = v_58_1[1];

            a14 = *(&((x87_r5_32 < f12_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_32, f12_1) ? 1 : 0) << 0xa
                | (x87_r5_32 == f12_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1 ? x87_r5_33
                : x87_r5_33 + 0.999989986f;

            long double x87_r5_35 = a11[1];
            long double f13_1 = 0f;
            x87_r5_35 - f13_1;
            long double x87_r5_36 = a11[1];
            int32_t dstD3;

            dstD3 = *(&((x87_r5_35 < f13_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_35, f13_1) ? 1 : 0) << 0xa
                | (x87_r5_35 == f13_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1 ? x87_r5_36 - 0.999989986f
                : x87_r5_36;

            float* result_2 = dstD3 + 1;

            if (a14 < a8)
                a14 = a8;

            result = a10;

            if (result_2 > result)
                result_2 = result;

            if (a14 < result_2)
            {
                float* ctxB7 = a15;
                long double x87_r5_39 = *ctxB7 - *a13;
                long double x87_r4_32 = a11[1] - v_58_1[1];

                if (a13 != v_58_1)
                {
                    if (!v_24)
                        v_60 = (*a11 - *v_20) / (a11[1] - v_20[1]);

                    ctxB7 = a15;
                }
                else
                    v_60 = (*a11 - *a13) / x87_r4_32;

                if (ctxB7 != v_58_1)
                {
                    if (!v_24)
                        v_54 = (*a11 - *v_20) / (a11[1] - v_20[1]);

                    ctxB7 = a15;
                }
                else
                    v_54 = (*a11 - *ctxB7) / x87_r4_32;

                double v_6c_2 = (a11[2] - a13[2]) / x87_r4_32;
                double v_74_2 = (*result_1 - *objC13) / x87_r4_32;
                double v_1c_6 = (result_1[1] - objC13[1]) / x87_r4_32;
                double v_3c_2 = (ctxB7[2] - a13[2]) / x87_r5_39;
                double v_48_2 = (*objC1 - *objC13) / x87_r5_39;
                double v_34_2 = (objC1[1] - objC13[1]) / x87_r5_39;
                double v_14_3 = a14 - v_58_1[1];

                if (a13 == v_58_1 || !v_24)
                {
                    x87_r7_25 = v_14_3 * v_60 + *a13;
                    x87_r6_36 = v_c_3;
                }

                if (ctxB7 == v_58_1 || !v_24)
                    x87_r6_36 = v_14_3 * v_54 + *ctxB7;

                long double x87_r5_45 = v_14_3 * v_6c_2 + a13[2];
                result = a14;
                float* ctxB13 = result * a3;
                double v_2c_2 = v_14_3 * v_74_2 + *objC13;
                a15 = ctxB13;
                a8 = result_2 - result;
                double v_14_4 = v_14_3 * v_1c_6 + objC13[1];
                bool cond_4_1;

                do
                {
                    long double f19_1 = 0.0;
                    x87_r7_25 - f19_1;
                    int32_t dstD5;

                    dstD5 = *(&((x87_r7_25 < f19_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_25, f19_1) ? 1 : 0) << 0xa
                        | (x87_r7_25 == f19_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1 ? x87_r7_25
                        : x87_r7_25 + 0.99998998641967773;

                    long double f20_1 = 0.0;
                    x87_r6_36 - f20_1;
                    a14 = dstD5;
                    int32_t valA31;

                    valA31 = *(&((x87_r6_36 < f20_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_36, f20_1) ? 1 : 0) << 0xa
                        | (x87_r6_36 == f20_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1
                        ? x87_r6_36 - 0.99998998641967773 : x87_r6_36;

                    int32_t valA32 = valA31 + 1;

                    if (dstD5 < a7)
                    {
                        dstD5 = a7;
                        a14 = dstD5;
                    }

                    if (valA32 > a9)
                        valA32 = a9;

                    long double x87_r2_25;
                    long double x87_r3_32;
                    long double x87_r4_58;

                    if (!a17)
                    {
                        if (dstD5 < valA32)
                        {
                            int32_t tmpD26 = (dstD5 + ctxB13) << 2;
                            long double x87_r4_61 = a14 - x87_r7_25;
                            float* srcS7 = tmpD26 + a2;
                            double v_c_21 = x87_r4_61;
                            int32_t* tmpD28 = tmpD26 - srcS7 + a1;
                            x87_r4_58 = x87_r4_61 * v_3c_2 + x87_r5_45;
                            int32_t i_7 = valA32 - dstD5;
                            x87_r3_32 = v_c_21 * v_48_2 + v_2c_2;
                            x87_r2_25 = v_c_21 * v_34_2 + v_14_4;
                            int32_t i_2;

                            do
                            {
                                long double x87_r1_14 = *srcS7;
                                x87_r4_58 - x87_r1_14;

                                if (!(*(&((x87_r4_58 < x87_r1_14 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r4_58, x87_r1_14) ? 1 : 0) << 0xa
                                    | (x87_r4_58 == x87_r1_14 ? 1 : 0) << 0xe | 0x1000) + 1) & 0x41))
                                {
                                    long double x87_r1_16 = 1.0 / x87_r4_58;
                                    ctxB13 = a15;
                                    *(tmpD28 + srcS7) = *(a4 + (((((x87_r1_16 * x87_r2_25)
                                        & objC4) << (valA4 & 0x1f))
                                        + ((x87_r1_16 * x87_r3_32) & objC2)) << 2));
                                    *srcS7 = x87_r4_58;
                                }

                                x87_r4_58 = x87_r4_58 + v_3c_2;
                                x87_r3_32 = x87_r3_32 + v_48_2;
                                x87_r2_25 = x87_r2_25 + v_34_2;
                                srcS7 = &srcS7[1];
                                i_2 = i_7;
                                i_7 -= 1;
                            } while (i_2 != 1);
                        }
                    }
                    else if (dstD5 < valA32)
                    {
                        int32_t tmpD22 = (dstD5 + ctxB13) << 2;
                        long double x87_r4_56 = a14 - x87_r7_25;
                        float* srcS6 = tmpD22 + a2;
                        double v_c_18 = x87_r4_56;
                        int32_t* tmpD24 = tmpD22 - srcS6 + a1;
                        void* i_6 = valA32 - dstD5;
                        x87_r4_58 = x87_r4_56 * v_3c_2 + x87_r5_45;
                        x87_r3_32 = v_c_18 * v_48_2 + v_2c_2;
                        x87_r2_25 = v_c_18 * v_34_2 + v_14_4;
                        void* i_3;

                        do
                        {
                            long double x87_r1_10 = *srcS6;
                            x87_r4_58 - x87_r1_10;

                            if (*(&((x87_r4_58 < x87_r1_10 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r4_58, x87_r1_10) ? 1 : 0) << 0xa
                                | (x87_r4_58 == x87_r1_10 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
                            {
                                *(tmpD24 + srcS6) = *(a4 + ((((x87_r2_25 & objC4)
                                    << (valA4 & 0x1f)) + (x87_r3_32 & objC2)) << 2));
                                *srcS6 = x87_r4_58;
                            }

                            x87_r4_58 = x87_r4_58 + v_3c_2;
                            x87_r3_32 = x87_r3_32 + v_48_2;
                            x87_r2_25 = x87_r2_25 + v_34_2;
                            srcS6 = &srcS6[1];
                            i_3 = i_6;
                            i_6 -= 1;
                        } while (i_3 != 1);
                    }
                    x87_r7_25 = x87_r7_25 + v_60;
                    x87_r6_36 = x87_r6_36 + v_54;
                    x87_r5_45 = x87_r5_45 + v_6c_2;
                    ctxB13 += a3;
                    result = a8 - 1;
                    cond_4_1 = a8 != 1;
                    a15 = ctxB13;
                    a8 = result;
                    v_2c_2 = v_2c_2 + v_74_2;
                    v_14_4 = v_14_4 + v_1c_6;
                } while (cond_4_1);
            }
        }
    }

    return result;
}
