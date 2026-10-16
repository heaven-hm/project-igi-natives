#include "00525460-LightmapInfo_Setup.h"
/* 0x00525460 LightmapInfo_Setup full linked: callers=0 callees=21 */
int32_t sub_525460(void* a1, int32_t* a2)

{
    void* esi = a2[6];
    int32_t ebx = a2[2];
    int32_t ebp = *(esi + 0xa0);
    int32_t var_12c = ebp;
    long double x87_r7 = var_12c;
    void* var_114 = esi;
    float var_128 = x87_r7;
    float* ecx_3 = a2[4];
    void** var_10c = *a2 + *a2[1] * 0xc + 4;
    int32_t eax_2 = **(esi + 0x88) << 2;
    float var_b8 = 1f / (x87_r7 * var_128);
    void* eax_3 = Mem_Alloc(eax_2, 4);
    int32_t* ecx_4 = *(esi + 0x88);
    int32_t i = 0;
    void* var_bc = eax_3;

    if (*ecx_4 > 0)
    {
        int32_t var_140_1 = 0;

        do
        {
            i += 1;
            eax_3 += 4;
            void* ecx_5 = *(var_140_1 + ecx_4 + 0x20);
            *(eax_3 - 4) = *(ecx_5 + 0xa4);
            *(ecx_5 + 0xa4) = 0xffffffff;
            ecx_4 = *(esi + 0x88);
            var_140_1 += 0x24;
        } while (i < *ecx_4);
    }

    int32_t edi_8 = (ebp * ebp) << 2;
    float* var_11c = Mem_Alloc(edi_8, 4);
    float* eax_5 = Mem_Alloc(edi_8, 4);
    int32_t var_d0 = 0;
    float var_13c = var_128 * 0.5f - 0.5f;

    while (true)
    {
        int32_t var_144_1 = 0;
        float var_15c;
        float var_158;
        float var_154;

        if (!var_d0)
        {
            var_15c = *(a1 + 0x24);
            var_158 = *(a1 + 0x28);
            var_154 = *(a1 + 0x2c);
        }
        else if (var_d0 == 1)
        {
            var_15c = *(a1 + 0x24);
            float eax_9 = *(a1 + 0x28);
            var_15c = -(var_15c);
            var_158 = -(eax_9);
            var_154 = -(*(a1 + 0x2c));
        }

        var_15c = -(var_15c);
        void* esi_1 = *(esi + 0x88);
        float var_158_2 = -(var_158);
        float var_154_2 = -(var_154);
        float ecx_10 = *(esi_1 + 0xc);
        float edx_7 = *(esi_1 + 0x10);
        float eax_12 = *(esi_1 + 0x14);
        float* eax_13 = *(esi_1 + 0x24);
        float var_60_1 = eax_12 * eax_13[5] + edx_7 * eax_13[4] + ecx_10 * eax_13[3];
        float var_5c_1 = eax_12 * eax_13[8] + edx_7 * eax_13[7] + ecx_10 * eax_13[6];
        double var_7c =
            eax_12 * eax_13[2] + edx_7 * eax_13[1] + ecx_10 * *eax_13 + **(esi_1 + 0x28);
        double var_74 = var_60_1 + *(*(esi_1 + 0x28) + 8);
        double var_6c_1 = var_5c_1 + *(*(esi_1 + 0x28) + 0x10);
        float ecx_12 = *(esi_1 + 8);
        float var_28;
        sub_4b4010(&var_28, &var_15c);
        long double x87_r7_27 = var_154_2;
        long double x87_r6_13 = var_158_2;
        long double x87_r5_9 = var_15c;
        long double x87_r7_29 =
            ecx_12 / sqrtl(x87_r5_9 * x87_r5_9 + x87_r6_13 * x87_r6_13 + x87_r7_27 * x87_r7_27);
        double var_a0;
        memcpy(&var_a0, &var_7c, 0x18);
        var_15c = var_15c * x87_r7_29;
        var_158 = var_158_2 * x87_r7_29;
        var_154 = var_154_2 * x87_r7_29;
        var_7c = var_7c - var_15c;
        var_74 = var_74 - var_158;
        double var_6c_2 = var_6c_1 - var_154;
        long double x87_r7_38 = var_a0 - var_15c;
        double var_98 = var_98 - var_158;
        double var_90;
        double var_90_1 = var_90 - var_154;
        long double x87_r6_25 = var_15c;
        long double temp3_1 = 0f;
        x87_r6_25 - temp3_1;

        if (!(*(&((x87_r6_25 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_25, temp3_1) ? 1 : 0) << 0xa
            | (x87_r6_25 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        {
        label_5257dc:
            long double x87_r6_28 = var_154;
            long double x87_r5_11 = var_158;
            long double x87_r4_6 = var_15c;
            long double x87_r6_30 =
                1.0 / sqrtl(x87_r4_6 * x87_r4_6 + x87_r5_11 * x87_r5_11 + x87_r6_28 * x87_r6_28);
            var_15c = var_15c * x87_r6_30;
            var_158 = var_158 * x87_r6_30;
            var_154 = var_154 * x87_r6_30;
        }
        else
        {
            long double x87_r6_26 = var_158;
            long double temp4_1 = 0f;
            x87_r6_26 - temp4_1;

            if (!(*(&((x87_r6_26 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_26, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r6_26 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_5257dc;

            long double x87_r6_27 = var_154;
            long double temp5_1 = 0f;
            x87_r6_27 - temp5_1;

            if (!(*(&((x87_r6_27 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_27, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r6_27 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_5257dc;
        }

        long double x87_r6_32 = ecx_12;
        long double x87_r6_34 = (x87_r6_32 + x87_r6_32) / var_128;
        float var_e8_1 = var_28 * x87_r6_34 + 0f;
        float var_150_1 = var_e8_1;
        float var_24;
        float var_e4_1 = var_24 * x87_r6_34 + 0f;
        float var_20;
        float var_e0_1 = var_20 * x87_r6_34 + 0f;
        float var_1c;
        float var_88_1 = x87_r6_34 * var_1c + 0f;
        float var_dc_1 = var_88_1;
        float var_150_2 = var_88_1;
        float var_18;
        float var_84_1 = x87_r6_34 * var_18 + 0f;
        float var_14;
        float var_80_1 = x87_r6_34 * var_14 + 0f;
        float var_148_2 = -((var_13c * var_e0_1));
        var_98 = -((var_13c * var_e4_1)) + var_98;
        double var_90_2 = var_148_2 + var_90_1;
        float var_14c_4 = -((var_13c * var_84_1));
        float var_148_4 = -((var_13c * var_80_1));
        var_a0 = -((var_13c * var_88_1)) + x87_r7_38 + -((var_13c * var_e8_1));
        var_98 = var_14c_4 + var_98;
        float var_150_3 = var_e8_1;
        float var_140_2 = 0f;
        var_90 = var_148_4 + var_90_2;
        float var_dc_2 = -((var_e8_1 * var_128)) + var_88_1;
        float var_d8_2 = -((var_e4_1 * var_128)) + var_84_1;
        float var_d4_2 = -((var_e0_1 * var_128)) + var_80_1;
        bool cond:0_1;

        do
        {
            double var_104;
            memcpy(&var_104, &var_a0, 0x18);
            float edi_11 = var_13c;
            float* esi_3 = eax_5;
            sub_521e40(var_114, &var_7c, &var_28, var_11c, esi_3, ebp, ebp, edi_11, edi_11,
                var_140_2, 1.40129846e-45f, 0f, 1.40129846e-45f, ecx_12, 0f);
            double var_fc;
            double var_f4;

            if (ebp > 0)
            {
                float* var_118_1 = esi_3;
                int32_t var_138_1 = ebp;
                bool cond:4_1;

                do
                {
                    int32_t var_134_1 = ebp;
                    float* eax_20 = var_118_1;
                    float* var_120_1 = &ecx_3[var_144_1];
                    int32_t* var_108_1 = ebx + (var_144_1 << 2) - 4;
                    int32_t* ecx_19 = var_11c - esi_3;
                    float* var_130_1 = eax_20;
                    int32_t* var_cc_1 = ecx_19;

                    while (true)
                    {
                        int32_t i_1 = *(ecx_19 + eax_20);

                        if (i_1 != 0xffffffff)
                        {
                            long double x87_r7_54 = *eax_20 - 40.9599991f;
                            long double x87_r6_55 = x87_r7_54 * var_15c;
                            double var_40;
                            memcpy(&var_40, &var_104, 0x18);
                            float var_150_4 = var_15c;
                            float edx_14 = g_a44344;
                            float var_14c_8 = var_158 * x87_r7_54;
                            var_40 = x87_r6_55 + var_104;
                            double var_38 = var_14c_8 + var_38;
                            double var_30 = x87_r7_54 * var_154 + var_30;
                            float var_b4;
                            sub_4ce410(edx_14, &var_104, &var_40, 0xff, 0f, 0xffffffff, 9, &var_b4);
                            long double x87_r7_57 = var_b4;
                            long double temp13_1 = 0f;
                            x87_r7_57 - temp13_1;

                            if (!(*(&((x87_r7_57 < temp13_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_57, temp13_1) ? 1 : 0) << 0xa
                                | (x87_r7_57 == temp13_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                            {
                                long double x87_r7_59 = var_b4 * var_b8;
                                int32_t* eax_23 = var_108_1;

                                if (var_108_1 < ebx)
                                {
                                label_525bed:
                                    var_108_1[1] = i_1;
                                    *var_120_1 = x87_r7_59;
                                    var_144_1 += 1;
                                    var_108_1 = &var_108_1[1];
                                    var_120_1 = &var_120_1[1];
                                }
                                else
                                {
                                    while (i_1 != *eax_23)
                                    {
                                        eax_23 -= 4;

                                        if (eax_23 < ebx)
                                            goto label_525bed;
                                    }

                                    int32_t eax_35 = (eax_23 - ebx) >> 2;
                                    ecx_3[eax_35] = x87_r7_59 + ecx_3[eax_35];
                                }
                            }
                        }

                        eax_20 = &var_130_1[1];
                        bool cond:2_1 = var_134_1 != 1;
                        var_130_1 = eax_20;
                        var_134_1 -= 1;
                        var_104 = var_e8_1 + var_104;
                        var_fc = var_e4_1 + var_fc;
                        var_f4 = var_e0_1 + var_f4;

                        if (!cond:2_1)
                            break;

                        ecx_19 = var_cc_1;
                    }

                    esi_3 = eax_5;
                    ebp = var_12c;
                    var_104 = var_dc_2 + var_104;
                    cond:4_1 = var_138_1 != 1;
                    var_118_1 = &var_118_1[var_12c];
                    var_138_1 -= 1;
                    var_fc = var_d8_2 + var_fc;
                    var_f4 = var_d4_2 + var_f4;
                } while (cond:4_1);
                edi_11 = var_13c;
            }

            sub_521e40(var_114, &var_7c, &var_28, var_11c, esi_3, ebp, ebp, edi_11, edi_11,
                var_140_2, 1.40129846e-45f, 1.40129846e-45f, 0f, ecx_12, 0f);

            if (ebp > 0)
            {
                float* edx_18 = esi_3;
                int32_t var_108_2 = ebp;
                float* var_120_2 = edx_18;
                bool cond:6_1;

                do
                {
                    float* var_134_2 = edx_18;
                    int32_t* ebp_1 = ebx + (var_144_1 << 2) - 4;
                    void* ecx_30 = var_11c - eax_5;
                    void* var_cc_2 = ecx_30;
                    int32_t var_130_2 = var_12c;

                    while (true)
                    {
                        int32_t i_2 = *(edx_18 + ecx_30);

                        if (i_2 != 0xffffffff)
                        {
                            long double x87_r7_74 = *edx_18 - 40.9599991f;
                            long double x87_r6_63 = x87_r7_74 * var_15c;
                            double var_58;
                            memcpy(&var_58, &var_104, 0x18);
                            float var_150_6 = var_15c;
                            float edx_19 = g_a44344;
                            float var_14c_10 = var_158 * x87_r7_74;
                            var_58 = x87_r6_63 + var_104;
                            double var_50 = var_14c_10 + var_50;
                            double var_48 = x87_r7_74 * var_154 + var_48;
                            float var_b0;
                            sub_4ce410(edx_19, &var_104, &var_58, 0xff, 0f, 0xffffffff, 9, &var_b0);
                            long double x87_r7_77 = var_b0;
                            long double temp15_1 = 0f;
                            x87_r7_77 - temp15_1;

                            if (!(*(&((x87_r7_77 < temp15_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_77, temp15_1) ? 1 : 0) << 0xa
                                | (x87_r7_77 == temp15_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                            {
                                long double x87_r7_79 = var_b0 * var_b8;
                                int32_t* ecx_34 = 4 - ebx + ebp_1;
                                int32_t* eax_41 = ebp_1;

                                if (ebp_1 < ebx)
                                {
                                label_525e4b:
                                    *(ecx_34 + ebx) = i_2;
                                    *(ecx_34 + ecx_3) = x87_r7_79;
                                    ebp_1 = &ebp_1[1];
                                    var_144_1 += 1;
                                }
                                else
                                {
                                    while (i_2 != *eax_41)
                                    {
                                        eax_41 -= 4;

                                        if (eax_41 < ebx)
                                            goto label_525e4b;
                                    }

                                    int32_t eax_53 = (eax_41 - ebx) >> 2;
                                    ecx_3[eax_53] = x87_r7_79 + ecx_3[eax_53];
                                }
                            }
                        }

                        edx_18 = &var_134_2[1];
                        bool cond:3_1 = var_130_2 != 1;
                        var_134_2 = edx_18;
                        var_130_2 -= 1;
                        var_104 = var_e8_1 + var_104;
                        var_fc = var_e4_1 + var_fc;
                        var_f4 = var_e0_1 + var_f4;

                        if (!cond:3_1)
                            break;

                        ecx_30 = var_cc_2;
                    }

                    var_104 = var_dc_2 + var_104;
                    edx_18 = &var_120_2[var_12c];
                    cond:6_1 = var_108_2 != 1;
                    var_120_2 = edx_18;
                    var_108_2 -= 1;
                    var_fc = var_d8_2 + var_fc;
                    var_f4 = var_d4_2 + var_f4;
                } while (cond:6_1);
                ebp = var_12c;
            }

            cond:0_1 = var_140_2 + 1 < 5;
            var_140_2 += 1;
        } while (cond:0_1);
        int32_t ecx_38 = var_144_1;
        int32_t* esi_7;

        if (ecx_38 <= 0)
            esi_7 = a2;
        else
        {
            float* edi_13 = ecx_3;
            int32_t* eax_51 = ebx - edi_13;
            int32_t var_134_3 = ecx_38;
            int32_t* var_130_3 = eax_51;

            while (true)
            {
                esi_7 = a2;
                int32_t eax_55 = *(eax_51 + edi_13);
                float* edx_25 = *(esi_7[3] + (eax_55 << 2));
                float* ecx_41 = *(esi_7[5] + (eax_55 << 2));
                long double x87_r7_93 = *edx_25;
                long double temp7_1 = 0f;
                x87_r7_93 - temp7_1;

                if (!(*(&((x87_r7_93 < temp7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_93, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r7_93 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    float* eax_59 = *(*(var_114 + 0x88) + 0x24);
                    long double x87_r4_21 = *(*(esi_7[6] + 0x88) + 8);
                    long double x87_r4_22 = x87_r4_21 + x87_r4_21;
                    float var_138_3 = *edx_25 / (x87_r4_22 * x87_r4_22);
                    long double x87_r6_81 = (eax_59[2] * ecx_41[2] + eax_59[1] * ecx_41[1]
                        + *ecx_41 * *eax_59) * *(a1 + 0x24);
                    long double x87_r7_100 = ((eax_59[6] * *ecx_41 + eax_59[8] * ecx_41[2]
                        + eax_59[7] * ecx_41[1]) * *(a1 + 0x2c)
                        + (eax_59[3] * *ecx_41 + eax_59[5] * ecx_41[2] + eax_59[4] * ecx_41[1]) *
                        *(a1 + 0x28) + x87_r6_81) * var_138_3;
                    long double temp11_1 = 0f;
                    x87_r7_100 - temp11_1;

                    if (!(*(&((x87_r7_100 < temp11_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_100, temp11_1) ? 1 : 0) << 0xa
                        | (x87_r7_100 == temp11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    {
                        long double x87_r6_84 = (x87_r7_100 - *edi_13) / var_138_3;
                        long double temp14_1 = 0.100000001f;
                        x87_r6_84 - temp14_1;

                        if (*(&((x87_r6_84 < temp14_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_84, temp14_1) ? 1 : 0) << 0xa
                                | (x87_r6_84 == temp14_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                            *edi_13 = x87_r7_100;
                    }
                }

                edi_13 = &edi_13[1];
                bool cond:8_1 = var_134_3 != 1;
                var_134_3 -= 1;

                if (!cond:8_1)
                    break;

                eax_51 = var_130_3;
            }

            ecx_38 = var_144_1;
        }

        if (!ecx_38)
        {
            var_10c[1] = 0;
            *var_10c = nullptr;
        }
        else
        {
            int32_t esi_8 = ecx_38 << 2;
            var_10c[1] = Mem_Alloc(esi_8, 4);
            *var_10c = Mem_Alloc(esi_8, 4);
            int32_t esi_10;
            int32_t edi_16;
            edi_16 = memcpy(var_10c[1], ebx, esi_8 & 0xfffffffc);
            memcpy(edi_16, esi_10, esi_8 & 3);
            int32_t ecx_47 = var_144_1 << 2;
            int32_t esi_12;
            int32_t edi_18;
            edi_18 = memcpy(*var_10c, ecx_3, ecx_47 & 0xfffffffc);
            memcpy(edi_18, esi_12, ecx_47 & 3);
            esi_7 = a2;
            ecx_38 = var_144_1;
        }

        var_10c[2] = ecx_38;
        int32_t* esi_13 = esi_7[1];
        var_10c = &var_10c[3];
        *esi_13 += 1;
        bool cond:9_1 = var_d0 + 1 < 1;
        var_d0 += 1;

        if (!cond:9_1)
            break;

        esi = var_114;
    }

    sub_4b0d10(eax_5);
    sub_4b0d10(var_11c);
    int32_t i_5 = **(var_114 + 0x88);

    if (i_5 - 1 >= 0)
    {
        int32_t eax_76 = (i_5 - 1) * 0x24;
        int32_t* edx_30 = var_bc + ((i_5 - 1) << 2);
        int32_t i_4 = i_5;
        int32_t i_3;

        do
        {
            int32_t ebx_1 = *edx_30;
            edx_30 -= 4;
            void* edi_22 = *(*(var_114 + 0x88) + eax_76 + 0x20);
            eax_76 -= 0x24;
            i_3 = i_4;
            i_4 -= 1;
            *(edi_22 + 0xa4) = ebx_1;
        } while (i_3 != 1);
    }

    return sub_4b0d10(var_bc);
}
