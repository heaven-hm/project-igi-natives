#include "00412440-Human_DamageApply.h"
/* 0x00412440 Human_DamageApply full linked: callers=0 callees=17 */
float Human_DamageApply(float a1, int32_t* a2) __location("eax")

// Sig: void Human_DamageApply(HumanPlayer* human)
// Note: Applies DAMAGE/knockback to the human player: reads enable flag byte
// +0xCF6 and patrol sub-struct +0x254 of the human struct. IGI-MP disables
// bullet knockback here. Prologue-verified.
{
    float esi = a1;
    float result;
    result = *(esi + 0xcf6);

    if (result)
    {
        int32_t* eax = Config_GetActivePlayerProfileRecord();

        if (!eax)
            return Warning_Show("No active playerprofile found");

        int32_t eax_2 = sub_489c60(esi, a2);
        *(esi + 0x2e8) = eax_2;
        int32_t edx_1 = sub_489e10(esi + 0x254, eax_2);
        int32_t ecx_1 = *eax;
        a1 = (esi + 0x254)[eax_2 * 2 + 4] * a2[1];

        if (!ecx_1)
            a1 = a1 * 0.75f;
        else if (ecx_1 != 1)
        {
            if (ecx_1 == 2)
                a1 = a1 * 1.25f;
            else
            {
                int32_t var_24_2 = ecx_1;
                ecx_1 = Warning_Show("Difficulty level not defined %d");
            }
        }

        if (!Human_HitDamage())
        {
            (esi + 0x254)[eax_2 * 2 + 3] = a1 + (esi + 0x254)[eax_2 * 2 + 3];
            *(esi + 0x254) = a1 + *(esi + 0x254);
        }

        long double x87_r7_10 = *(esi + 0x254);
        long double temp4_1 = *(esi + 0x258);
        x87_r7_10 - temp4_1;

        if (!(*(&((x87_r7_10 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, temp4_1) ? 1 : 0) << 0xa
            | (x87_r7_10 == temp4_1 ? 1 : 0) << 0xe) + 1) & 1) && !*(esi + 0xde8))
        {
            void* eax_11 = a2[5];

            if (eax_11)
            {
                ecx_1 = g_548638;
                edx_1 = *(eax_11 + 0x1c);

                if (TaskType_IsDerivedFrom(edx_1, ecx_1))
                    *(esi + 0xde8) = QTask_LinkEventHandler_2(a2[5]);
            }
        }

        sub_463ad0(esi, &a2[2], *a2);

        if (!*(esi + 0xcf5))
            sub_4637c0(esi, "player_hit_", 4);

        int32_t ecx_3;
        long double st0_1;
        st0_1 = sub_4b4770(Level_SetMission_5());
        long double x87_r7_11 = st0_1;
        long double temp5_1 = 0.25f;
        x87_r7_11 - temp5_1;

        if (!(*(&((x87_r7_11 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp5_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double temp6_1 = 1f;
            x87_r7_11 - temp6_1;

            if (!(*(&((x87_r7_11 < temp6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_11, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_11 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                x87_r7_11 = 1f;
        }
        else
            x87_r7_11 = 0.25f;

        int32_t var_28_4 = ecx_3;
        int32_t var_2c_4 = ecx_3;
        sub_465970(*(esi + 0x4ec), x87_r7_11 * 204.800003f, x87_r7_11 * 0.0130899698f, 0xf);
        long double x87_r7_15 = a2[2];
        long double temp7_1 = 0f;
        x87_r7_15 - temp7_1;
        long double x87_r7_20;

        if (!(*(&((x87_r7_15 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_15, temp7_1) ? 1 : 0) << 0xa
            | (x87_r7_15 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_412644:
            long double x87_r7_22 = sub_4b4770(Level_SetMission_5()) + 1.0;
            result = *(esi + 0x4ec);
            x87_r7_20 = x87_r7_22 * 0.40000000000000002;
            float var_c_1 = *(result + 0xf8) * a2[2] + *(result + 0x110) * a2[4]
                + *(result + 0x104) * a2[3];
            float var_8_1 = *(result + 0xfc) * a2[2] + *(result + 0x114) * a2[4]
                + *(result + 0x108) * a2[3];
            long double x87_r6_14 = *(result + 0x100) * a2[2] + *(result + 0x118) * a2[4]
                + *(result + 0x10c) * a2[3];
            long double x87_r5_13 = var_c_1;
            long double temp8_1 = 0f;
            x87_r5_13 - temp8_1;
            long double x87_r5_14 = var_c_1;
            result = (x87_r5_13 < temp8_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_13, temp8_1) ? 1 : 0) << 0xa
                | (x87_r5_13 == temp8_1 ? 1 : 0) << 0xe | 0x2800;

            if (*(&result + 1) & 1)
                x87_r5_14 = -(x87_r5_14);

            long double x87_r4_1 = var_8_1;
            long double temp10_1 = 0f;
            x87_r4_1 - temp10_1;
            long double x87_r4_2 = var_8_1;
            result = (x87_r4_1 < temp10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r4_1, temp10_1) ? 1 : 0) << 0xa
                | (x87_r4_1 == temp10_1 ? 1 : 0) << 0xe | 0x2000;

            if (*(&result + 1) & 1)
                x87_r4_2 = -(x87_r4_2);

            x87_r5_14 - x87_r4_2;
            result = (x87_r5_14 < x87_r4_2 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_14, x87_r4_2) ? 1 : 0) << 0xa
                | (x87_r5_14 == x87_r4_2 ? 1 : 0) << 0xe | 0x2800;

            if (*(&result + 1) & 0x41)
            {
            label_412780:
                long double x87_r5_21 = var_8_1;
                long double temp12_1 = 0f;
                x87_r5_21 - temp12_1;
                long double x87_r5_22 = var_8_1;
                result = (x87_r5_21 < temp12_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_21, temp12_1) ? 1 : 0) << 0xa
                    | (x87_r5_21 == temp12_1 ? 1 : 0) << 0xe | 0x2800;

                if (*(&result + 1) & 1)
                    x87_r5_22 = -(x87_r5_22);

                long double x87_r4_7 = var_c_1;
                long double temp14_1 = 0f;
                x87_r4_7 - temp14_1;
                long double x87_r4_8 = var_c_1;
                result = (x87_r4_7 < temp14_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r4_7, temp14_1) ? 1 : 0) << 0xa
                    | (x87_r4_7 == temp14_1 ? 1 : 0) << 0xe | 0x2000;

                if (*(&result + 1) & 1)
                    x87_r4_8 = -(x87_r4_8);

                x87_r5_22 - x87_r4_8;
                result = (x87_r5_22 < x87_r4_8 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_22, x87_r4_8) ? 1 : 0) << 0xa
                    | (x87_r5_22 == x87_r4_8 ? 1 : 0) << 0xe | 0x2800;

                if (*(&result + 1) & 1)
                {
                label_412833:
                    long double temp16_1 = 0f;
                    x87_r6_14 - temp16_1;
                    result = (x87_r6_14 < temp16_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_14, temp16_1) ? 1 : 0) << 0xa
                        | (x87_r6_14 == temp16_1 ? 1 : 0) << 0xe | 0x3800;

                    if (*(&result + 1) & 0x41)
                    {
                        *(esi + 0xdcc) = x87_r7_20;
                        long double x87_r6_26 = x87_r7_20 * 0.5f;
                        *(esi + 0xdd0) = x87_r6_26;
                        *(esi + 0xdd4) = x87_r6_26;
                        *(esi + 0xdd8) = x87_r7_20;
                    }
                    else
                    {
                        long double x87_r6_24 = x87_r7_20 * 0.5f;
                        *(esi + 0xdcc) = x87_r6_24;
                        *(esi + 0xdd0) = x87_r7_20;
                        *(esi + 0xdd4) = x87_r7_20;
                        *(esi + 0xdd8) = x87_r6_24;
                    }
                }
                else
                {
                    long double x87_r5_25 = var_8_1;
                    long double temp17_1 = 0f;
                    x87_r5_25 - temp17_1;
                    long double x87_r5_26 = var_8_1;
                    result = (x87_r5_25 < temp17_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_25, temp17_1) ? 1 : 0) << 0xa
                        | (x87_r5_25 == temp17_1 ? 1 : 0) << 0xe | 0x2800;

                    if (*(&result + 1) & 1)
                        x87_r5_26 = -(x87_r5_26);

                    long double temp20_1 = 0f;
                    x87_r6_14 - temp20_1;
                    long double x87_r4_11 = x87_r6_14;
                    result = (x87_r6_14 < temp20_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_14, temp20_1) ? 1 : 0) << 0xa
                        | (x87_r6_14 == temp20_1 ? 1 : 0) << 0xe | 0x2000;

                    if (*(&result + 1) & 1)
                        x87_r4_11 = -(x87_r4_11);

                    x87_r5_26 - x87_r4_11;
                    result = (x87_r5_26 < x87_r4_11 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_26, x87_r4_11) ? 1 : 0) << 0xa
                        | (x87_r5_26 == x87_r4_11 ? 1 : 0) << 0xe | 0x2800;

                    if (*(&result + 1) & 1)
                        goto label_412833;

                    long double x87_r6_20 = var_8_1;
                    long double temp25_1 = 0f;
                    x87_r6_20 - temp25_1;
                    result = (x87_r6_20 < temp25_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_20, temp25_1) ? 1 : 0) << 0xa
                        | (x87_r6_20 == temp25_1 ? 1 : 0) << 0xe | 0x3800;

                    if (*(&result + 1) & 0x41)
                        goto label_412622;

                    long double x87_r6_22 = x87_r7_20 * 0.5f;
                    *(esi + 0xdcc) = x87_r6_22;
                    result = x87_r6_22;
                    *(esi + 0xdd0) = x87_r7_20;
                    *(esi + 0xdd4) = x87_r7_20;
                    *(esi + 0xdd8) = result;
                }
            }
            else
            {
                long double x87_r5_17 = var_c_1;
                long double temp13_1 = 0f;
                x87_r5_17 - temp13_1;
                long double x87_r5_18 = var_c_1;
                result = (x87_r5_17 < temp13_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_17, temp13_1) ? 1 : 0) << 0xa
                    | (x87_r5_17 == temp13_1 ? 1 : 0) << 0xe | 0x2800;

                if (*(&result + 1) & 1)
                    x87_r5_18 = -(x87_r5_18);

                long double temp15_1 = 0f;
                x87_r6_14 - temp15_1;
                long double x87_r4_5 = x87_r6_14;
                result = (x87_r6_14 < temp15_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_14, temp15_1) ? 1 : 0) << 0xa
                    | (x87_r6_14 == temp15_1 ? 1 : 0) << 0xe | 0x2000;

                if (*(&result + 1) & 1)
                    x87_r4_5 = -(x87_r4_5);

                x87_r5_18 - x87_r4_5;
                result = (x87_r5_18 < x87_r4_5 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_18, x87_r4_5) ? 1 : 0) << 0xa
                    | (x87_r5_18 == x87_r4_5 ? 1 : 0) << 0xe | 0x2800;

                if (*(&result + 1) & 0x41)
                    goto label_412780;

                long double x87_r6_16 = var_c_1;
                long double temp18_1 = 0f;
                x87_r6_16 - temp18_1;
                result = (x87_r6_16 < temp18_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_16, temp18_1) ? 1 : 0) << 0xa
                    | (x87_r6_16 == temp18_1 ? 1 : 0) << 0xe | 0x3800;

                if (*(&result + 1) & 0x41)
                {
                    long double x87_r6_18 = x87_r7_20 * 0.5f;
                    *(esi + 0xdcc) = x87_r6_18;
                    *(esi + 0xdd0) = x87_r6_18;
                    *(esi + 0xdd4) = x87_r7_20;
                }
                else
                {
                    *(esi + 0xdcc) = x87_r7_20;
                    *(esi + 0xdd0) = x87_r7_20;
                    x87_r7_20 = x87_r7_20 * 0.5f;
                    *(esi + 0xdd4) = x87_r7_20;
                }

                *(esi + 0xdd8) = x87_r7_20;
            }
        }
        else
        {
            long double x87_r7_16 = a2[3];
            long double temp9_1 = 0f;
            x87_r7_16 - temp9_1;

            if (!(*(&((x87_r7_16 < temp9_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_16, temp9_1) ? 1 : 0) << 0xa
                    | (x87_r7_16 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_412644;

            long double x87_r7_17 = a2[4];
            long double temp11_1 = 0f;
            x87_r7_17 - temp11_1;

            if (!(*(&((x87_r7_17 < temp11_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_17, temp11_1) ? 1 : 0) << 0xa
                    | (x87_r7_17 == temp11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_412644;

            long double st0_2;
            st0_2 = sub_4b4770(Level_SetMission_5());
            x87_r7_20 = (st0_2 + 1.0) * 0.40000000000000002;
        label_412622:
            *(esi + 0xdcc) = x87_r7_20;
            *(esi + 0xdd0) = x87_r7_20;
            *(esi + 0xdd4) = x87_r7_20;
            *(esi + 0xdd8) = x87_r7_20;
        }
        result = *(esi + 0x52c);

        if (!result)
        {
            long double x87_r7_23 = a2[2];
            long double temp19_1 = 0f;
            x87_r7_23 - temp19_1;
            result = (x87_r7_23 < temp19_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_23, temp19_1) ? 1 : 0) << 0xa
                | (x87_r7_23 == temp19_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
            {
            label_4128cd:
                result = a2[3];
                float ecx_5 = a2[4];
                long double x87_r7_26 = a2[2];
                long double temp21_1 = 0f;
                x87_r7_26 - temp21_1;
                float result_1 = result;
                result = (x87_r7_26 < temp21_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_26, temp21_1) ? 1 : 0) << 0xa
                    | (x87_r7_26 == temp21_1 ? 1 : 0) << 0xe | 0x3800;

                if (!(*(&result + 1) & 0x40))
                {
                label_412912:
                    long double x87_r6_29 = ecx_5;
                    long double x87_r5_29 = result_1;
                    long double x87_r6_31 = 1.0 / sqrtl(x87_r7_26 * x87_r7_26
                        + x87_r5_29 * x87_r5_29 + x87_r6_29 * x87_r6_29);
                    x87_r7_26 = x87_r7_26 * x87_r6_31;
                    result_1 = result_1 * x87_r6_31;
                }
                else
                {
                    long double x87_r6_27 = result_1;
                    long double temp23_1 = 0f;
                    x87_r6_27 - temp23_1;
                    result = (x87_r6_27 < temp23_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_27, temp23_1) ? 1 : 0) << 0xa
                        | (x87_r6_27 == temp23_1 ? 1 : 0) << 0xe | 0x3800;

                    if (!(*(&result + 1) & 0x40))
                        goto label_412912;

                    long double x87_r6_28 = ecx_5;
                    long double temp26_1 = 0f;
                    x87_r6_28 - temp26_1;
                    result = (x87_r6_28 < temp26_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_28, temp26_1) ? 1 : 0) << 0xa
                        | (x87_r6_28 == temp26_1 ? 1 : 0) << 0xe | 0x3800;

                    if (!(*(&result + 1) & 0x40))
                        goto label_412912;
                }

                *(esi + 0x678) = *(esi + 0x678);
                *(esi + 0x670) = x87_r7_26 * 189.629623f + *(esi + 0x670);
                *(esi + 0x674) = result_1 * 189.629623f + *(esi + 0x674);
            }
            else
            {
                long double x87_r7_24 = a2[3];
                long double temp22_1 = 0f;
                x87_r7_24 - temp22_1;
                result = (x87_r7_24 < temp22_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_24, temp22_1) ? 1 : 0) << 0xa
                    | (x87_r7_24 == temp22_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                    goto label_4128cd;

                long double x87_r7_25 = a2[4];
                long double temp24_1 = 0f;
                x87_r7_25 - temp24_1;
                result = (x87_r7_25 < temp24_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_25, temp24_1) ? 1 : 0) << 0xa
                    | (x87_r7_25 == temp24_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                    goto label_4128cd;
            }
        }
    }

    return result;
}
