#include "0049BE10-Display_SyncVSync_19.h"
/* 0x0049be10 Display_SyncVSync_19 full linked: callers=0 callees=5 */
int32_t* sub_49be10(void* a1, void* a2)

{
    float eax = g_bcadc0;
    int32_t* eax_1 = *(a1 + 0x6c);

    if (eax_1)
    {
        float* eax_2 = *(a1 + 0x5a0);
        long double x87_r7_2 = *(a1 + 0x20) - g_bcab08;
        void* edi_1 = *(*(*eax_1 + 0xc) + 0xc);
        float var_70_1;
        float var_58;
        float var_50_2;

        if (!eax_2)
        {
            long double x87_r6_14 = *(a1 + 0x28) - g_bcab10;
            long double x87_r5_14 = *(a1 + 0x30) - g_bcab18;
            long double x87_r4_6 = g_bcaaf4 * x87_r5_14;
            long double x87_r3_6 = g_bcaaf0 * x87_r6_14;
            var_58 = g_bcaae8 * x87_r5_14 + g_bcaae4 * x87_r6_14 + g_bcaae0 * x87_r7_2;
            var_70_1 = *(a1 + 0x44);
            float var_54_4 = x87_r4_6 + x87_r3_6 + g_bcaaec * x87_r7_2;
            var_50_2 = g_bcab00 * x87_r5_14 + g_bcaafc * x87_r6_14 + g_bcaaf8 * x87_r7_2;
        }
        else
        {
            var_58 = x87_r7_2;
            float var_54_1 = *(a1 + 0x28) - g_bcab10;
            float var_50_1 = *(a1 + 0x30) - g_bcab18;
            var_58 = var_58 + *eax_2;
            float var_54_2 = var_54_1 + eax_2[1];
            long double x87_r7_12 = var_50_1 + eax_2[2];
            float var_54_3 =
                g_bcaaf4 * x87_r7_12 + g_bcaaf0 * var_54_2 + g_bcaaec * var_58;
            long double x87_r6_11 = g_bcab00 * x87_r7_12 + g_bcaafc * var_54_2;
            long double x87_r5_12 = g_bcaaf8 * var_58;
            var_58 = g_bcaae8 * x87_r7_12 + g_bcaae4 * var_54_2 + g_bcaae0 * var_58;
            var_50_2 = x87_r6_11 + x87_r5_12;
            var_70_1 = eax_2[3];
        }

        eax_1 = sub_4d03d0(&var_58, var_70_1, 0);

        if (!eax_1)
        {
            long double x87_r7_16 = var_50_2 - var_70_1;
            long double temp1_1 = *(a2 + 8);
            x87_r7_16 - temp1_1;
            eax_1 = (x87_r7_16 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_16, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_16 == temp1_1 ? 1 : 0) << 0xe | 0x3800;

            if (*(&eax_1 + 1) & 0x41)
            {
                eax_1 = *(edi_1 + 0x20);

                if (!eax_1)
                {
                    void* edx_5 = *(edi_1 + 0x24);
                    char ebx = *(a1 + 0x5b4);
                    float var_74 = *(a2 + 8);
                    float* ecx_7 = *(edx_5 + 0x10);
                    void* var_5c = edx_5;
                    long double x87_r6_17 = *(a1 + 0x100);
                    int32_t* eax_6 = &g_723518;
                    float var_48;
                    float var_44;

                    if (!ebx)
                    {
                        char eax_7 = *(a1 + 0x5b5);
                        int32_t var_70_2 = 1f / (x87_r6_17 - *(a1 + 0xfc));
                        long double x87_r6_27;

                        if (!eax_7)
                            x87_r6_27 = *(a1 + 0xfc);
                        else
                            x87_r6_27 = *(a1 + 0x100);

                        long double x87_r5_19 = *(a1 + 0x59c) * var_70_2;

                        if (eax_7)
                            x87_r5_19 = -(x87_r5_19);

                        int32_t i_4 = 0;

                        if (*(edx_5 + 0xc) > 0)
                        {
                            void* ebx_4 = &g_723520;
                            int32_t i;

                            do
                            {
                                long double x87_r4_19 = (-(x87_r6_27) + *ecx_7) * x87_r5_19;
                                var_70_2 = x87_r4_19;
                                int32_t edx_6 = var_70_2;
                                var_70_2 = edx_6;

                                if (edx_6 == *(a1 + 0x59c))
                                {
                                    edx_6 -= 1;
                                    var_70_2 = edx_6;
                                }

                                long double x87_r4_20 = x87_r4_19 - var_70_2;
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

                                int32_t eax_11 = edx_6 * 5;
                                long double x87_r3_25 = *(a1 + (eax_11 << 3) + 0x208) * ecx_7[2];
                                void* eax_12 = a1 + (eax_11 << 3);
                                void* edi_3 = a1 + edx_6 * 0xc;
                                long double x87_r2_10 = *(a1 + (eax_11 << 3) + 0x204) * ecx_7[1];
                                ecx_7 = &ecx_7[8];
                                ebx_4 += 0x1c;
                                long double x87_r3_27 = x87_r3_25 + x87_r2_10 + *(edi_3 + 0x104);
                                long double x87_r2_18 = *(eax_12 + 0x214) * ecx_7[-6]
                                    + *(eax_12 + 0x210) * ecx_7[-7]
                                    + *(a1 + ((edx_6 * 3 + 0x42) << 2));
                                var_48 = x87_r2_18;
                                var_44 = *(eax_12 + 0x220) * ecx_7[-6]
                                    + *(eax_12 + 0x21c) * ecx_7[-7] + *(edi_3 + 0x10c);
                                i = i_4 + 1;
                                i_4 = i;
                                long double x87_r1_14 = *(eax_12 + 0x23c) * ecx_7[-6]
                                    + *(eax_12 + 0x238) * ecx_7[-7]
                                    + *(a1 + ((edx_6 * 3 + 0x45) << 2));
                                edx_5 = var_5c;
                                float var_3c_5 = x87_r1_14;
                                float var_38_5 = *(eax_12 + 0x248) * ecx_7[-6]
                                    + *(eax_12 + 0x244) * ecx_7[-7] + *(edi_3 + 0x118);
                                *(ebx_4 - 0x24) = (*(eax_12 + 0x230) * ecx_7[-6]
                                    + *(eax_12 + 0x22c) * ecx_7[-7] + *(edi_3 + 0x110) - x87_r3_27)
                                    * x87_r4_20 + x87_r3_27;
                                *(ebx_4 - 0x20) = (var_3c_5 - var_48) * x87_r4_20 + var_48;
                                *(ebx_4 - 0x1c) = (var_38_5 - var_44) * x87_r4_20 + var_44;
                            } while (i < *(edx_5 + 0xc));
                        }
                    }
                    else
                    {
                        int32_t i_1 = 0;
                        float var_34_1 = (x87_r6_17 + *(a1 + 0xfc)) * 0.5f;

                        if (*(edx_5 + 0xc) > 0)
                        {
                            do
                            {
                                long double x87_r6_21 = *ecx_7 - var_34_1;
                                long double x87_r5_16 = ecx_7[1];
                                long double x87_r4_13 = ecx_7[2];
                                int32_t* ebx_2 = eax_6;
                                i_1 += 1;
                                ecx_7 = &ecx_7[8];
                                eax_6 = &eax_6[7];
                                float var_3c_3 = x87_r4_13 * *(a1 + 0x84)
                                    + x87_r6_21 * *(a1 + 0x7c) + x87_r5_16 * *(a1 + 0x80);
                                long double x87_r6_23 =
                                    x87_r4_13 * *(a1 + 0x90) + x87_r6_21 * *(a1 + 0x88);
                                long double x87_r5_17 = x87_r5_16 * *(a1 + 0x8c);
                                *ebx_2 = x87_r4_13 * *(a1 + 0x78) + x87_r6_21 * *(a1 + 0x70)
                                    + x87_r5_16 * *(a1 + 0x74);
                                ebx_2[1] = var_3c_3;
                                ebx_2[2] = x87_r6_23 + x87_r5_17;
                            } while (i_1 < *(edx_5 + 0xc));
                        }
                    }

                    long double x87_r6_31 = *(a1 + 0x20) - g_bcab08;
                    long double x87_r5_22 = *(a1 + 0x28) - g_bcab10;
                    long double x87_r4_25 = *(a1 + 0x30) - g_bcab18;
                    float var_34_2 =
                        x87_r4_25 * g_bcaae8 + x87_r5_22 * g_bcaae4 + x87_r6_31 * g_bcaae0;
                    float var_30 =
                        x87_r4_25 * g_bcaaf4 + x87_r5_22 * g_bcaaf0 + x87_r6_31 * g_bcaaec;
                    float var_2c =
                        x87_r4_25 * g_bcab00 + x87_r5_22 * g_bcaafc + x87_r6_31 * g_bcaaf8;
                    float var_28 = g_bcaae8 * *(a1 + 0x88) + g_bcaae0 * *(a1 + 0x70)
                        + g_bcaae4 * *(a1 + 0x7c);
                    float var_24 = g_bcaae8 * *(a1 + 0x8c) + g_bcaae0 * *(a1 + 0x74)
                        + g_bcaae4 * *(a1 + 0x80);
                    float var_20 = g_bcaae8 * *(a1 + 0x90) + g_bcaae0 * *(a1 + 0x78)
                        + g_bcaae4 * *(a1 + 0x84);
                    float var_1c = g_bcaaf4 * *(a1 + 0x88) + g_bcaaec * *(a1 + 0x70)
                        + g_bcaaf0 * *(a1 + 0x7c);
                    int32_t i_2 = 0;
                    int32_t var_4 = *(a1 + 0x94) + g_bcab04 + 1;
                    float var_18 = g_bcaaf4 * *(a1 + 0x8c) + g_bcaaec * *(a1 + 0x74)
                        + g_bcaaf0 * *(a1 + 0x80);
                    float var_14 = g_bcaaf4 * *(a1 + 0x90) + g_bcaaec * *(a1 + 0x78)
                        + g_bcaaf0 * *(a1 + 0x84);
                    float var_10 = g_bcab00 * *(a1 + 0x88) + g_bcaaf8 * *(a1 + 0x70)
                        + g_bcaafc * *(a1 + 0x7c);
                    float var_c = g_bcab00 * *(a1 + 0x8c) + g_bcaaf8 * *(a1 + 0x74)
                        + g_bcaafc * *(a1 + 0x80);
                    float var_8 = g_bcab00 * *(a1 + 0x90) + g_bcaaf8 * *(a1 + 0x78)
                        + g_bcaafc * *(a1 + 0x84);

                    if (*(edx_5 + 0xc) > 0)
                    {
                        float* ecx_9 = &g_72351c;

                        do
                        {
                            float var_40_4 =
                                var_20 * ecx_9[1] + var_24 * *ecx_9 + var_28 * ecx_9[-1];
                            float var_70_3 = var_40_4;
                            float var_70_4 = var_40_4 + var_34_2;
                            float var_6c_2 =
                                var_14 * ecx_9[1] + var_18 * *ecx_9 + var_1c * ecx_9[-1] + var_30;
                            long double x87_r6_87 =
                                var_8 * ecx_9[1] + var_c * *ecx_9 + var_10 * ecx_9[-1] + var_2c;
                            float var_68_2 = x87_r6_87;
                            long double temp3_1 = eax;
                            x87_r6_87 - temp3_1;
                            float var_4c;
                            int32_t eax_25;

                            if (*(&((x87_r6_87 < temp3_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_87, temp3_1) ? 1 : 0) << 0xa
                                    | (x87_r6_87 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                eax_25 = 0x10;
                            else
                            {
                                long double x87_r6_89 = 1f / var_68_2;
                                var_44 = x87_r6_89;
                                long double x87_r6_92 =
                                    x87_r6_89 * var_70_4 * g_bcab28 + g_bcab30;
                                var_4c = x87_r6_92;
                                long double x87_r5_78 =
                                    g_bcab2c * var_44 * var_6c_2 + g_bcab34;
                                var_48 = x87_r5_78;
                                long double temp4_1 = g_bcabd0;
                                x87_r6_92 - temp4_1;
                                int32_t ebx_5;

                                ebx_5 = !(*(&((x87_r6_92 < temp4_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_92, temp4_1) ? 1 : 0) << 0xa
                                    | (x87_r6_92 == temp4_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1) ? 0
                                    : 1;

                                long double temp6_1 = g_bcabd4;
                                x87_r5_78 - temp6_1;
                                int32_t edi_5;

                                edi_5 = !(*(&((x87_r5_78 < temp6_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r5_78, temp6_1) ? 1 : 0) << 0xa
                                    | (x87_r5_78 == temp6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0
                                    : 1;

                                long double temp9_1 = g_bcabd8;
                                x87_r6_92 - temp9_1;
                                int32_t esi_1;

                                esi_1 = *(&((x87_r6_92 < temp9_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_92, temp9_1) ? 1 : 0) << 0xa
                                    | (x87_r6_92 == temp9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0
                                    : 1;

                                long double x87_r6_93 = var_48;
                                long double temp11_1 = g_bcabdc;
                                x87_r6_93 - temp11_1;

                                eax_25 = *(&((x87_r6_93 < temp11_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_93, temp11_1) ? 1 : 0) << 0xa
                                    | (x87_r6_93 == temp11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41
                                    ? (esi_1 << 1 | edi_5) << 1 | ebx_5
                                    : ((2 | esi_1) << 1 | edi_5) << 1 | ebx_5;
                            }

                            ecx_9[-1] = var_70_4;
                            *ecx_9 = var_6c_2;
                            ecx_9[1] = var_68_2;
                            ecx_9[2] = var_4c;
                            ecx_9[5] = eax_25;
                            ecx_9[3] = var_48;
                            ecx_9[4] = var_44;

                            if (!eax_25)
                            {
                                long double x87_r6_94 = var_68_2;
                                long double temp5_1 = var_74;
                                x87_r6_94 - temp5_1;

                                if (*(&((x87_r6_94 < temp5_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_94, temp5_1) ? 1 : 0) << 0xa
                                        | (x87_r6_94 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                    var_74 = var_68_2;
                            }

                            i_2 += 1;
                            ecx_9 = &ecx_9[7];
                        } while (i_2 < *(edx_5 + 0xc));
                    }

                    long double temp2 = eax;
                    x87_r7_16 - temp2;

                    if (*(&((x87_r7_16 < temp2 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_16, temp2) ? 1 : 0) << 0xa
                        | (x87_r7_16 == temp2 ? 1 : 0) << 0xe) + 1) & 1)
                    {
                        void* esi_6 = *(edx_5 + 0x14);
                        void* var_70_5 = esi_6;

                        if (esi_6)
                        {
                            while (true)
                            {
                                int32_t ecx_10 = 0;
                                ecx_10 = *(esi_6 + 0xc);
                                int16_t* ebx_6 = esi_6 + 0x1c;
                                int32_t i_5 = 0;

                                if (ecx_10 / 3 > 0)
                                {
                                    int32_t ecx_22;
                                    int32_t i_3;

                                    do
                                    {
                                        int32_t eax_34 = 0;
                                        int32_t ecx_13 = 0;
                                        eax_34 = *(esi_6 + 0x12);
                                        ecx_13 = *ebx_6;
                                        int32_t ecx_14 = ecx_13 + eax_34;
                                        int32_t ecx_15 = 0;
                                        ecx_15 = ebx_6[1];
                                        int32_t ecx_16 = ecx_15 + eax_34;
                                        int32_t ecx_17 = 0;
                                        ecx_17 = ebx_6[2];
                                        int32_t ecx_18 = ecx_17 + eax_34;
                                        int32_t eax_37 = *(ecx_14 * 0x1c + 0x723530);
                                        int32_t ecx_20 = *(ecx_18 * 0x1c + 0x723530);

                                        if (eax_37 | *(ecx_16 * 0x1c + 0x723530) | ecx_20
                                            && !(ecx_20 & eax_37 & *(ecx_16 * 0x1c + 0x723530)))
                                        {
                                            long double x87_r7_17 = *(ecx_14 * 0x1c + &g_723520);
                                            long double temp7_1 = var_74;
                                            x87_r7_17 - temp7_1;

                                            if (*(&((x87_r7_17 < temp7_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_17, temp7_1) ? 1 : 0) << 0xa
                                                | (x87_r7_17 == temp7_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            {
                                            label_49c730:
                                                float var_88_2 = eax;
                                                float* var_8c_2 = &var_74;
                                                void var_a8;
                                                memcpy(&var_a8,
                                                    ecx_18 * 0x1c + &g_723518, 0x1c);
                                                void var_c4;
                                                memcpy(&var_c4,
                                                    ecx_16 * 0x1c + &g_723518, 0x1c);
                                                void var_e0;
                                                memcpy(&var_e0,
                                                    ecx_14 * 0x1c + &g_723518, 0x1c);
                                                sub_4a0340();
                                            }
                                            else
                                            {
                                                long double x87_r7_18 =
                                                    *(ecx_16 * 0x1c + &g_723520);
                                                long double temp8_1 = var_74;
                                                x87_r7_18 - temp8_1;

                                                if (*(&((x87_r7_18 < temp8_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_18, temp8_1) ? 1 : 0)
                                                        << 0xa | (x87_r7_18 == temp8_1 ? 1 : 0) << 0xe)
                                                        + 1) & 1)
                                                    goto label_49c730;

                                                long double x87_r7_19 =
                                                    *(ecx_18 * 0x1c + &g_723520);
                                                long double temp10_1 = var_74;
                                                x87_r7_19 - temp10_1;

                                                if (*(&((x87_r7_19 < temp10_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_19, temp10_1) ? 1 : 0)
                                                        << 0xa | (x87_r7_19 == temp10_1 ? 1 : 0) << 0xe)
                                                        + 1) & 1)
                                                    goto label_49c730;
                                            }
                                        }

                                        esi_6 = var_70_5;
                                        ecx_22 = 0;
                                        ecx_22 = *(esi_6 + 0xc);
                                        i_3 = i_5 + 1;
                                        ebx_6 = &ebx_6[3];
                                        i_5 = i_3;
                                    } while (i_3 < ecx_22 / 3);
                                }

                                int16_t eax_40 = *(esi_6 + 0xe);

                                if (eax_40 == 0xffff)
                                    break;

                                var_70_5 = esi_6 + eax_40 + 0x1c;
                                esi_6 = esi_6 + eax_40 + 0x1c;
                            }
                        }
                    }

                    float eax_42 = var_74;
                    *(a2 + 8) = eax_42;
                    return eax_42;
                }
            }
        }
    }

    return eax_1;
}
