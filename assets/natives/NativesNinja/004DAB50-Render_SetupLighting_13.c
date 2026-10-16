#include "004DAB50-Render_SetupLighting_13.h"
/* 0x004dab50 Render_SetupLighting_13 full linked: callers=6 callees=25 */
int32_t sub_4dab50(int32_t a1 @ 0x1c, int32_t a2 @ 0x38, int32_t a3 @ 0x54, void** a4, float a5)

{
    void arg_20;
    void* var_24 = &arg_20;
    void arg_3c;
    void* var_20 = &arg_3c;
    int32_t edx = a1;
    g_a5e350 += 1;
    int32_t ecx_2 = a2;
    void arg_4;
    void* var_28 = &arg_4;
    int32_t eax = a3;
    char ebx_2 = edx | ecx_2 | eax;
    int32_t ebp_2 = edx & ecx_2 & eax;

    if (!ebp_2)
    {
        void var_9c;
        void var_80;
        void var_64;
        float var_1c;
        float var_10;
        float var_c;
        float var_8;

        if (ebx_2 & 0x10)
        {
            int32_t edx_1 = edx & 0x10;
            int32_t ecx_3 = ecx_2 & 0x10;
            int32_t eax_3 = (eax & 0x10) + edx_1 + ecx_3;
            eax_3 &= 0xf0;

            if (eax_3 != 0x20)
            {
                float* var_30_1;
                float* eax_21;
                float* edx_4;
                float* ebx_7;

                if (!edx_1)
                {
                    if (!ecx_3)
                    {
                        eax_21 = &arg_4;
                        var_30_1 = &arg_20;
                        edx_4 = &arg_3c;
                    }
                    else
                    {
                        eax_21 = &arg_3c;
                        var_30_1 = &arg_4;
                        edx_4 = &arg_20;
                    }

                    ebx_7 = var_30_1;
                }
                else
                {
                    ebx_7 = &arg_3c;
                    eax_21 = &arg_20;
                    var_30_1 = &arg_3c;
                    edx_4 = &arg_4;
                }

                long double x87_r7_37 = (a5 - eax_21[2]) / (edx_4[2] - eax_21[2]);
                memcpy(&var_1c, edx_4, 0x1c);
                *edx_4 = (*edx_4 - *eax_21) * x87_r7_37 + *eax_21;
                edx_4[1] = (edx_4[1] - eax_21[1]) * x87_r7_37 + eax_21[1];
                long double x87_r7_39 = x87_r7_37 * (edx_4[2] - eax_21[2]) + eax_21[2];
                edx_4[2] = x87_r7_39;
                long double x87_r7_40 = 1f / x87_r7_39;
                edx_4[5] = x87_r7_40;
                edx_4[3] = x87_r7_40 * *edx_4 * g_bcab28 + g_bcab30;
                edx_4[4] = g_bcab2c * edx_4[1] * edx_4[5] + g_bcab34;
                long double x87_r7_48 = edx_4[3];
                long double temp3_1 = g_bcabd0;
                x87_r7_48 - temp3_1;
                int32_t edi_2;

                edi_2 = !(*(&((x87_r7_48 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_48, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_48 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_49 = edx_4[4];
                long double temp9_1 = g_bcabd4;
                x87_r7_49 - temp9_1;
                int32_t esi_4;

                esi_4 = !(*(&((x87_r7_49 < temp9_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_49, temp9_1) ? 1 : 0) << 0xa
                    | (x87_r7_49 == temp9_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_50 = edx_4[3];
                long double temp17_1 = g_bcabd8;
                x87_r7_50 - temp17_1;
                int32_t ecx_5;

                ecx_5 = *(&((x87_r7_50 < temp17_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_50, temp17_1) ? 1 : 0) << 0xa
                    | (x87_r7_50 == temp17_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_51 = edx_4[4];
                long double temp24_1 = g_bcabdc;
                x87_r7_51 - temp24_1;
                int32_t eax_23;

                eax_23 = *(&((x87_r7_51 < temp24_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_51, temp24_1) ? 1 : 0) << 0xa
                    | (x87_r7_51 == temp24_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                edx_4[6] = (((eax_23 * 2) | ecx_5) << 1 | esi_4) << 1 | edi_2;
                float var_14;
                long double x87_r7_53 = var_14 - ebx_7[2];
                long double x87_r6_39 = (a5 - ebx_7[2]) / x87_r7_53;
                var_1c = (var_1c - *ebx_7) * x87_r6_39 + *ebx_7;
                long double x87_r7_57 = 1f / (x87_r7_53 * x87_r6_39 + ebx_7[2]);
                var_8 = x87_r7_57;
                long double x87_r7_60 = x87_r7_57 * var_1c * g_bcab28 + g_bcab30;
                var_10 = x87_r7_60;
                float var_18;
                long double x87_r6_46 =
                    var_8 * ((var_18 - ebx_7[1]) * x87_r6_39 + ebx_7[1]) * g_bcab2c
                    + g_bcab34;
                var_c = x87_r6_46;
                long double temp30_1 = g_bcabd0;
                x87_r7_60 - temp30_1;
                int32_t edi_3;

                edi_3 = !(*(&((x87_r7_60 < temp30_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_60, temp30_1) ? 1 : 0) << 0xa
                    | (x87_r7_60 == temp30_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0 : 1;

                long double temp36_1 = g_bcabd4;
                x87_r6_46 - temp36_1;
                int32_t esi_5;

                esi_5 = !(*(&((x87_r6_46 < temp36_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_46, temp36_1) ? 1 : 0) << 0xa
                    | (x87_r6_46 == temp36_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

                long double temp39_1 = g_bcabd8;
                x87_r7_60 - temp39_1;
                int32_t ecx_6;

                ecx_6 = *(&((x87_r7_60 < temp39_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_60, temp39_1) ? 1 : 0) << 0xa
                    | (x87_r7_60 == temp39_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_61 = var_c;
                long double temp41_1 = g_bcabdc;
                x87_r7_61 - temp41_1;
                int32_t eax_31;

                eax_31 = *(&((x87_r7_61 < temp41_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_61, temp41_1) ? 1 : 0) << 0xa
                    | (x87_r7_61 == temp41_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                int32_t var_4_1 = (((eax_31 * 2) | ecx_6) << 1 | esi_5) << 1 | edi_3;
                ebp_2 = a1 & a2 & a3;
                float var_44_1 = a5;
                void** var_48_1 = a4;
                ebx_2 = a1 | a2 | a3;
                memcpy(&var_64, edx_4, 0x1c);
                memcpy(&var_80, &var_1c, 0x1c);
                memcpy(&var_9c, var_30_1, 0x1c);
                sub_4dab50();
                eax = a3;
                ecx_2 = a2;
                edx = a1;
            }
            else
            {
                float* eax_4;
                float* ecx_4;
                float* edx_2;
                float* esi_1;

                if (!edx_1)
                {
                    eax_4 = &arg_4;
                    edx_2 = &arg_4;
                    esi_1 = &arg_20;
                    ecx_4 = &arg_3c;
                }
                else if (ecx_3)
                {
                    eax_4 = &arg_3c;
                    edx_2 = &arg_3c;
                    esi_1 = &arg_4;
                    ecx_4 = &arg_20;
                }
                else
                {
                    eax_4 = &arg_20;
                    edx_2 = &arg_20;
                    esi_1 = &arg_3c;
                    ecx_4 = &arg_4;
                }

                long double x87_r7_3 = (a5 - eax_4[2]) / (esi_1[2] - eax_4[2]);
                *esi_1 = (*esi_1 - *eax_4) * x87_r7_3 + *eax_4;
                esi_1[1] = (esi_1[1] - eax_4[1]) * x87_r7_3 + eax_4[1];
                long double x87_r7_5 = x87_r7_3 * (esi_1[2] - eax_4[2]) + eax_4[2];
                esi_1[2] = x87_r7_5;
                long double x87_r7_6 = 1f / x87_r7_5;
                esi_1[5] = x87_r7_6;
                esi_1[3] = x87_r7_6 * g_bcab28 * *esi_1 + g_bcab30;
                esi_1[4] = esi_1[5] * esi_1[1] * g_bcab2c + g_bcab34;
                long double x87_r7_14 = esi_1[3];
                long double temp1_1 = g_bcabd0;
                x87_r7_14 - temp1_1;
                int32_t edi_1;

                edi_1 = !(*(&((x87_r7_14 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_14, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_14 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_15 = esi_1[4];
                long double temp4_1 = g_bcabd4;
                x87_r7_15 - temp4_1;
                int32_t ebp_3;

                ebp_3 = !(*(&((x87_r7_15 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_15, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_15 == temp4_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_16 = esi_1[3];
                long double temp10_1 = g_bcabd8;
                x87_r7_16 - temp10_1;
                int32_t ebx_3;

                ebx_3 = *(&((x87_r7_16 < temp10_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_16, temp10_1) ? 1 : 0) << 0xa
                    | (x87_r7_16 == temp10_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_17 = esi_1[4];
                long double temp18_1 = g_bcabdc;
                x87_r7_17 - temp18_1;
                int32_t eax_6;

                eax_6 = *(&((x87_r7_17 < temp18_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_17, temp18_1) ? 1 : 0) << 0xa
                    | (x87_r7_17 == temp18_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                esi_1[6] = (((eax_6 * 2) | ebx_3) << 1 | ebp_3) << 1 | edi_1;
                long double x87_r7_20 = (a5 - edx_2[2]) / (ecx_4[2] - edx_2[2]);
                *ecx_4 = (*ecx_4 - *edx_2) * x87_r7_20 + *edx_2;
                ecx_4[1] = (ecx_4[1] - edx_2[1]) * x87_r7_20 + edx_2[1];
                long double x87_r7_22 = x87_r7_20 * (ecx_4[2] - edx_2[2]) + edx_2[2];
                ecx_4[2] = x87_r7_22;
                long double x87_r7_23 = 1f / x87_r7_22;
                ecx_4[5] = x87_r7_23;
                ecx_4[3] = x87_r7_23 * *ecx_4 * g_bcab28 + g_bcab30;
                ecx_4[4] = g_bcab2c * ecx_4[5] * ecx_4[1] + g_bcab34;
                long double x87_r7_31 = ecx_4[3];
                long double temp25_1 = g_bcabd0;
                x87_r7_31 - temp25_1;
                int32_t ebx_4;

                ebx_4 = !(*(&((x87_r7_31 < temp25_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_31, temp25_1) ? 1 : 0) << 0xa
                    | (x87_r7_31 == temp25_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_32 = ecx_4[4];
                long double temp31_1 = g_bcabd4;
                x87_r7_32 - temp31_1;
                int32_t esi_2;

                esi_2 = !(*(&((x87_r7_32 < temp31_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_32, temp31_1) ? 1 : 0) << 0xa
                    | (x87_r7_32 == temp31_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_33 = ecx_4[3];
                long double temp37_1 = g_bcabd8;
                x87_r7_33 - temp37_1;
                int32_t edx_3;

                edx_3 = *(&((x87_r7_33 < temp37_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_33, temp37_1) ? 1 : 0) << 0xa
                    | (x87_r7_33 == temp37_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_34 = ecx_4[4];
                long double temp40_1 = g_bcabdc;
                x87_r7_34 - temp40_1;
                int32_t eax_14;

                eax_14 = *(&((x87_r7_34 < temp40_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_34, temp40_1) ? 1 : 0) << 0xa
                    | (x87_r7_34 == temp40_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                ecx_4[6] = (((eax_14 * 2) | edx_3) << 1 | esi_2) << 1 | ebx_4;
                edx = a1;
                ecx_2 = a2;
                eax = a3;
                ebx_2 = edx | ecx_2 | eax;
                ebp_2 = edx & ecx_2 & eax;
            }
        }

        if (!ebp_2)
        {
            if (!(ebx_2 & 1))
            {
            label_4db3f7:

                if (!(ebx_2 & 2))
                {
                label_4db72a:

                    if (!(ebx_2 & 4))
                    {
                    label_4db9f9:
                        int32_t ebp_18;

                        if (ebx_2 & 8)
                        {
                            int32_t edx_17 = edx & 8;
                            int32_t ecx_27 = ecx_2 & 8;
                            int32_t eax_130 = (eax & 8) + edx_17 + ecx_27;
                            eax_130 &= 0xf8;

                            if (eax_130 != 0x10)
                            {
                                void* eax_132;
                                void* edx_19;
                                void* ebx_26;

                                if (edx_17)
                                {
                                    edx_19 = &arg_20;
                                    ebx_26 = &arg_3c;
                                    eax_132 = &arg_4;
                                }
                                else if (!ecx_27)
                                {
                                    edx_19 = &arg_4;
                                    ebx_26 = &arg_20;
                                    eax_132 = &arg_3c;
                                }
                                else
                                {
                                    edx_19 = &arg_3c;
                                    ebx_26 = &arg_4;
                                    eax_132 = &arg_20;
                                }

                                long double x87_r7_191 = (g_bcabdc - *(edx_19 + 0x10))
                                    / (*(eax_132 + 0x10) - *(edx_19 + 0x10));
                                memcpy(&var_1c, eax_132, 0x1c);
                                int32_t var_4_5 = 0;
                                *(eax_132 + 0xc) = (*(eax_132 + 0xc) - *(edx_19 + 0xc)) * x87_r7_191
                                    + *(edx_19 + 0xc);
                                *(eax_132 + 0x10) =
                                    (*(eax_132 + 0x10) - *(edx_19 + 0x10)) * x87_r7_191
                                    + *(edx_19 + 0x10);
                                long double x87_r6_174 =
                                    (*(eax_132 + 0x14) - *(edx_19 + 0x14)) * x87_r7_191
                                    + *(edx_19 + 0x14);
                                *(eax_132 + 0x18) = 0;
                                *(eax_132 + 0x14) = x87_r6_174;
                                long double x87_r7_194 = var_c - *(ebx_26 + 0x10);
                                ebp_18 = a1 & a2 & a3;
                                long double x87_r6_177 =
                                    (g_bcabdc - *(ebx_26 + 0x10)) / x87_r7_194;
                                float var_44_5 = a5;
                                void** var_48_5 = a4;
                                memcpy(&var_64, eax_132, 0x1c);
                                float var_30_11 = x87_r6_177;
                                float var_10_1 =
                                    (var_10 - *(ebx_26 + 0xc)) * var_30_11 + *(ebx_26 + 0xc);
                                float var_c_1 = x87_r7_194 * var_30_11 + *(ebx_26 + 0x10);
                                float var_8_1 =
                                    (var_8 - *(ebx_26 + 0x14)) * var_30_11 + *(ebx_26 + 0x14);
                                memcpy(&var_80, &var_1c, 0x1c);
                                memcpy(&var_9c, ebx_26, 0x1c);
                                sub_4dab50();
                            }
                            else
                            {
                                void* eax_131;
                                void* ecx_28;
                                void* edx_18;
                                void* esi_27;

                                if (!edx_17)
                                {
                                    eax_131 = &arg_4;
                                    ecx_28 = &arg_4;
                                    edx_18 = &arg_20;
                                    esi_27 = &arg_3c;
                                }
                                else if (ecx_27)
                                {
                                    eax_131 = &arg_3c;
                                    ecx_28 = &arg_3c;
                                    edx_18 = &arg_4;
                                    esi_27 = &arg_20;
                                }
                                else
                                {
                                    eax_131 = &arg_20;
                                    ecx_28 = &arg_20;
                                    edx_18 = &arg_3c;
                                    esi_27 = &arg_4;
                                }

                                long double x87_r7_183 = (g_bcabdc - *(eax_131 + 0x10))
                                    / (*(edx_18 + 0x10) - *(eax_131 + 0x10));
                                *(edx_18 + 0xc) = (*(edx_18 + 0xc) - *(eax_131 + 0xc)) * x87_r7_183
                                    + *(eax_131 + 0xc);
                                *(edx_18 + 0x10) =
                                    (*(edx_18 + 0x10) - *(eax_131 + 0x10)) * x87_r7_183
                                    + *(eax_131 + 0x10);
                                long double x87_r6_146 =
                                    (*(edx_18 + 0x14) - *(eax_131 + 0x14)) * x87_r7_183
                                    + *(eax_131 + 0x14);
                                *(edx_18 + 0x18) = 0;
                                *(edx_18 + 0x14) = x87_r6_146;
                                long double x87_r7_187 = (g_bcabdc - *(ecx_28 + 0x10))
                                    / (*(esi_27 + 0x10) - *(ecx_28 + 0x10));
                                *(esi_27 + 0xc) = (*(esi_27 + 0xc) - *(ecx_28 + 0xc)) * x87_r7_187
                                    + *(ecx_28 + 0xc);
                                *(esi_27 + 0x10) =
                                    (*(esi_27 + 0x10) - *(ecx_28 + 0x10)) * x87_r7_187
                                    + *(ecx_28 + 0x10);
                                long double x87_r6_160 =
                                    (*(esi_27 + 0x14) - *(ecx_28 + 0x14)) * x87_r7_187
                                    + *(ecx_28 + 0x14);
                                *(esi_27 + 0x18) = 0;
                                *(esi_27 + 0x14) = x87_r6_160;
                                ebp_18 = a1 & a2 & a3;
                            }
                        }

                        if (!(ebx_2 & 8) || !ebp_18)
                        {
                            void** edi_4 = &var_28;
                            int32_t i_1 = 3;
                            int32_t i;

                            do
                            {
                                float* edx_22 = a4[1];
                                void* ecx_31 = *edi_4;
                                long double x87_r7_201 = *edx_22;
                                long double x87_r6_182 = *(ecx_31 + 0xc);
                                x87_r6_182 - x87_r7_201;
                                long double x87_r7_202;

                                if (!(*(&((x87_r6_182 < x87_r7_201 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_182, x87_r7_201) ? 1 : 0) << 0xa
                                        | (x87_r6_182 == x87_r7_201 ? 1 : 0) << 0xe) + 1) & 1))
                                    x87_r7_202 = *(ecx_31 + 0xc);
                                else
                                    x87_r7_202 = *edx_22;

                                *edx_22 = x87_r7_202;
                                void* edx_23 = a4[1];
                                long double x87_r7_203 = *(edx_23 + 4);
                                long double x87_r6_183 = *(ecx_31 + 0x10);
                                x87_r6_183 - x87_r7_203;
                                long double x87_r7_204;

                                if (!(*(&((x87_r6_183 < x87_r7_203 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_183, x87_r7_203) ? 1 : 0) << 0xa
                                        | (x87_r6_183 == x87_r7_203 ? 1 : 0) << 0xe) + 1) & 1))
                                    x87_r7_204 = *(ecx_31 + 0x10);
                                else
                                    x87_r7_204 = *(edx_23 + 4);

                                *(edx_23 + 4) = x87_r7_204;
                                float* edx_24 = *a4;
                                long double x87_r7_205 = *edx_24;
                                long double x87_r6_184 = *(ecx_31 + 0xc);
                                x87_r6_184 - x87_r7_205;
                                long double x87_r7_206;

                                if (*(&((x87_r6_184 < x87_r7_205 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_184, x87_r7_205) ? 1 : 0) << 0xa
                                        | (x87_r6_184 == x87_r7_205 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    x87_r7_206 = *(ecx_31 + 0xc);
                                else
                                    x87_r7_206 = *edx_24;

                                *edx_24 = x87_r7_206;
                                void* edx_25 = *a4;
                                long double x87_r7_207 = *(edx_25 + 4);
                                long double x87_r6_185 = *(ecx_31 + 0x10);
                                x87_r6_185 - x87_r7_207;
                                long double x87_r7_208;

                                if (*(&((x87_r6_185 < x87_r7_207 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_185, x87_r7_207) ? 1 : 0) << 0xa
                                        | (x87_r6_185 == x87_r7_207 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    x87_r7_208 = *(ecx_31 + 0x10);
                                else
                                    x87_r7_208 = *(edx_25 + 4);

                                edi_4 = &edi_4[1];
                                i = i_1;
                                i_1 -= 1;
                                *(edx_25 + 4) = x87_r7_208;
                            } while (i != 1);
                        }
                    }
                    else
                    {
                        int32_t edx_13 = edx & 4;
                        int32_t ecx_22 = ecx_2 & 4;
                        int32_t eax_110 = (eax & 4) + edx_13 + ecx_22;
                        eax_110 &= 0xfc;
                        int32_t ebp_15;

                        if (eax_110 != 8)
                        {
                            void* var_2c_3;
                            void* eax_117;
                            void* edx_16;

                            if (edx_13)
                            {
                                eax_117 = &arg_20;
                                var_2c_3 = &arg_3c;
                                edx_16 = &arg_4;
                            }
                            else if (!ecx_22)
                            {
                                eax_117 = &arg_4;
                                var_2c_3 = &arg_20;
                                edx_16 = &arg_3c;
                            }
                            else
                            {
                                eax_117 = &arg_3c;
                                var_2c_3 = &arg_4;
                                edx_16 = &arg_20;
                            }

                            long double x87_r7_161 = *(edx_16 + 0xc) - *(eax_117 + 0xc);
                            long double x87_r6_125 = (g_bcabd8 - *(eax_117 + 0xc)) / x87_r7_161;
                            memcpy(&var_1c, edx_16, 0x1c);
                            float var_30_9 = x87_r6_125;
                            *(edx_16 + 0xc) = x87_r7_161 * var_30_9 + *(eax_117 + 0xc);
                            *(edx_16 + 0x10) = (*(edx_16 + 0x10) - *(eax_117 + 0x10)) * var_30_9
                                + *(eax_117 + 0x10);
                            *(edx_16 + 0x14) = (*(edx_16 + 0x14) - *(eax_117 + 0x14)) * var_30_9
                                + *(eax_117 + 0x14);
                            long double x87_r7_172 = *(edx_16 + 0x10);
                            long double temp13_1 = g_bcabdc;
                            x87_r7_172 - temp13_1;
                            int32_t eax_119;

                            eax_119 = *(&((x87_r7_172 < temp13_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_172, temp13_1) ? 1 : 0) << 0xa
                                | (x87_r7_172 == temp13_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            *(edx_16 + 0x18) = eax_119 << 3;
                            long double x87_r7_174 = var_10 - *(var_2c_3 + 0xc);
                            float var_30_10 = (g_bcabd8 - *(var_2c_3 + 0xc)) / x87_r7_174;
                            var_10 = x87_r7_174 * var_30_10 + *(var_2c_3 + 0xc);
                            long double x87_r7_180 =
                                (var_c - *(var_2c_3 + 0x10)) * var_30_10 + *(var_2c_3 + 0x10);
                            var_c = x87_r7_180;
                            var_8 = (var_8 - *(var_2c_3 + 0x14)) * var_30_10 + *(var_2c_3 + 0x14);
                            long double temp21_1 = g_bcabdc;
                            x87_r7_180 - temp21_1;
                            int32_t eax_123;

                            eax_123 = *(&((x87_r7_180 < temp21_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_180, temp21_1) ? 1 : 0) << 0xa
                                | (x87_r7_180 == temp21_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            int32_t var_4_4 = eax_123 << 3;
                            ebp_15 = a1 & a2 & a3;
                            float var_44_4 = a5;
                            void** var_48_4 = a4;
                            ebx_2 = a1 | a2 | a3;
                            memcpy(&var_64, edx_16, 0x1c);
                            memcpy(&var_80, &var_1c, 0x1c);
                            memcpy(&var_9c, var_2c_3, 0x1c);
                            sub_4dab50();
                            eax = a3;
                            ecx_2 = a2;
                            edx = a1;
                        }
                        else
                        {
                            void* eax_111;
                            void* ecx_23;
                            void* edx_14;
                            void* esi_22;

                            if (!edx_13)
                            {
                                eax_111 = &arg_4;
                                edx_14 = &arg_4;
                                esi_22 = &arg_20;
                                ecx_23 = &arg_3c;
                            }
                            else if (ecx_22)
                            {
                                eax_111 = &arg_3c;
                                edx_14 = &arg_3c;
                                esi_22 = &arg_4;
                                ecx_23 = &arg_20;
                            }
                            else
                            {
                                eax_111 = &arg_20;
                                edx_14 = &arg_20;
                                esi_22 = &arg_3c;
                                ecx_23 = &arg_4;
                            }

                            long double x87_r7_135 = *(esi_22 + 0xc) - *(eax_111 + 0xc);
                            float var_30_7 = (g_bcabd8 - *(eax_111 + 0xc)) / x87_r7_135;
                            *(esi_22 + 0xc) = x87_r7_135 * var_30_7 + *(eax_111 + 0xc);
                            *(esi_22 + 0x10) = (*(esi_22 + 0x10) - *(eax_111 + 0x10)) * var_30_7
                                + *(eax_111 + 0x10);
                            *(esi_22 + 0x14) = (*(esi_22 + 0x14) - *(eax_111 + 0x14)) * var_30_7
                                + *(eax_111 + 0x14);
                            long double x87_r7_146 = *(esi_22 + 0x10);
                            long double temp6_1 = g_bcabdc;
                            x87_r7_146 - temp6_1;
                            int32_t eax_113;

                            eax_113 = *(&((x87_r7_146 < temp6_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_146, temp6_1) ? 1 : 0) << 0xa
                                | (x87_r7_146 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            *(esi_22 + 0x18) = eax_113 << 3;
                            long double x87_r7_148 = *(ecx_23 + 0xc) - *(edx_14 + 0xc);
                            float var_30_8 = (g_bcabd8 - *(edx_14 + 0xc)) / x87_r7_148;
                            *(ecx_23 + 0xc) = x87_r7_148 * var_30_8 + *(edx_14 + 0xc);
                            *(ecx_23 + 0x10) =
                                (*(ecx_23 + 0x10) - *(edx_14 + 0x10)) * var_30_8 + *(edx_14 + 0x10);
                            *(ecx_23 + 0x14) =
                                (*(ecx_23 + 0x14) - *(edx_14 + 0x14)) * var_30_8 + *(edx_14 + 0x14);
                            long double x87_r7_159 = *(ecx_23 + 0x10);
                            long double temp14_1 = g_bcabdc;
                            x87_r7_159 - temp14_1;
                            int32_t eax_116;

                            eax_116 = *(&((x87_r7_159 < temp14_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_159, temp14_1) ? 1 : 0) << 0xa
                                | (x87_r7_159 == temp14_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            *(ecx_23 + 0x18) = eax_116 << 3;
                            edx = a1;
                            ecx_2 = a2;
                            eax = a3;
                            ebx_2 = edx | ecx_2 | eax;
                            ebp_15 = edx & ecx_2 & eax;
                        }

                        if (!ebp_15)
                            goto label_4db9f9;
                    }
                }
                else
                {
                    int32_t edx_9 = edx & 2;
                    int32_t ecx_16 = ecx_2 & 2;
                    int32_t eax_81 = (eax & 2) + edx_9 + ecx_16;
                    eax_81 &= 0xfe;
                    int32_t ebp_12;

                    if (eax_81 != 4)
                    {
                        void* var_2c_2;
                        void* eax_93;
                        void* edx_12;
                        void* ebx_19;

                        if (!edx_9)
                        {
                            if (!ecx_16)
                            {
                                eax_93 = &arg_4;
                                var_2c_2 = &arg_20;
                                edx_12 = &arg_3c;
                            }
                            else
                            {
                                eax_93 = &arg_3c;
                                var_2c_2 = &arg_4;
                                edx_12 = &arg_20;
                            }

                            ebx_19 = var_2c_2;
                        }
                        else
                        {
                            ebx_19 = &arg_3c;
                            eax_93 = &arg_20;
                            var_2c_2 = &arg_3c;
                            edx_12 = &arg_4;
                        }

                        long double x87_r7_126 = (g_bcabd4 - *(eax_93 + 0x10))
                            / (*(edx_12 + 0x10) - *(eax_93 + 0x10));
                        memcpy(&var_1c, edx_12, 0x1c);
                        *(edx_12 + 0xc) =
                            (*(edx_12 + 0xc) - *(eax_93 + 0xc)) * x87_r7_126 + *(eax_93 + 0xc);
                        *(edx_12 + 0x10) =
                            (*(edx_12 + 0x10) - *(eax_93 + 0x10)) * x87_r7_126 + *(eax_93 + 0x10);
                        *(edx_12 + 0x14) =
                            (*(edx_12 + 0x14) - *(eax_93 + 0x14)) * x87_r7_126 + *(eax_93 + 0x14);
                        long double x87_r7_128 = *(edx_12 + 0xc);
                        long double temp11_1 = g_bcabd8;
                        x87_r7_128 - temp11_1;
                        int32_t ecx_18;

                        ecx_18 = *(&((x87_r7_128 < temp11_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_128, temp11_1) ? 1 : 0) << 0xa
                            | (x87_r7_128 == temp11_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        long double x87_r7_129 = *(edx_12 + 0x10);
                        long double temp19_1 = g_bcabdc;
                        x87_r7_129 - temp19_1;
                        int32_t eax_95;

                        eax_95 = *(&((x87_r7_129 < temp19_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_129, temp19_1) ? 1 : 0) << 0xa
                            | (x87_r7_129 == temp19_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        *(edx_12 + 0x18) = ((eax_95 * 2) | ecx_18) << 2;
                        long double x87_r7_131 = var_c - *(ebx_19 + 0x10);
                        float var_30_6 = (g_bcabd4 - *(ebx_19 + 0x10)) / x87_r7_131;
                        var_10 = (var_10 - *(ebx_19 + 0xc)) * var_30_6 + *(ebx_19 + 0xc);
                        long double x87_r7_133 = x87_r7_131 * var_30_6 + *(ebx_19 + 0x10);
                        var_c = x87_r7_133;
                        var_8 = (var_8 - *(ebx_19 + 0x14)) * var_30_6 + *(ebx_19 + 0x14);
                        long double x87_r6_116 = var_10;
                        long double temp26_1 = g_bcabd8;
                        x87_r6_116 - temp26_1;
                        int32_t ecx_19;

                        ecx_19 = *(&((x87_r6_116 < temp26_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_116, temp26_1) ? 1 : 0) << 0xa
                            | (x87_r6_116 == temp26_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

                        long double temp33_1 = g_bcabdc;
                        x87_r7_133 - temp33_1;
                        int32_t eax_100;

                        eax_100 = *(&((x87_r7_133 < temp33_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_133, temp33_1) ? 1 : 0) << 0xa
                            | (x87_r7_133 == temp33_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        int32_t var_4_3 = ((eax_100 * 2) | ecx_19) << 2;
                        ebp_12 = a1 & a2 & a3;
                        float var_44_3 = a5;
                        void** var_48_3 = a4;
                        ebx_2 = a1 | a2 | a3;
                        memcpy(&var_64, edx_12, 0x1c);
                        memcpy(&var_80, &var_1c, 0x1c);
                        memcpy(&var_9c, var_2c_2, 0x1c);
                        sub_4dab50();
                        eax = a3;
                        ecx_2 = a2;
                        edx = a1;
                    }
                    else
                    {
                        void* eax_82;
                        void* ecx_17;
                        void* edx_10;
                        void* esi_17;

                        if (!edx_9)
                        {
                            eax_82 = &arg_4;
                            edx_10 = &arg_4;
                            esi_17 = &arg_20;
                            ecx_17 = &arg_3c;
                        }
                        else if (ecx_16)
                        {
                            eax_82 = &arg_3c;
                            edx_10 = &arg_3c;
                            esi_17 = &arg_4;
                            ecx_17 = &arg_20;
                        }
                        else
                        {
                            eax_82 = &arg_20;
                            edx_10 = &arg_20;
                            esi_17 = &arg_3c;
                            ecx_17 = &arg_4;
                        }

                        long double x87_r7_114 = (g_bcabd4 - *(eax_82 + 0x10))
                            / (*(esi_17 + 0x10) - *(eax_82 + 0x10));
                        *(esi_17 + 0xc) =
                            (*(esi_17 + 0xc) - *(eax_82 + 0xc)) * x87_r7_114 + *(eax_82 + 0xc);
                        *(esi_17 + 0x10) =
                            (*(esi_17 + 0x10) - *(eax_82 + 0x10)) * x87_r7_114 + *(eax_82 + 0x10);
                        *(esi_17 + 0x14) =
                            (*(esi_17 + 0x14) - *(eax_82 + 0x14)) * x87_r7_114 + *(eax_82 + 0x14);
                        long double x87_r7_116 = *(esi_17 + 0xc);
                        long double temp5_1 = g_bcabd8;
                        x87_r7_116 - temp5_1;
                        int32_t ebx_16;

                        ebx_16 = *(&((x87_r7_116 < temp5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_116, temp5_1) ? 1 : 0) << 0xa
                            | (x87_r7_116 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        long double x87_r7_117 = *(esi_17 + 0x10);
                        long double temp12_1 = g_bcabdc;
                        x87_r7_117 - temp12_1;
                        int32_t eax_84;

                        eax_84 = *(&((x87_r7_117 < temp12_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_117, temp12_1) ? 1 : 0) << 0xa
                            | (x87_r7_117 == temp12_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        *(esi_17 + 0x18) = ((eax_84 * 2) | ebx_16) << 2;
                        long double x87_r7_120 = (g_bcabd4 - *(edx_10 + 0x10))
                            / (*(ecx_17 + 0x10) - *(edx_10 + 0x10));
                        *(ecx_17 + 0xc) =
                            (*(ecx_17 + 0xc) - *(edx_10 + 0xc)) * x87_r7_120 + *(edx_10 + 0xc);
                        *(ecx_17 + 0x10) =
                            (*(ecx_17 + 0x10) - *(edx_10 + 0x10)) * x87_r7_120 + *(edx_10 + 0x10);
                        *(ecx_17 + 0x14) =
                            (*(ecx_17 + 0x14) - *(edx_10 + 0x14)) * x87_r7_120 + *(edx_10 + 0x14);
                        long double x87_r7_122 = *(ecx_17 + 0xc);
                        long double temp20_1 = g_bcabd8;
                        x87_r7_122 - temp20_1;
                        int32_t edx_11;

                        edx_11 = *(&((x87_r7_122 < temp20_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_122, temp20_1) ? 1 : 0) << 0xa
                            | (x87_r7_122 == temp20_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        long double x87_r7_123 = *(ecx_17 + 0x10);
                        long double temp27_1 = g_bcabdc;
                        x87_r7_123 - temp27_1;
                        int32_t eax_89;

                        eax_89 = *(&((x87_r7_123 < temp27_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_123, temp27_1) ? 1 : 0) << 0xa
                            | (x87_r7_123 == temp27_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        *(ecx_17 + 0x18) = ((eax_89 * 2) | edx_11) << 2;
                        edx = a1;
                        ecx_2 = a2;
                        eax = a3;
                        ebx_2 = edx | ecx_2 | eax;
                        ebp_12 = edx & ecx_2 & eax;
                    }

                    if (!ebp_12)
                        goto label_4db72a;
                }
            }
            else
            {
                int32_t edx_5 = edx & 1;
                int32_t ecx_9 = ecx_2 & 1;
                int32_t ebp_9;

                if ((eax & 1) + edx_5 + ecx_9 != 2)
                {
                    void* var_2c_1;
                    void* eax_60;
                    void* edx_8;
                    void* ebx_13;

                    if (!edx_5)
                    {
                        void* ecx_11;

                        if (!ecx_9)
                        {
                            eax_60 = &arg_4;
                            edx_8 = &arg_20;
                            ecx_11 = &arg_3c;
                        }
                        else
                        {
                            eax_60 = &arg_3c;
                            edx_8 = &arg_4;
                            ecx_11 = &arg_20;
                        }

                        var_2c_1 = ecx_11;
                        ebx_13 = ecx_11;
                    }
                    else
                    {
                        ebx_13 = &arg_4;
                        eax_60 = &arg_20;
                        edx_8 = &arg_3c;
                        var_2c_1 = &arg_4;
                    }

                    long double x87_r7_93 = *(ebx_13 + 0xc) - *(eax_60 + 0xc);
                    long double x87_r6_55 = (g_bcabd0 - *(eax_60 + 0xc)) / x87_r7_93;
                    memcpy(&var_1c, ebx_13, 0x1c);
                    float var_30_4 = x87_r6_55;
                    *(ebx_13 + 0xc) = x87_r7_93 * var_30_4 + *(eax_60 + 0xc);
                    *(ebx_13 + 0x10) =
                        (*(ebx_13 + 0x10) - *(eax_60 + 0x10)) * var_30_4 + *(eax_60 + 0x10);
                    *(ebx_13 + 0x14) =
                        (*(ebx_13 + 0x14) - *(eax_60 + 0x14)) * var_30_4 + *(eax_60 + 0x14);
                    long double x87_r7_104 = *(ebx_13 + 0x10);
                    long double temp7_1 = g_bcabd4;
                    x87_r7_104 - temp7_1;
                    int32_t esi_12;

                    esi_12 = !(*(&((x87_r7_104 < temp7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_104, temp7_1) ? 1 : 0) << 0xa
                        | (x87_r7_104 == temp7_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double x87_r7_105 = *(ebx_13 + 0xc);
                    long double temp15_1 = g_bcabd8;
                    x87_r7_105 - temp15_1;
                    int32_t ecx_12;

                    ecx_12 = *(&((x87_r7_105 < temp15_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_105, temp15_1) ? 1 : 0) << 0xa
                        | (x87_r7_105 == temp15_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double x87_r7_106 = *(ebx_13 + 0x10);
                    long double temp22_1 = g_bcabdc;
                    x87_r7_106 - temp22_1;
                    int32_t eax_62;

                    eax_62 = *(&((x87_r7_106 < temp22_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_106, temp22_1) ? 1 : 0) << 0xa
                        | (x87_r7_106 == temp22_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    *(ebx_13 + 0x18) = (((eax_62 * 2) | ecx_12) << 1 | esi_12) << 1;
                    long double x87_r7_108 = var_10 - *(edx_8 + 0xc);
                    float var_30_5 = (g_bcabd0 - *(edx_8 + 0xc)) / x87_r7_108;
                    long double x87_r7_110 = x87_r7_108 * var_30_5 + *(edx_8 + 0xc);
                    var_10 = x87_r7_110;
                    long double x87_r6_62 = (var_c - *(edx_8 + 0x10)) * var_30_5 + *(edx_8 + 0x10);
                    var_c = x87_r6_62;
                    var_8 = (var_8 - *(edx_8 + 0x14)) * var_30_5 + *(edx_8 + 0x14);
                    long double temp28_1 = g_bcabd4;
                    x87_r6_62 - temp28_1;
                    int32_t esi_13;

                    esi_13 = !(*(&((x87_r6_62 < temp28_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_62, temp28_1) ? 1 : 0) << 0xa
                        | (x87_r6_62 == temp28_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

                    long double temp34_1 = g_bcabd8;
                    x87_r7_110 - temp34_1;
                    int32_t ecx_13;

                    ecx_13 = *(&((x87_r7_110 < temp34_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_110, temp34_1) ? 1 : 0) << 0xa
                        | (x87_r7_110 == temp34_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double x87_r7_111 = var_c;
                    long double temp38_1 = g_bcabdc;
                    x87_r7_111 - temp38_1;
                    int32_t eax_69;

                    eax_69 = *(&((x87_r7_111 < temp38_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_111, temp38_1) ? 1 : 0) << 0xa
                        | (x87_r7_111 == temp38_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    int32_t var_4_2 = (((eax_69 * 2) | ecx_13) << 1 | esi_13) << 1;
                    ebp_9 = a1 & a2 & a3;
                    float var_44_2 = a5;
                    void** var_48_2 = a4;
                    ebx_2 = a1 | a2 | a3;
                    memcpy(&var_64, var_2c_1, 0x1c);
                    memcpy(&var_80, &var_1c, 0x1c);
                    memcpy(&var_9c, edx_8, 0x1c);
                    sub_4dab50();
                    eax = a3;
                    ecx_2 = a2;
                    edx = a1;
                }
                else
                {
                    void* eax_45;
                    void* ecx_10;
                    void* edx_6;
                    void* esi_9;

                    if (!edx_5)
                    {
                        eax_45 = &arg_4;
                        edx_6 = &arg_4;
                        esi_9 = &arg_20;
                        ecx_10 = &arg_3c;
                    }
                    else if (ecx_9)
                    {
                        eax_45 = &arg_3c;
                        edx_6 = &arg_3c;
