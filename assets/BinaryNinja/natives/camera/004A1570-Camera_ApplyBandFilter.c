#include "Camera_ApplyBandFilter.h"
int32_t* Camera_ApplyBandFilter(void* a1, int32_t* a2)

{
    float valA = g_bcadc0;
    int32_t* valA1 = *(a1 + 0xec);

    if (valA1 == 1)
    {
        valA1 = *(a1 + 0x6c);

        if (valA1)
        {
            void* objC1 = *valA1;

            if (objC1)
            {
                void* srcS1 = *(*(objC1 + 0xc) + 0xc);
                float v_34 = *(a1 + 0x20) - g_bcab08;
                void* valA3 = *(*(*valA1 + 0xc) + 0xc);
                long double x87_r7_10 = *(valA3 + 0x38) * *(a1 + 0x78)
                    + *(valA3 + 0x34) * *(a1 + 0x74) + *(a1 + 0x70) * *(valA3 + 0x30);
                long double x87_r6_8 = *(a1 + 0x84) * *(valA3 + 0x38)
                    + *(a1 + 0x7c) * *(valA3 + 0x30) + *(valA3 + 0x34) * *(a1 + 0x80);
                long double x87_r6_12 = *(valA3 + 0x34) * *(a1 + 0x8c)
                    + *(a1 + 0x88) * *(valA3 + 0x30) + *(valA3 + 0x38) * *(a1 + 0x90);
                long double x87_r7_11 = x87_r7_10 + v_34;
                long double x87_r6_14 = x87_r6_8 + *(a1 + 0x28) - g_bcab10;
                long double x87_r5_10 = x87_r6_12 + *(a1 + 0x30) - g_bcab18;
                long double x87_r4_6 = g_bcaaf4 * x87_r5_10;
                long double x87_r3_6 = g_bcaaf0 * x87_r6_14;
                v_34 =
                    g_bcaae8 * x87_r5_10 + g_bcaae4 * x87_r6_14 + g_bcaae0 * x87_r7_11;
                float v_84 = x87_r4_6 + x87_r3_6 + g_bcaaec * x87_r7_11;
                float v_80_1 =
                    g_bcab00 * x87_r5_10 + g_bcaafc * x87_r6_14 + g_bcaaf8 * x87_r7_11;
                long double x87_r7_13 = *(a1 + 0x98);
                long double x87_r6_16 = *(a1 + 0x9c);
                float v_30_2 = v_84;
                x87_r6_16 - x87_r7_13;
                long double x87_r7_14;

                if (!(*(&((x87_r6_16 < x87_r7_13 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_16, x87_r7_13) ? 1 : 0) << 0xa
                        | (x87_r6_16 == x87_r7_13 ? 1 : 0) << 0xe) + 1) & 1))
                    x87_r7_14 = *(a1 + 0x9c);
                else
                    x87_r7_14 = *(a1 + 0x98);

                long double x87_r6_17 = *(a1 + 0xa0);
                x87_r7_14 - x87_r6_17;
                long double x87_r7_17;

                if (*(&((x87_r7_14 < x87_r6_17 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_14, x87_r6_17) ? 1 : 0) << 0xa
                        | (x87_r7_14 == x87_r6_17 ? 1 : 0) << 0xe) + 1) & 0x41)
                    x87_r7_17 = *(a1 + 0xa0);
                else
                {
                    long double x87_r7_16 = *(a1 + 0x98);
                    long double x87_r6_19 = *(a1 + 0x9c);
                    x87_r6_19 - x87_r7_16;

                    if (!(*(&((x87_r6_19 < x87_r7_16 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_19, x87_r7_16) ? 1 : 0) << 0xa
                            | (x87_r6_19 == x87_r7_16 ? 1 : 0) << 0xe) + 1) & 1))
                        x87_r7_17 = *(a1 + 0x9c);
                    else
                        x87_r7_17 = *(a1 + 0x98);
                }

                float v_9c_1 = x87_r7_17 * *(srcS1 + 0x3c);
                valA1 = Render_DrawBoneMesh(&v_34, v_9c_1, 0);

                if (!valA1)
                {
                    long double x87_r7_20 = v_80_1 - v_9c_1;
                    valA1 = a2;
                    long double f1_1 = valA1[2];
                    x87_r7_20 - f1_1;
                    valA1 = (x87_r7_20 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_20, f1_1) ? 1 : 0) << 0xa
                        | (x87_r7_20 == f1_1 ? 1 : 0) << 0xe | 0x3800;

                    if (*(&valA1 + 1) & 0x41)
                    {
                        valA1 = *(srcS1 + 0x20);
                        void v_10c;
                        void v_f0;
                        void v_d4;
                        float v_a0;
                        float v_70;
                        float v_6c;
                        float v_68;
                        float v_5c;
                        float v_50;

                        if (!valA1)
                        {
                            long double x87_r6_22 = *(a1 + 0x20) - g_bcab08;
                            long double x87_r5_13 = *(a1 + 0x28) - g_bcab10;
                            long double x87_r4_14 = *(a1 + 0x30) - g_bcab18;
                            void* valA6 = *(srcS1 + 0x24);
                            long double x87_r3_15 =
                                x87_r4_14 * g_bcaae8 + x87_r5_13 * g_bcaae4;
                            long double x87_r2_4 = x87_r6_22 * g_bcaae0;
                            v_a0 = a2[2];
                            float v_7c_1 = x87_r3_15 + x87_r2_4;
                            float v_78_2 = x87_r4_14 * g_bcaaf4 + x87_r5_13 * g_bcaaf0
                                + x87_r6_22 * g_bcaaec;
                            float v_74_2 = x87_r4_14 * g_bcab00 + x87_r5_13 * g_bcaafc
                                + x87_r6_22 * g_bcaaf8;
                            float v_28 = g_bcaae4 * *(a1 + 0x7c)
                                + g_bcaae0 * *(a1 + 0x70) + g_bcaae8 * *(a1 + 0x88);
                            float v_24_1 = g_bcaae4 * *(a1 + 0x80)
                                + g_bcaae8 * *(a1 + 0x8c) + g_bcaae0 * *(a1 + 0x74);
                            float v_20_1 = g_bcaae4 * *(a1 + 0x84)
                                + g_bcaae8 * *(a1 + 0x90) + g_bcaae0 * *(a1 + 0x78);
                            float v_1c_1 = g_bcaaf0 * *(a1 + 0x7c)
                                + g_bcaaec * *(a1 + 0x70) + g_bcaaf4 * *(a1 + 0x88);
                            int32_t v_4_1 = *(a1 + 0x94) + g_bcab04 + 1;
                            float v_18_1 = g_bcaaf0 * *(a1 + 0x80)
                                + g_bcaaf4 * *(a1 + 0x8c) + g_bcaaec * *(a1 + 0x74);
                            float v_14_1 = g_bcaaf0 * *(a1 + 0x84)
                                + g_bcaaf4 * *(a1 + 0x90) + g_bcaaec * *(a1 + 0x78);
                            float v_10_1 = g_bcaafc * *(a1 + 0x7c)
                                + g_bcaaf8 * *(a1 + 0x70) + g_bcab00 * *(a1 + 0x88);
                            float v_c_1 = g_bcaafc * *(a1 + 0x80)
                                + g_bcab00 * *(a1 + 0x8c) + g_bcaaf8 * *(a1 + 0x74);
                            float v_8_1 = g_bcaafc * *(a1 + 0x84)
                                + g_bcab00 * *(a1 + 0x90) + g_bcaaf8 * *(a1 + 0x78);
                            long double x87_r6_62 = v_28 * *(a1 + 0x98);
                            memcpy(&v_5c, &v_28, 0x28);
                            v_5c = x87_r6_62;
                            float v_58;
                            float v_58_1 = v_58 * *(a1 + 0x9c);
                            float v_54;
                            float v_54_1 = v_54 * *(a1 + 0xa0);
                            v_50 = v_50 * *(a1 + 0x98);
                            float v_4c;
                            float v_4c_1 = v_4c * *(a1 + 0x9c);
                            float v_48;
                            float v_48_1 = v_48 * *(a1 + 0xa0);
                            float v_44;
                            float v_44_1 = v_44 * *(a1 + 0x98);
                            float v_40;
                            float v_40_1 = v_40 * *(a1 + 0x9c);
                            float* flagP1 = *(valA6 + 0x10);
                            void* v_9c_2 = nullptr;
                            float v_3c;
                            float v_3c_1 = v_3c * *(a1 + 0xa0);

                            if (*(valA6 + 0xc) > 0)
                            {
                                int32_t* tmpD5 = &g_7af200;
                                bool cond_4_1;

                                do
                                {
                                    float v_88_2 =
                                        v_5c * *flagP1 + v_54_1 * flagP1[2] + v_58_1 * flagP1[1];
                                    float v_94_1 = v_88_2;
                                    v_84 =
                                        v_50 * *flagP1 + v_48_1 * flagP1[2] + v_4c_1 * flagP1[1];
                                    float v_94_2 = v_88_2 + v_7c_1;
                                    float v_90_2 = v_84 + v_78_2;
                                    long double x87_r6_96 = v_44_1 * *flagP1 + v_3c_1 * flagP1[2]
                                        + v_40_1 * flagP1[1] + v_74_2;
                                    float v_8c_2 = x87_r6_96;
                                    long double f6_1 = valA;
                                    x87_r6_96 - f6_1;
                                    int32_t valA14;

                                    if (*(&((x87_r6_96 < f6_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_96, f6_1) ? 1 : 0) << 0xa
                                            | (x87_r6_96 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                        valA14 = 0x10;
                                    else
                                    {
                                        long double x87_r6_98 = 1f / v_8c_2;
                                        v_68 = x87_r6_98;
                                        long double x87_r6_101 =
                                            x87_r6_98 * v_94_2 * g_bcab28 + g_bcab30;
                                        v_70 = x87_r6_101;
                                        long double x87_r5_69 =
                                            g_bcab2c * v_68 * v_90_2 + g_bcab34;
                                        v_6c = x87_r5_69;
                                        long double f7_1 = g_bcabd0;
                                        x87_r6_101 - f7_1;
                                        int32_t dstD1;

                                        dstD1 = !(*(&((x87_r6_101 < f7_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_101, f7_1) ? 1 : 0) << 0xa
                                            | (x87_r6_101 == f7_1 ? 1 : 0) << 0xe | 0x2800) + 1)
                                            & 1) ? 0 : 1;

                                        long double f12_1 = g_bcabd4;
                                        x87_r5_69 - f12_1;
                                        int32_t srcS2;

                                        srcS2 = !(*(&((x87_r5_69 < f12_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r5_69, f12_1) ? 1 : 0) << 0xa
                                            | (x87_r5_69 == f12_1 ? 1 : 0) << 0xe | 0x3000) + 1)
                                            & 1) ? 0 : 1;

                                        long double f17_1 = g_bcabd8;
                                        x87_r6_101 - f17_1;
                                        int32_t objC10;

                                        objC10 = *(&((x87_r6_101 < f17_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_101, f17_1) ? 1 : 0) << 0xa
                                            | (x87_r6_101 == f17_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41 ? 0 : 1;

                                        long double x87_r6_102 = v_6c;
                                        long double f22_1 = g_bcabdc;
                                        x87_r6_102 - f22_1;

                                        valA14 = *(&((x87_r6_102 < f22_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_102, f22_1) ? 1 : 0) << 0xa
                                            | (x87_r6_102 == f22_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41 ? (objC10 << 1 | srcS2) << 1 | dstD1
                                            : ((2 | objC10) << 1 | srcS2) << 1 | dstD1;
                                    }

                                    tmpD5[-6] = v_94_2;
                                    *tmpD5 = valA14;
                                    tmpD5[-5] = v_90_2;
                                    tmpD5[-4] = v_8c_2;
                                    tmpD5[-3] = v_70;
                                    tmpD5[-2] = v_6c;
                                    tmpD5[-1] = v_68;

                                    if (!valA14)
                                    {
                                        long double x87_r6_103 = v_8c_2;
                                        long double f11_1 = v_a0;
                                        x87_r6_103 - f11_1;

                                        if (*(&((x87_r6_103 < f11_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r6_103, f11_1) ? 1 : 0) << 0xa
                                                | (x87_r6_103 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 1)
                                            v_a0 = v_8c_2;
                                    }

                                    flagP1 = &flagP1[8];
                                    tmpD5 = &tmpD5[7];
                                    cond_4_1 = v_9c_2 + 1 < *(valA6 + 0xc);
                                    v_9c_2 += 1;
                                } while (cond_4_1);
                            }

                            long double f4_1 = a2[2];
                            x87_r7_20 - f4_1;

                            if (*(&((x87_r7_20 < f4_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_20, f4_1) ? 1 : 0) << 0xa
                                | (x87_r7_20 == f4_1 ? 1 : 0) << 0xe) + 1) & 1)
                            {
                                void* valA24 = *(valA6 + 0x14);
                                void* v_9c_3 = valA24;

                                if (valA24)
                                {
                                    void* srcS10 = valA24;

                                    while (true)
                                    {
                                        int32_t objC14 = 0;
                                        objC14 = *(srcS10 + 0xc);
                                        int16_t* flagP2 = srcS10 + 0x1c;
                                        int32_t i_2 = 0;

                                        if (objC14 / 3 > 0)
                                        {
                                            int32_t objC27;
                                            int32_t i;

                                            do
                                            {
                                                int32_t valA26 = 0;
                                                int32_t objC17 = 0;
                                                valA26 = *(srcS10 + 0x12);
                                                objC17 = *flagP2;
                                                int32_t objC18 = objC17 + valA26;
                                                int32_t objC19 = 0;
                                                objC19 = flagP2[1];
                                                int32_t objC20 = objC19 + valA26;
                                                int32_t objC21 = 0;
                                                objC21 = flagP2[2];
                                                int32_t objC22 = objC21 + valA26;
                                                int32_t valA29 = *(objC18 * 0x1c + &g_7af200);
                                                int32_t objC25 = *(objC22 * 0x1c + &g_7af200);

                                                if (valA29 | *(objC20 * 0x1c + &g_7af200)
                                                    | objC25 && !(objC25 & valA29
                                                    & *(objC20 * 0x1c + &g_7af200)))
                                                {
                                                    long double x87_r7_21 =
                                                        *(objC18 * 0x1c + 0x7af1f0);
                                                    long double f16_1 = v_a0;
                                                    x87_r7_21 - f16_1;

                                                    if (*(&((x87_r7_21 < f16_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_21, f16_1) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r7_21 == f16_1 ? 1 : 0) << 0xe) + 1)
                                                        & 1)
                                                    {
                                                    label_4a1d1e:
                                                        float v_b4_2 = valA;
                                                        float* v_b8_2 = &v_a0;
                                                        memcpy(&v_d4,
                                                            objC22 * 0x1c + &g_7af1e8, 0x1c);
                                                        memcpy(&v_f0,
                                                            objC20 * 0x1c + &g_7af1e8, 0x1c);
                                                        memcpy(&v_10c,
                                                            objC18 * 0x1c + &g_7af1e8, 0x1c);
                                                        Camera_SetFieldOfView();
                                                    }
                                                    else
                                                    {
                                                        long double x87_r7_22 =
                                                            *(objC20 * 0x1c + 0x7af1f0);
                                                        long double f20_1 = v_a0;
                                                        x87_r7_22 - f20_1;

                                                        if (*(&((x87_r7_22 < f20_1 ? 1 : 0) << 8
                                                                | (FCMP_UO(x87_r7_22, f20_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r7_22 == f20_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1)
                                                            goto label_4a1d1e;

                                                        long double x87_r7_23 =
                                                            *(objC22 * 0x1c + 0x7af1f0);
                                                        long double f21_1 = v_a0;
                                                        x87_r7_23 - f21_1;

                                                        if (*(&((x87_r7_23 < f21_1 ? 1 : 0) << 8
                                                                | (FCMP_UO(x87_r7_23, f21_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r7_23 == f21_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1)
                                                            goto label_4a1d1e;
                                                    }
                                                }

                                                srcS10 = v_9c_3;
                                                objC27 = 0;
                                                objC27 = *(srcS10 + 0xc);
                                                i = i_2 + 1;
                                                flagP2 = &flagP2[3];
                                                i_2 = i;
                                            } while (i < objC27 / 3);
                                        }

                                        int16_t valA32 = *(srcS10 + 0xe);

                                        if (valA32 == 0xffff)
                                            break;

                                        srcS10 = srcS10 + valA32 + 0x1c;
                                        v_9c_3 = srcS10;
                                    }
                                }
                            }

                            valA1 = a2;
                            valA1[2] = v_a0;
                        }
                        else if (valA1 == 3)
                        {
                            long double x87_r6_105 = *(a1 + 0x20) - g_bcab08;
                            long double x87_r5_71 = *(a1 + 0x28) - g_bcab10;
                            long double x87_r4_20 = *(a1 + 0x30) - g_bcab18;
                            void* srcS16 = *(srcS1 + 0x24);
                            void* v_64_1 = srcS16;
                            long double x87_r3_23 =
                                x87_r4_20 * g_bcaae8 + x87_r5_71 * g_bcaae4;
                            long double x87_r2_12 = x87_r6_105 * g_bcaae0;
                            v_a0 = a2[2];
                            float v_7c_2 = x87_r3_23 + x87_r2_12;
                            float v_78_4 = x87_r4_20 * g_bcaaf4 + x87_r5_71 * g_bcaaf0
                                + x87_r6_105 * g_bcaaec;
                            float v_74_3 = x87_r4_20 * g_bcab00 + x87_r5_71 * g_bcaafc
                                + x87_r6_105 * g_bcaaf8;
                            v_5c = g_bcaae4 * *(a1 + 0x7c) + g_bcaae0 * *(a1 + 0x70)
                                + g_bcaae8 * *(a1 + 0x88);
                            float v_58_2 = g_bcaae4 * *(a1 + 0x80)
                                + g_bcaae8 * *(a1 + 0x8c) + g_bcaae0 * *(a1 + 0x74);
                            float v_54_2 = g_bcaae4 * *(a1 + 0x84)
                                + g_bcaae8 * *(a1 + 0x90) + g_bcaae0 * *(a1 + 0x78);
                            v_50 = g_bcaaf0 * *(a1 + 0x7c) + g_bcaaec * *(a1 + 0x70)
                                + g_bcaaf4 * *(a1 + 0x88);
                            float* flagP3 = *(srcS16 + 0x14);
                            int32_t v_98_2 = 0;
                            int32_t v_38_1 = *(a1 + 0x94) + g_bcab04 + 1;
                            float v_4c_2 = g_bcaaf0 * *(a1 + 0x80)
                                + g_bcaaf4 * *(a1 + 0x8c) + g_bcaaec * *(a1 + 0x74);
                            float v_48_2 = g_bcaaf0 * *(a1 + 0x84)
                                + g_bcaaf4 * *(a1 + 0x90) + g_bcaaec * *(a1 + 0x78);
                            float v_44_2 = g_bcaafc * *(a1 + 0x7c)
                                + g_bcaaf8 * *(a1 + 0x70) + g_bcab00 * *(a1 + 0x88);
                            float v_40_2 = g_bcaafc * *(a1 + 0x80)
                                + g_bcab00 * *(a1 + 0x8c) + g_bcaaf8 * *(a1 + 0x74);
                            float v_3c_2 = g_bcaafc * *(a1 + 0x84)
                                + g_bcab00 * *(a1 + 0x90) + g_bcaaf8 * *(a1 + 0x78);

                            if (*(srcS16 + 0x10) > 0)
                            {
                                int32_t* tmpD17 = &g_8ad080;
                                bool cond_5_1;

                                do
                                {
                                    float v_88_3 =
                                        v_54_2 * flagP3[2] + v_58_2 * flagP3[1] + v_5c * *flagP3;
                                    float v_94_3 = v_88_3;
                                    v_84 =
                                        v_48_2 * flagP3[2] + v_4c_2 * flagP3[1] + v_50 * *flagP3;
                                    float v_94_4 = v_88_3 + v_7c_2;
                                    float v_90_4 = v_84 + v_78_4;
                                    long double x87_r6_161 = v_3c_2 * flagP3[2]
                                        + v_40_2 * flagP3[1] + v_44_2 * *flagP3 + v_74_3;
                                    float v_8c_4 = x87_r6_161;
                                    long double f3_1 = valA;
                                    x87_r6_161 - f3_1;
                                    int32_t valA45;

                                    if (*(&((x87_r6_161 < f3_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_161, f3_1) ? 1 : 0) << 0xa
                                            | (x87_r6_161 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                        valA45 = 0x10;
                                    else
                                    {
                                        long double x87_r6_163 = 1f / v_8c_4;
                                        v_68 = x87_r6_163;
                                        long double x87_r6_166 =
                                            x87_r6_163 * v_94_4 * g_bcab28 + g_bcab30;
                                        v_70 = x87_r6_166;
                                        long double x87_r5_127 =
                                            v_68 * v_90_4 * g_bcab2c + g_bcab34;
                                        v_6c = x87_r5_127;
                                        long double f5_1 = g_bcabd0;
                                        x87_r6_166 - f5_1;
                                        int32_t srcS17;

                                        srcS17 = !(*(&((x87_r6_166 < f5_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_166, f5_1) ? 1 : 0) << 0xa
                                            | (x87_r6_166 == f5_1 ? 1 : 0) << 0xe | 0x2800) + 1)
                                            & 1) ? 0 : 1;

                                        long double f9_1 = g_bcabd4;
                                        x87_r5_127 - f9_1;
                                        int32_t dstD8;

                                        dstD8 = !(*(&((x87_r5_127 < f9_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r5_127, f9_1) ? 1 : 0) << 0xa
                                            | (x87_r5_127 == f9_1 ? 1 : 0) << 0xe | 0x3000) + 1)
                                            & 1) ? 0 : 1;

                                        long double f14_1 = g_bcabd8;
                                        x87_r6_166 - f14_1;
                                        int32_t objC33;

                                        objC33 = *(&((x87_r6_166 < f14_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_166, f14_1) ? 1 : 0) << 0xa
                                            | (x87_r6_166 == f14_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41 ? 0 : 1;

                                        long double x87_r6_167 = v_6c;
                                        long double f19_1 = g_bcabdc;
                                        x87_r6_167 - f19_1;
                                        int32_t valA39;

                                        valA39 = *(&((x87_r6_167 < f19_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_167, f19_1) ? 1 : 0) << 0xa
                                            | (x87_r6_167 == f19_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41 ? 0 : 1;

                                        valA45 =
                                            (((valA39 * 2) | objC33) << 1 | dstD8) << 1 | srcS17;
                                        srcS16 = v_64_1;
                                    }

                                    tmpD17[-6] = v_94_4;
                                    *tmpD17 = valA45;
                                    tmpD17[-5] = v_90_4;
                                    tmpD17[-4] = v_8c_4;
                                    tmpD17[-3] = v_70;
                                    tmpD17[-2] = v_6c;
                                    tmpD17[-1] = v_68;

                                    if (!valA45)
                                    {
                                        long double x87_r6_168 = v_8c_4;
                                        long double f8_1 = v_a0;
                                        x87_r6_168 - f8_1;

                                        if (*(&((x87_r6_168 < f8_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r6_168, f8_1) ? 1 : 0) << 0xa
                                                | (x87_r6_168 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 1)
                                            v_a0 = v_8c_4;
                                    }

                                    flagP3 = &flagP3[0xa];
                                    tmpD17 = &tmpD17[7];
                                    cond_5_1 = v_98_2 + 1 < *(srcS16 + 0x10);
                                    v_98_2 += 1;
                                } while (cond_5_1);
                            }

                            long double f2_1 = a2[2];
                            x87_r7_20 - f2_1;

                            if (*(&((x87_r7_20 < f2_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_20, f2_1) ? 1 : 0) << 0xa
                                | (x87_r7_20 == f2_1 ? 1 : 0) << 0xe) + 1) & 1)
                            {
                                void* valA50 = *(srcS16 + 0x1c);
                                void* v_9c_4 = valA50;

                                if (valA50)
                                {
                                    void* dstD15 = valA50;

                                    while (true)
                                    {
                                        int32_t objC38 = 0;
                                        objC38 = *(dstD15 + 0xc);
                                        int16_t* flagP4 = dstD15 + 0x20;
                                        int32_t v_98_3 = 0;

                                        if (objC38 / 3 > 0)
                                        {
                                            bool cond_6_1;

                                            do
                                            {
                                                int32_t valA54 = 0;
                                                int32_t objC39 = 0;
                                                valA54 = *(dstD15 + 0x14);
                                                objC39 = *flagP4;
                                                int32_t objC40 = objC39 + valA54;
                                                int32_t objC41 = 0;
                                                objC41 = flagP4[1];
                                                int32_t objC42 = objC41 + valA54;
                                                int32_t objC43 = 0;
                                                objC43 = flagP4[2];
                                                int32_t objC44 = objC43 + valA54;
                                                v_84 = objC42 * 0x1c + &g_8ad068;
                                                int32_t valA57 = *(objC40 * 0x1c + &g_8ad080);
                                                int32_t objC48 = *(objC44 * 0x1c + &g_8ad080);

                                                if (valA57 | *(objC42 * 0x1c + &g_8ad080)
                                                    | objC48)
                                                {
                                                    float srcS25 = v_84;

                                                    if (!(objC48 & valA57 & *(srcS25 + 0x18)))
                                                    {
                                                        long double x87_r7_24 =
                                                            *(objC40 * 0x1c + 0x8ad070);
                                                        long double f13_1 = v_a0;
                                                        x87_r7_24 - f13_1;

                                                        if (*(&((x87_r7_24 < f13_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(x87_r7_24, f13_1) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r7_24 == f13_1 ? 1 : 0)
                                                            << 0xe) + 1) & 1)
                                                        {
                                                        label_4a2297:
                                                            float v_b4_3 = valA;
                                                            float* v_b8_3 = &v_a0;
                                                            memcpy(&v_d4,
                                                                objC44 * 0x1c + &g_8ad068, 0x1c);
                                                            memcpy(&v_f0, v_84, 0x1c);
                                                            memcpy(&v_10c,
                                                                objC40 * 0x1c + &g_8ad068, 0x1c);
                                                            Camera_SetFieldOfView();
                                                            dstD15 = v_9c_4;
                                                        }
                                                        else
                                                        {
                                                            long double x87_r7_25 = *(srcS25 + 8);
                                                            long double f15_1 = v_a0;
                                                            x87_r7_25 - f15_1;

                                                            if (*(&(
                                                                    (x87_r7_25 < f15_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(x87_r7_25, f15_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (x87_r7_25 == f15_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 1)
                                                                goto label_4a2297;

                                                            long double x87_r7_26 =
                                                                *(objC44 * 0x1c + 0x8ad070);
                                                            long double f18_1 = v_a0;
                                                            x87_r7_26 - f18_1;

                                                            if (*(&(
                                                                    (x87_r7_26 < f18_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(x87_r7_26, f18_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (x87_r7_26 == f18_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 1)
                                                                goto label_4a2297;
                                                        }
                                                    }
                                                }

                                                int32_t objC50 = 0;
                                                objC50 = *(dstD15 + 0xc);
                                                flagP4 = &flagP4[3];
                                                cond_6_1 = v_98_3 + 1 < objC50 / 3;
                                                v_98_3 += 1;
                                            } while (cond_6_1);
                                        }

                                        int16_t valA62 = *(dstD15 + 0xe);

                                        if (valA62 == 0xffff)
                                            break;

                                        dstD15 = dstD15 + valA62 + 0x20;
                                        v_9c_4 = dstD15;
                                    }
                                }
                            }

                            valA1 = a2;
                            valA1[2] = v_a0;
                        }
                        void* ctxB1 = *(a1 + 0xe8);

                        if (ctxB1)
                        {
                            int32_t* i_1 = *(ctxB1 + 8);

                            if (*i_1 && i_1)
                            {
                                int32_t objC53 = g_afa7e0;
                                int32_t valA70;

                                do
                                {
                                    int32_t* tmpD26 = *i_1;
                                    void* valA67;

                                    if (!tmpD26)
                                        valA67 = nullptr;
                                    else
                                    {
                                        int32_t valA64 = *tmpD26;
                                        int32_t valA65 = -(valA64);
                                        valA67 = (valA65 - valA65) & tmpD26;
                                    }

                                    *((objC53 << 2) + &g_afa6e0) = valA67;
                                    g_afa7e0 = objC53 + 1;
                                    uint32_t valA69 = Render_DrawSplineMesh_4();
                                    int32_t tmpD27 = 0;
                                    tmpD27 = i_1[7];
                                    valA70 = *(((valA69 * 0x180 + tmpD27) << 2) + &g_a96ae0);

                                    if (valA70)
                                        valA70 = valA70(i_1, a2);

                                    objC53 = g_afa7e0 - 1;
                                    g_afa7e0 = objC53;
                                    i_1 = *((objC53 << 2) + &g_afa6e0);
                                } while (i_1);

                                return valA70;
                            }
                        }
                    }
                }
            }
        }
    }

    return valA1;
}
