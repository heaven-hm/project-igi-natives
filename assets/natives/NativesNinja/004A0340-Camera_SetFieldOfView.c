#include "004A0340-Camera_SetFieldOfView.h"
/* 0x004a0340 Camera_SetFieldOfView full linked: callers=9 callees=25 */
int32_t sub_4a0340(float a1 @ 0x18, int32_t a2, float a3 @ 0x34, int32_t a4, float a5 @ 0x50, int32_t a6, float* a7, float a8)

{
    int32_t edx = a4;
    int32_t eax = a6;
    g_7af1e0 += 1;
    int32_t ecx_1 = a2;
    char ebx_2 = ecx_1 | edx | eax;
    int32_t ebp_2 = ecx_1 & edx & eax;

    if (!ebp_2)
    {
        void var_90;
        void var_74;
        void var_58;
        float var_38;
        float var_1c;
        float var_10;
        float var_c;
        float var_8;
        void arg_4;
        void arg_20;
        void arg_3c;

        if (ebx_2 & 0x10)
        {
            int32_t ecx_2 = ecx_1 & 0x10;
            int32_t edx_1 = edx & 0x10;
            int32_t eax_3 = (eax & 0x10) + ecx_2 + edx_1;
            eax_3 &= 0xf0;

            if (eax_3 != 0x20)
            {
                float* var_24_1;
                float* eax_21;
                float* edx_4;
                float* ebx_6;

                if (!ecx_2)
                {
                    if (!edx_1)
                    {
                        eax_21 = &arg_4;
                        var_24_1 = &arg_20;
                        edx_4 = &arg_3c;
                    }
                    else
                    {
                        eax_21 = &arg_3c;
                        var_24_1 = &arg_4;
                        edx_4 = &arg_20;
                    }

                    ebx_6 = var_24_1;
                }
                else
                {
                    ebx_6 = &arg_3c;
                    eax_21 = &arg_20;
                    var_24_1 = &arg_3c;
                    edx_4 = &arg_4;
                }

                long double x87_r7_37 = (a8 - eax_21[2]) / (edx_4[2] - eax_21[2]);
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
                int32_t edi_3;

                edi_3 = !(*(&((x87_r7_48 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_48, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_48 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_49 = edx_4[4];
                long double temp8_1 = g_bcabd4;
                x87_r7_49 - temp8_1;
                int32_t esi_4;

                esi_4 = !(*(&((x87_r7_49 < temp8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_49, temp8_1) ? 1 : 0) << 0xa
                    | (x87_r7_49 == temp8_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_50 = edx_4[3];
                long double temp16_1 = g_bcabd8;
                x87_r7_50 - temp16_1;
                int32_t ecx_4;

                ecx_4 = *(&((x87_r7_50 < temp16_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_50, temp16_1) ? 1 : 0) << 0xa
                    | (x87_r7_50 == temp16_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_51 = edx_4[4];
                long double temp25_1 = g_bcabdc;
                x87_r7_51 - temp25_1;
                int32_t eax_23;

                eax_23 = *(&((x87_r7_51 < temp25_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_51, temp25_1) ? 1 : 0) << 0xa
                    | (x87_r7_51 == temp25_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                edx_4[6] = (((eax_23 * 2) | ecx_4) << 1 | esi_4) << 1 | edi_3;
                float var_14;
                long double x87_r7_53 = var_14 - ebx_6[2];
                long double x87_r6_39 = (a8 - ebx_6[2]) / x87_r7_53;
                var_1c = (var_1c - *ebx_6) * x87_r6_39 + *ebx_6;
                long double x87_r7_57 = 1f / (x87_r7_53 * x87_r6_39 + ebx_6[2]);
                var_8 = x87_r7_57;
                long double x87_r7_60 = x87_r7_57 * var_1c * g_bcab28 + g_bcab30;
                var_10 = x87_r7_60;
                float var_18;
                long double x87_r6_46 =
                    var_8 * ((var_18 - ebx_6[1]) * x87_r6_39 + ebx_6[1]) * g_bcab2c
                    + g_bcab34;
                var_c = x87_r6_46;
                long double temp33_1 = g_bcabd0;
                x87_r7_60 - temp33_1;
                int32_t edi_4;

                edi_4 = !(*(&((x87_r7_60 < temp33_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_60, temp33_1) ? 1 : 0) << 0xa
                    | (x87_r7_60 == temp33_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0 : 1;

                long double temp38_1 = g_bcabd4;
                x87_r6_46 - temp38_1;
                int32_t esi_5;

                esi_5 = !(*(&((x87_r6_46 < temp38_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_46, temp38_1) ? 1 : 0) << 0xa
                    | (x87_r6_46 == temp38_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

                long double temp41_1 = g_bcabd8;
                x87_r7_60 - temp41_1;
                int32_t ecx_5;

                ecx_5 = *(&((x87_r7_60 < temp41_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_60, temp41_1) ? 1 : 0) << 0xa
                    | (x87_r7_60 == temp41_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_61 = var_c;
                long double temp43_1 = g_bcabdc;
                x87_r7_61 - temp43_1;
                int32_t eax_31;

                eax_31 = *(&((x87_r7_61 < temp43_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_61, temp43_1) ? 1 : 0) << 0xa
                    | (x87_r7_61 == temp43_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                int32_t var_4_1 = (((eax_31 * 2) | ecx_5) << 1 | esi_5) << 1 | edi_4;
                ebx_2 = a2 | a4 | a6;
                ebp_2 = a2 & a4 & a6;
                var_38 = a8;
                float* var_3c_1 = a7;
                memcpy(&var_58, edx_4, 0x1c);
                memcpy(&var_74, &var_1c, 0x1c);
                memcpy(&var_90, var_24_1, 0x1c);
                sub_4a0340();
                ecx_1 = a2;
                edx = a4;
                eax = a6;
            }
            else
            {
                float* eax_4;
                float* ecx_3;
                float* edx_2;
                float* esi_1;

                if (!ecx_2)
                {
                    eax_4 = &arg_4;
                    edx_2 = &arg_4;
                    esi_1 = &arg_20;
                    ecx_3 = &arg_3c;
                }
                else if (edx_1)
                {
                    eax_4 = &arg_3c;
                    edx_2 = &arg_3c;
                    esi_1 = &arg_4;
                    ecx_3 = &arg_20;
                }
                else
                {
                    eax_4 = &arg_20;
                    edx_2 = &arg_20;
                    esi_1 = &arg_3c;
                    ecx_3 = &arg_4;
                }

                long double x87_r7_3 = (a8 - eax_4[2]) / (esi_1[2] - eax_4[2]);
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
                int32_t ebp_3;

                ebp_3 = !(*(&((x87_r7_14 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_14, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_14 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_15 = esi_1[4];
                long double temp4_1 = g_bcabd4;
                x87_r7_15 - temp4_1;
                int32_t ebx_3;

                ebx_3 = !(*(&((x87_r7_15 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_15, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_15 == temp4_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_16 = esi_1[3];
                long double temp9_1 = g_bcabd8;
                x87_r7_16 - temp9_1;
                int32_t edi_1;

                edi_1 = *(&((x87_r7_16 < temp9_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_16, temp9_1) ? 1 : 0) << 0xa
                    | (x87_r7_16 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_17 = esi_1[4];
                long double temp17_1 = g_bcabdc;
                x87_r7_17 - temp17_1;
                int32_t eax_6;

                eax_6 = *(&((x87_r7_17 < temp17_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_17, temp17_1) ? 1 : 0) << 0xa
                    | (x87_r7_17 == temp17_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                esi_1[6] = (((eax_6 * 2) | edi_1) << 1 | ebx_3) << 1 | ebp_3;
                long double x87_r7_20 = (a8 - edx_2[2]) / (ecx_3[2] - edx_2[2]);
                *ecx_3 = (*ecx_3 - *edx_2) * x87_r7_20 + *edx_2;
                ecx_3[1] = (ecx_3[1] - edx_2[1]) * x87_r7_20 + edx_2[1];
                long double x87_r7_22 = x87_r7_20 * (ecx_3[2] - edx_2[2]) + edx_2[2];
                ecx_3[2] = x87_r7_22;
                long double x87_r7_23 = 1f / x87_r7_22;
                ecx_3[5] = x87_r7_23;
                ecx_3[3] = x87_r7_23 * *ecx_3 * g_bcab28 + g_bcab30;
                ecx_3[4] = g_bcab2c * ecx_3[5] * ecx_3[1] + g_bcab34;
                long double x87_r7_31 = ecx_3[3];
                long double temp26_1 = g_bcabd0;
                x87_r7_31 - temp26_1;
                int32_t edi_2;

                edi_2 = !(*(&((x87_r7_31 < temp26_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_31, temp26_1) ? 1 : 0) << 0xa
                    | (x87_r7_31 == temp26_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_32 = ecx_3[4];
                long double temp34_1 = g_bcabd4;
                x87_r7_32 - temp34_1;
                int32_t esi_2;

                esi_2 = !(*(&((x87_r7_32 < temp34_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_32, temp34_1) ? 1 : 0) << 0xa
                    | (x87_r7_32 == temp34_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_33 = ecx_3[3];
                long double temp39_1 = g_bcabd8;
                x87_r7_33 - temp39_1;
                int32_t edx_3;

                edx_3 = *(&((x87_r7_33 < temp39_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_33, temp39_1) ? 1 : 0) << 0xa
                    | (x87_r7_33 == temp39_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_34 = ecx_3[4];
                long double temp42_1 = g_bcabdc;
                x87_r7_34 - temp42_1;
                int32_t eax_14;

                eax_14 = *(&((x87_r7_34 < temp42_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_34, temp42_1) ? 1 : 0) << 0xa
                    | (x87_r7_34 == temp42_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                ecx_3[6] = (((eax_14 * 2) | edx_3) << 1 | esi_2) << 1 | edi_2;
                ecx_1 = a2;
                edx = a4;
                eax = a6;
                ebx_2 = ecx_1 | edx | eax;
                ebp_2 = ecx_1 & edx & eax;
            }
        }

        if (!ebp_2)
        {
            if (ebx_2 & 1)
            {
                int32_t ecx_8 = ecx_1 & 1;
                int32_t edx_5 = edx & 1;

                if ((eax & 1) + ecx_8 + edx_5 != 2)
                {
                    void* var_20_1;
                    void* eax_58;
                    void* edx_8;
                    void* ebx_12;

                    if (!ecx_8)
                    {
                        void* ecx_10;

                        if (!edx_5)
                        {
                            eax_58 = &arg_4;
                            edx_8 = &arg_20;
                            ecx_10 = &arg_3c;
                        }
                        else
                        {
                            eax_58 = &arg_3c;
                            edx_8 = &arg_4;
                            ecx_10 = &arg_20;
                        }

                        var_20_1 = ecx_10;
                        ebx_12 = ecx_10;
                    }
                    else
                    {
                        ebx_12 = &arg_4;
                        eax_58 = &arg_20;
                        edx_8 = &arg_3c;
                        var_20_1 = &arg_4;
                    }

                    long double x87_r7_93 = *(ebx_12 + 0xc) - *(eax_58 + 0xc);
                    long double x87_r6_55 = (g_bcabd0 - *(eax_58 + 0xc)) / x87_r7_93;
                    memcpy(&var_1c, ebx_12, 0x1c);
                    float var_24_4 = x87_r6_55;
                    *(ebx_12 + 0xc) = x87_r7_93 * var_24_4 + *(eax_58 + 0xc);
                    *(ebx_12 + 0x10) =
                        (*(ebx_12 + 0x10) - *(eax_58 + 0x10)) * var_24_4 + *(eax_58 + 0x10);
                    *(ebx_12 + 0x14) =
                        (*(ebx_12 + 0x14) - *(eax_58 + 0x14)) * var_24_4 + *(eax_58 + 0x14);
                    long double x87_r7_104 = *(ebx_12 + 0x10);
                    long double temp6_1 = g_bcabd4;
                    x87_r7_104 - temp6_1;
                    int32_t esi_11;

                    esi_11 = !(*(&((x87_r7_104 < temp6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_104, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r7_104 == temp6_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double x87_r7_105 = *(ebx_12 + 0xc);
                    long double temp14_1 = g_bcabd8;
                    x87_r7_105 - temp14_1;
                    int32_t ecx_11;

                    ecx_11 = *(&((x87_r7_105 < temp14_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_105, temp14_1) ? 1 : 0) << 0xa
                        | (x87_r7_105 == temp14_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double x87_r7_106 = *(ebx_12 + 0x10);
                    long double temp23_1 = g_bcabdc;
                    x87_r7_106 - temp23_1;
                    int32_t eax_60;

                    eax_60 = *(&((x87_r7_106 < temp23_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_106, temp23_1) ? 1 : 0) << 0xa
                        | (x87_r7_106 == temp23_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    *(ebx_12 + 0x18) = (((eax_60 * 2) | ecx_11) << 1 | esi_11) << 1;
                    long double x87_r7_108 = var_10 - *(edx_8 + 0xc);
                    float var_24_5 = (g_bcabd0 - *(edx_8 + 0xc)) / x87_r7_108;
                    long double x87_r7_110 = x87_r7_108 * var_24_5 + *(edx_8 + 0xc);
                    var_10 = x87_r7_110;
                    long double x87_r6_62 = (var_c - *(edx_8 + 0x10)) * var_24_5 + *(edx_8 + 0x10);
                    var_c = x87_r6_62;
                    var_8 = (var_8 - *(edx_8 + 0x14)) * var_24_5 + *(edx_8 + 0x14);
                    long double temp31_1 = g_bcabd4;
                    x87_r6_62 - temp31_1;
                    int32_t esi_12;

                    esi_12 = !(*(&((x87_r6_62 < temp31_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_62, temp31_1) ? 1 : 0) << 0xa
                        | (x87_r6_62 == temp31_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

                    long double temp36_1 = g_bcabd8;
                    x87_r7_110 - temp36_1;
                    int32_t ecx_12;

                    ecx_12 = *(&((x87_r7_110 < temp36_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_110, temp36_1) ? 1 : 0) << 0xa
                        | (x87_r7_110 == temp36_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double x87_r7_111 = var_c;
                    long double temp40_1 = g_bcabdc;
                    x87_r7_111 - temp40_1;
                    int32_t eax_67;

                    eax_67 = *(&((x87_r7_111 < temp40_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_111, temp40_1) ? 1 : 0) << 0xa
                        | (x87_r7_111 == temp40_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    int32_t var_4_2 = (((eax_67 * 2) | ecx_12) << 1 | esi_12) << 1;
                    ebx_2 = a2 | a4 | a6;
                    ebp_2 = a2 & a4 & a6;
                    var_38 = a8;
                    float* var_3c_2 = a7;
                    memcpy(&var_58, var_20_1, 0x1c);
                    memcpy(&var_74, &var_1c, 0x1c);
                    memcpy(&var_90, edx_8, 0x1c);
                    sub_4a0340();
                    ecx_1 = a2;
                    edx = a4;
                    eax = a6;
                }
                else
                {
                    void* eax_43;
                    void* ecx_9;
                    void* edx_6;
                    void* esi_8;

                    if (!ecx_8)
                    {
                        eax_43 = &arg_4;
                        edx_6 = &arg_4;
                        esi_8 = &arg_20;
                        ecx_9 = &arg_3c;
                    }
                    else if (edx_5)
                    {
                        eax_43 = &arg_3c;
                        edx_6 = &arg_3c;
                        esi_8 = &arg_4;
                        ecx_9 = &arg_20;
                    }
                    else
                    {
                        eax_43 = &arg_20;
                        edx_6 = &arg_20;
                        esi_8 = &arg_3c;
                        ecx_9 = &arg_4;
                    }

                    long double x87_r7_63 = *(esi_8 + 0xc) - *(eax_43 + 0xc);
                    float var_24_2 = (g_bcabd0 - *(eax_43 + 0xc)) / x87_r7_63;
                    *(esi_8 + 0xc) = x87_r7_63 * var_24_2 + *(eax_43 + 0xc);
                    *(esi_8 + 0x10) =
                        (*(esi_8 + 0x10) - *(eax_43 + 0x10)) * var_24_2 + *(eax_43 + 0x10);
                    *(esi_8 + 0x14) =
                        (*(esi_8 + 0x14) - *(eax_43 + 0x14)) * var_24_2 + *(eax_43 + 0x14);
                    long double x87_r7_74 = *(esi_8 + 0x10);
                    long double temp2_1 = g_bcabd4;
                    x87_r7_74 - temp2_1;
                    int32_t ebx_9;

                    ebx_9 = !(*(&((x87_r7_74 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_74, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_74 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double x87_r7_75 = *(esi_8 + 0xc);
                    long double temp7_1 = g_bcabd8;
                    x87_r7_75 - temp7_1;
                    int32_t edi_5;

                    edi_5 = *(&((x87_r7_75 < temp7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_75, temp7_1) ? 1 : 0) << 0xa
                        | (x87_r7_75 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double x87_r7_76 = *(esi_8 + 0x10);
                    long double temp15_1 = g_bcabdc;
                    x87_r7_76 - temp15_1;
                    int32_t eax_45;

                    eax_45 = *(&((x87_r7_76 < temp15_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_76, temp15_1) ? 1 : 0) << 0xa
                        | (x87_r7_76 == temp15_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    *(esi_8 + 0x18) = (((eax_45 * 2) | edi_5) << 1 | ebx_9) << 1;
                    long double x87_r7_78 = *(ecx_9 + 0xc) - *(edx_6 + 0xc);
                    float var_24_3 = (g_bcabd0 - *(edx_6 + 0xc)) / x87_r7_78;
                    *(ecx_9 + 0xc) = x87_r7_78 * var_24_3 + *(edx_6 + 0xc);
                    *(ecx_9 + 0x10) =
                        (*(ecx_9 + 0x10) - *(edx_6 + 0x10)) * var_24_3 + *(edx_6 + 0x10);
                    *(ecx_9 + 0x14) =
                        (*(ecx_9 + 0x14) - *(edx_6 + 0x14)) * var_24_3 + *(edx_6 + 0x14);
                    long double x87_r7_89 = *(ecx_9 + 0x10);
                    long double temp24_1 = g_bcabd4;
                    x87_r7_89 - temp24_1;
                    int32_t esi_9;

                    esi_9 = !(*(&((x87_r7_89 < temp24_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_89, temp24_1) ? 1 : 0) << 0xa
                        | (x87_r7_89 == temp24_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double x87_r7_90 = *(ecx_9 + 0xc);
                    long double temp32_1 = g_bcabd8;
                    x87_r7_90 - temp32_1;
                    int32_t edx_7;

                    edx_7 = *(&((x87_r7_90 < temp32_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_90, temp32_1) ? 1 : 0) << 0xa
                        | (x87_r7_90 == temp32_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double x87_r7_91 = *(ecx_9 + 0x10);
                    long double temp37_1 = g_bcabdc;
                    x87_r7_91 - temp37_1;
                    int32_t eax_52;

                    eax_52 = *(&((x87_r7_91 < temp37_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_91, temp37_1) ? 1 : 0) << 0xa
                        | (x87_r7_91 == temp37_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    *(ecx_9 + 0x18) = (((eax_52 * 2) | edx_7) << 1 | esi_9) << 1;
                    ecx_1 = a2;
                    edx = a4;
                    eax = a6;
                    ebx_2 = ecx_1 | edx | eax;
                    ebp_2 = ecx_1 & edx & eax;
                }
            }

            if (!ebp_2)
            {
                if (ebx_2 & 2)
                {
                    int32_t ecx_15 = ecx_1 & 2;
                    int32_t edx_9 = edx & 2;
                    int32_t eax_77 = (eax & 2) + ecx_15 + edx_9;
                    eax_77 &= 0xfe;

                    if (eax_77 != 4)
                    {
                        void* var_20_2;
                        void* eax_89;
                        void* edx_12;
                        void* ebx_17;

                        if (!ecx_15)
                        {
                            if (!edx_9)
                            {
                                eax_89 = &arg_4;
                                var_20_2 = &arg_20;
                                edx_12 = &arg_3c;
                            }
                            else
                            {
                                eax_89 = &arg_3c;
                                var_20_2 = &arg_4;
                                edx_12 = &arg_20;
                            }

                            ebx_17 = var_20_2;
                        }
                        else
                        {
                            ebx_17 = &arg_3c;
                            eax_89 = &arg_20;
                            var_20_2 = &arg_3c;
                            edx_12 = &arg_4;
                        }

                        long double x87_r7_126 = (g_bcabd4 - *(eax_89 + 0x10))
                            / (*(edx_12 + 0x10) - *(eax_89 + 0x10));
                        memcpy(&var_1c, edx_12, 0x1c);
                        *(edx_12 + 0xc) =
                            (*(edx_12 + 0xc) - *(eax_89 + 0xc)) * x87_r7_126 + *(eax_89 + 0xc);
                        *(edx_12 + 0x10) =
                            (*(edx_12 + 0x10) - *(eax_89 + 0x10)) * x87_r7_126 + *(eax_89 + 0x10);
                        *(edx_12 + 0x14) =
                            (*(edx_12 + 0x14) - *(eax_89 + 0x14)) * x87_r7_126 + *(eax_89 + 0x14);
                        long double x87_r7_128 = *(edx_12 + 0xc);
                        long double temp12_1 = g_bcabd8;
                        x87_r7_128 - temp12_1;
                        int32_t ecx_17;

                        ecx_17 = *(&((x87_r7_128 < temp12_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_128, temp12_1) ? 1 : 0) << 0xa
                            | (x87_r7_128 == temp12_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        long double x87_r7_129 = *(edx_12 + 0x10);
                        long double temp21_1 = g_bcabdc;
                        x87_r7_129 - temp21_1;
                        int32_t eax_91;

                        eax_91 = *(&((x87_r7_129 < temp21_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_129, temp21_1) ? 1 : 0) << 0xa
                            | (x87_r7_129 == temp21_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        *(edx_12 + 0x18) = ((eax_91 * 2) | ecx_17) << 2;
                        long double x87_r7_131 = var_c - *(ebx_17 + 0x10);
                        float var_24_6 = (g_bcabd4 - *(ebx_17 + 0x10)) / x87_r7_131;
                        var_10 = (var_10 - *(ebx_17 + 0xc)) * var_24_6 + *(ebx_17 + 0xc);
                        long double x87_r7_133 = x87_r7_131 * var_24_6 + *(ebx_17 + 0x10);
                        var_c = x87_r7_133;
                        var_8 = (var_8 - *(ebx_17 + 0x14)) * var_24_6 + *(ebx_17 + 0x14);
                        long double x87_r6_116 = var_10;
                        long double temp29_1 = g_bcabd8;
                        x87_r6_116 - temp29_1;
                        int32_t ecx_18;

                        ecx_18 = *(&((x87_r6_116 < temp29_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_116, temp29_1) ? 1 : 0) << 0xa
                            | (x87_r6_116 == temp29_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

                        long double temp35_1 = g_bcabdc;
                        x87_r7_133 - temp35_1;
                        int32_t eax_96;

                        eax_96 = *(&((x87_r7_133 < temp35_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_133, temp35_1) ? 1 : 0) << 0xa
                            | (x87_r7_133 == temp35_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        int32_t var_4_3 = ((eax_96 * 2) | ecx_18) << 2;
                        ebx_2 = a2 | a4 | a6;
                        ebp_2 = a2 & a4 & a6;
                        var_38 = a8;
                        float* var_3c_3 = a7;
                        memcpy(&var_58, edx_12, 0x1c);
                        memcpy(&var_74, &var_1c, 0x1c);
                        memcpy(&var_90, var_20_2, 0x1c);
                        sub_4a0340();
                        ecx_1 = a2;
                        edx = a4;
                        eax = a6;
                    }
                    else
                    {
                        void* eax_78;
                        void* ecx_16;
                        void* edx_10;
                        void* esi_15;

                        if (!ecx_15)
                        {
                            eax_78 = &arg_4;
                            edx_10 = &arg_4;
                            esi_15 = &arg_20;
                            ecx_16 = &arg_3c;
                        }
                        else if (edx_9)
                        {
                            eax_78 = &arg_3c;
                            edx_10 = &arg_3c;
                            esi_15 = &arg_4;
                            ecx_16 = &arg_20;
                        }
                        else
                        {
                            eax_78 = &arg_20;
                            edx_10 = &arg_20;
                            esi_15 = &arg_3c;
                            ecx_16 = &arg_4;
                        }

                        long double x87_r7_114 = (g_bcabd4 - *(eax_78 + 0x10))
                            / (*(esi_15 + 0x10) - *(eax_78 + 0x10));
                        *(esi_15 + 0xc) =
                            (*(esi_15 + 0xc) - *(eax_78 + 0xc)) * x87_r7_114 + *(eax_78 + 0xc);
                        *(esi_15 + 0x10) =
                            (*(esi_15 + 0x10) - *(eax_78 + 0x10)) * x87_r7_114 + *(eax_78 + 0x10);
                        *(esi_15 + 0x14) =
                            (*(esi_15 + 0x14) - *(eax_78 + 0x14)) * x87_r7_114 + *(eax_78 + 0x14);
                        long double x87_r7_116 = *(esi_15 + 0xc);
                        long double temp5_1 = g_bcabd8;
                        x87_r7_116 - temp5_1;
                        int32_t edi_6;

                        edi_6 = *(&((x87_r7_116 < temp5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_116, temp5_1) ? 1 : 0) << 0xa
                            | (x87_r7_116 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        long double x87_r7_117 = *(esi_15 + 0x10);
                        long double temp13_1 = g_bcabdc;
                        x87_r7_117 - temp13_1;
                        int32_t eax_80;

                        eax_80 = *(&((x87_r7_117 < temp13_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_117, temp13_1) ? 1 : 0) << 0xa
                            | (x87_r7_117 == temp13_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        *(esi_15 + 0x18) = ((eax_80 * 2) | edi_6) << 2;
                        long double x87_r7_120 = (g_bcabd4 - *(edx_10 + 0x10))
                            / (*(ecx_16 + 0x10) - *(edx_10 + 0x10));
                        *(ecx_16 + 0xc) =
                            (*(ecx_16 + 0xc) - *(edx_10 + 0xc)) * x87_r7_120 + *(edx_10 + 0xc);
                        *(ecx_16 + 0x10) =
                            (*(ecx_16 + 0x10) - *(edx_10 + 0x10)) * x87_r7_120 + *(edx_10 + 0x10);
                        *(ecx_16 + 0x14) =
                            (*(ecx_16 + 0x14) - *(edx_10 + 0x14)) * x87_r7_120 + *(edx_10 + 0x14);
                        long double x87_r7_122 = *(ecx_16 + 0xc);
                        long double temp22_1 = g_bcabd8;
                        x87_r7_122 - temp22_1;
                        int32_t edx_11;

                        edx_11 = *(&((x87_r7_122 < temp22_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_122, temp22_1) ? 1 : 0) << 0xa
                            | (x87_r7_122 == temp22_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        long double x87_r7_123 = *(ecx_16 + 0x10);
                        long double temp30_1 = g_bcabdc;
                        x87_r7_123 - temp30_1;
                        int32_t eax_85;

                        eax_85 = *(&((x87_r7_123 < temp30_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_123, temp30_1) ? 1 : 0) << 0xa
                            | (x87_r7_123 == temp30_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                        *(ecx_16 + 0x18) = ((eax_85 * 2) | edx_11) << 2;
                        ecx_1 = a2;
                        edx = a4;
                        eax = a6;
                        ebx_2 = ecx_1 | edx | eax;
                        ebp_2 = ecx_1 & edx & eax;
                    }
                }

                if (!ebp_2)
                {
                    if (ebx_2 & 4)
                    {
                        int32_t ecx_21 = ecx_1 & 4;
                        int32_t edx_13 = edx & 4;
                        int32_t eax_104 = (eax & 4) + ecx_21 + edx_13;
                        eax_104 &= 0xfc;

                        if (eax_104 != 8)
                        {
                            void* var_20_3;
                            void* eax_111;
                            void* edx_16;
                            void* ebx_22;

                            if (!ecx_21)
                            {
                                if (!edx_13)
                                {
                                    eax_111 = &arg_4;
                                    var_20_3 = &arg_20;
                                    edx_16 = &arg_3c;
                                }
                                else
                                {
                                    eax_111 = &arg_3c;
                                    var_20_3 = &arg_4;
                                    edx_16 = &arg_20;
                                }

                                ebx_22 = var_20_3;
                            }
                            else
                            {
                                ebx_22 = &arg_3c;
                                eax_111 = &arg_20;
                                var_20_3 = &arg_3c;
                                edx_16 = &arg_4;
                            }

                            long double x87_r7_161 = *(edx_16 + 0xc) - *(eax_111 + 0xc);
                            long double x87_r6_125 = (g_bcabd8 - *(eax_111 + 0xc)) / x87_r7_161;
                            memcpy(&var_1c, edx_16, 0x1c);
                            float var_24_9 = x87_r6_125;
                            *(edx_16 + 0xc) = x87_r7_161 * var_24_9 + *(eax_111 + 0xc);
                            *(edx_16 + 0x10) = (*(edx_16 + 0x10) - *(eax_111 + 0x10)) * var_24_9
                                + *(eax_111 + 0x10);
                            *(edx_16 + 0x14) = (*(edx_16 + 0x14) - *(eax_111 + 0x14)) * var_24_9
                                + *(eax_111 + 0x14);
                            long double x87_r7_172 = *(edx_16 + 0x10);
                            long double temp19_1 = g_bcabdc;
                            x87_r7_172 - temp19_1;
                            int32_t eax_113;

                            eax_113 = *(&((x87_r7_172 < temp19_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_172, temp19_1) ? 1 : 0) << 0xa
                                | (x87_r7_172 == temp19_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            *(edx_16 + 0x18) = eax_113 << 3;
                            long double x87_r7_174 = var_10 - *(ebx_22 + 0xc);
                            float var_24_10 = (g_bcabd8 - *(ebx_22 + 0xc)) / x87_r7_174;
                            var_10 = x87_r7_174 * var_24_10 + *(ebx_22 + 0xc);
                            long double x87_r7_180 =
                                (var_c - *(ebx_22 + 0x10)) * var_24_10 + *(ebx_22 + 0x10);
                            var_c = x87_r7_180;
                            var_8 = (var_8 - *(ebx_22 + 0x14)) * var_24_10 + *(ebx_22 + 0x14);
                            long double temp28_1 = g_bcabdc;
                            x87_r7_180 - temp28_1;
                            int32_t eax_116;

                            eax_116 = *(&((x87_r7_180 < temp28_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_180, temp28_1) ? 1 : 0) << 0xa
                                | (x87_r7_180 == temp28_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            int32_t var_4_4 = eax_116 << 3;
                            ebx_2 = a2 | a4 | a6;
                            ebp_2 = a2 & a4 & a6;
                            var_38 = a8;
                            float* var_3c_4 = a7;
                            memcpy(&var_58, edx_16, 0x1c);
                            memcpy(&var_74, &var_1c, 0x1c);
                            memcpy(&var_90, var_20_3, 0x1c);
                            sub_4a0340();
                            ecx_1 = a2;
                            edx = a4;
                            eax = a6;
                        }
                        else
                        {
                            void* eax_105;
                            void* ecx_22;
                            void* edx_14;
                            void* esi_19;

                            if (!ecx_21)
                            {
                                eax_105 = &arg_4;
                                edx_14 = &arg_4;
                                esi_19 = &arg_20;
                                ecx_22 = &arg_3c;
                            }
                            else if (edx_13)
                            {
                                eax_105 = &arg_3c;
                                edx_14 = &arg_3c;
                                esi_19 = &arg_4;
                                ecx_22 = &arg_20;
                            }
                            else
                            {
                                eax_105 = &arg_20;
                                edx_14 = &arg_20;
                                esi_19 = &arg_3c;
                                ecx_22 = &arg_4;
                            }

                            long double x87_r7_135 = *(esi_19 + 0xc) - *(eax_105 + 0xc);
                            float var_24_7 = (g_bcabd8 - *(eax_105 + 0xc)) / x87_r7_135;
                            *(esi_19 + 0xc) = x87_r7_135 * var_24_7 + *(eax_105 + 0xc);
                            *(esi_19 + 0x10) = (*(esi_19 + 0x10) - *(eax_105 + 0x10)) * var_24_7
                                + *(eax_105 + 0x10);
                            *(esi_19 + 0x14) = (*(esi_19 + 0x14) - *(eax_105 + 0x14)) * var_24_7
                                + *(eax_105 + 0x14);
                            long double x87_r7_146 = *(esi_19 + 0x10);
                            long double temp11_1 = g_bcabdc;
                            x87_r7_146 - temp11_1;
                            int32_t eax_107;

                            eax_107 = *(&((x87_r7_146 < temp11_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_146, temp11_1) ? 1 : 0) << 0xa
                                | (x87_r7_146 == temp11_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            *(esi_19 + 0x18) = eax_107 << 3;
                            long double x87_r7_148 = *(ecx_22 + 0xc) - *(edx_14 + 0xc);
                            float var_24_8 = (g_bcabd8 - *(edx_14 + 0xc)) / x87_r7_148;
                            *(ecx_22 + 0xc) = x87_r7_148 * var_24_8 + *(edx_14 + 0xc);
                            *(ecx_22 + 0x10) =
                                (*(ecx_22 + 0x10) - *(edx_14 + 0x10)) * var_24_8 + *(edx_14 + 0x10);
                            *(ecx_22 + 0x14) =
                                (*(ecx_22 + 0x14) - *(edx_14 + 0x14)) * var_24_8 + *(edx_14 + 0x14);
                            long double x87_r7_159 = *(ecx_22 + 0x10);
                            long double temp20_1 = g_bcabdc;
                            x87_r7_159 - temp20_1;
                            int32_t eax_110;

                            eax_110 = *(&((x87_r7_159 < temp20_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_159, temp20_1) ? 1 : 0) << 0xa
                                | (x87_r7_159 == temp20_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                            *(ecx_22 + 0x18) = eax_110 << 3;
                            ecx_1 = a2;
                            edx = a4;
                            eax = a6;
                            ebx_2 = ecx_1 | edx | eax;
                            ebp_2 = ecx_1 & edx & eax;
                        }
                    }

                    if (!ebp_2)
                    {
                        if (ebx_2 & 8)
                        {
                            int32_t ecx_26 = ecx_1 & 8;
                            int32_t edx_17 = edx & 8;
                            int32_t eax_121 = (eax & 8) + ecx_26 + edx_17;
                            eax_121 &= 0xf8;

                            if (eax_121 != 0x10)
                            {
                                void* eax_123;
                                void* edx_19;
                                void* ebx_25;

                                if (ecx_26)
                                {
                                    edx_19 = &arg_20;
                                    ebx_25 = &arg_3c;
                                    eax_123 = &arg_4;
                                }
                                else if (!edx_17)
                                {
                                    edx_19 = &arg_4;
                                    ebx_25 = &arg_20;
                                    eax_123 = &arg_3c;
                                }
                                else
                                {
                                    edx_19 = &arg_3c;
                                    ebx_25 = &arg_4;
                                    eax_123 = &arg_20;
                                }

                                long double x87_r7_191 = (g_bcabdc - *(edx_19 + 0x10))
                                    / (*(eax_123 + 0x10) - *(edx_19 + 0x10));
                                memcpy(&var_1c, eax_123, 0x1c);
                                int32_t var_4_5 = 0;
                                *(eax_123 + 0xc) = (*(eax_123 + 0xc) - *(edx_19 + 0xc)) * x87_r7_191
                                    + *(edx_19 + 0xc);
                                *(eax_123 + 0x10) =
                                    (*(eax_123 + 0x10) - *(edx_19 + 0x10)) * x87_r7_191
                                    + *(edx_19 + 0x10);
                                long double x87_r6_174 =
                                    (*(eax_123 + 0x14) - *(edx_19 + 0x14)) * x87_r7_191
                                    + *(edx_19 + 0x14);
                                *(eax_123 + 0x18) = 0;
                                *(eax_123 + 0x14) = x87_r6_174;
                                long double x87_r7_194 = var_c - *(ebx_25 + 0x10);
                                ebp_2 = a2 & a4 & a6;
                                long double x87_r6_177 =
                                    (g_bcabdc - *(ebx_25 + 0x10)) / x87_r7_194;
                                var_38 = a8;
                                float* var_3c_5 = a7;
                                memcpy(&var_58, eax_123, 0x1c);
                                float var_24_11 = x87_r6_177;
                                float var_10_1 =
                                    (var_10 - *(ebx_25 + 0xc)) * var_24_11 + *(ebx_25 + 0xc);
                                float var_c_1 = x87_r7_194 * var_24_11 + *(ebx_25 + 0x10);
                                float var_8_1 =
                                    (var_8 - *(ebx_25 + 0x14)) * var_24_11 + *(ebx_25 + 0x14);
                                memcpy(&var_74, &var_1c, 0x1c);
                                memcpy(&var_90, ebx_25, 0x1c);
                                sub_4a0340();
                            }
                            else
                            {
                                void* eax_122;
                                void* ecx_27;
                                void* edx_18;
                                void* esi_23;

                                if (!ecx_26)
                                {
                                    eax_122 = &arg_4;
                                    ecx_27 = &arg_4;
                                    edx_18 = &arg_20;
                                    esi_23 = &arg_3c;
                                }
                                else if (edx_17)
                                {
                                    eax_122 = &arg_3c;
                                    ecx_27 = &arg_3c;
                                    edx_18 = &arg_4;
                                    esi_23 = &arg_20;
                                }
                                else
                                {
                                    eax_122 = &arg_20;
                                    ecx_27 = &arg_20;
                                    edx_18 = &arg_3c;
                                    esi_23 = &arg_4;
                                }

                                long double x87_r7_183 = (g_bcabdc - *(eax_122 + 0x10))
                                    / (*(edx_18 + 0x10) - *(eax_122 + 0x10));
                                *(edx_18 + 0xc) = (*(edx_18 + 0xc) - *(eax_122 + 0xc)) * x87_r7_183
                                    + *(eax_122 + 0xc);
                                *(edx_18 + 0x10) =
                                    (*(edx_18 + 0x10) - *(eax_122 + 0x10)) * x87_r7_183
                                    + *(eax_122 + 0x10);
                                long double x87_r6_146 =
                                    (*(edx_18 + 0x14) - *(eax_122 + 0x14)) * x87_r7_183
                                    + *(eax_122 + 0x14);
                                *(edx_18 + 0x18) = 0;
                                *(edx_18 + 0x14) = x87_r6_146;
                                long double x87_r7_187 = (g_bcabdc - *(ecx_27 + 0x10))
                                    / (*(esi_23 + 0x10) - *(ecx_27 + 0x10));
                                *(esi_23 + 0xc) = (*(esi_23 + 0xc) - *(ecx_27 + 0xc)) * x87_r7_187
                                    + *(ecx_27 + 0xc);
                                *(esi_23 + 0x10) =
                                    (*(esi_23 + 0x10) - *(ecx_27 + 0x10)) * x87_r7_187
                                    + *(ecx_27 + 0x10);
                                long double x87_r6_160 =
                                    (*(esi_23 + 0x14) - *(ecx_27 + 0x14)) * x87_r7_187
