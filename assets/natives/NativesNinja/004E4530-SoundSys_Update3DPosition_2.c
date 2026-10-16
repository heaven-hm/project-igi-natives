#include "004E4530-SoundSys_Update3DPosition_2.h"
/* 0x004e4530 SoundSys_Update3DPosition_2 full linked: callers=8 callees=35 */
int32_t* sub_4e4530(float a1, int32_t* a2, double* a3, float* a4, float* a5, char a6, char a7, int32_t a8, char* a9 @ 0x28)

{
    int32_t __saved_ebp_1;
    int32_t __saved_ebp = __saved_ebp_1;
    int32_t __saved_ebx_1;
    int32_t __saved_ebx = __saved_ebx_1;
    int32_t __saved_esi_1;
    int32_t __saved_esi = __saved_esi_1;
    *(a1 + 0x5b4) = a6;
    *(a1 + 0x5b5) = a7;
    int32_t __saved_edi_1;
    int32_t __saved_edi = __saved_edi_1;
    *(a1 + 0xa4) = 0;
    *(a1 + 0x59c) = a8;

    if (a6)
        *(a1 + 0x59c) = 1;

    int32_t* edi = a3;
    int32_t* esi = a2;
    double* var_138 = esi;
    double var_118 = sub_4b32b0(var_138, edi);
    var_138 = *a5 * var_118;
    int32_t var_144 = edi[1];
    double var_68[0x4];
    sub_518130(&var_68, *esi, esi[1], *edi, *a4 * var_118, var_138);
    var_138 = a5[3] * var_118;
    int32_t var_144_1 = edi[3];
    double var_48[0x4];
    sub_518130(&var_48, esi[2], esi[3], edi[2], a4[3] * var_118, var_138);
    var_138 = a5[6] * var_118;
    double var_140_3 = a4[6] * var_118;
    int32_t var_144_2 = edi[5];
    double var_28[0x4];
    sub_518130(&var_28, esi[4], esi[5], edi[4], var_140_3, var_138);
    float var_74;
    float var_70;
    float var_6c;
    sub_4b3c50(a4, &var_74, &var_70, &var_6c);
    float var_a4;
    float var_a0;
    float var_9c;
    sub_4b3c50(a5, &var_a4, &var_a0, &var_9c);
    long double x87_r7_14 = *esi + *edi;
    int32_t eax_8 = *(a1 + 0x59c);
    int32_t var_108 = eax_8;
    double var_98 = x87_r7_14 * 0.5;
    double var_90 = (*(edi + 8) + *(esi + 8)) * 0.5;
    int32_t i = 0;
    long double x87_r7_21 = (*(edi + 0x10) + *(esi + 0x10)) * 0.5;
    *(a1 + 0xf8) = 0;
    int32_t i_6 = 0;
    double var_88 = x87_r7_21;
    float var_ec = 1f / var_108;
    float var_fc;
    float var_e4;
    float var_e0;
    double var_d0;
    double var_c8;

    if (eax_8 >= 0)
    {
        do
        {
            int16_t eax_9;
            eax_9 = a6;
            long double x87_r7_25 = i_6 * var_ec;
            float var_dc_1 = x87_r7_25;
            long double x87_r7_40;

            if (!eax_9)
            {
                long double x87_r6_18 = var_74;
                float var_f0_1 = x87_r6_18;
                long double x87_r5_3 = var_a4;
                var_108 = x87_r5_3;
                long double x87_r4_7 = var_a4 - var_74;
                long double temp1_1 = 3.14159274f;
                x87_r4_7 - temp1_1;

                if (!(*(&((x87_r4_7 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r4_7, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r4_7 == temp1_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41))
                {
                    long double x87_r4_9;
                    long double temp4_1;

                    do
                    {
                        x87_r6_18 = x87_r6_18 + 6.28318548f;
                        x87_r4_9 = var_a4 - x87_r6_18;
                        temp4_1 = 3.14159274f;
                        x87_r4_9 - temp4_1;
                    } while (!(*(&((x87_r4_9 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r4_9, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r4_9 == temp4_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41));
                    var_f0_1 = x87_r6_18;
                }

                long double x87_r4_11 = var_a4 - x87_r6_18;
                long double temp3_1 = -3.14159274f;
                x87_r4_11 - temp3_1;
                eax_9 = (x87_r4_11 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r4_11, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r4_11 == temp3_1 ? 1 : 0) << 0xe | 0x2800;

                if (*(&eax_9 + 1) & 1)
                {
                    do
                    {
                        x87_r5_3 = x87_r5_3 + 6.28318548f;
                        long double x87_r4_13 = x87_r5_3 - x87_r6_18;
                        long double temp6_1 = -3.14159274f;
                        x87_r4_13 - temp6_1;
                        eax_9 = (x87_r4_13 < temp6_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r4_13, temp6_1) ? 1 : 0) << 0xa
                            | (x87_r4_13 == temp6_1 ? 1 : 0) << 0xe | 0x2800;
                    } while (*(&eax_9 + 1) & 1);

                    var_108 = x87_r5_3;
                }

                double var_118_1 = x87_r7_25;
                int32_t var_134_3 = *(&var_118_1 + 4);
                void* eax_15 = a1 + i * 0xc;
                int32_t var_138_3 = var_118_1;
                *(&var_140_3 + 4) = &var_68;
                *(eax_15 + 0x104) = sub_518190() - var_98;
                float* eax_16 = a1 + ((i * 3 + 0x42) << 2);
                var_140_3 = *(&var_118_1 + 4);
                *eax_16 = sub_518190(&var_48, var_118_1) - var_90;
                int32_t var_14c_3 = *(&var_118_1 + 4);
                *(eax_15 + 0x10c) = sub_518190(&var_28, var_118_1) - var_88;

                if (!i)
                {
                    memcpy(a1 + 0x200, a4, 0x28);
                    i = i_6;
                    esi = a2;
                }
                else if (i != *(a1 + 0x59c))
                {
                    int32_t var_134_4 = *(&var_118_1 + 4);
                    int32_t var_138_4 = var_118_1;
                    *(&var_140_3 + 4) = &var_68;
                    var_fc = sub_5181c0();
                    var_140_3 = *(&var_118_1 + 4);
                    float var_f8_1 = sub_5181c0(&var_48, var_118_1);
                    int32_t var_14c_4 = *(&var_118_1 + 4);
                    float var_f4_1 = sub_5181c0(&var_28, var_118_1);
                    long double x87_r7_57 = var_fc;
                    long double temp15_1 = 0f;
                    x87_r7_57 - temp15_1;

                    if (!(*(&((x87_r7_57 < temp15_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_57, temp15_1) ? 1 : 0) << 0xa
                        | (x87_r7_57 == temp15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_4e4b0b:
                        float* var_134_5 = &var_e0;
                        float* var_138_5 = &var_e4;
                        *(&var_140_3 + 4) = &var_fc;
                        sub_4b2d00();
                    }
                    else
                    {
                        long double x87_r7_58 = var_f8_1;
                        long double temp17_1 = 0f;
                        x87_r7_58 - temp17_1;

                        if (!(*(&((x87_r7_58 < temp17_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_58, temp17_1) ? 1 : 0) << 0xa
                                | (x87_r7_58 == temp17_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4e4b0b;

                        long double x87_r7_59 = var_f4_1;
                        long double temp19_1 = 0f;
                        x87_r7_59 - temp19_1;

                        if (!(*(&((x87_r7_59 < temp19_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_59, temp19_1) ? 1 : 0) << 0xa
                                | (x87_r7_59 == temp19_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4e4b0b;

                        var_e4 = 0f;
                        var_e0 = 0f;
                    }

                    *(&var_140_3 + 4) = (var_108 - var_f0_1) * var_dc_1 + var_f0_1;
                    var_140_3 = a1 + i * 0x28 + 0x200;
                    sub_4b38e0(var_140_3, var_e4, var_e0);
                    var_fc = *(eax_15 + 0x104) - *(eax_15 + 0xf8);
                    long double x87_r7_69 = *(eax_15 + 0x10c) - *(eax_15 + 0x100);
                    float var_f4_2 = x87_r7_69;
                    long double x87_r6_29 = *eax_16 - *(a1 + ((i * 3 + 0x3f) << 2));
                    long double x87_r5_10 = var_fc;
                    x87_r7_40 = sqrtl(x87_r5_10 * x87_r5_10 + x87_r6_29 * x87_r6_29
                        + x87_r7_69 * x87_r7_69);
                    *(a1 + (i << 2) + 0x544) = x87_r7_40;
                    *(a1 + 0xf8) = x87_r7_40 + *(a1 + 0xf8);
                }
                else
                {
                    memcpy(a1 + i * 0x28 + 0x200, a5, 0x28);
                    long double x87_r7_48 = *(eax_15 + 0x104) - *(eax_15 + 0xf8);
                    i = i_6;
                    esi = a2;
                    long double x87_r6_23 = *eax_16 - *(a1 + ((i_6 * 3 + 0x3f) << 2));
                    var_108 = *(eax_15 + 0x10c) - *(eax_15 + 0x100);
                    double var_118_2 = x87_r6_23;
                    long double x87_r7_52 =
                        sqrtl(x87_r7_48 * x87_r7_48 + var_118_2 * var_118_2 + var_108 * var_108);
                    *(a1 + (i_6 << 2) + 0x544) = x87_r7_52;
                    *(a1 + 0xf8) = x87_r7_52 + *(a1 + 0xf8);
                }
            }
            else
            {
                void* eax_10 = a1 + i * 0xc;
                var_d0 = (a3[1] - *(esi + 8)) * var_dc_1 + *(esi + 8);
                var_c8 = (a3[2] - *(esi + 0x10)) * var_dc_1 + *(esi + 0x10);
                *(eax_10 + 0x104) = (*a3 - *esi) * x87_r7_25 + *esi - var_98;
                *(a1 + ((i * 3 + 0x42) << 2)) = var_d0 - var_90;
                *(eax_10 + 0x10c) = var_c8 - var_88;
                void* eax_12 = a1 + i * 0x28;
                var_108 = eax_12 + 0x200;
                *(eax_12 + 0x200) = 0;
                *(eax_12 + 0x204) = 0;
                *(a1 + ((i * 5 + 0x41) << 3)) = 0;
                __builtin_memset(eax_12 + 0x20c, 0, 0x1c);
                long double x87_r7_35 = *a3 - *esi;
                float var_b0 = x87_r7_35;
                float var_ac_1 = a3[1] - *(esi + 8);
                float var_a8_1 = a3[2] - *(esi + 0x10);
                long double temp2_1 = 0f;
                x87_r7_35 - temp2_1;
                float var_78;
                int32_t var_7c;

                if (!(*(&((x87_r7_35 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_35, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_35 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4e482c:
                    float* var_134_1 = &var_78;
                    int32_t* var_138_1 = &var_7c;
                    *(&var_140_3 + 4) = &var_b0;
                    sub_4b2d00();
                }
                else
                {
                    long double x87_r7_36 = var_ac_1;
                    long double temp5_1 = 0f;
                    x87_r7_36 - temp5_1;

                    if (!(*(&((x87_r7_36 < temp5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_36, temp5_1) ? 1 : 0) << 0xa
                            | (x87_r7_36 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4e482c;

                    long double x87_r7_37 = var_a8_1;
                    long double temp7_1 = 0f;
                    x87_r7_37 - temp7_1;

                    if (!(*(&((x87_r7_37 < temp7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_37, temp7_1) ? 1 : 0) << 0xa
                            | (x87_r7_37 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4e482c;

                    var_7c = 0;
                    var_78 = 0f;
                }
                sub_4b3be0(var_108, var_78);

                if (!i)
                {
                    long double x87_r7_38 = var_a8_1;
                    long double x87_r6_16 = var_ac_1;
                    long double x87_r5_1 = var_b0;
                    x87_r7_40 =
                        sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_16 * x87_r6_16 + x87_r7_38 * x87_r7_38)
                        * var_ec;
                    *(a1 + 0x548) = x87_r7_40;
                    *(a1 + 0xf8) = x87_r7_40 + *(a1 + 0xf8);
                }
            }
            i += 1;
            i_6 = i;
        } while (i <= *(a1 + 0x59c));
    }

    *(a1 + (*(a1 + 0x59c) << 2) + 0x548) = 0;
    int32_t* result = sub_4cec10(a9);
    var_108 = result;
    *(a1 + 0x6c) = result;

    if (result)
    {
        *(a1 + 0xfc) = 0;
        *(a1 + 0x100) = 0;
        int32_t i_7 = 0;

        if (result[0xf] > 0)
        {
            int32_t* result_1 = result;
            int32_t i_1;

            do
            {
                void* ecx_23 = *(*(*result_1 + 0xc) + 0xc);

                if (!*(ecx_23 + 0x20))
                {
                    void* edx_23 = *(ecx_23 + 0x24);
                    int32_t j = 0;
                    float* ecx_24 = *(edx_23 + 0x10);

                    if (*(edx_23 + 0xc) > 0)
                    {
                        do
                        {
                            long double x87_r7_71 = *ecx_24;
                            long double temp11_1 = *(a1 + 0xfc);
                            x87_r7_71 - temp11_1;

                            if (*(&((x87_r7_71 < temp11_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_71, temp11_1) ? 1 : 0) << 0xa
                                    | (x87_r7_71 == temp11_1 ? 1 : 0) << 0xe) + 1) & 1)
                                *(a1 + 0xfc) = *ecx_24;

                            long double x87_r7_72 = *ecx_24;
                            long double temp14_1 = *(a1 + 0x100);
                            x87_r7_72 - temp14_1;

                            if (!(*(&((x87_r7_72 < temp14_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_72, temp14_1) ? 1 : 0) << 0xa
                                    | (x87_r7_72 == temp14_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                *(a1 + 0x100) = *ecx_24;

                            j += 1;
                            ecx_24 = &ecx_24[8];
                        } while (j < *(edx_23 + 0xc));

                        result = var_108;
                    }
                }

                i_1 = i_7 + 1;
                result_1 = &result_1[1];
                i_7 = i_1;
            } while (i_1 < result[0xf]);
        }

        float var_120_1;

        if (!*(a1 + 0x5b4))
        {
            var_120_1 = 0f;

            for (int32_t i_2 = 0; i_2 < 2; i_2 += 1)
            {
                int32_t var_138_9 = 0;
                *(&var_140_3 + 4) = 1;
                var_140_3 = i_2;
                int32_t var_144_5 = 0;
                void* eax_56 = sub_49a050(a1, 0, var_140_3, &var_108);
                int32_t j_2 = var_108;

                if (j_2 > 0)
                {
                    float* ecx_41 = eax_56 + 4;
                    int32_t j_1;

                    do
                    {
                        long double x87_r7_90 = ecx_41[1];
                        long double x87_r6_49 = *ecx_41;
                        long double x87_r5_18 = ecx_41[-1];
                        long double x87_r4_32 = sqrtl(x87_r5_18 * x87_r5_18 + x87_r7_90 * x87_r7_90
                            + x87_r6_49 * x87_r6_49);
                        long double x87_r6_51 = var_120_1;
                        x87_r6_51 - x87_r4_32;

                        if (*(&((x87_r6_51 < x87_r4_32 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_51, x87_r4_32) ? 1 : 0) << 0xa
                                | (x87_r6_51 == x87_r4_32 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                            var_120_1 = x87_r4_32;

                        ecx_41 = &ecx_41[3];
                        j_1 = j_2;
                        j_2 -= 1;
                    } while (j_1 != 1);
                }

                long double x87_r7_93 = var_120_1;
                long double temp9_1 = 1f;
                x87_r7_93 - temp9_1;

                if (*(&((x87_r7_93 < temp9_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_93, temp9_1) ? 1 : 0) << 0xa
                        | (x87_r7_93 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    var_120_1 = 1f;
            }
        }
        else
        {
            float var_120 = 1f;

            if (!sub_4b3360(esi, a3))
            {
                long double x87_r7_74 = *a3 - *esi;
                var_fc = x87_r7_74;
                float var_f8_3 = a3[1] - *(esi + 8);
                float var_f4_3 = a3[2] - *(esi + 0x10);
                long double temp8_1 = 0f;
                x87_r7_74 - temp8_1;

                if (*(&((x87_r7_74 < temp8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_74, temp8_1) ? 1 : 0) << 0xa
                    | (x87_r7_74 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                {
                    long double x87_r7_75 = var_f8_3;
                    long double temp10_1 = 0f;
                    x87_r7_75 - temp10_1;

                    if (*(&((x87_r7_75 < temp10_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_75, temp10_1) ? 1 : 0) << 0xa
                        | (x87_r7_75 == temp10_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                    {
                        long double x87_r7_76 = var_f4_3;
                        long double temp13_1 = 0f;
                        x87_r7_76 - temp13_1;

                        if (*(&((x87_r7_76 < temp13_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_76, temp13_1) ? 1 : 0) << 0xa
                            | (x87_r7_76 == temp13_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                        {
                            var_fc = 1f;
                            var_f8_3 = 0f;
                            var_f4_3 = 0f;
                        }
                    }
                }

                int32_t ecx_26 = *(a1 + 0x20c);
                var_d0 = *(a1 + 0x218);
                long double x87_r7_79 = 1f / (*(a1 + 0x100) - *(a1 + 0xfc));
                int32_t edx_28 = *(a1 + 0x21c);
                int32_t var_d8 = *(a1 + 0x200);
                int32_t var_d4_1 = ecx_26;
                *(&var_c8 + 4) = edx_28;
                *(&var_d0 + 4) = *(a1 + 0x204);
                var_c8 = *(a1 + 0x210);
                int32_t var_b8_1 = *(a1 + 0x220);
                int32_t var_c0_1 = *(a1 + 0x208);
                int32_t var_bc_1 = *(a1 + 0x214);
                int32_t var_b4_1 = *(a1 + 0x224);
                float eax_39 = var_fc;
                memcpy(a1 + 0x70, &var_d8, 0x28);
                *(a1 + 0x70) = eax_39;
                *(a1 + 0x74) = var_f8_3;
                *(a1 + 0x78) = var_f4_3;
                bool cond:8_1 = !*(a1 + 0x5b5);
                long double x87_r6_36 = x87_r7_79 * *(a1 + 0x70);
                var_108 = x87_r6_36;
                *(a1 + 0x70) = x87_r6_36;
                long double x87_r6_38 = x87_r7_79 * *(a1 + 0x74);
                float var_ec_1 = x87_r6_38;
                *(a1 + 0x74) = x87_r6_38;
                long double x87_r7_80 = x87_r7_79 * *(a1 + 0x78);
                *(a1 + 0x78) = x87_r7_80;

                if (!cond:8_1)
                {
                    *(a1 + 0x70) = -(var_108);
                    *(a1 + 0x74) = -(var_ec_1);
                    *(a1 + 0x78) = -(x87_r7_80);
                }

                int32_t eax_43 = *(a1 + 0x7c);
                var_d8 = *(a1 + 0x70);
                int32_t var_d4_2 = eax_43;
                var_d0 = *(a1 + 0x88);
                *(&var_d0 + 4) = *(a1 + 0x74);
                var_c8 = *(a1 + 0x80);
                *(&var_c8 + 4) = *(a1 + 0x8c);
                int32_t var_c0_2 = *(a1 + 0x78);
                int32_t var_bc_2 = *(a1 + 0x84);
                int32_t var_b8_2 = *(a1 + 0x90);
                int32_t var_b4_2 = *(a1 + 0x94);
                memcpy(a1 + 0x70, &var_d8, 0x28);
                long double x87_r7_83 = *(a1 + 0x78);
                long double x87_r6_43 = *(a1 + 0x74);
                long double x87_r5_12 = *(a1 + 0x70);
                long double x87_r4_23 =
                    sqrtl(x87_r5_12 * x87_r5_12 + x87_r6_43 * x87_r6_43 + x87_r7_83 * x87_r7_83);
                long double x87_r6_45 = *(a1 + 0x84);
                long double x87_r5_14 = *(a1 + 0x80);
                long double x87_r4_24 = *(a1 + 0x7c);
                var_e4 =
                    sqrtl(x87_r4_24 * x87_r4_24 + x87_r5_14 * x87_r5_14 + x87_r6_45 * x87_r6_45);
                long double x87_r6_47 = *(a1 + 0x90);
                long double x87_r5_16 = *(a1 + 0x8c);
                long double x87_r4_26 = *(a1 + 0x88);
                var_e0 =
                    sqrtl(x87_r4_26 * x87_r4_26 + x87_r5_16 * x87_r5_16 + x87_r6_47 * x87_r6_47);
                var_120 = x87_r4_23;
                long double temp21_1 = var_e4;
                x87_r4_23 - temp21_1;

                if (*(&((x87_r4_23 < temp21_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r4_23, temp21_1) ? 1 : 0) << 0xa
                        | (x87_r4_23 == temp21_1 ? 1 : 0) << 0xe) + 1) & 1)
                    var_120 = var_e4;

                long double x87_r7_85 = var_120;
                long double temp22_1 = var_e0;
                x87_r7_85 - temp22_1;

                if (*(&((x87_r7_85 < temp22_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_85, temp22_1) ? 1 : 0) << 0xa
                        | (x87_r7_85 == temp22_1 ? 1 : 0) << 0xe) + 1) & 1)
                    var_120 = var_e0;

                int32_t eax_50 = *(a1 + 0x88);
                int32_t edx_31 = *(a1 + 0x7c);
                var_d8 = *(a1 + 0x70);
                var_d0 = eax_50;
                *(&var_d0 + 4) = *(a1 + 0x74);
                *(&var_c8 + 4) = *(a1 + 0x8c);
                int32_t var_d4_3 = edx_31;
                int32_t var_c0_3 = *(a1 + 0x78);
                int32_t var_b8_3 = *(a1 + 0x90);
                var_c8 = *(a1 + 0x80);
                int32_t var_b4_3 = *(a1 + 0x94);
                int32_t var_bc_3 = *(a1 + 0x84);
                memcpy(a1 + 0x520, &var_d8, 0x28);
                sub_4b4390(a1 + 0x520, a1 + 0x520);
            }

            void** ecx_40 = *(a1 + 0x6c);
            long double x87_r7_86 = 0f;
            int32_t i_10 = ecx_40[0xf];

            if (i_10 > 0)
            {
                int32_t i_8 = i_10;
                int32_t i_3;

                do
                {
                    void* edx_35 = *(*(*ecx_40 + 0xc) + 0xc);
                    long double temp12_1 = *(edx_35 + 0x78);
                    x87_r7_86 - temp12_1;

                    if (*(&((x87_r7_86 < temp12_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_86, temp12_1) ? 1 : 0) << 0xa
                            | (x87_r7_86 == temp12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        x87_r7_86 = *(edx_35 + 0x78);

                    ecx_40 = &ecx_40[1];
                    i_3 = i_8;
                    i_8 -= 1;
                } while (i_3 != 1);
            }

            var_120_1 = x87_r7_86 * var_120 * 1.10000002f;
        }

        *(&var_140_3 + 4) = a1;
        var_140_3 = *(a1 + 0xf0);
        sub_4c6940(var_140_3, &var_98, var_120_1);
        *(a1 + 0xf4) = var_120_1;
        sub_49a010(a1);

        if (*(a1 + 0x5b0) != *(a1 + 0x6c) || a6)
        {
            int32_t** esi_4 = a1 + 0x5a0;
            int32_t i_9 = 2;
            int32_t i_4;

            do
            {
                result = *esi_4;

                if (result)
                {
                    result = sub_4b0d10(result);
                    *esi_4 = nullptr;
                }

                esi_4 = &esi_4[2];
                i_4 = i_9;
                i_9 -= 1;
            } while (i_4 != 1);
            result = a6;

            if (!result)
                goto label_4e50ae;
        }
        else
        {
        label_4e50ae:
            result = *(a1 + 0x6c);
            int32_t i_5 = 0;

            if (result)
            {
                int32_t edx_38 = *(a1 + 0xa4);
                int32_t* edi_7 = a1 + 0x5a0;
                int32_t var_10c_2 = edx_38;
                int32_t var_11c_2 = 0;
                var_108 = 0;
                int32_t* var_f0_2 = edi_7;

                do
                {
                    result = *(*(*(*(*(a1 + 0x6c) + (edx_38 << 2)) + 0xc) + 0xc) + 0x2c) + i_5;
                    g_a5e3f8 = result;

                    if (result[3])
                    {
                        int32_t var_134_13 = 0;
                        int32_t var_138_11 = 0;
                        *(&var_140_3 + 4) = 1;
                        var_140_3 = var_11c_2;
                        g_a5e3ec = sub_49a050(a1, edx_38, var_140_3, nullptr);

                        if (!*edi_7)
                        {
                            int32_t var_134_14 = 4;
                            int32_t eax_68 = *(g_a5e3f8 + 0xc);
                            edi_7[1] = eax_68;
                            *edi_7 = Mem_Alloc(eax_68 * 0x18, 4);
                        }

                        int32_t ecx_46 = edi_7[1] * 0x18;
                        int32_t esi_7;
                        int32_t edi_9;
                        edi_9 =
                            memcpy(*edi_7, *(g_a5e3f8 + 0x1c), ecx_46 & 0xfffffffc);
                        memcpy(edi_9, esi_7, ecx_46 & 3);
                        g_a5e3f0 = var_f0_2;
                        sub_4e1440(a1, var_f0_2);
                        g_a5e374 = *var_f0_2;
                        g_a5e400 = 0;
                        result = sub_4e51c0();
                        i_5 = var_108;
                        edx_38 = var_10c_2;
                        edi_7 = var_f0_2;
                    }

                    i_5 += 0x20;
                    edi_7 = &edi_7[2];
                    var_11c_2 += 1;
                    var_f0_2 = edi_7;
                    var_108 = i_5;
                } while (i_5 < 0x40);
            }
        }

        *(a1 + 0x5b0) = *(a1 + 0x6c);
    }

    return result;
}
