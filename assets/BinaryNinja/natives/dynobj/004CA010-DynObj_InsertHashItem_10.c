// Original IGI.EXE function: DynObj_InsertHashItem_10 (VA 0x004CA010; static CFG gate PASS, CFG score 1.000).
#include "DynObj_InsertHashItem_10.h"
int32_t DynObj_InsertHashItem_10(int16_t* a1, double* a2, double* a3, double* a4, char a5, int32_t* a6, int32_t a7, int32_t a8, float* a9)

{
    int32_t valA101 = g_ba2058;
    int32_t v_3b4;
    int32_t v_39c;
    float v_380;
    float v_37c;
    float v_374;
    int32_t ctxB1;
    int32_t flagP;
    double* srcS;

    if (!valA101)
    {
        ctxB1 = v_3b4;
        flagP = v_39c;
        srcS = a2;
    }
    else
    {
        srcS = a2;
        int32_t valA1 = valA101 * 0x30;
        v_380 = *(valA1 + 0xba2048) - *srcS;
        flagP = (&g_ba2058)[valA101 * 0xc];
        ctxB1 = *(valA1 + 0xba203c) + 3;
        v_37c = *(valA1 + 0xba2050) - srcS[1];
        v_374 = (&g_ba2040)[valA101 * 6];
        v_3b4 = ctxB1;
        v_39c = flagP;
    }

    float v_354 = 1f;
    g_a44398 += 1;
    int32_t tmpD1 = a1[3] + a1[2];
    int32_t* dstD3 = a1[1] + &a1[4];
    uint32_t valA6 = a7 & 4;
    int32_t* v_310 = &a1[4];
    int32_t v_3ac = tmpD1;
    uint32_t v_34c = valA6;

    if (valA6)
        v_354 = -1f;

    float v_378 = (0x40000000 >> (a5 & 0x1f)) * 0.041666666666666664;
    float v_360 = *a3 - *srcS;
    float v_35c = a3[1] - srcS[1];
    long double x87_r7_12 = a3[2] - srcS[2];
    float v_358;
    long double x87_r7_14;

    if (a8)
    {
        v_358 = x87_r7_12 - 0.100000001f;
        x87_r7_14 = 268435456f;
    }
    else
    {
        v_358 = x87_r7_12 + 0.100000001f;
        x87_r7_14 = -268435456f;
    }

    void v_300;
    float* srcS1 = &v_300;
    int32_t v_3b0 = 0;
    int32_t v_350 = a7 & 1;
    int32_t v_3a4_3;
    bool cond_2_1;

    do
    {
        int32_t valA12 = *dstD3;
        v_3a4_3 = (valA12 >> 0xe & 0x3f) - 0x18;
        long double x87_r6_2 = ((valA12 >> 0x1a & 0x3f) - 0x18) * v_378;
        float v_394_2 = ((valA12 >> 0x14 & 0x3f) - 0x18) * v_378;
        float v_390_2 = v_3a4_3 * v_378;

        if (v_34c)
            x87_r6_2 = -(x87_r6_2);

        if (v_350)
        {
            float v_370_1 = v_394_2;

            if (!(a7 & 2))
            {
                v_394_2 = x87_r6_2;
                x87_r6_2 = -(v_370_1);
            }
            else
            {
                v_394_2 = -(x87_r6_2);
                x87_r6_2 = v_370_1;
            }
        }
        else if (a7 & 2)
        {
            x87_r6_2 = -(x87_r6_2);
            v_394_2 = -(v_394_2);
        }

        if (g_ba2058)
        {
            long double x87_r5_11 = (x87_r6_2 - v_380) * v_374;
            float v_3a8_1 = (v_394_2 - v_37c) * v_374;
            v_3a4_3 = x87_r5_11;
            int32_t valA21 = v_3a8_1;
            long double x87_r5_12 = x87_r5_11 - v_3a4_3;
            int32_t v_3a4_5 = valA21;
            int32_t objC14 = (valA21 << (ctxB1 & 0x1f)) + valA21;
            ctxB1 = v_3b4;
            long double x87_r3_1 = *(objC14 + v_3a4_3 + flagP);
            long double x87_r2_1 = *(objC14 + v_3a4_3 + 1 + flagP);
            void* flagP4 = ((valA21 + 1) << (ctxB1 & 0x1f)) + valA21 + 1 + v_3a4_3 + 1;
            flagP = v_39c;
            float v_3a8_2 = *(flagP4 + flagP - 1);
            v_3a4_3 = *(flagP4 + flagP);
            tmpD1 = v_3ac;
            long double x87_r3_2 = x87_r3_1 + (x87_r2_1 - x87_r3_1) * x87_r5_12;
            v_390_2 = (
                ((v_3a4_3 - v_3a8_2) * x87_r5_12 + v_3a8_2 - x87_r3_2) * (v_3a8_1 - valA21)
                + x87_r3_2 - 64f) * 256f + v_390_2;
        }

        *srcS1 = x87_r6_2;
        dstD3 = &dstD3[1];
        srcS1[1] = v_394_2;
        srcS1[2] = v_390_2;
        srcS1 = &srcS1[3];
        cond_2_1 = v_3b0 + 1 < tmpD1;
        v_3b0 += 1;
    } while (cond_2_1);
    int32_t v_370_2 = 0;
    int32_t valA27 = *a1;

    if (valA27 > 0)
    {
        int32_t v_318 = valA27;
        int32_t saved_dst;
        float v_348;
        float v_344;
        float v_340;
        bool cond_4_1;

        do
        {
            int32_t ctxB6 = 0;
            int24_t valA28 = *v_310;
            ctxB6 = *(&valA28 + 1);
            int32_t valA29 = 0;
            valA29 = *(&valA28 + 2);
            uint32_t dstD5 = valA28;
            v_310 = &v_310[1];
            uint32_t objC22 = dstD5 * 3;
            long double x87_r6_5 = *(&v_300 + (objC22 << 2));
            float v_3b4_1 = x87_r6_5;
            float valA31 = (&saved_dst)[ctxB6 * 3 + 0x31];
            long double x87_r5_14 = valA31;
            x87_r5_14 - x87_r6_5;

            if (!(*(&((x87_r5_14 < x87_r6_5 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_14, x87_r6_5) ? 1 : 0) << 0xa
                | (x87_r5_14 == x87_r6_5 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
            {
                long double x87_r5_15 = valA31;
                x87_r5_15 - x87_r6_5;

                if (!(*(&((x87_r5_15 < x87_r6_5 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_15, x87_r6_5) ? 1 : 0) << 0xa
                        | (x87_r5_15 == x87_r6_5 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                    v_3b4_1 = valA31;
            }
            else
                x87_r6_5 = valA31;

            float valA34 = (&saved_dst)[valA29 * 3 + 0x31];
            long double x87_r5_16 = valA34;
            x87_r5_16 - x87_r6_5;

            if (!(*(&((x87_r5_16 < x87_r6_5 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_16, x87_r6_5) ? 1 : 0) << 0xa
                | (x87_r5_16 == x87_r6_5 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
            {
                long double x87_r5_17 = valA34;
                long double f0_1 = v_3b4_1;
                x87_r5_17 - f0_1;

                if (!(*(&((x87_r5_17 < f0_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_17, f0_1) ? 1 : 0) << 0xa
                        | (x87_r5_17 == f0_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                    v_3b4_1 = valA34;
            }
            else
                x87_r6_5 = valA34;

            long double x87_r6_8 = x87_r6_5 - 0.00999999978f;
            long double f1_1 = v_360;
            x87_r6_8 - f1_1;

            if (*(&((x87_r6_8 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_8, f1_1) ? 1 : 0) << 0xa
                | (x87_r6_8 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double x87_r6_10 = v_3b4_1 + 0.00999999978f;
                long double f3_1 = v_360;
                x87_r6_10 - f3_1;

                if (!(*(&((x87_r6_10 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_10, f3_1) ? 1 : 0) << 0xa
                    | (x87_r6_10 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                {
                    float valA37 = (&saved_dst)[objC22 + 0x32];
                    float valA38 = (&saved_dst)[ctxB6 * 3 + 0x32];
                    long double x87_r6_11 = valA37;
                    float valA39 = (&saved_dst)[valA29 * 3 + 0x32];
                    long double x87_r5_18 = valA38;
                    long double f4_1 = valA37;
                    x87_r5_18 - f4_1;
                    float v_3b4_2 = valA37;

                    if (!(*(&((x87_r5_18 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_18, f4_1) ? 1 : 0) << 0xa
                        | (x87_r5_18 == f4_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                    {
                        long double x87_r5_19 = valA38;
                        long double f6_1 = valA37;
                        x87_r5_19 - f6_1;

                        if (!(*(&((x87_r5_19 < f6_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r5_19, f6_1) ? 1 : 0) << 0xa
                                | (x87_r5_19 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                            v_3b4_2 = valA38;
                    }
                    else
                        x87_r6_11 = valA38;

                    long double x87_r5_20 = valA39;
                    x87_r5_20 - x87_r6_11;

                    if (!(*(&((x87_r5_20 < x87_r6_11 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_20, x87_r6_11) ? 1 : 0) << 0xa
                        | (x87_r5_20 == x87_r6_11 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                    {
                        long double x87_r5_21 = valA39;
                        long double f7_1 = v_3b4_2;
                        x87_r5_21 - f7_1;

                        if (!(*(&((x87_r5_21 < f7_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r5_21, f7_1) ? 1 : 0) << 0xa
                                | (x87_r5_21 == f7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                            v_3b4_2 = valA39;
                    }
                    else
                        x87_r6_11 = valA39;

                    long double x87_r6_14 = x87_r6_11 - 0.00999999978f;
                    long double f8_1 = v_35c;
                    x87_r6_14 - f8_1;

                    if (*(&((x87_r6_14 < f8_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_14, f8_1) ? 1 : 0) << 0xa
                        | (x87_r6_14 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    {
                        long double x87_r6_16 = v_3b4_2 + 0.00999999978f;
                        long double f9_1 = v_35c;
                        x87_r6_16 - f9_1;

                        if (!(*(&((x87_r6_16 < f9_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_16, f9_1) ? 1 : 0) << 0xa
                            | (x87_r6_16 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                        {
                            long double x87_r6_17 = valA38;
                            long double f10_1 = valA37;
                            x87_r6_17 - f10_1;
                            long double x87_r6_18 = valA39;
                            float v_398_1;
                            float v_394_3;
                            float v_390_3;
                            float v_38c_1;
                            float v_388_1;
                            float v_384_1;
                            float v_304_1;
                            long double x87_r5_22;
                            long double x87_r6_20;
                            float valA54;

                            if (!(*(&((x87_r6_17 < f10_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_17, f10_1) ? 1 : 0) << 0xa
                                | (x87_r6_17 == f10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                            {
                                long double f11_1 = valA38;
                                x87_r6_18 - f11_1;

                                if (!(*(&((x87_r6_18 < f11_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_18, f11_1) ? 1 : 0) << 0xa
                                    | (x87_r6_18 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                {
                                    x87_r6_20 = (&saved_dst)[ctxB6 * 3 + 0x31];
                                    v_38c_1 = (&saved_dst)[objC22 + 0x31];
                                    x87_r5_22 = valA38;
                                    v_384_1 = (&saved_dst)[objC22 + 0x33];
                                    v_388_1 = valA37;
                                    v_304_1 = (&saved_dst)[ctxB6 * 3 + 0x33];
                                label_4ca623:
                                    v_398_1 = (&saved_dst)[valA29 * 3 + 0x31];
                                    v_390_3 = (&saved_dst)[valA29 * 3 + 0x33];
                                    v_394_3 = valA39;
                                }
                                else
                                {
                                    long double x87_r6_21 = valA39;
                                    long double f13_1 = valA37;
                                    x87_r6_21 - f13_1;
                                    v_398_1 = (&saved_dst)[ctxB6 * 3 + 0x31];
                                    v_390_3 = (&saved_dst)[ctxB6 * 3 + 0x33];
                                    v_394_3 = valA38;

                                    if (!(*(&((x87_r6_21 < f13_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_21, f13_1) ? 1 : 0) << 0xa
                                        | (x87_r6_21 == f13_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                    {
                                        v_38c_1 = (&saved_dst)[objC22 + 0x31];
                                        v_384_1 = (&saved_dst)[objC22 + 0x33];
                                        valA54 = valA37;
                                    label_4ca54d:
                                        x87_r6_20 = (&saved_dst)[valA29 * 3 + 0x31];
                                        x87_r5_22 = valA39;
                                        v_388_1 = valA54;
                                        v_304_1 = (&saved_dst)[valA29 * 3 + 0x33];
                                    }
                                    else
                                    {
                                        x87_r6_20 = (&saved_dst)[objC22 + 0x31];
                                        v_38c_1 = (&saved_dst)[valA29 * 3 + 0x31];
                                        x87_r5_22 = valA37;
                                        v_384_1 = (&saved_dst)[valA29 * 3 + 0x33];
                                        v_388_1 = valA39;
                                        v_304_1 = (&saved_dst)[objC22 + 0x33];
                                    }
                                }
                            }
                            else
                            {
                                long double f12_1 = valA37;
                                x87_r6_18 - f12_1;

                                if (!(*(&((x87_r6_18 < f12_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_18, f12_1) ? 1 : 0) << 0xa
                                    | (x87_r6_18 == f12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                {
                                    x87_r6_20 = (&saved_dst)[objC22 + 0x31];
                                    v_38c_1 = (&saved_dst)[ctxB6 * 3 + 0x31];
                                    x87_r5_22 = valA37;
                                    v_384_1 = (&saved_dst)[ctxB6 * 3 + 0x33];
                                    v_388_1 = valA38;
                                    v_304_1 = (&saved_dst)[objC22 + 0x33];
                                    goto label_4ca623;
                                }

                                long double x87_r6_19 = valA39;
                                long double f14_1 = valA38;
                                x87_r6_19 - f14_1;
                                v_398_1 = (&saved_dst)[objC22 + 0x31];
                                v_390_3 = (&saved_dst)[objC22 + 0x33];
                                v_394_3 = valA37;

                                if (!(*(&((x87_r6_19 < f14_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_19, f14_1) ? 1 : 0) << 0xa
                                    | (x87_r6_19 == f14_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                {
                                    v_38c_1 = (&saved_dst)[ctxB6 * 3 + 0x31];
                                    v_384_1 = (&saved_dst)[ctxB6 * 3 + 0x33];
                                    valA54 = valA38;
                                    goto label_4ca54d;
                                }

                                x87_r6_20 = (&saved_dst)[ctxB6 * 3 + 0x31];
                                v_38c_1 = (&saved_dst)[valA29 * 3 + 0x31];
                                x87_r5_22 = valA38;
                                v_384_1 = (&saved_dst)[valA29 * 3 + 0x33];
                                v_388_1 = valA39;
                                v_304_1 = (&saved_dst)[ctxB6 * 3 + 0x33];
                            }
                            float v_3b4_3 = v_35c - v_388_1;
                            long double x87_r4_13 = v_3b4_3 / (v_394_3 - v_388_1);
                            float v_378_1 = (v_398_1 - v_38c_1) * x87_r4_13 + v_38c_1;
                            float v_374_2 = (v_390_3 - v_384_1) * x87_r4_13 + v_384_1;
                            long double x87_r4_15 = v_35c;
                            x87_r4_15 - x87_r5_22;
                            long double x87_r4_16;

                            if (*(&((x87_r4_15 < x87_r5_22 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r4_15, x87_r5_22) ? 1 : 0) << 0xa
                                | (x87_r4_15 == x87_r5_22 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
                            {
                                x87_r4_16 = v_388_1;
                                x87_r4_16 - x87_r5_22;
                            }

                            long double x87_r5_28;
                            long double x87_r6_24;

                            if (!(*(&((x87_r4_15 < x87_r5_22 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r4_15, x87_r5_22) ? 1 : 0) << 0xa
                                | (x87_r4_15 == x87_r5_22 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41) || *(
                                &((x87_r4_16 < x87_r5_22 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r4_16, x87_r5_22) ? 1 : 0) << 0xa
                                | (x87_r4_16 == x87_r5_22 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40)
                            {
                                float v_3b4_5 = (v_35c - x87_r5_22) / (v_394_3 - x87_r5_22);
                                x87_r6_24 = x87_r6_20 + (v_398_1 - x87_r6_20) * v_3b4_5;
                                x87_r5_28 = (v_390_3 - v_304_1) * v_3b4_5 + v_304_1;
                            }
                            else
                            {
                                float v_3b4_4 = v_3b4_3 / (x87_r5_22 - v_388_1);
                                x87_r6_24 = (x87_r6_20 - v_38c_1) * v_3b4_4 + v_38c_1;
                                x87_r5_28 = (v_304_1 - v_384_1) * v_3b4_4 + v_384_1;
                            }

                            long double x87_r5_37 = v_378_1 - 0.00999999978f;
                            long double f15_1 = v_360;
                            x87_r5_37 - f15_1;
                            long double x87_r5_39;
                            long double f17_1;

                            if (*(&((x87_r5_37 < f15_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r5_37, f15_1) ? 1 : 0) << 0xa
                                | (x87_r5_37 == f15_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
                            {
                                x87_r5_39 = x87_r6_24 + 0.00999999978f;
                                f17_1 = v_360;
                                x87_r5_39 - f17_1;
                            }

                            if (*(&((x87_r5_37 < f15_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r5_37, f15_1) ? 1 : 0) << 0xa
                                | (x87_r5_37 == f15_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41 && !(*(
                                &((x87_r5_39 < f17_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r5_39, f17_1) ? 1 : 0) << 0xa
                                | (x87_r5_39 == f17_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                            {
                            label_4ca74d:
                                long double x87_r6_25 = x87_r6_24 - v_378_1;
                                long double f19_1 = 0f;
                                x87_r6_25 - f19_1;
                                g_a4439c += 1;
                                float v_3a8_3 = v_374_2;

                                if (!(*(&((x87_r6_25 < f19_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_25, f19_1) ? 1 : 0) << 0xa
                                        | (x87_r6_25 == f19_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                                    v_3a8_3 =
                                        (v_360 - v_378_1) / x87_r6_25 * (x87_r5_28 - v_374_2)
                                        + v_374_2;

                                long double x87_r6_27 = v_3a8_3;
                                x87_r6_27 - x87_r7_14;
                                int16_t valA80 = (x87_r6_27 < x87_r7_14 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_27, x87_r7_14) ? 1 : 0) << 0xa
                                    | (x87_r6_27 == x87_r7_14 ? 1 : 0) << 0xe | 0x3800;

                                if (!a8)
                                {
                                    if (!(*(&valA80 + 1) & 1))
                                    {
                                        long double x87_r6_40 = v_3a8_3;
                                        long double f20_1 = v_358;
                                        x87_r6_40 - f20_1;

                                        if (*(&((x87_r6_40 < f20_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_40, f20_1) ? 1 : 0) << 0xa
                                            | (x87_r6_40 == f20_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41)
                                        {
                                            long double x87_r7_29 = (&saved_dst)[ctxB6 * 3 + 0x31]
                                                - (&saved_dst)[objC22 + 0x31];
                                            long double x87_r6_42 = (&saved_dst)[ctxB6 * 3 + 0x32]
                                                - (&saved_dst)[objC22 + 0x32];
                                            long double x87_r5_58 = (&saved_dst)[ctxB6 * 3 + 0x33]
                                                - (&saved_dst)[objC22 + 0x33];
                                            float v_324_2 = (&saved_dst)[valA29 * 3 + 0x31]
                                                - (&saved_dst)[objC22 + 0x31];
                                            float v_320_2 = (&saved_dst)[valA29 * 3 + 0x32]
                                                - (&saved_dst)[objC22 + 0x32];
                                            long double x87_r4_43 =
                                                (&saved_dst)[valA29 * 3 + 0x33]
                                                - (&saved_dst)[objC22 + 0x33];
                                            float v_330_1 =
                                                x87_r4_43 * x87_r6_42 - v_320_2 * x87_r5_58;
                                            float objC26 = v_330_1;
                                            float v_32c_1 =
                                                -((x87_r4_43 * x87_r7_29 - v_324_2 * x87_r5_58));
                                            float v_368_2 = v_32c_1;
                                            float v_328_1 =
                                                v_320_2 * x87_r7_29 - v_324_2 * x87_r6_42;
                                            long double x87_r7_31 = v_330_1;
                                            long double f22_1 = 0f;
                                            x87_r7_31 - f22_1;
                                            float v_364_2 = v_328_1;

                                            if (!(*(&((x87_r7_31 < f22_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_31, f22_1) ? 1 : 0) << 0xa
                                                | (x87_r7_31 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                            {
                                            label_4caa1b:
                                                long double x87_r7_34 = v_328_1;
                                                long double x87_r6_44 = v_32c_1;
                                                long double x87_r5_63 = v_330_1;
                                                long double x87_r7_36 = 1.0 / sqrtl(
                                                    x87_r5_63 * x87_r5_63 + x87_r6_44 * x87_r6_44
                                                    + x87_r7_34 * x87_r7_34);
                                                v_368_2 = v_368_2 * x87_r7_36;
                                                objC26 = v_330_1 * x87_r7_36;
                                                v_364_2 = v_364_2 * x87_r7_36;
                                            }
                                            else
                                            {
                                                long double x87_r7_32 = v_32c_1;
                                                long double f24_1 = 0f;
                                                x87_r7_32 - f24_1;

                                                if (!(*(&((x87_r7_32 < f24_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_32, f24_1) ? 1 : 0)
                                                        << 0xa | (x87_r7_32 == f24_1 ? 1 : 0) << 0xe)
                                                        + 1) & 0x40))
                                                    goto label_4caa1b;

                                                long double x87_r7_33 = v_328_1;
                                                long double f26_1 = 0f;
                                                x87_r7_33 - f26_1;

                                                if (!(*(&((x87_r7_33 < f26_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_33, f26_1) ? 1 : 0)
                                                        << 0xa | (x87_r7_33 == f26_1 ? 1 : 0) << 0xe)
                                                        + 1) & 0x40))
                                                    goto label_4caa1b;
                                            }

                                            v_348 = objC26;
                                            v_370_2 = 1;
                                            x87_r7_14 = v_3a8_3;
                                            v_34c = dstD5;
                                            v_3a4_3 = ctxB6;
                                            v_350 = valA29;
                                            v_344 = v_368_2;
                                            v_340 = v_364_2;
                                        }
                                    }
                                }
                                else if (*(&valA80 + 1) & 0x41)
                                {
                                    long double x87_r6_28 = v_3a8_3;
                                    long double f21_1 = v_358;
                                    x87_r6_28 - f21_1;

                                    if (!(*(&((x87_r6_28 < f21_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_28, f21_1) ? 1 : 0) << 0xa
                                        | (x87_r6_28 == f21_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                    {
                                        long double x87_r7_18 = (&saved_dst)[ctxB6 * 3 + 0x31]
                                            - (&saved_dst)[objC22 + 0x31];
                                        long double x87_r6_30 = (&saved_dst)[ctxB6 * 3 + 0x32]
                                            - (&saved_dst)[objC22 + 0x32];
                                        long double x87_r5_50 = (&saved_dst)[ctxB6 * 3 + 0x33]
                                            - (&saved_dst)[objC22 + 0x33];
                                        float v_324_1 = (&saved_dst)[valA29 * 3 + 0x31]
                                            - (&saved_dst)[objC22 + 0x31];
                                        float v_320_1 = (&saved_dst)[valA29 * 3 + 0x32]
                                            - (&saved_dst)[objC22 + 0x32];
                                        long double x87_r4_27 = (&saved_dst)[valA29 * 3 + 0x33]
                                            - (&saved_dst)[objC22 + 0x33];
                                        float v_33c_1 =
                                            x87_r4_27 * x87_r6_30 - v_320_1 * x87_r5_50;
                                        float objC24 = v_33c_1;
                                        float v_338_1 =
                                            -((x87_r4_27 * x87_r7_18 - v_324_1 * x87_r5_50));
                                        float v_368_1 = v_338_1;
                                        float v_334_1 =
                                            v_320_1 * x87_r7_18 - v_324_1 * x87_r6_30;
                                        long double x87_r7_20 = v_33c_1;
                                        long double f23_1 = 0f;
                                        x87_r7_20 - f23_1;
                                        float v_364_1 = v_334_1;

                                        if (!(*(&((x87_r7_20 < f23_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_20, f23_1) ? 1 : 0) << 0xa
                                            | (x87_r7_20 == f23_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                        {
                                        label_4ca898:
                                            long double x87_r7_23 = v_334_1;
                                            long double x87_r6_32 = v_338_1;
                                            long double x87_r5_55 = v_33c_1;
                                            long double x87_r7_25 = 1.0 / sqrtl(
                                                x87_r5_55 * x87_r5_55 + x87_r6_32 * x87_r6_32
                                                + x87_r7_23 * x87_r7_23);
                                            v_368_1 = v_368_1 * x87_r7_25;
                                            objC24 = v_33c_1 * x87_r7_25;
                                            v_364_1 = v_364_1 * x87_r7_25;
                                        }
                                        else
                                        {
                                            long double x87_r7_21 = v_338_1;
                                            long double f25_1 = 0f;
                                            x87_r7_21 - f25_1;

                                            if (!(*(&((x87_r7_21 < f25_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_21, f25_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_21 == f25_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                                goto label_4ca898;

                                            long double x87_r7_22 = v_334_1;
                                            long double f27_1 = 0f;
                                            x87_r7_22 - f27_1;

                                            if (!(*(&((x87_r7_22 < f27_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_22, f27_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_22 == f27_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                                goto label_4ca898;
                                        }

                                        v_348 = objC24;
                                        v_370_2 = 1;
                                        x87_r7_14 = v_3a8_3;
                                        v_34c = dstD5;
                                        v_3a4_3 = ctxB6;
                                        v_350 = valA29;
                                        v_344 = v_368_1;
                                        v_340 = v_364_1;
                                    }
                                }
                            }
                            else
                            {
                                long double x87_r5_41 = v_378_1 + 0.00999999978f;
                                long double f16_1 = v_360;
                                x87_r5_41 - f16_1;

                                if (!(*(&((x87_r5_41 < f16_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r5_41, f16_1) ? 1 : 0) << 0xa
                                    | (x87_r5_41 == f16_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                                {
                                    long double x87_r5_43 = x87_r6_24 - 0.00999999978f;
                                    long double f18_1 = v_360;
                                    x87_r5_43 - f18_1;

                                    if (*(&((x87_r5_43 < f18_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r5_43, f18_1) ? 1 : 0) << 0xa
                                            | (x87_r5_43 == f18_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
                                        goto label_4ca74d;
                                }
                            }
                        }
                    }
                }
            }

            cond_4_1 = v_318 != 1;
            v_318 -= 1;
        } while (cond_4_1);

        if (v_370_2)
        {
            int32_t v_2fc[0xbf];
            long double x87_r6_56 = (*(&v_300 + v_3a4_3 * 0xc) - *(&v_300 + v_34c * 0xc))
                * (v_2fc[v_350 * 3] - (&saved_dst)[v_34c * 3 + 0x32])
                - (*(&v_300 + v_350 * 0xc) - (&saved_dst)[v_34c * 3 + 0x31])
                * (v_2fc[v_3a4_3 * 3] - (&saved_dst)[v_34c * 3 + 0x32]);
            long double x87_r6_57 = x87_r6_56 * v_354;
            long double f5 = 0.0;
            x87_r6_57 - f5;

            if (!(*(&((x87_r6_57 < f5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_57, f5) ? 1 : 0) << 0xa
                    | (x87_r6_57 == f5 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                *a6 = a8 ^ 1;
            else
                *a6 = a8;

            *a9 = v_348 * v_354;
            a9[1] = v_344 * v_354;
            a9[2] = v_340 * v_354;
            *a4 = v_360 + *a2;
            a4[1] = v_35c + a2[1];
            a4[2] = x87_r7_14 + a2[2];
            return 1;
        }
    }

    return 0;
}
