// IGI native provenance: WeaponGun_InvokeFindType - 0x0047D380 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047D380-WeaponGun_InvokeFindType.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_InvokeFindType.h"

int32_t WeaponGun_InvokeFindType(void* arg1, int32_t* arg2)

{
    int32_t context_val = 0;
    int32_t 5c1118_1 = g_5c1118;
    void* dest_ptr = *arg2;
    int32_t 5c1110_1 = g_5c1110;
    int32_t eax_15;
    int32_t* 5c110c_1;

    if (5c1110_1 > 0)
    {
        5c110c_1 = g_5c110c;

        do
        {
            void* ebx_2 = *(*5c110c_1 * 5c1118_1 + g_5c1108);

            if (*(ebx_2 + 0xe130) == arg1)
            {
                int32_t i = *(ebx_2 + 0x44e0);

                if (i >= 0)
                {
                    eax_15 = i * 0xb;
                    float* ecx_5 = ebx_2 + (eax_15 << 3) + 0x28;

                    do
                    {
                        if (ecx_5[0x10] != 0xffffffff)
                        {
                            long double x87_r7_2 = ecx_5[3] - *(dest_ptr + 0x28);
                            long double x87_r6_2 = ecx_5[2] - *(dest_ptr + 0x24);
                            long double x87_r5_2 = ecx_5[1] - *(dest_ptr + 0x20);
                            float var_c_1 = ecx_5[0x12] * 1.5f;
                            long double x87_r4_6 =
                                x87_r5_2 * x87_r5_2 + x87_r6_2 * x87_r6_2 + x87_r7_2 * x87_r7_2;
                            long double x87_r6_5 = var_c_1 * var_c_1;
                            x87_r6_5 - x87_r4_6;
                            eax_15 = (x87_r6_5 < x87_r4_6 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_5, x87_r4_6) ? 1 : 0) << 0xa
                                | (x87_r6_5 == x87_r4_6 ? 1 : 0) << 0xe;

                            if (!(*(&eax_15 + 1) & 0x41))
                            {
                                long double x87_r7_4 = *(dest_ptr + 0x2c);
                                long double temp1_1 = 0f;
                                x87_r7_4 - temp1_1;
                                eax_15 = (x87_r7_4 < temp1_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_4, temp1_1) ? 1 : 0) << 0xa
                                    | (x87_r7_4 == temp1_1 ? 1 : 0) << 0xe;

                                if (!(*(&eax_15 + 1) & 0x40))
                                {
                                label_47d593:
                                    long double x87_r7_7 = *(dest_ptr + 0x34);
                                    long double x87_r6_6 = *(dest_ptr + 0x30);
                                    long double x87_r5_4 = *(dest_ptr + 0x2c);
                                    long double x87_r7_9 = 1.0f / sqrtl(x87_r6_6 * x87_r6_6
                                        + x87_r7_7 * x87_r7_7 + x87_r5_4 * x87_r5_4);
                                    *(dest_ptr + 0x2c) = *(dest_ptr + 0x2c) * x87_r7_9;
                                    *(dest_ptr + 0x30) = *(dest_ptr + 0x30) * x87_r7_9;
                                    *(dest_ptr + 0x34) = *(dest_ptr + 0x34) * x87_r7_9;
                                }
                                else
                                {
                                    long double x87_r7_5 = *(dest_ptr + 0x30);
                                    long double temp3_1 = 0f;
                                    x87_r7_5 - temp3_1;
                                    eax_15 = (x87_r7_5 < temp3_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_5, temp3_1) ? 1 : 0) << 0xa
                                        | (x87_r7_5 == temp3_1 ? 1 : 0) << 0xe;

                                    if (!(*(&eax_15 + 1) & 0x40))
                                        goto label_47d593;

                                    long double x87_r7_6 = *(dest_ptr + 0x34);
                                    long double temp6_1 = 0f;
                                    x87_r7_6 - temp6_1;
                                    eax_15 = (x87_r7_6 < temp6_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_6, temp6_1) ? 1 : 0) << 0xa
                                        | (x87_r7_6 == temp6_1 ? 1 : 0) << 0xe;

                                    if (!(*(&eax_15 + 1) & 0x40))
                                        goto label_47d593;
                                }

                                long double x87_r7_11 = ecx_5[-2];
                                long double temp5_1 = 0f;
                                x87_r7_11 - temp5_1;
                                eax_15 = (x87_r7_11 < temp5_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_11, temp5_1) ? 1 : 0) << 0xa
                                    | (x87_r7_11 == temp5_1 ? 1 : 0) << 0xe;

                                if (!(*(&eax_15 + 1) & 0x40))
                                {
                                label_47d603:
                                    long double x87_r7_14 = *ecx_5;
                                    long double x87_r6_14 = ecx_5[-1];
                                    long double x87_r5_6 = ecx_5[-2];
                                    long double x87_r7_16 = 1.0f / sqrtl(x87_r5_6 * x87_r5_6
                                        + x87_r6_14 * x87_r6_14 + x87_r7_14 * x87_r7_14);
                                    ecx_5[-2] = ecx_5[-2] * x87_r7_16;
                                    ecx_5[-1] = ecx_5[-1] * x87_r7_16;
                                    *ecx_5 = *ecx_5 * x87_r7_16;
                                }
                                else
                                {
                                    long double x87_r7_12 = ecx_5[-1];
                                    long double temp9_1 = 0f;
                                    x87_r7_12 - temp9_1;
                                    eax_15 = (x87_r7_12 < temp9_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_12, temp9_1) ? 1 : 0) << 0xa
                                        | (x87_r7_12 == temp9_1 ? 1 : 0) << 0xe;

                                    if (!(*(&eax_15 + 1) & 0x40))
                                        goto label_47d603;

                                    long double x87_r7_13 = *ecx_5;
                                    long double temp12_1 = 0f;
                                    x87_r7_13 - temp12_1;
                                    eax_15 = (x87_r7_13 < temp12_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_13, temp12_1) ? 1 : 0) << 0xa
                                        | (x87_r7_13 == temp12_1 ? 1 : 0) << 0xe;

                                    if (!(*(&eax_15 + 1) & 0x40))
                                        goto label_47d603;
                                }

                                long double x87_r7_21 = *(dest_ptr + 0x34) * *ecx_5
                                    + *(dest_ptr + 0x30) * ecx_5[-1] + *(dest_ptr + 0x2c) * ecx_5[-2];
                                long double temp11_1 = 0.899999976f;
                                x87_r7_21 - temp11_1;
                                eax_15 = (x87_r7_21 < temp11_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_21, temp11_1) ? 1 : 0) << 0xa
                                    | (x87_r7_21 == temp11_1 ? 1 : 0) << 0xe;

                                if (!(*(&eax_15 + 1) & 0x41))
                                    return eax_15;
                            }
                        }

                        i -= 1;
                        ecx_5 -= 0x58;
                    } while (i >= 0);
                }

                int32_t edx_7 = *(ebx_2 + 0x44e8) - 1;

                if (edx_7 > *(ebx_2 + 0x44e0))
                {
                    eax_15 = edx_7 * 0xb;
                    float* ecx_7 = ebx_2 + (eax_15 << 3) + 0x28;

                    do
                    {
                        if (ecx_7[0x10] != 0xffffffff)
                        {
                            long double x87_r7_23 = ecx_7[3] - *(dest_ptr + 0x28);
                            long double x87_r6_27 = ecx_7[2] - *(dest_ptr + 0x24);
                            long double x87_r5_9 = ecx_7[1] - *(dest_ptr + 0x20);
                            float var_c_2 = ecx_7[0x12] * 1.5f;
                            long double x87_r4_22 =
                                x87_r5_9 * x87_r5_9 + x87_r6_27 * x87_r6_27 + x87_r7_23 * x87_r7_23;
                            long double x87_r6_30 = var_c_2 * var_c_2;
                            x87_r6_30 - x87_r4_22;
                            eax_15 = (x87_r6_30 < x87_r4_22 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_30, x87_r4_22) ? 1 : 0) << 0xa
                                | (x87_r6_30 == x87_r4_22 ? 1 : 0) << 0xe;

                            if (!(*(&eax_15 + 1) & 0x41))
                            {
                                long double x87_r7_25 = *(dest_ptr + 0x2c);
                                long double temp2_1 = 0f;
                                x87_r7_25 - temp2_1;
                                eax_15 = (x87_r7_25 < temp2_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_25, temp2_1) ? 1 : 0) << 0xa
                                    | (x87_r7_25 == temp2_1 ? 1 : 0) << 0xe;

                                if (!(*(&eax_15 + 1) & 0x40))
                                {
                                label_47d715:
                                    long double x87_r7_28 = *(dest_ptr + 0x34);
                                    long double x87_r6_31 = *(dest_ptr + 0x30);
                                    long double x87_r5_11 = *(dest_ptr + 0x2c);
                                    long double x87_r7_30 = 1.0f / sqrtl(x87_r6_31 * x87_r6_31
                                        + x87_r7_28 * x87_r7_28 + x87_r5_11 * x87_r5_11);
                                    *(dest_ptr + 0x2c) = *(dest_ptr + 0x2c) * x87_r7_30;
                                    *(dest_ptr + 0x30) = *(dest_ptr + 0x30) * x87_r7_30;
                                    *(dest_ptr + 0x34) = *(dest_ptr + 0x34) * x87_r7_30;
                                }
                                else
                                {
                                    long double x87_r7_26 = *(dest_ptr + 0x30);
                                    long double temp4_1 = 0f;
                                    x87_r7_26 - temp4_1;
                                    eax_15 = (x87_r7_26 < temp4_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_26, temp4_1) ? 1 : 0) << 0xa
                                        | (x87_r7_26 == temp4_1 ? 1 : 0) << 0xe;

                                    if (!(*(&eax_15 + 1) & 0x40))
                                        goto label_47d715;

                                    long double x87_r7_27 = *(dest_ptr + 0x34);
                                    long double temp8_1 = 0f;
                                    x87_r7_27 - temp8_1;
                                    eax_15 = (x87_r7_27 < temp8_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_27, temp8_1) ? 1 : 0) << 0xa
                                        | (x87_r7_27 == temp8_1 ? 1 : 0) << 0xe;

                                    if (!(*(&eax_15 + 1) & 0x40))
                                        goto label_47d715;
                                }

                                long double x87_r7_32 = ecx_7[-2];
                                long double temp7_1 = 0f;
                                x87_r7_32 - temp7_1;
                                eax_15 = (x87_r7_32 < temp7_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_32, temp7_1) ? 1 : 0) << 0xa
                                    | (x87_r7_32 == temp7_1 ? 1 : 0) << 0xe;

                                if (!(*(&eax_15 + 1) & 0x40))
                                {
                                label_47d785:
                                    long double x87_r7_35 = *ecx_7;
                                    long double x87_r6_39 = ecx_7[-1];
                                    long double x87_r5_13 = ecx_7[-2];
                                    long double x87_r7_37 = 1.0f / sqrtl(x87_r5_13 * x87_r5_13
                                        + x87_r6_39 * x87_r6_39 + x87_r7_35 * x87_r7_35);
                                    ecx_7[-2] = ecx_7[-2] * x87_r7_37;
                                    ecx_7[-1] = ecx_7[-1] * x87_r7_37;
                                    *ecx_7 = *ecx_7 * x87_r7_37;
                                }
                                else
                                {
                                    long double x87_r7_33 = ecx_7[-1];
                                    long double temp10_1 = 0f;
                                    x87_r7_33 - temp10_1;
                                    eax_15 = (x87_r7_33 < temp10_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_33, temp10_1) ? 1 : 0) << 0xa
                                        | (x87_r7_33 == temp10_1 ? 1 : 0) << 0xe;

                                    if (!(*(&eax_15 + 1) & 0x40))
                                        goto label_47d785;

                                    long double x87_r7_34 = *ecx_7;
                                    long double temp14_1 = 0f;
                                    x87_r7_34 - temp14_1;
                                    eax_15 = (x87_r7_34 < temp14_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_34, temp14_1) ? 1 : 0) << 0xa
                                        | (x87_r7_34 == temp14_1 ? 1 : 0) << 0xe;

                                    if (!(*(&eax_15 + 1) & 0x40))
                                        goto label_47d785;
                                }

                                long double x87_r7_42 = *(dest_ptr + 0x2c) * ecx_7[-2]
                                    + *(dest_ptr + 0x34) * *ecx_7 + ecx_7[-1] * *(dest_ptr + 0x30);
                                long double temp13_1 = 0.899999976f;
                                x87_r7_42 - temp13_1;
                                eax_15 = (x87_r7_42 < temp13_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_42, temp13_1) ? 1 : 0) << 0xa
                                    | (x87_r7_42 == temp13_1 ? 1 : 0) << 0xe;

                                if (!(*(&eax_15 + 1) & 0x41))
                                    return eax_15;
                            }
                        }

                        eax_15 = *(ebx_2 + 0x44e0);
                        edx_7 -= 1;
                        ecx_7 -= 0x58;
                    } while (edx_7 > eax_15);
                }

                int32_t eax_17 = *(ebx_2 + 0x44e8);
                int32_t* var_c_3;

                if (eax_17 != 0xc8)
                {
                    *(ebx_2 + 0x44e0) = eax_17;
                    *(ebx_2 + 0x44e8) = eax_17 + 1;
                    var_c_3 = ebx_2 + eax_17 * 0x58 + 0x20;
                }
                else
                {
                    int32_t eax_18 = *(ebx_2 + 0x44e4);
                    *(ebx_2 + 0x44e0) = eax_18;
                    int32_t eax_19 = eax_18 + 1;
                    *(ebx_2 + 0x44e4) = eax_19;
                    var_c_3 = ebx_2 + eax_18 * 0x58 + 0x20;

                    if (eax_19 >= 0xc8)
                        eax_19 -= 0xc8;

                    *(ebx_2 + 0x44e4) = eax_19;
                    int32_t* i_2 = *(ebx_2 + eax_18 * 0x58 + 0x74);

                    if (i_2)
                    {
                        int32_t 5c1128_1 = g_5c1128;
                        int32_t 5c1134_1 = g_5c1134;
                        int32_t* i_1;

                        do
                        {
                            int32_t ecx_10 = *(i_2 + 5c1134_1);
                            i_1 = i_2[0xf];
                            5c1128_1 -= 1;
                            g_5c1128 = 5c1128_1;

                            if (ecx_10 != 5c1128_1)
                            {
                                int32_t 5c1124_1 = g_5c1124;
                                int32_t* eax_22 =
                                    *(5c1124_1 + (5c1128_1 << 2)) * g_5c1130 + g_5c1120;
                                int32_t esi_6 = *(eax_22 + 5c1134_1);
                                int32_t ebp_2 = *(5c1124_1 + (ecx_10 << 2));
                                *(5c1124_1 + (ecx_10 << 2)) = *(5c1124_1 + (esi_6 << 2));
                                *(g_5c1124 + (esi_6 << 2)) = ebp_2;
                                *(g_5c1134 + eax_22) = ecx_10;
                                5c1128_1 = g_5c1128;
                                5c1134_1 = g_5c1134;
                            }

                            i_2 = i_1;
                        } while (i_1);
                    }
                }

                Weapon_UpdateZoom_8(arg1 + 0x20, arg1 + 0x70, ebx_2, var_c_3, dest_ptr, 0, arg2[2],
                    arg2[3]);
                int32_t eax_28 = Timer_Now();
                *(ebx_2 + 0xe144) = eax_28;
                return eax_28;
            }

            context_val += 1;
            5c110c_1 = &5c110c_1[1];
        } while (context_val < 5c1110_1);
    }

    if (5c1110_1 == g_5c1114)
    {
        int32_t* ebx_3 = nullptr;
        int32_t data_val = 0xffffffff;

        if (5c1110_1 > 0)
        {
            int32_t* 5c110c_2 = g_5c110c;
            int32_t 5c1110_3 = 5c1110_1;
            bool cond:0_1;

            do
            {
                int32_t* eax_2 = *(*5c110c_2 * 5c1118_1 + g_5c1108);
                int32_t ecx_2 = eax_2[0x3851];

                if (ecx_2 <= data_val)
                {
                    ebx_3 = eax_2;
                    data_val = ecx_2;
                }

                5c110c_2 = &5c110c_2[1];
                cond:0_1 = 5c1110_3 != 1;
                5c1110_3 -= 1;
            } while (cond:0_1);
        }

        5c110c_1 = QTask_FindType(ebx_3);
    }

    5c110c_1 = g_5c1138;
    struct status_msg* eax_6 = Object_Create(arg1, 5c110c_1, 0);
    int32_t 5c1110_2 = g_5c1110;
    struct status_msg** eax_9 = *(g_5c110c + (5c1110_2 << 2)) * g_5c1118 + g_5c1108;
    *(g_5c111c + eax_9) = 5c1110_2;
    g_5c1110 += 1;
    *(eax_6 + 0xe134) = eax_9;
    *eax_9 = eax_6;
    *(eax_6 + 0xe130) = arg1;
    struct status_msg* eax_12 = Display_RestoreDevice_18(Level_StartMission_4(), eax_6,
        arg1 + 0x20, arg1 + 0x70, &eax_6->head[0x113b], 0, 0, 0, 1, nullptr, 0);
    *(eax_6 + 0xe12c) = eax_12;
    Display_CheckCapabilities_18(eax_12, 2);
    *(eax_6 + 0x44e8) = 1;
    *(eax_6 + 0x44e0) = 0;
    *(eax_6 + 0x44e4) = 0;
    Weapon_UpdateZoom_8(arg1 + 0x20, arg1 + 0x70, eax_6, &eax_6->head[8], dest_ptr, 0, arg2[2], arg2[3]);
    eax_15 = Timer_Now();
    *(eax_6 + 0xe144) = eax_15;
    return eax_15;
}
