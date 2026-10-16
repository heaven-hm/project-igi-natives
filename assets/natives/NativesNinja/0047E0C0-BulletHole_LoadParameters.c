#include "0047E0C0-BulletHole_LoadParameters.h"
/* 0x0047e0c0 BulletHole_LoadParameters full linked: callers=0 callees=9 */
int32_t sub_47e0c0(void* a1, int32_t* a2)

{
    int32_t ebp = g_5c1118;
    void* edi = *a2;
    int32_t eax_1 = g_5c1110;
    int32_t kind = 0;
    float var_28 = 1f;
    int32_t var_24 = 0;
    int32_t var_20 = 0;
    int32_t var_1c = 0;
    int32_t var_18 = 0x3f800000;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    int32_t var_8 = 0x3f800000;
    int32_t var_4 = 0;
    int32_t eax_15;

    if (eax_1 > 0)
    {
        int32_t* edx_1 = g_5c110c;

        do
        {
            void* ebx_2 = *(*edx_1 * ebp + g_5c1108);

            if (*(ebx_2 + 0xe130) == a1)
            {
                int32_t i = *(ebx_2 + 0x44e0);

                if (i >= 0)
                {
                    eax_15 = i * 0xb;
                    float* ecx_7 = ebx_2 + (eax_15 << 3) + 0x28;

                    do
                    {
                        if (ecx_7[0x10] != 0xffffffff)
                        {
                            long double x87_r7_2 = ecx_7[3] - *(edi + 0x28);
                            long double x87_r6_2 = ecx_7[2] - *(edi + 0x24);
                            long double x87_r5_2 = ecx_7[1] - *(edi + 0x20);
                            float var_34_2 = ecx_7[0x12] * 1.5f;
                            long double x87_r4_6 =
                                x87_r5_2 * x87_r5_2 + x87_r6_2 * x87_r6_2 + x87_r7_2 * x87_r7_2;
                            long double x87_r6_5 = var_34_2 * var_34_2;
                            x87_r6_5 - x87_r4_6;
                            eax_15 = (x87_r6_5 < x87_r4_6 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_5, x87_r4_6) ? 1 : 0) << 0xa
                                | (x87_r6_5 == x87_r4_6 ? 1 : 0) << 0xe;

                            if (!(*(&eax_15 + 1) & 0x41))
                            {
                                long double x87_r7_4 = *(edi + 0x2c);
                                long double temp2_1 = 0f;
                                x87_r7_4 - temp2_1;
                                eax_15 = (x87_r7_4 < temp2_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_4, temp2_1) ? 1 : 0) << 0xa
                                    | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe;

                                if (!(*(&eax_15 + 1) & 0x40))
                                {
                                label_47e31f:
                                    long double x87_r7_7 = *(edi + 0x34);
                                    long double x87_r6_6 = *(edi + 0x30);
                                    long double x87_r5_4 = *(edi + 0x2c);
                                    long double x87_r7_9 = 1.0 / sqrtl(x87_r5_4 * x87_r5_4
                                        + x87_r6_6 * x87_r6_6 + x87_r7_7 * x87_r7_7);
                                    *(edi + 0x2c) = *(edi + 0x2c) * x87_r7_9;
                                    *(edi + 0x30) = *(edi + 0x30) * x87_r7_9;
                                    *(edi + 0x34) = *(edi + 0x34) * x87_r7_9;
                                }
                                else
                                {
                                    long double x87_r7_5 = *(edi + 0x30);
                                    long double temp4_1 = 0f;
                                    x87_r7_5 - temp4_1;
                                    eax_15 = (x87_r7_5 < temp4_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_5, temp4_1) ? 1 : 0) << 0xa
                                        | (x87_r7_5 == temp4_1 ? 1 : 0) << 0xe;

                                    if (!(*(&eax_15 + 1) & 0x40))
                                        goto label_47e31f;

                                    long double x87_r7_6 = *(edi + 0x34);
                                    long double temp7_1 = 0f;
                                    x87_r7_6 - temp7_1;
                                    eax_15 = (x87_r7_6 < temp7_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_6, temp7_1) ? 1 : 0) << 0xa
                                        | (x87_r7_6 == temp7_1 ? 1 : 0) << 0xe;

                                    if (!(*(&eax_15 + 1) & 0x40))
                                        goto label_47e31f;
                                }

                                long double x87_r7_11 = ecx_7[-2];
                                long double temp6_1 = 0f;
                                x87_r7_11 - temp6_1;
                                eax_15 = (x87_r7_11 < temp6_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_11, temp6_1) ? 1 : 0) << 0xa
                                    | (x87_r7_11 == temp6_1 ? 1 : 0) << 0xe;

                                if (!(*(&eax_15 + 1) & 0x40))
                                {
                                label_47e38f:
                                    long double x87_r7_14 = *ecx_7;
                                    long double x87_r6_14 = ecx_7[-1];
                                    long double x87_r5_6 = ecx_7[-2];
                                    long double x87_r7_16 = 1.0 / sqrtl(x87_r6_14 * x87_r6_14
                                        + x87_r7_14 * x87_r7_14 + x87_r5_6 * x87_r5_6);
                                    ecx_7[-2] = ecx_7[-2] * x87_r7_16;
                                    ecx_7[-1] = ecx_7[-1] * x87_r7_16;
                                    *ecx_7 = *ecx_7 * x87_r7_16;
                                }
                                else
                                {
                                    long double x87_r7_12 = ecx_7[-1];
                                    long double temp10_1 = 0f;
                                    x87_r7_12 - temp10_1;
                                    eax_15 = (x87_r7_12 < temp10_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_12, temp10_1) ? 1 : 0) << 0xa
                                        | (x87_r7_12 == temp10_1 ? 1 : 0) << 0xe;

                                    if (!(*(&eax_15 + 1) & 0x40))
                                        goto label_47e38f;

                                    long double x87_r7_13 = *ecx_7;
                                    long double temp13_1 = 0f;
                                    x87_r7_13 - temp13_1;
                                    eax_15 = (x87_r7_13 < temp13_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_13, temp13_1) ? 1 : 0) << 0xa
                                        | (x87_r7_13 == temp13_1 ? 1 : 0) << 0xe;

                                    if (!(*(&eax_15 + 1) & 0x40))
                                        goto label_47e38f;
                                }

                                long double x87_r7_21 = *(edi + 0x2c) * ecx_7[-2]
                                    + *(edi + 0x34) * *ecx_7 + ecx_7[-1] * *(edi + 0x30);
                                long double temp12_1 = 0.899999976f;
                                x87_r7_21 - temp12_1;
                                eax_15 = (x87_r7_21 < temp12_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_21, temp12_1) ? 1 : 0) << 0xa
                                    | (x87_r7_21 == temp12_1 ? 1 : 0) << 0xe;

                                if (!(*(&eax_15 + 1) & 0x41))
                                    return eax_15;
                            }
                        }

                        i -= 1;
                        ecx_7 -= 0x58;
                    } while (i >= 0);
                }

                int32_t edx_9 = *(ebx_2 + 0x44e8) - 1;

                if (edx_9 > *(ebx_2 + 0x44e0))
                {
                    eax_15 = edx_9 * 0xb;
                    float* ecx_9 = ebx_2 + (eax_15 << 3) + 0x28;

                    do
                    {
                        if (ecx_9[0x10] != 0xffffffff)
                        {
                            long double x87_r7_23 = ecx_9[3] - *(edi + 0x28);
                            long double x87_r6_27 = ecx_9[2] - *(edi + 0x24);
                            long double x87_r5_9 = ecx_9[1] - *(edi + 0x20);
                            float var_34_3 = ecx_9[0x12] * 1.5f;
                            long double x87_r4_22 =
                                x87_r5_9 * x87_r5_9 + x87_r6_27 * x87_r6_27 + x87_r7_23 * x87_r7_23;
                            long double x87_r6_30 = var_34_3 * var_34_3;
                            x87_r6_30 - x87_r4_22;
                            eax_15 = (x87_r6_30 < x87_r4_22 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_30, x87_r4_22) ? 1 : 0) << 0xa
                                | (x87_r6_30 == x87_r4_22 ? 1 : 0) << 0xe;

                            if (!(*(&eax_15 + 1) & 0x41))
                            {
                                long double x87_r7_25 = *(edi + 0x2c);
                                long double temp3_1 = 0f;
                                x87_r7_25 - temp3_1;
                                eax_15 = (x87_r7_25 < temp3_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_25, temp3_1) ? 1 : 0) << 0xa
                                    | (x87_r7_25 == temp3_1 ? 1 : 0) << 0xe;

                                if (!(*(&eax_15 + 1) & 0x40))
                                {
                                label_47e4a1:
                                    long double x87_r7_28 = *(edi + 0x34);
                                    long double x87_r6_31 = *(edi + 0x30);
                                    long double x87_r5_11 = *(edi + 0x2c);
                                    long double x87_r7_30 = 1.0 / sqrtl(x87_r5_11 * x87_r5_11
                                        + x87_r6_31 * x87_r6_31 + x87_r7_28 * x87_r7_28);
                                    *(edi + 0x2c) = *(edi + 0x2c) * x87_r7_30;
                                    *(edi + 0x30) = *(edi + 0x30) * x87_r7_30;
                                    *(edi + 0x34) = *(edi + 0x34) * x87_r7_30;
                                }
                                else
                                {
                                    long double x87_r7_26 = *(edi + 0x30);
                                    long double temp5_1 = 0f;
                                    x87_r7_26 - temp5_1;
                                    eax_15 = (x87_r7_26 < temp5_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_26, temp5_1) ? 1 : 0) << 0xa
                                        | (x87_r7_26 == temp5_1 ? 1 : 0) << 0xe;

                                    if (!(*(&eax_15 + 1) & 0x40))
                                        goto label_47e4a1;

                                    long double x87_r7_27 = *(edi + 0x34);
                                    long double temp9_1 = 0f;
                                    x87_r7_27 - temp9_1;
                                    eax_15 = (x87_r7_27 < temp9_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_27, temp9_1) ? 1 : 0) << 0xa
                                        | (x87_r7_27 == temp9_1 ? 1 : 0) << 0xe;

                                    if (!(*(&eax_15 + 1) & 0x40))
                                        goto label_47e4a1;
                                }

                                long double x87_r7_32 = ecx_9[-2];
                                long double temp8_1 = 0f;
                                x87_r7_32 - temp8_1;
                                eax_15 = (x87_r7_32 < temp8_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_32, temp8_1) ? 1 : 0) << 0xa
                                    | (x87_r7_32 == temp8_1 ? 1 : 0) << 0xe;

                                if (!(*(&eax_15 + 1) & 0x40))
                                {
                                label_47e511:
                                    long double x87_r7_35 = *ecx_9;
                                    long double x87_r6_39 = ecx_9[-1];
                                    long double x87_r5_13 = ecx_9[-2];
                                    long double x87_r7_41 = 1.0 / sqrtl(x87_r7_35 * x87_r7_35
                                        + x87_r5_13 * x87_r5_13 + x87_r6_39 * x87_r6_39);
                                    ecx_9[-2] = ecx_9[-2] * x87_r7_41;
                                    ecx_9[-1] = ecx_9[-1] * x87_r7_41;
                                    *ecx_9 = *ecx_9 * x87_r7_41;
                                }
                                else
                                {
                                    long double x87_r7_33 = ecx_9[-1];
                                    long double temp11_1 = 0f;
                                    x87_r7_33 - temp11_1;
                                    eax_15 = (x87_r7_33 < temp11_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_33, temp11_1) ? 1 : 0) << 0xa
                                        | (x87_r7_33 == temp11_1 ? 1 : 0) << 0xe;

                                    if (!(*(&eax_15 + 1) & 0x40))
                                        goto label_47e511;

                                    long double x87_r7_34 = *ecx_9;
                                    long double temp15_1 = 0f;
                                    x87_r7_34 - temp15_1;
                                    eax_15 = (x87_r7_34 < temp15_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_34, temp15_1) ? 1 : 0) << 0xa
                                        | (x87_r7_34 == temp15_1 ? 1 : 0) << 0xe;

                                    if (!(*(&eax_15 + 1) & 0x40))
                                        goto label_47e511;
                                }

                                long double x87_r7_46 = *(edi + 0x34) * *ecx_9
                                    + *(edi + 0x30) * ecx_9[-1] + ecx_9[-2] * *(edi + 0x2c);
                                long double temp14_1 = 0.899999976f;
                                x87_r7_46 - temp14_1;
                                eax_15 = (x87_r7_46 < temp14_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_46, temp14_1) ? 1 : 0) << 0xa
                                    | (x87_r7_46 == temp14_1 ? 1 : 0) << 0xe;

                                if (!(*(&eax_15 + 1) & 0x41))
                                    return eax_15;
                            }
                        }

                        eax_15 = *(ebx_2 + 0x44e0);
                        edx_9 -= 1;
                        ecx_9 -= 0x58;
                    } while (edx_9 > eax_15);
                }

                int32_t eax_17 = *(ebx_2 + 0x44e8);
                int32_t* var_34_4;

                if (eax_17 != 0xc8)
                {
                    *(ebx_2 + 0x44e0) = eax_17;
                    *(ebx_2 + 0x44e8) = eax_17 + 1;
                    var_34_4 = ebx_2 + eax_17 * 0x58 + 0x20;
                }
                else
                {
                    int32_t eax_18 = *(ebx_2 + 0x44e4);
                    *(ebx_2 + 0x44e0) = eax_18;
                    int32_t eax_19 = eax_18 + 1;
                    *(ebx_2 + 0x44e4) = eax_19;
                    var_34_4 = ebx_2 + eax_18 * 0x58 + 0x20;

                    if (eax_19 >= 0xc8)
                        eax_19 -= 0xc8;

                    *(ebx_2 + 0x44e4) = eax_19;
                    int32_t* i_2 = *(ebx_2 + eax_18 * 0x58 + 0x74);

                    if (i_2)
                    {
                        int32_t esi_6 = g_5c1128;
                        int32_t ebp_1 = g_5c1134;
                        int32_t* i_1;

                        do
                        {
                            int32_t ecx_12 = *(i_2 + ebp_1);
                            i_1 = i_2[0xf];
                            esi_6 -= 1;
                            g_5c1128 = esi_6;

                            if (ecx_12 != esi_6)
                            {
                                int32_t edx_11 = g_5c1124;
                                int32_t* eax_22 =
                                    *(edx_11 + (esi_6 << 2)) * g_5c1130 + g_5c1120;
                                int32_t esi_8 = *(eax_22 + ebp_1);
                                int32_t ebp_2 = *(edx_11 + (ecx_12 << 2));
                                *(edx_11 + (ecx_12 << 2)) = *(edx_11 + (esi_8 << 2));
                                *(g_5c1124 + (esi_8 << 2)) = ebp_2;
                                *(eax_22 + g_5c1134) = ecx_12;
                                esi_6 = g_5c1128;
                                ebp_1 = g_5c1134;
                            }

                            i_2 = i_1;
                        } while (i_1);
                    }
                }

                sub_47d920(a1 + 0x20, &var_28, ebx_2, var_34_4, edi, 0, a2[2], a2[3]);
                int32_t eax_28 = Timer_Now();
                *(ebx_2 + 0xe144) = eax_28;
                return eax_28;
            }

            kind += 1;
            edx_1 = &edx_1[1];
        } while (kind < eax_1);
    }

    if (eax_1 == g_5c1114)
    {
        int32_t* ebx_3 = nullptr;
        int32_t edx_2 = 0xffffffff;

        if (eax_1 > 0)
        {
            int32_t* esi_4 = g_5c110c;
            int32_t var_34_1 = eax_1;
            bool cond:1_1;

            do
            {
                int32_t* eax_3 = *(ebp * *esi_4 + g_5c1108);
                int32_t ecx_2 = eax_3[0x3851];

                if (ecx_2 <= edx_2)
                {
                    ebx_3 = eax_3;
                    edx_2 = ecx_2;
                }

                esi_4 = &esi_4[1];
                cond:1_1 = var_34_1 != 1;
                var_34_1 -= 1;
            } while (cond:1_1);
        }

        kind = QTask_FindType(ebx_3);
    }

    kind = g_5c1138;
    struct status_msg* eax_6 = QTask_HandleInput(a1, kind, 0);
    int32_t ecx_3 = g_5c1110;
    int32_t* eax_10 = *(g_5c110c + (ecx_3 << 2)) * g_5c1118 + g_5c1108;
    *(eax_10 + g_5c111c) = ecx_3;
    g_5c1110 += 1;
    *(eax_6 + 0xe134) = eax_10;
    *eax_10 = eax_6;
    *(eax_6 + 0xe130) = a1;
    struct status_msg* eax_13 = sub_49a450(Level_StartMission_4(), eax_6, a1 + 0x20, &var_28,
        &eax_6->head[0x113b], 0, 0, 0, 1, nullptr, 0);
    *(eax_6 + 0xe12c) = eax_13;
    sub_49a510(eax_13, 2);
    *(eax_6 + 0x44e0) = 0;
    *(eax_6 + 0x44e4) = 0;
    *(eax_6 + 0x44e8) = 1;
    sub_47d920(a1 + 0x20, &var_28, eax_6, &eax_6->head[8], edi, 0, a2[2], a2[3]);
    eax_15 = Timer_Now();
    *(eax_6 + 0xe144) = eax_15;
    return eax_15;
}
