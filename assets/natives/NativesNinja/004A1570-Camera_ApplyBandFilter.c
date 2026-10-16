#include "004A1570-Camera_ApplyBandFilter.h"
/* 0x004a1570 Camera_ApplyBandFilter full linked: callers=0 callees=11 */
int32_t* sub_4a1570(void* a1, int32_t* a2)

{
    float eax = g_bcadc0;
    int32_t* eax_1 = *(a1 + 0xec);

    if (eax_1 == 1)
    {
        eax_1 = *(a1 + 0x6c);

        if (eax_1)
        {
            void* ecx_1 = *eax_1;

            if (ecx_1)
            {
                void* esi_1 = *(*(ecx_1 + 0xc) + 0xc);
                float var_34 = *(a1 + 0x20) - g_bcab08;
                void* eax_3 = *(*(*eax_1 + 0xc) + 0xc);
                long double x87_r7_10 = *(eax_3 + 0x38) * *(a1 + 0x78)
                    + *(eax_3 + 0x34) * *(a1 + 0x74) + *(a1 + 0x70) * *(eax_3 + 0x30);
                long double x87_r6_8 = *(a1 + 0x84) * *(eax_3 + 0x38)
                    + *(a1 + 0x7c) * *(eax_3 + 0x30) + *(eax_3 + 0x34) * *(a1 + 0x80);
                long double x87_r6_12 = *(eax_3 + 0x34) * *(a1 + 0x8c)
                    + *(a1 + 0x88) * *(eax_3 + 0x30) + *(eax_3 + 0x38) * *(a1 + 0x90);
                long double x87_r7_11 = x87_r7_10 + var_34;
                long double x87_r6_14 = x87_r6_8 + *(a1 + 0x28) - g_bcab10;
                long double x87_r5_10 = x87_r6_12 + *(a1 + 0x30) - g_bcab18;
                long double x87_r4_6 = g_bcaaf4 * x87_r5_10;
                long double x87_r3_6 = g_bcaaf0 * x87_r6_14;
                var_34 =
                    g_bcaae8 * x87_r5_10 + g_bcaae4 * x87_r6_14 + g_bcaae0 * x87_r7_11;
                float var_84 = x87_r4_6 + x87_r3_6 + g_bcaaec * x87_r7_11;
                float var_80_1 =
                    g_bcab00 * x87_r5_10 + g_bcaafc * x87_r6_14 + g_bcaaf8 * x87_r7_11;
                long double x87_r7_13 = *(a1 + 0x98);
                long double x87_r6_16 = *(a1 + 0x9c);
                float var_30_2 = var_84;
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

                float var_9c_1 = x87_r7_17 * *(esi_1 + 0x3c);
                eax_1 = sub_4d03d0(&var_34, var_9c_1, 0);

                if (!eax_1)
                {
                    long double x87_r7_20 = var_80_1 - var_9c_1;
                    eax_1 = a2;
                    long double temp1_1 = eax_1[2];
                    x87_r7_20 - temp1_1;
                    eax_1 = (x87_r7_20 < temp1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_20, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r7_20 == temp1_1 ? 1 : 0) << 0xe | 0x3800;

                    if (*(&eax_1 + 1) & 0x41)
                    {
                        eax_1 = *(esi_1 + 0x20);
                        void var_10c;
                        void var_f0;
                        void var_d4;
                        float var_a0;
                        float var_70;
                        float var_6c;
                        float var_68;
                        float var_5c;
                        float var_50;

                        if (!eax_1)
                        {
                            long double x87_r6_22 = *(a1 + 0x20) - g_bcab08;
                            long double x87_r5_13 = *(a1 + 0x28) - g_bcab10;
                            long double x87_r4_14 = *(a1 + 0x30) - g_bcab18;
                            void* eax_6 = *(esi_1 + 0x24);
                            long double x87_r3_15 =
                                x87_r4_14 * g_bcaae8 + x87_r5_13 * g_bcaae4;
                            long double x87_r2_4 = x87_r6_22 * g_bcaae0;
                            var_a0 = a2[2];
                            float var_7c_1 = x87_r3_15 + x87_r2_4;
                            float var_78_2 = x87_r4_14 * g_bcaaf4 + x87_r5_13 * g_bcaaf0
                                + x87_r6_22 * g_bcaaec;
                            float var_74_2 = x87_r4_14 * g_bcab00 + x87_r5_13 * g_bcaafc
                                + x87_r6_22 * g_bcaaf8;
                            float var_28 = g_bcaae4 * *(a1 + 0x7c)
                                + g_bcaae0 * *(a1 + 0x70) + g_bcaae8 * *(a1 + 0x88);
                            float var_24_1 = g_bcaae4 * *(a1 + 0x80)
                                + g_bcaae8 * *(a1 + 0x8c) + g_bcaae0 * *(a1 + 0x74);
                            float var_20_1 = g_bcaae4 * *(a1 + 0x84)
                                + g_bcaae8 * *(a1 + 0x90) + g_bcaae0 * *(a1 + 0x78);
                            float var_1c_1 = g_bcaaf0 * *(a1 + 0x7c)
                                + g_bcaaec * *(a1 + 0x70) + g_bcaaf4 * *(a1 + 0x88);
                            int32_t var_4_1 = *(a1 + 0x94) + g_bcab04 + 1;
                            float var_18_1 = g_bcaaf0 * *(a1 + 0x80)
                                + g_bcaaf4 * *(a1 + 0x8c) + g_bcaaec * *(a1 + 0x74);
                            float var_14_1 = g_bcaaf0 * *(a1 + 0x84)
                                + g_bcaaf4 * *(a1 + 0x90) + g_bcaaec * *(a1 + 0x78);
                            float var_10_1 = g_bcaafc * *(a1 + 0x7c)
                                + g_bcaaf8 * *(a1 + 0x70) + g_bcab00 * *(a1 + 0x88);
                            float var_c_1 = g_bcaafc * *(a1 + 0x80)
                                + g_bcab00 * *(a1 + 0x8c) + g_bcaaf8 * *(a1 + 0x74);
                            float var_8_1 = g_bcaafc * *(a1 + 0x84)
                                + g_bcab00 * *(a1 + 0x90) + g_bcaaf8 * *(a1 + 0x78);
                            long double x87_r6_62 = var_28 * *(a1 + 0x98);
                            memcpy(&var_5c, &var_28, 0x28);
                            var_5c = x87_r6_62;
                            float var_58;
                            float var_58_1 = var_58 * *(a1 + 0x9c);
                            float var_54;
                            float var_54_1 = var_54 * *(a1 + 0xa0);
                            var_50 = var_50 * *(a1 + 0x98);
                            float var_4c;
                            float var_4c_1 = var_4c * *(a1 + 0x9c);
                            float var_48;
                            float var_48_1 = var_48 * *(a1 + 0xa0);
                            float var_44;
                            float var_44_1 = var_44 * *(a1 + 0x98);
                            float var_40;
                            float var_40_1 = var_40 * *(a1 + 0x9c);
                            float* ebp_1 = *(eax_6 + 0x10);
                            void* var_9c_2 = nullptr;
                            float var_3c;
                            float var_3c_1 = var_3c * *(a1 + 0xa0);

                            if (*(eax_6 + 0xc) > 0)
                            {
                                int32_t* edx_5 = &g_7af200;
                                bool cond:4_1;

                                do
                                {
                                    float var_88_2 =
                                        var_5c * *ebp_1 + var_54_1 * ebp_1[2] + var_58_1 * ebp_1[1];
                                    float var_94_1 = var_88_2;
                                    var_84 =
                                        var_50 * *ebp_1 + var_48_1 * ebp_1[2] + var_4c_1 * ebp_1[1];
                                    float var_94_2 = var_88_2 + var_7c_1;
                                    float var_90_2 = var_84 + var_78_2;
                                    long double x87_r6_96 = var_44_1 * *ebp_1 + var_3c_1 * ebp_1[2]
                                        + var_40_1 * ebp_1[1] + var_74_2;
                                    float var_8c_2 = x87_r6_96;
                                    long double temp6_1 = eax;
                                    x87_r6_96 - temp6_1;
                                    int32_t eax_14;

                                    if (*(&((x87_r6_96 < temp6_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_96, temp6_1) ? 1 : 0) << 0xa
                                            | (x87_r6_96 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                        eax_14 = 0x10;
                                    else
                                    {
                                        long double x87_r6_98 = 1f / var_8c_2;
                                        var_68 = x87_r6_98;
                                        long double x87_r6_101 =
                                            x87_r6_98 * var_94_2 * g_bcab28 + g_bcab30;
                                        var_70 = x87_r6_101;
                                        long double x87_r5_69 =
                                            g_bcab2c * var_68 * var_90_2 + g_bcab34;
                                        var_6c = x87_r5_69;
                                        long double temp7_1 = g_bcabd0;
                                        x87_r6_101 - temp7_1;
                                        int32_t edi_1;

                                        edi_1 = !(*(&((x87_r6_101 < temp7_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_101, temp7_1) ? 1 : 0) << 0xa
                                            | (x87_r6_101 == temp7_1 ? 1 : 0) << 0xe | 0x2800) + 1)
                                            & 1) ? 0 : 1;

                                        long double temp12_1 = g_bcabd4;
                                        x87_r5_69 - temp12_1;
                                        int32_t esi_2;

                                        esi_2 = !(*(&((x87_r5_69 < temp12_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r5_69, temp12_1) ? 1 : 0) << 0xa
                                            | (x87_r5_69 == temp12_1 ? 1 : 0) << 0xe | 0x3000) + 1)
                                            & 1) ? 0 : 1;

                                        long double temp17_1 = g_bcabd8;
                                        x87_r6_101 - temp17_1;
                                        int32_t ecx_10;

                                        ecx_10 = *(&((x87_r6_101 < temp17_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_101, temp17_1) ? 1 : 0) << 0xa
                                            | (x87_r6_101 == temp17_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41 ? 0 : 1;

                                        long double x87_r6_102 = var_6c;
                                        long double temp22_1 = g_bcabdc;
                                        x87_r6_102 - temp22_1;

                                        eax_14 = *(&((x87_r6_102 < temp22_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_102, temp22_1) ? 1 : 0) << 0xa
                                            | (x87_r6_102 == temp22_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41 ? (ecx_10 << 1 | esi_2) << 1 | edi_1
                                            : ((2 | ecx_10) << 1 | esi_2) << 1 | edi_1;
                                    }

                                    edx_5[-6] = var_94_2;
                                    *edx_5 = eax_14;
                                    edx_5[-5] = var_90_2;
                                    edx_5[-4] = var_8c_2;
                                    edx_5[-3] = var_70;
                                    edx_5[-2] = var_6c;
                                    edx_5[-1] = var_68;

                                    if (!eax_14)
                                    {
                                        long double x87_r6_103 = var_8c_2;
                                        long double temp11_1 = var_a0;
                                        x87_r6_103 - temp11_1;

                                        if (*(&((x87_r6_103 < temp11_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r6_103, temp11_1) ? 1 : 0) << 0xa
                                                | (x87_r6_103 == temp11_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 1)
                                            var_a0 = var_8c_2;
                                    }

                                    ebp_1 = &ebp_1[8];
                                    edx_5 = &edx_5[7];
                                    cond:4_1 = var_9c_2 + 1 < *(eax_6 + 0xc);
                                    var_9c_2 += 1;
                                } while (cond:4_1);
                            }

                            long double temp4_1 = a2[2];
                            x87_r7_20 - temp4_1;

                            if (*(&((x87_r7_20 < temp4_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_20, temp4_1) ? 1 : 0) << 0xa
                                | (x87_r7_20 == temp4_1 ? 1 : 0) << 0xe) + 1) & 1)
                            {
                                void* eax_24 = *(eax_6 + 0x14);
                                void* var_9c_3 = eax_24;

                                if (eax_24)
                                {
                                    void* esi_10 = eax_24;

                                    while (true)
                                    {
                                        int32_t ecx_14 = 0;
                                        ecx_14 = *(esi_10 + 0xc);
                                        int16_t* ebp_2 = esi_10 + 0x1c;
                                        int32_t i_2 = 0;

                                        if (ecx_14 / 3 > 0)
                                        {
                                            int32_t ecx_27;
                                            int32_t i;

                                            do
                                            {
                                                int32_t eax_26 = 0;
                                                int32_t ecx_17 = 0;
                                                eax_26 = *(esi_10 + 0x12);
                                                ecx_17 = *ebp_2;
                                                int32_t ecx_18 = ecx_17 + eax_26;
                                                int32_t ecx_19 = 0;
                                                ecx_19 = ebp_2[1];
                                                int32_t ecx_20 = ecx_19 + eax_26;
                                                int32_t ecx_21 = 0;
                                                ecx_21 = ebp_2[2];
                                                int32_t ecx_22 = ecx_21 + eax_26;
                                                int32_t eax_29 = *(ecx_18 * 0x1c + &g_7af200);
                                                int32_t ecx_25 = *(ecx_22 * 0x1c + &g_7af200);

                                                if (eax_29 | *(ecx_20 * 0x1c + &g_7af200)
                                                    | ecx_25 && !(ecx_25 & eax_29
                                                    & *(ecx_20 * 0x1c + &g_7af200)))
                                                {
                                                    long double x87_r7_21 =
                                                        *(ecx_18 * 0x1c + 0x7af1f0);
                                                    long double temp16_1 = var_a0;
                                                    x87_r7_21 - temp16_1;

                                                    if (*(&((x87_r7_21 < temp16_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_21, temp16_1) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r7_21 == temp16_1 ? 1 : 0) << 0xe) + 1)
                                                        & 1)
                                                    {
                                                    label_4a1d1e:
                                                        float var_b4_2 = eax;
                                                        float* var_b8_2 = &var_a0;
                                                        memcpy(&var_d4,
                                                            ecx_22 * 0x1c + &g_7af1e8, 0x1c);
                                                        memcpy(&var_f0,
                                                            ecx_20 * 0x1c + &g_7af1e8, 0x1c);
                                                        memcpy(&var_10c,
                                                            ecx_18 * 0x1c + &g_7af1e8, 0x1c);
                                                        sub_4a0340();
                                                    }
                                                    else
                                                    {
                                                        long double x87_r7_22 =
                                                            *(ecx_20 * 0x1c + 0x7af1f0);
                                                        long double temp20_1 = var_a0;
                                                        x87_r7_22 - temp20_1;

                                                        if (*(&((x87_r7_22 < temp20_1 ? 1 : 0) << 8
                                                                | (FCMP_UO(x87_r7_22, temp20_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r7_22 == temp20_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1)
                                                            goto label_4a1d1e;

                                                        long double x87_r7_23 =
                                                            *(ecx_22 * 0x1c + 0x7af1f0);
                                                        long double temp21_1 = var_a0;
                                                        x87_r7_23 - temp21_1;

                                                        if (*(&((x87_r7_23 < temp21_1 ? 1 : 0) << 8
                                                                | (FCMP_UO(x87_r7_23, temp21_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r7_23 == temp21_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1)
                                                            goto label_4a1d1e;
                                                    }
                                                }

                                                esi_10 = var_9c_3;
                                                ecx_27 = 0;
                                                ecx_27 = *(esi_10 + 0xc);
                                                i = i_2 + 1;
                                                ebp_2 = &ebp_2[3];
                                                i_2 = i;
                                            } while (i < ecx_27 / 3);
                                        }

                                        int16_t eax_32 = *(esi_10 + 0xe);

                                        if (eax_32 == 0xffff)
                                            break;

                                        esi_10 = esi_10 + eax_32 + 0x1c;
                                        var_9c_3 = esi_10;
                                    }
                                }
                            }

                            eax_1 = a2;
                            eax_1[2] = var_a0;
                        }
                        else if (eax_1 == 3)
                        {
                            long double x87_r6_105 = *(a1 + 0x20) - g_bcab08;
                            long double x87_r5_71 = *(a1 + 0x28) - g_bcab10;
                            long double x87_r4_20 = *(a1 + 0x30) - g_bcab18;
                            void* esi_16 = *(esi_1 + 0x24);
                            void* var_64_1 = esi_16;
                            long double x87_r3_23 =
                                x87_r4_20 * g_bcaae8 + x87_r5_71 * g_bcaae4;
                            long double x87_r2_12 = x87_r6_105 * g_bcaae0;
                            var_a0 = a2[2];
                            float var_7c_2 = x87_r3_23 + x87_r2_12;
                            float var_78_4 = x87_r4_20 * g_bcaaf4 + x87_r5_71 * g_bcaaf0
                                + x87_r6_105 * g_bcaaec;
                            float var_74_3 = x87_r4_20 * g_bcab00 + x87_r5_71 * g_bcaafc
                                + x87_r6_105 * g_bcaaf8;
                            var_5c = g_bcaae4 * *(a1 + 0x7c) + g_bcaae0 * *(a1 + 0x70)
                                + g_bcaae8 * *(a1 + 0x88);
                            float var_58_2 = g_bcaae4 * *(a1 + 0x80)
                                + g_bcaae8 * *(a1 + 0x8c) + g_bcaae0 * *(a1 + 0x74);
                            float var_54_2 = g_bcaae4 * *(a1 + 0x84)
                                + g_bcaae8 * *(a1 + 0x90) + g_bcaae0 * *(a1 + 0x78);
                            var_50 = g_bcaaf0 * *(a1 + 0x7c) + g_bcaaec * *(a1 + 0x70)
                                + g_bcaaf4 * *(a1 + 0x88);
                            float* ebp_3 = *(esi_16 + 0x14);
                            int32_t var_98_2 = 0;
                            int32_t var_38_1 = *(a1 + 0x94) + g_bcab04 + 1;
                            float var_4c_2 = g_bcaaf0 * *(a1 + 0x80)
                                + g_bcaaf4 * *(a1 + 0x8c) + g_bcaaec * *(a1 + 0x74);
                            float var_48_2 = g_bcaaf0 * *(a1 + 0x84)
                                + g_bcaaf4 * *(a1 + 0x90) + g_bcaaec * *(a1 + 0x78);
                            float var_44_2 = g_bcaafc * *(a1 + 0x7c)
                                + g_bcaaf8 * *(a1 + 0x70) + g_bcab00 * *(a1 + 0x88);
                            float var_40_2 = g_bcaafc * *(a1 + 0x80)
                                + g_bcab00 * *(a1 + 0x8c) + g_bcaaf8 * *(a1 + 0x74);
                            float var_3c_2 = g_bcaafc * *(a1 + 0x84)
                                + g_bcab00 * *(a1 + 0x90) + g_bcaaf8 * *(a1 + 0x78);

                            if (*(esi_16 + 0x10) > 0)
                            {
                                int32_t* edx_17 = &g_8ad080;
                                bool cond:5_1;

                                do
                                {
                                    float var_88_3 =
                                        var_54_2 * ebp_3[2] + var_58_2 * ebp_3[1] + var_5c * *ebp_3;
                                    float var_94_3 = var_88_3;
                                    var_84 =
                                        var_48_2 * ebp_3[2] + var_4c_2 * ebp_3[1] + var_50 * *ebp_3;
                                    float var_94_4 = var_88_3 + var_7c_2;
                                    float var_90_4 = var_84 + var_78_4;
                                    long double x87_r6_161 = var_3c_2 * ebp_3[2]
                                        + var_40_2 * ebp_3[1] + var_44_2 * *ebp_3 + var_74_3;
                                    float var_8c_4 = x87_r6_161;
                                    long double temp3_1 = eax;
                                    x87_r6_161 - temp3_1;
                                    int32_t eax_45;

                                    if (*(&((x87_r6_161 < temp3_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_161, temp3_1) ? 1 : 0) << 0xa
                                            | (x87_r6_161 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                        eax_45 = 0x10;
                                    else
                                    {
                                        long double x87_r6_163 = 1f / var_8c_4;
                                        var_68 = x87_r6_163;
                                        long double x87_r6_166 =
                                            x87_r6_163 * var_94_4 * g_bcab28 + g_bcab30;
                                        var_70 = x87_r6_166;
                                        long double x87_r5_127 =
                                            var_68 * var_90_4 * g_bcab2c + g_bcab34;
                                        var_6c = x87_r5_127;
                                        long double temp5_1 = g_bcabd0;
                                        x87_r6_166 - temp5_1;
                                        int32_t esi_17;

                                        esi_17 = !(*(&((x87_r6_166 < temp5_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_166, temp5_1) ? 1 : 0) << 0xa
                                            | (x87_r6_166 == temp5_1 ? 1 : 0) << 0xe | 0x2800) + 1)
                                            & 1) ? 0 : 1;

                                        long double temp9_1 = g_bcabd4;
                                        x87_r5_127 - temp9_1;
                                        int32_t edi_8;

                                        edi_8 = !(*(&((x87_r5_127 < temp9_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r5_127, temp9_1) ? 1 : 0) << 0xa
                                            | (x87_r5_127 == temp9_1 ? 1 : 0) << 0xe | 0x3000) + 1)
                                            & 1) ? 0 : 1;

                                        long double temp14_1 = g_bcabd8;
                                        x87_r6_166 - temp14_1;
                                        int32_t ecx_33;

                                        ecx_33 = *(&((x87_r6_166 < temp14_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_166, temp14_1) ? 1 : 0) << 0xa
                                            | (x87_r6_166 == temp14_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41 ? 0 : 1;

                                        long double x87_r6_167 = var_6c;
                                        long double temp19_1 = g_bcabdc;
                                        x87_r6_167 - temp19_1;
                                        int32_t eax_39;

                                        eax_39 = *(&((x87_r6_167 < temp19_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_167, temp19_1) ? 1 : 0) << 0xa
                                            | (x87_r6_167 == temp19_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41 ? 0 : 1;

                                        eax_45 =
                                            (((eax_39 * 2) | ecx_33) << 1 | edi_8) << 1 | esi_17;
                                        esi_16 = var_64_1;
                                    }

                                    edx_17[-6] = var_94_4;
                                    *edx_17 = eax_45;
                                    edx_17[-5] = var_90_4;
                                    edx_17[-4] = var_8c_4;
                                    edx_17[-3] = var_70;
                                    edx_17[-2] = var_6c;
                                    edx_17[-1] = var_68;

                                    if (!eax_45)
                                    {
                                        long double x87_r6_168 = var_8c_4;
                                        long double temp8_1 = var_a0;
                                        x87_r6_168 - temp8_1;

                                        if (*(&((x87_r6_168 < temp8_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r6_168, temp8_1) ? 1 : 0) << 0xa
                                                | (x87_r6_168 == temp8_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 1)
                                            var_a0 = var_8c_4;
                                    }

                                    ebp_3 = &ebp_3[0xa];
                                    edx_17 = &edx_17[7];
                                    cond:5_1 = var_98_2 + 1 < *(esi_16 + 0x10);
                                    var_98_2 += 1;
                                } while (cond:5_1);
                            }

                            long double temp2_1 = a2[2];
                            x87_r7_20 - temp2_1;

                            if (*(&((x87_r7_20 < temp2_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_20, temp2_1) ? 1 : 0) << 0xa
                                | (x87_r7_20 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1)
                            {
                                void* eax_50 = *(esi_16 + 0x1c);
                                void* var_9c_4 = eax_50;

                                if (eax_50)
                                {
                                    void* edi_15 = eax_50;

                                    while (true)
                                    {
                                        int32_t ecx_38 = 0;
                                        ecx_38 = *(edi_15 + 0xc);
                                        int16_t* ebp_4 = edi_15 + 0x20;
                                        int32_t var_98_3 = 0;

                                        if (ecx_38 / 3 > 0)
                                        {
                                            bool cond:6_1;

                                            do
                                            {
                                                int32_t eax_54 = 0;
                                                int32_t ecx_39 = 0;
                                                eax_54 = *(edi_15 + 0x14);
                                                ecx_39 = *ebp_4;
                                                int32_t ecx_40 = ecx_39 + eax_54;
                                                int32_t ecx_41 = 0;
                                                ecx_41 = ebp_4[1];
                                                int32_t ecx_42 = ecx_41 + eax_54;
                                                int32_t ecx_43 = 0;
                                                ecx_43 = ebp_4[2];
                                                int32_t ecx_44 = ecx_43 + eax_54;
                                                var_84 = ecx_42 * 0x1c + &g_8ad068;
                                                int32_t eax_57 = *(ecx_40 * 0x1c + &g_8ad080);
                                                int32_t ecx_48 = *(ecx_44 * 0x1c + &g_8ad080);

                                                if (eax_57 | *(ecx_42 * 0x1c + &g_8ad080)
                                                    | ecx_48)
                                                {
                                                    float esi_25 = var_84;

                                                    if (!(ecx_48 & eax_57 & *(esi_25 + 0x18)))
                                                    {
                                                        long double x87_r7_24 =
                                                            *(ecx_40 * 0x1c + 0x8ad070);
                                                        long double temp13_1 = var_a0;
                                                        x87_r7_24 - temp13_1;

                                                        if (*(&((x87_r7_24 < temp13_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(x87_r7_24, temp13_1) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r7_24 == temp13_1 ? 1 : 0)
                                                            << 0xe) + 1) & 1)
                                                        {
                                                        label_4a2297:
                                                            float var_b4_3 = eax;
                                                            float* var_b8_3 = &var_a0;
                                                            memcpy(&var_d4,
                                                                ecx_44 * 0x1c + &g_8ad068, 0x1c);
                                                            memcpy(&var_f0, var_84, 0x1c);
                                                            memcpy(&var_10c,
                                                                ecx_40 * 0x1c + &g_8ad068, 0x1c);
                                                            sub_4a0340();
                                                            edi_15 = var_9c_4;
                                                        }
                                                        else
                                                        {
                                                            long double x87_r7_25 = *(esi_25 + 8);
                                                            long double temp15_1 = var_a0;
                                                            x87_r7_25 - temp15_1;

                                                            if (*(&(
                                                                    (x87_r7_25 < temp15_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(x87_r7_25, temp15_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (x87_r7_25 == temp15_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 1)
                                                                goto label_4a2297;

                                                            long double x87_r7_26 =
                                                                *(ecx_44 * 0x1c + 0x8ad070);
                                                            long double temp18_1 = var_a0;
                                                            x87_r7_26 - temp18_1;

                                                            if (*(&(
                                                                    (x87_r7_26 < temp18_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(x87_r7_26, temp18_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (x87_r7_26 == temp18_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 1)
                                                                goto label_4a2297;
                                                        }
                                                    }
                                                }

                                                int32_t ecx_50 = 0;
                                                ecx_50 = *(edi_15 + 0xc);
                                                ebp_4 = &ebp_4[3];
                                                cond:6_1 = var_98_3 + 1 < ecx_50 / 3;
                                                var_98_3 += 1;
                                            } while (cond:6_1);
                                        }

                                        int16_t eax_62 = *(edi_15 + 0xe);

                                        if (eax_62 == 0xffff)
                                            break;

                                        edi_15 = edi_15 + eax_62 + 0x20;
                                        var_9c_4 = edi_15;
                                    }
                                }
                            }

                            eax_1 = a2;
                            eax_1[2] = var_a0;
                        }
                        void* ebx_1 = *(a1 + 0xe8);

                        if (ebx_1)
                        {
                            int32_t* i_1 = *(ebx_1 + 8);

                            if (*i_1 && i_1)
                            {
                                int32_t ecx_53 = g_afa7e0;
                                int32_t eax_70;

                                do
                                {
                                    int32_t* edx_26 = *i_1;
                                    void* eax_67;

                                    if (!edx_26)
                                        eax_67 = nullptr;
                                    else
                                    {
                                        int32_t eax_64 = *edx_26;
                                        int32_t eax_65 = -(eax_64);
                                        eax_67 = (eax_65 - eax_65) & edx_26;
                                    }

                                    *((ecx_53 << 2) + &g_afa6e0) = eax_67;
                                    g_afa7e0 = ecx_53 + 1;
                                    uint32_t eax_69 = sub_4d14d0();
                                    int32_t edx_27 = 0;
                                    edx_27 = i_1[7];
                                    eax_70 = *(((eax_69 * 0x180 + edx_27) << 2) + &g_a96ae0);

                                    if (eax_70)
                                        eax_70 = eax_70(i_1, a2);

                                    ecx_53 = g_afa7e0 - 1;
                                    g_afa7e0 = ecx_53;
                                    i_1 = *((ecx_53 << 2) + &g_afa6e0);
                                } while (i_1);

                                return eax_70;
                            }
                        }
                    }
                }
            }
        }
    }

    return eax_1;
}
