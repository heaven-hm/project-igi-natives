#include "0047ABD0-GunShot_Update.h"
/* 0x0047abd0 GunShot_Update full linked: callers=0 callees=5 */
void* sub_47abd0(int32_t a1)

{
    float* edi = a1;
    void* ebp = *edi[0x1b];

    if (ebp)
    {
        void* eax_1 = *(ebp + 0x12c);

        if (eax_1 && *(eax_1 + 0x20))
        {
            int32_t* i = nullptr;
            float var_c_1 = (*(eax_1 + 0x14) - *(eax_1 + 8)) * 0.00392156886f;
            float var_8_1 = (*(eax_1 + 0x18) - *(eax_1 + 0xc)) * 0.00392156886f;
            float var_4_1 = (*(eax_1 + 0x1c) - *(eax_1 + 0x10)) * 0.00392156886f;

            if (edi[0x27] > 0)
            {
                int32_t* esi_2 = &edi[0x240];

                do
                {
                    double* ecx_6 = *esi_2;
                    long double x87_r7_8 = ecx_6[7] / ecx_6[8];
                    a1 = *(ecx_6 + 0x3c) / ecx_6[8];
                    float var_18 = *(*(ebp + 0x12c) + 8) * 0.00392156886f + x87_r7_8 * var_c_1;
                    float var_14_1 = *(*(ebp + 0x12c) + 0xc) * 0.00392156886f + x87_r7_8 * var_8_1;
                    float var_10_1 = *(*(ebp + 0x12c) + 0x10) * 0.00392156886f + x87_r7_8 * var_4_1;
                    long double x87_r7_11 = 0f;
                    long double temp1_1 = var_18;
                    x87_r7_11 - temp1_1;

                    if (*(&((x87_r7_11 < temp1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_11, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r7_11 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_12 = 1f;
                        long double temp2_1 = var_18;
                        x87_r7_12 - temp2_1;

                        if (*(&((x87_r7_12 < temp2_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_12, temp2_1) ? 1 : 0) << 0xa
                                | (x87_r7_12 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1)
                            var_18 = 1f;
                    }
                    else
                        var_18 = 0f;

                    long double x87_r7_13 = 0f;
                    long double temp3_1 = var_14_1;
                    x87_r7_13 - temp3_1;

                    if (*(&((x87_r7_13 < temp3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_13, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r7_13 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_14 = 1f;
                        long double temp4_1 = var_14_1;
                        x87_r7_14 - temp4_1;

                        if (*(&((x87_r7_14 < temp4_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_14, temp4_1) ? 1 : 0) << 0xa
                                | (x87_r7_14 == temp4_1 ? 1 : 0) << 0xe) + 1) & 1)
                            var_14_1 = 1f;
                    }
                    else
                        var_14_1 = 0f;

                    long double x87_r7_15 = 0f;
                    long double temp5_1 = var_10_1;
                    x87_r7_15 - temp5_1;

                    if (*(&((x87_r7_15 < temp5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_15, temp5_1) ? 1 : 0) << 0xa
                        | (x87_r7_15 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_16 = 1f;
                        long double temp6_1 = var_10_1;
                        x87_r7_16 - temp6_1;

                        if (*(&((x87_r7_16 < temp6_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_16, temp6_1) ? 1 : 0) << 0xa
                                | (x87_r7_16 == temp6_1 ? 1 : 0) << 0xe) + 1) & 1)
                            var_10_1 = 1f;
                    }
                    else
                        var_10_1 = 0f;

                    float var_24 = *(*(ebp + 0x12c) + 8) * 0.00392156886f + a1 * var_c_1;
                    float var_20_1 = *(*(ebp + 0x12c) + 0xc) * 0.00392156886f + a1 * var_8_1;
                    float var_1c_1 = *(*(ebp + 0x12c) + 0x10) * 0.00392156886f + a1 * var_4_1;
                    long double x87_r7_26 = 0f;
                    long double temp7_1 = var_24;
                    x87_r7_26 - temp7_1;

                    if (*(&((x87_r7_26 < temp7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_26, temp7_1) ? 1 : 0) << 0xa
                        | (x87_r7_26 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_27 = 1f;
                        long double temp8_1 = var_24;
                        x87_r7_27 - temp8_1;

                        if (*(&((x87_r7_27 < temp8_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_27, temp8_1) ? 1 : 0) << 0xa
                                | (x87_r7_27 == temp8_1 ? 1 : 0) << 0xe) + 1) & 1)
                            var_24 = 1f;
                    }
                    else
                        var_24 = 0f;

                    long double x87_r7_28 = 0f;
                    long double temp9_1 = var_20_1;
                    x87_r7_28 - temp9_1;

                    if (*(&((x87_r7_28 < temp9_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_28, temp9_1) ? 1 : 0) << 0xa
                        | (x87_r7_28 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_29 = 1f;
                        long double temp10_1 = var_20_1;
                        x87_r7_29 - temp10_1;

                        if (*(&((x87_r7_29 < temp10_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_29, temp10_1) ? 1 : 0) << 0xa
                                | (x87_r7_29 == temp10_1 ? 1 : 0) << 0xe) + 1) & 1)
                            var_20_1 = 1f;
                    }
                    else
                        var_20_1 = 0f;

                    long double x87_r7_30 = 0f;
                    long double temp11_1 = var_1c_1;
                    x87_r7_30 - temp11_1;

                    if (*(&((x87_r7_30 < temp11_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_30, temp11_1) ? 1 : 0) << 0xa
                        | (x87_r7_30 == temp11_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_31 = 1f;
                        long double temp12_1 = var_1c_1;
                        x87_r7_31 - temp12_1;

                        if (*(&((x87_r7_31 < temp12_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_31, temp12_1) ? 1 : 0) << 0xa
                                | (x87_r7_31 == temp12_1 ? 1 : 0) << 0xe) + 1) & 1)
                            var_1c_1 = 1f;
                    }
                    else
                        var_1c_1 = 0f;

                    float var_40_1 = ecx_6[7] / ecx_6[8];
                    long double x87_r7_34 = 0f;
                    long double temp13_1 = var_40_1;
                    x87_r7_34 - temp13_1;

                    if (*(&((x87_r7_34 < temp13_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_34, temp13_1) ? 1 : 0) << 0xa
                        | (x87_r7_34 == temp13_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_35 = 1f;
                        long double temp14_1 = var_40_1;
                        x87_r7_35 - temp14_1;

                        if (*(&((x87_r7_35 < temp14_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_35, temp14_1) ? 1 : 0) << 0xa
                                | (x87_r7_35 == temp14_1 ? 1 : 0) << 0xe) + 1) & 1)
                            var_40_1 = 1f;
                    }
                    else
                        var_40_1 = 0f;

                    a1 = *(ecx_6 + 0x3c) / ecx_6[8];
                    long double x87_r7_38 = 0f;
                    long double temp15_1 = a1;
                    x87_r7_38 - temp15_1;

                    if (*(&((x87_r7_38 < temp15_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_38, temp15_1) ? 1 : 0) << 0xa
                        | (x87_r7_38 == temp15_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_39 = 1f;
                        long double temp16_1 = a1;
                        x87_r7_39 - temp16_1;

                        if (*(&((x87_r7_39 < temp16_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_39, temp16_1) ? 1 : 0) << 0xa
                                | (x87_r7_39 == temp16_1 ? 1 : 0) << 0xe) + 1) & 1)
                            a1 = 0x3f800000;
                    }
                    else
                        a1 = 0;

                    float var_3c;
                    float var_34;
                    sub_497f20(&var_34, &var_3c, ecx_6);
                    float var_38;
                    float var_2c;
                    sub_497f20(&var_2c, &var_38, *esi_2 + 0x18);
                    long double x87_r7_40 = var_38;
                    long double temp17_1 = 0f;
                    x87_r7_40 - temp17_1;
                    int32_t ecx_7;

                    ecx_7 = !(*(&((x87_r7_40 < temp17_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_40, temp17_1) ? 1 : 0) << 0xa
                        | (x87_r7_40 == temp17_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double x87_r7_41 = var_3c;
                    long double temp18_1 = 0f;
                    x87_r7_41 - temp18_1;
                    int32_t eax_12;

                    eax_12 = !(*(&((x87_r7_41 < temp18_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_41, temp18_1) ? 1 : 0) << 0xa
                        | (x87_r7_41 == temp18_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    if (ecx_7 == eax_12)
                    {
                        long double x87_r7_43 = 0f;
                        long double temp19_1 = var_38;
                        x87_r7_43 - temp19_1;

                        if (*(&((x87_r7_43 < temp19_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_43, temp19_1) ? 1 : 0) << 0xa
                            | (x87_r7_43 == temp19_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            long double x87_r7_44 = 2048000f;
                            long double temp20_1 = var_38;
                            x87_r7_44 - temp20_1;

                            if (*(&((x87_r7_44 < temp20_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_44, temp20_1) ? 1 : 0) << 0xa
                                    | (x87_r7_44 == temp20_1 ? 1 : 0) << 0xe) + 1) & 1)
                                var_38 = 2048000f;
                        }
                        else
                            var_38 = 0f;

                        long double x87_r7_45 = 0f;
                        long double temp22_1 = var_3c;
                        x87_r7_45 - temp22_1;

                        if (*(&((x87_r7_45 < temp22_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_45, temp22_1) ? 1 : 0) << 0xa
                            | (x87_r7_45 == temp22_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            long double x87_r7_46 = 2048000f;
                            long double temp23_1 = var_3c;
                            x87_r7_46 - temp23_1;

                            if (*(&((x87_r7_46 < temp23_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_46, temp23_1) ? 1 : 0) << 0xa
                                    | (x87_r7_46 == temp23_1 ? 1 : 0) << 0xe) + 1) & 1)
                                var_3c = 2048000f;
                        }
                        else
                            var_3c = 0f;

                        long double x87_r7_51 =
                            (1f - var_3c * 4.88281273e-07f * 0.100000001f) * var_40_1;
                        float var_40_2 = x87_r7_51;
                        a1 = (1f - var_38 * 4.88281273e-07f * 0.100000001f) * a1;
                        long double temp24_1 = 0.200000003f;
                        x87_r7_51 - temp24_1;

                        if (*(&((x87_r7_51 < temp24_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_51, temp24_1) ? 1 : 0) << 0xa
                                | (x87_r7_51 == temp24_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            var_40_2 = 0.200000003f;

                        long double x87_r7_52 = a1;
                        long double temp25_1 = 0.200000003f;
                        x87_r7_52 - temp25_1;

                        if (*(&((x87_r7_52 < temp25_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_52, temp25_1) ? 1 : 0) << 0xa
                                | (x87_r7_52 == temp25_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            a1 = 0x3e4ccccd;

                        int32_t eax_19 = *esi_2;
                        sub_4e0e20(eax_19, eax_19 + 0x18, &var_18, var_40_2, &var_24, a1);
                    }
                    else if (!*(*esi_2 + 0xc0))
                    {
                        long double x87_r7_42 = var_3c;
                        long double temp21_1 = 0f;
                        x87_r7_42 - temp21_1;
                        int32_t* eax_15;

                        eax_15 = *(&((x87_r7_42 < temp21_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_42, temp21_1) ? 1 : 0) << 0xa
                            | (x87_r7_42 == temp21_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? nullptr : 1;

                        int32_t var_70_1 = a1;
                        float var_74_1 = var_40_1;
                        sub_47c610(edi, i, var_18, var_14_1, var_10_1, var_24, var_20_1, var_1c_1,
                            eax_15);
                    }

                    void* edx_11 = *esi_2;
                    i += 1;
                    esi_2 = &esi_2[1];
                    *(edx_11 + 0x34) = 0;
                } while (i < edi[0x27]);
            }
        }
    }

    void* result = edi[0x245];

    if (*(result + 0x9c) <= 0)
        return result;

    sub_49a430(result, &edi[0x146]);
    void* eax_21 = edi[0x245];
    int32_t edx_12 = 0;
    edx_12 = *(eax_21 + 0x1c);
    return (*((edx_12 << 2) + &g_a982e0))(eax_21, 0);
}
