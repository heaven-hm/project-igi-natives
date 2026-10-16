#include "004DA300-Hazinglayers_Process.h"
/* 0x004da300 Hazinglayers_Process full linked: callers=1 callees=2 */
void** sub_4da300(int32_t* a1, int32_t* a2, double* a3, double* a4, void** a5, int32_t a6)

{
    double* ecx = a3;
    float var_14 = *a4 - *ecx;
    float var_10 = a4[1] - ecx[1];
    void** result = nullptr;
    float var_c = a4[2] - ecx[2];
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    *a2 = 0;
    void** result_1 = nullptr;

    if (a6 > 0)
    {
        void** var_28_1 = a5;

        while (true)
        {
            float var_30_1 = 1f;
            void* esi_1 = *var_28_1;
            float var_2c_1 = 1f / ((*(esi_1 + 0x78) - *(esi_1 + 0x70)) * 0.300000012f);
            long double x87_r7_10 = var_c;
            long double temp1_1 = 0f;
            x87_r7_10 - temp1_1;

            if (!(*(&((x87_r7_10 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_10, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_10 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_11 = a4[2];
                long double temp3_1 = *(esi_1 + 0x78);
                x87_r7_11 - temp3_1;

                if (!(*(&((x87_r7_11 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_11, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_11 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    var_30_1 = (*(esi_1 + 0x78) - ecx[2]) * var_2c_1;
                    long double x87_r7_15 = 0f;
                    long double temp6_1 = var_30_1;
                    x87_r7_15 - temp6_1;

                    if (*(&((x87_r7_15 < temp6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_15, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r7_15 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_16 = 1f;
                        long double temp9_1 = var_30_1;
                        x87_r7_16 - temp9_1;

                        if (*(&((x87_r7_16 < temp9_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_16, temp9_1) ? 1 : 0) << 0xa
                                | (x87_r7_16 == temp9_1 ? 1 : 0) << 0xe) + 1) & 1)
                            var_30_1 = 1f;
                    }
                    else
                        var_30_1 = 0f;
                }
            }

            long double x87_r7_17 = var_c;
            long double temp2_1 = 0f;
            x87_r7_17 - temp2_1;

            if (*(&((x87_r7_17 < temp2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_17, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_17 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                long double x87_r7_18 = a4[2];
                long double temp5_1 = *(esi_1 + 0x70);
                x87_r7_18 - temp5_1;

                if (*(&((x87_r7_18 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_18, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_18 == temp5_1 ? 1 : 0) << 0xe) + 1) & 1)
                {
                    var_30_1 = (ecx[2] - *(esi_1 + 0x70)) * var_2c_1;
                    long double x87_r7_22 = 0f;
                    long double temp8_1 = var_30_1;
                    x87_r7_22 - temp8_1;

                    if (*(&((x87_r7_22 < temp8_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_22, temp8_1) ? 1 : 0) << 0xa
                        | (x87_r7_22 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_23 = 1f;
                        long double temp12_1 = var_30_1;
                        x87_r7_23 - temp12_1;

                        if (*(&((x87_r7_23 < temp12_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_23, temp12_1) ? 1 : 0) << 0xa
                                | (x87_r7_23 == temp12_1 ? 1 : 0) << 0xe) + 1) & 1)
                            var_30_1 = 1f;
                    }
                    else
                        var_30_1 = 0f;
                }
            }

            long double st0_1 = sub_4b2a10(&var_14);
            float var_2c_2 = st0_1;
            long double temp4_1 = 0f;
            st0_1 - temp4_1;

            if (!(*(&((st0_1 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(st0_1, temp4_1) ? 1 : 0) << 0xa
                | (st0_1 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_25 = a3[2];
                long double temp7_1 = *(esi_1 + 0x70);
                x87_r7_25 - temp7_1;
                long double x87_r7_26;
                long double temp11_1;

                if (*(&((x87_r7_25 < temp7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_25, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r7_25 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                {
                    x87_r7_26 = a4[2];
                    temp11_1 = *(esi_1 + 0x70);
                    x87_r7_26 - temp11_1;
                }

                if (!(*(&((x87_r7_25 < temp7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_25, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r7_25 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x41) || !(*(&(
                    (x87_r7_26 < temp11_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_26, temp11_1) ? 1 : 0) << 0xa
                    | (x87_r7_26 == temp11_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    long double x87_r7_27 = a3[2];
                    long double temp10_1 = *(esi_1 + 0x78);
                    x87_r7_27 - temp10_1;
                    long double x87_r7_28;
                    long double temp14_1;

                    if (!(*(&((x87_r7_27 < temp10_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_27, temp10_1) ? 1 : 0) << 0xa
                        | (x87_r7_27 == temp10_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        x87_r7_28 = a4[2];
                        temp14_1 = *(esi_1 + 0x78);
                        x87_r7_28 - temp14_1;
                    }

                    if (*(&((x87_r7_27 < temp10_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_27, temp10_1) ? 1 : 0) << 0xa
                        | (x87_r7_27 == temp10_1 ? 1 : 0) << 0xe) + 1) & 1 || *(&(
                        (x87_r7_28 < temp14_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_28, temp14_1) ? 1 : 0) << 0xa
                        | (x87_r7_28 == temp14_1 ? 1 : 0) << 0xe) + 1) & 1)
                    {
                        long double x87_r7_29 = a3[2];
                        long double temp13_1 = *(esi_1 + 0x70);
                        x87_r7_29 - temp13_1;
                        long double x87_r7_30;
                        long double temp16_1;

                        if (*(&((x87_r7_29 < temp13_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_29, temp13_1) ? 1 : 0) << 0xa
                            | (x87_r7_29 == temp13_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            x87_r7_30 = a4[2];
                            temp16_1 = *(esi_1 + 0x78);
                            x87_r7_30 - temp16_1;
                        }

                        long double x87_r7_31;
                        long double x87_r7_32;
                        long double temp15_1;
                        long double temp18_1;

                        if (!(*(&((x87_r7_29 < temp13_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_29, temp13_1) ? 1 : 0) << 0xa
                            | (x87_r7_29 == temp13_1 ? 1 : 0) << 0xe) + 1) & 0x41) || *(&(
                            (x87_r7_30 < temp16_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_30, temp16_1) ? 1 : 0) << 0xa
                            | (x87_r7_30 == temp16_1 ? 1 : 0) << 0xe) + 1) & 1)
                        {
                            x87_r7_31 = a3[2];
                            temp15_1 = *(esi_1 + 0x78);
                            x87_r7_31 - temp15_1;

                            if (!(*(&((x87_r7_31 < temp15_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_31, temp15_1) ? 1 : 0) << 0xa
                                | (x87_r7_31 == temp15_1 ? 1 : 0) << 0xe) + 1) & 1))
                            {
                                x87_r7_32 = a4[2];
                                temp18_1 = *(esi_1 + 0x70);
                                x87_r7_32 - temp18_1;
                            }
                        }

                        float var_34;
                        long double x87_r6_8;
                        long double x87_r7_37;

                        if ((!(*(&((x87_r7_29 < temp13_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_29, temp13_1) ? 1 : 0) << 0xa
                            | (x87_r7_29 == temp13_1 ? 1 : 0) << 0xe) + 1) & 0x41) || *(&(
                            (x87_r7_30 < temp16_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_30, temp16_1) ? 1 : 0) << 0xa
                            | (x87_r7_30 == temp16_1 ? 1 : 0) << 0xe) + 1) & 1) && (*(&(
                            (x87_r7_31 < temp15_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_31, temp15_1) ? 1 : 0) << 0xa
                            | (x87_r7_31 == temp15_1 ? 1 : 0) << 0xe) + 1) & 1 || !(*(&(
                            (x87_r7_32 < temp18_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_32, temp18_1) ? 1 : 0) << 0xa
                            | (x87_r7_32 == temp18_1 ? 1 : 0) << 0xe) + 1) & 0x41)))
                        {
                            long double x87_r7_38 = a3[2];
                            long double temp17_1 = *(esi_1 + 0x70);
                            x87_r7_38 - temp17_1;
                            long double x87_r7_42;

                            if (*(&((x87_r7_38 < temp17_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_38, temp17_1) ? 1 : 0) << 0xa
                                | (x87_r7_38 == temp17_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            {
                            label_4da575:
                                long double x87_r7_43 = a3[2];
                                long double temp20_1 = *(esi_1 + 0x70);
                                x87_r7_43 - temp20_1;
                                long double x87_r6_10;
                                int16_t eax_2;

                                if (*(&((x87_r7_43 < temp20_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_43, temp20_1) ? 1 : 0) << 0xa
                                    | (x87_r7_43 == temp20_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                {
                                label_4da62f:
                                    long double x87_r7_60 = a4[2];
                                    long double temp23_1 = *(esi_1 + 0x70);
                                    x87_r7_60 - temp23_1;

                                    if (*(&((x87_r7_60 < temp23_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_60, temp23_1) ? 1 : 0) << 0xa
                                        | (x87_r7_60 == temp23_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    {
                                    label_4da780:
                                        Error_Show("Fog layer logic error");

                                        while (true)
                                            /* nop */
                                    }
                                    else
                                    {
                                        long double x87_r7_61 = a4[2];
                                        long double temp27_1 = *(esi_1 + 0x78);
                                        x87_r7_61 - temp27_1;

                                        if (!(*(&((x87_r7_61 < temp27_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_61, temp27_1) ? 1 : 0) << 0xa
                                                | (x87_r7_61 == temp27_1 ? 1 : 0) << 0xe) + 1) & 1))
                                            goto label_4da780;

                                        long double x87_r7_62 = a3[2];
                                        long double temp30_1 = *(esi_1 + 0x70);
                                        x87_r7_62 - temp30_1;
                                        long double x87_r7_63;
                                        long double temp34_1;

                                        if (!(*(&((x87_r7_62 < temp30_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_62, temp30_1) ? 1 : 0) << 0xa
                                            | (x87_r7_62 == temp30_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                        {
                                            x87_r7_63 = a3[2];
                                            temp34_1 = *(esi_1 + 0x78);
                                            x87_r7_63 - temp34_1;
                                        }

                                        if (!(*(&((x87_r7_62 < temp30_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_62, temp30_1) ? 1 : 0) << 0xa
                                                | (x87_r7_62 == temp30_1 ? 1 : 0) << 0xe) + 1) & 0x41) &&
                                                *(&((x87_r7_63 < temp34_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_63, temp34_1) ? 1 : 0) << 0xa
                                                | (x87_r7_63 == temp34_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            goto label_4da780;

                                        long double x87_r7_64 = a3[2];
                                        long double temp33_1 = *(esi_1 + 0x70);
                                        x87_r7_64 - temp33_1;
                                        long double x87_r7_65;

                                        if (!(*(&((x87_r7_64 < temp33_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_64, temp33_1) ? 1 : 0) << 0xa
                                                | (x87_r7_64 == temp33_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                            x87_r7_65 = *(esi_1 + 0x78);
                                        else
                                            x87_r7_65 = *(esi_1 + 0x70);

                                        long double x87_r7_66 = x87_r7_65 - a4[2];
                                        long double temp38_1 = 0.0;
                                        x87_r7_66 - temp38_1;
                                        long double x87_r7_67 = a3[2];
                                        long double temp39_1 = *(esi_1 + 0x70);
                                        x87_r7_67 - temp39_1;
                                        eax_2 = (x87_r7_67 < temp39_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_67, temp39_1) ? 1 : 0) << 0xa
                                            | (x87_r7_67 == temp39_1 ? 1 : 0) << 0xe;
                                        long double x87_r7_70;

                                        if (!(*(&((x87_r7_66 < temp38_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_66, temp38_1) ? 1 : 0) << 0xa
                                            | (x87_r7_66 == temp38_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 1))
                                        {
                                            long double x87_r7_73;

                                            if (!(*(&eax_2 + 1) & 0x41))
                                                x87_r7_73 = *(esi_1 + 0x78);
                                            else
                                                x87_r7_73 = *(esi_1 + 0x70);

                                            x87_r7_70 = x87_r7_73 - a4[2];
                                        }
                                        else if (!(*(&eax_2 + 1) & 0x41))
                                            x87_r7_70 = -((*(esi_1 + 0x78) - a4[2]));
                                        else
                                            x87_r7_70 = -((*(esi_1 + 0x70) - a4[2]));

                                        var_c - 0f;
                                        x87_r6_10 = var_2c_2 * x87_r7_70;
                                    }
                                }
                                else
                                {
                                    long double x87_r7_44 = a3[2];
                                    long double temp24_1 = *(esi_1 + 0x78);
                                    x87_r7_44 - temp24_1;

                                    if (!(*(&((x87_r7_44 < temp24_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_44, temp24_1) ? 1 : 0) << 0xa
                                            | (x87_r7_44 == temp24_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        goto label_4da62f;

                                    long double x87_r7_45 = a4[2];
                                    long double temp28_1 = *(esi_1 + 0x70);
                                    x87_r7_45 - temp28_1;
                                    long double x87_r7_46;
                                    long double temp32_1;

                                    if (!(*(&((x87_r7_45 < temp28_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_45, temp28_1) ? 1 : 0) << 0xa
                                        | (x87_r7_45 == temp28_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                    {
                                        x87_r7_46 = a4[2];
                                        temp32_1 = *(esi_1 + 0x78);
                                        x87_r7_46 - temp32_1;
                                    }

                                    if (!(*(&((x87_r7_45 < temp28_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_45, temp28_1) ? 1 : 0) << 0xa
                                            | (x87_r7_45 == temp28_1 ? 1 : 0) << 0xe) + 1) & 0x41) && *(&(
                                            (x87_r7_46 < temp32_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_46, temp32_1) ? 1 : 0) << 0xa
                                            | (x87_r7_46 == temp32_1 ? 1 : 0) << 0xe) + 1) & 1)
                                        goto label_4da62f;

                                    long double x87_r7_47 = a4[2];
                                    long double temp31_1 = *(esi_1 + 0x70);
                                    x87_r7_47 - temp31_1;
                                    long double x87_r7_48;

                                    if (!(*(&((x87_r7_47 < temp31_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_47, temp31_1) ? 1 : 0) << 0xa
                                            | (x87_r7_47 == temp31_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                        x87_r7_48 = *(esi_1 + 0x78);
                                    else
                                        x87_r7_48 = *(esi_1 + 0x70);

                                    long double x87_r7_49 = x87_r7_48 - a3[2];
                                    long double temp36_1 = 0.0;
                                    x87_r7_49 - temp36_1;
                                    long double x87_r7_50 = a4[2];
                                    long double temp37_1 = *(esi_1 + 0x70);
                                    x87_r7_50 - temp37_1;
                                    eax_2 = (x87_r7_50 < temp37_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_50, temp37_1) ? 1 : 0) << 0xa
                                        | (x87_r7_50 == temp37_1 ? 1 : 0) << 0xe;
                                    long double x87_r7_53;

                                    if (!(*(&((x87_r7_49 < temp36_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_49, temp36_1) ? 1 : 0) << 0xa
                                        | (x87_r7_49 == temp36_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                    {
                                        long double x87_r7_56;

                                        if (!(*(&eax_2 + 1) & 0x41))
                                            x87_r7_56 = *(esi_1 + 0x78);
                                        else
                                            x87_r7_56 = *(esi_1 + 0x70);

                                        x87_r7_53 = x87_r7_56 - a3[2];
                                    }
                                    else if (!(*(&eax_2 + 1) & 0x41))
                                        x87_r7_53 = -((*(esi_1 + 0x78) - a3[2]));
                                    else
                                        x87_r7_53 = -((*(esi_1 + 0x70) - a3[2]));

                                    var_c - 0f;
                                    x87_r6_10 = var_2c_2 * x87_r7_53;
                                }
                                x87_r7_42 = x87_r6_10 / x87_r6_10;
                            }
                            else
                            {
                                long double x87_r7_39 = a4[2];
                                long double temp21_1 = *(esi_1 + 0x78);
                                x87_r7_39 - temp21_1;

                                if (!(*(&((x87_r7_39 < temp21_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_39, temp21_1) ? 1 : 0) << 0xa
                                        | (x87_r7_39 == temp21_1 ? 1 : 0) << 0xe) + 1) & 1))
                                    goto label_4da575;

                                long double x87_r7_40 = a3[2];
                                long double temp25_1 = *(esi_1 + 0x78);
                                x87_r7_40 - temp25_1;

                                if (!(*(&((x87_r7_40 < temp25_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_40, temp25_1) ? 1 : 0) << 0xa
                                        | (x87_r7_40 == temp25_1 ? 1 : 0) << 0xe) + 1) & 1))
                                    goto label_4da575;

                                long double x87_r7_41 = a4[2];
                                long double temp29_1 = *(esi_1 + 0x70);
                                x87_r7_41 - temp29_1;

                                if (*(&((x87_r7_41 < temp29_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_41, temp29_1) ? 1 : 0) << 0xa
                                        | (x87_r7_41 == temp29_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    goto label_4da575;

                                x87_r7_42 = var_2c_2;
                            }

                            x87_r7_37 = x87_r7_42 * *(esi_1 + 0x6c);
                            *a2 = x87_r7_37 * var_30_1 + *a2;
                            long double temp35_1 = 0f;
                            x87_r7_37 - temp35_1;

                            if (!(*(&((x87_r7_37 < temp35_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_37, temp35_1) ? 1 : 0) << 0xa
                                | (x87_r7_37 == temp35_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                            {
                                x87_r6_8 = x87_r7_37 + var_34;
                                goto label_4da71f;
                            }
                        }
                        else
                        {
                            long double x87_r7_34 = *(esi_1 + 0x78) - *(esi_1 + 0x70);
                            long double temp19_1 = 0.0;
                            x87_r7_34 - temp19_1;

                            if (*(&((x87_r7_34 < temp19_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_34, temp19_1) ? 1 : 0) << 0xa
                                    | (x87_r7_34 == temp19_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                x87_r7_34 = -(x87_r7_34);

                            long double x87_r6_1 = var_c;
                            long double temp22_1 = 0f;
                            x87_r6_1 - temp22_1;
                            long double x87_r6_2 = var_c;

                            if (*(&((x87_r6_1 < temp22_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_1, temp22_1) ? 1 : 0) << 0xa
                                    | (x87_r6_1 == temp22_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                                x87_r6_2 = -(x87_r6_2);

                            x87_r7_37 = x87_r7_34 * var_2c_2 / x87_r6_2 * *(esi_1 + 0x6c);
                            *a2 = x87_r7_37 * var_30_1 + *a2;
                            long double temp26_1 = 0f;
                            x87_r7_37 - temp26_1;

                            if (!(*(&((x87_r7_37 < temp26_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_37, temp26_1) ? 1 : 0) << 0xa
                                | (x87_r7_37 == temp26_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                            {
                                x87_r6_8 = var_34 + x87_r7_37;
                            label_4da71f:
                                *a1 = (x87_r7_37 * *(esi_1 + 0x80) + var_34 * *a1) / x87_r6_8;
                                a1[1] =
                                    (x87_r7_37 * *(esi_1 + 0x84) + var_34 * a1[1]) / x87_r6_8;
                                a1[2] =
                                    (x87_r7_37 * *(esi_1 + 0x88) + var_34 * a1[2]) / x87_r6_8;
                                var_34 = x87_r6_8;
                            }
                        }
                    }
                }
            }

            result = result_1 + 1;
            result_1 = result;
            var_28_1 = &var_28_1[1];

            if (result >= a6)
                break;

            ecx = a3;
        }
    }

    return result;
}
