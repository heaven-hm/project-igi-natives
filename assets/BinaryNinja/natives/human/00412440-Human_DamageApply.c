// Original IGI.EXE function: Human_DamageApply (VA 0x00412440; static CFG gate PASS, CFG score 1.000).
#include "Human_DamageApply.h"
float Human_DamageApply(float a1, int32_t* a2) __location("valA")

// Sig: void Human_DamageApply(HumanPlayer* human)
// Note: Applies DAMAGE/knockback to the human player: reads enable flag byte
// +0xCF6 and patrol sub-struct +0x254 of the human struct. IGI-MP disables
// bullet knockback here. Prologue-verified.
{
    float srcS = a1;
    float result;
    result = *(srcS + 0xcf6);

    if (result)
    {
        int32_t* valA = Config_GetActivePlayerProfileRecord();

        if (!valA)
            return Warning_Show("No active playerprofile found");

        int32_t valA2 = FX_000011(srcS, a2);
        *(srcS + 0x2e8) = valA2;
        int32_t tmpD1 = FX_FragmentSimulate_14(srcS + 0x254, valA2);
        int32_t objC1 = *valA;
        a1 = (srcS + 0x254)[valA2 * 2 + 4] * a2[1];

        if (!objC1)
            a1 = a1 * 0.75f;
        else if (objC1 != 1)
        {
            if (objC1 == 2)
                a1 = a1 * 1.25f;
            else
            {
                int32_t v_24_2 = objC1;
                objC1 = Warning_Show("Difficulty level not defined %d");
            }
        }

        if (!Human_HitDamage())
        {
            (srcS + 0x254)[valA2 * 2 + 3] = a1 + (srcS + 0x254)[valA2 * 2 + 3];
            *(srcS + 0x254) = a1 + *(srcS + 0x254);
        }

        long double x87_r7_10 = *(srcS + 0x254);
        long double f4_1 = *(srcS + 0x258);
        x87_r7_10 - f4_1;

        if (!(*(&((x87_r7_10 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, f4_1) ? 1 : 0) << 0xa
            | (x87_r7_10 == f4_1 ? 1 : 0) << 0xe) + 1) & 1) && !*(srcS + 0xde8))
        {
            void* valA11 = a2[5];

            if (valA11)
            {
                objC1 = g_548638;
                tmpD1 = *(valA11 + 0x1c);

                if (TaskType_IsDerivedFrom(tmpD1, objC1))
                    *(srcS + 0xde8) = QTask_LinkEventHandler_2(a2[5]);
            }
        }

        AI_UpdateOrders_21(srcS, &a2[2], *a2);

        if (!*(srcS + 0xcf5))
            AI_MoveToNode_21(srcS, "player_hit_", 4);

        int32_t objC3;
        long double fp0_1;
        fp0_1 = Sys_AllocateMemory_14(Level_SetMission_5());
        long double x87_r7_11 = fp0_1;
        long double f5_1 = 0.25f;
        x87_r7_11 - f5_1;

        if (!(*(&((x87_r7_11 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f5_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double f6_1 = 1f;
            x87_r7_11 - f6_1;

            if (!(*(&((x87_r7_11 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_11, f6_1) ? 1 : 0) << 0xa
                    | (x87_r7_11 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                x87_r7_11 = 1f;
        }
        else
            x87_r7_11 = 0.25f;

        int32_t v_28_4 = objC3;
        int32_t v_2c_4 = objC3;
        AI_CheckSector_23(*(srcS + 0x4ec), x87_r7_11 * 204.800003f, x87_r7_11 * 0.0130899698f, 0xf);
        long double x87_r7_15 = a2[2];
        long double f7_1 = 0f;
        x87_r7_15 - f7_1;
        long double x87_r7_20;

        if (!(*(&((x87_r7_15 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_15, f7_1) ? 1 : 0) << 0xa
            | (x87_r7_15 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_412644:
            long double x87_r7_22 = Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0;
            result = *(srcS + 0x4ec);
            x87_r7_20 = x87_r7_22 * 0.40000000000000002;
            float v_c_1 = *(result + 0xf8) * a2[2] + *(result + 0x110) * a2[4]
                + *(result + 0x104) * a2[3];
            float v_8_1 = *(result + 0xfc) * a2[2] + *(result + 0x114) * a2[4]
                + *(result + 0x108) * a2[3];
            long double x87_r6_14 = *(result + 0x100) * a2[2] + *(result + 0x118) * a2[4]
                + *(result + 0x10c) * a2[3];
            long double x87_r5_13 = v_c_1;
            long double f8_1 = 0f;
            x87_r5_13 - f8_1;
            long double x87_r5_14 = v_c_1;
            result = (x87_r5_13 < f8_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_13, f8_1) ? 1 : 0) << 0xa
                | (x87_r5_13 == f8_1 ? 1 : 0) << 0xe | 0x2800;

            if (*(&result + 1) & 1)
                x87_r5_14 = -(x87_r5_14);

            long double x87_r4_1 = v_8_1;
            long double f10_1 = 0f;
            x87_r4_1 - f10_1;
            long double x87_r4_2 = v_8_1;
            result = (x87_r4_1 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r4_1, f10_1) ? 1 : 0) << 0xa
                | (x87_r4_1 == f10_1 ? 1 : 0) << 0xe | 0x2000;

            if (*(&result + 1) & 1)
                x87_r4_2 = -(x87_r4_2);

            x87_r5_14 - x87_r4_2;
            result = (x87_r5_14 < x87_r4_2 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_14, x87_r4_2) ? 1 : 0) << 0xa
                | (x87_r5_14 == x87_r4_2 ? 1 : 0) << 0xe | 0x2800;

            if (*(&result + 1) & 0x41)
            {
            label_412780:
                long double x87_r5_21 = v_8_1;
                long double f12_1 = 0f;
                x87_r5_21 - f12_1;
                long double x87_r5_22 = v_8_1;
                result = (x87_r5_21 < f12_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_21, f12_1) ? 1 : 0) << 0xa
                    | (x87_r5_21 == f12_1 ? 1 : 0) << 0xe | 0x2800;

                if (*(&result + 1) & 1)
                    x87_r5_22 = -(x87_r5_22);

                long double x87_r4_7 = v_c_1;
                long double f14_1 = 0f;
                x87_r4_7 - f14_1;
                long double x87_r4_8 = v_c_1;
                result = (x87_r4_7 < f14_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r4_7, f14_1) ? 1 : 0) << 0xa
                    | (x87_r4_7 == f14_1 ? 1 : 0) << 0xe | 0x2000;

                if (*(&result + 1) & 1)
                    x87_r4_8 = -(x87_r4_8);

                x87_r5_22 - x87_r4_8;
                result = (x87_r5_22 < x87_r4_8 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_22, x87_r4_8) ? 1 : 0) << 0xa
                    | (x87_r5_22 == x87_r4_8 ? 1 : 0) << 0xe | 0x2800;

                if (*(&result + 1) & 1)
                {
                label_412833:
                    long double f16_1 = 0f;
                    x87_r6_14 - f16_1;
                    result = (x87_r6_14 < f16_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_14, f16_1) ? 1 : 0) << 0xa
                        | (x87_r6_14 == f16_1 ? 1 : 0) << 0xe | 0x3800;

                    if (*(&result + 1) & 0x41)
                    {
                        *(srcS + 0xdcc) = x87_r7_20;
                        long double x87_r6_26 = x87_r7_20 * 0.5f;
                        *(srcS + 0xdd0) = x87_r6_26;
                        *(srcS + 0xdd4) = x87_r6_26;
                        *(srcS + 0xdd8) = x87_r7_20;
                    }
                    else
                    {
                        long double x87_r6_24 = x87_r7_20 * 0.5f;
                        *(srcS + 0xdcc) = x87_r6_24;
                        *(srcS + 0xdd0) = x87_r7_20;
                        *(srcS + 0xdd4) = x87_r7_20;
                        *(srcS + 0xdd8) = x87_r6_24;
                    }
                }
                else
                {
                    long double x87_r5_25 = v_8_1;
                    long double f17_1 = 0f;
                    x87_r5_25 - f17_1;
                    long double x87_r5_26 = v_8_1;
                    result = (x87_r5_25 < f17_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_25, f17_1) ? 1 : 0) << 0xa
                        | (x87_r5_25 == f17_1 ? 1 : 0) << 0xe | 0x2800;

                    if (*(&result + 1) & 1)
                        x87_r5_26 = -(x87_r5_26);

                    long double f20_1 = 0f;
                    x87_r6_14 - f20_1;
                    long double x87_r4_11 = x87_r6_14;
                    result = (x87_r6_14 < f20_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_14, f20_1) ? 1 : 0) << 0xa
                        | (x87_r6_14 == f20_1 ? 1 : 0) << 0xe | 0x2000;

                    if (*(&result + 1) & 1)
                        x87_r4_11 = -(x87_r4_11);

                    x87_r5_26 - x87_r4_11;
                    result = (x87_r5_26 < x87_r4_11 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_26, x87_r4_11) ? 1 : 0) << 0xa
                        | (x87_r5_26 == x87_r4_11 ? 1 : 0) << 0xe | 0x2800;

                    if (*(&result + 1) & 1)
                        goto label_412833;

                    long double x87_r6_20 = v_8_1;
                    long double f25_1 = 0f;
                    x87_r6_20 - f25_1;
                    result = (x87_r6_20 < f25_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_20, f25_1) ? 1 : 0) << 0xa
                        | (x87_r6_20 == f25_1 ? 1 : 0) << 0xe | 0x3800;

                    if (*(&result + 1) & 0x41)
                        goto label_412622;

                    long double x87_r6_22 = x87_r7_20 * 0.5f;
                    *(srcS + 0xdcc) = x87_r6_22;
                    result = x87_r6_22;
                    *(srcS + 0xdd0) = x87_r7_20;
                    *(srcS + 0xdd4) = x87_r7_20;
                    *(srcS + 0xdd8) = result;
                }
            }
            else
            {
                long double x87_r5_17 = v_c_1;
                long double f13_1 = 0f;
                x87_r5_17 - f13_1;
                long double x87_r5_18 = v_c_1;
                result = (x87_r5_17 < f13_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_17, f13_1) ? 1 : 0) << 0xa
                    | (x87_r5_17 == f13_1 ? 1 : 0) << 0xe | 0x2800;

                if (*(&result + 1) & 1)
                    x87_r5_18 = -(x87_r5_18);

                long double f15_1 = 0f;
                x87_r6_14 - f15_1;
                long double x87_r4_5 = x87_r6_14;
                result = (x87_r6_14 < f15_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_14, f15_1) ? 1 : 0) << 0xa
                    | (x87_r6_14 == f15_1 ? 1 : 0) << 0xe | 0x2000;

                if (*(&result + 1) & 1)
                    x87_r4_5 = -(x87_r4_5);

                x87_r5_18 - x87_r4_5;
                result = (x87_r5_18 < x87_r4_5 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_18, x87_r4_5) ? 1 : 0) << 0xa
                    | (x87_r5_18 == x87_r4_5 ? 1 : 0) << 0xe | 0x2800;

                if (*(&result + 1) & 0x41)
                    goto label_412780;

                long double x87_r6_16 = v_c_1;
                long double f18_1 = 0f;
                x87_r6_16 - f18_1;
                result = (x87_r6_16 < f18_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_16, f18_1) ? 1 : 0) << 0xa
                    | (x87_r6_16 == f18_1 ? 1 : 0) << 0xe | 0x3800;

                if (*(&result + 1) & 0x41)
                {
                    long double x87_r6_18 = x87_r7_20 * 0.5f;
                    *(srcS + 0xdcc) = x87_r6_18;
                    *(srcS + 0xdd0) = x87_r6_18;
                    *(srcS + 0xdd4) = x87_r7_20;
                }
                else
                {
                    *(srcS + 0xdcc) = x87_r7_20;
                    *(srcS + 0xdd0) = x87_r7_20;
                    x87_r7_20 = x87_r7_20 * 0.5f;
                    *(srcS + 0xdd4) = x87_r7_20;
                }

                *(srcS + 0xdd8) = x87_r7_20;
            }
        }
        else
        {
            long double x87_r7_16 = a2[3];
            long double f9_1 = 0f;
            x87_r7_16 - f9_1;

            if (!(*(&((x87_r7_16 < f9_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_16, f9_1) ? 1 : 0) << 0xa
                    | (x87_r7_16 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_412644;

            long double x87_r7_17 = a2[4];
            long double f11_1 = 0f;
            x87_r7_17 - f11_1;

            if (!(*(&((x87_r7_17 < f11_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_17, f11_1) ? 1 : 0) << 0xa
                    | (x87_r7_17 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_412644;

            long double fp0_2;
            fp0_2 = Sys_AllocateMemory_14(Level_SetMission_5());
            x87_r7_20 = (fp0_2 + 1.0) * 0.40000000000000002;
        label_412622:
            *(srcS + 0xdcc) = x87_r7_20;
            *(srcS + 0xdd0) = x87_r7_20;
            *(srcS + 0xdd4) = x87_r7_20;
            *(srcS + 0xdd8) = x87_r7_20;
        }
        result = *(srcS + 0x52c);

        if (!result)
        {
            long double x87_r7_23 = a2[2];
            long double f19_1 = 0f;
            x87_r7_23 - f19_1;
            result = (x87_r7_23 < f19_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_23, f19_1) ? 1 : 0) << 0xa
                | (x87_r7_23 == f19_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
            {
            label_4128cd:
                result = a2[3];
                float objC5 = a2[4];
                long double x87_r7_26 = a2[2];
                long double f21_1 = 0f;
                x87_r7_26 - f21_1;
                float result_1 = result;
                result = (x87_r7_26 < f21_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_26, f21_1) ? 1 : 0) << 0xa
                    | (x87_r7_26 == f21_1 ? 1 : 0) << 0xe | 0x3800;

                if (!(*(&result + 1) & 0x40))
                {
                label_412912:
                    long double x87_r6_29 = objC5;
                    long double x87_r5_29 = result_1;
                    long double x87_r6_31 = 1.0 / sqrtl(x87_r7_26 * x87_r7_26
                        + x87_r5_29 * x87_r5_29 + x87_r6_29 * x87_r6_29);
                    x87_r7_26 = x87_r7_26 * x87_r6_31;
                    result_1 = result_1 * x87_r6_31;
                }
                else
                {
                    long double x87_r6_27 = result_1;
                    long double f23_1 = 0f;
                    x87_r6_27 - f23_1;
                    result = (x87_r6_27 < f23_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_27, f23_1) ? 1 : 0) << 0xa
                        | (x87_r6_27 == f23_1 ? 1 : 0) << 0xe | 0x3800;

                    if (!(*(&result + 1) & 0x40))
                        goto label_412912;

                    long double x87_r6_28 = objC5;
                    long double f26_1 = 0f;
                    x87_r6_28 - f26_1;
                    result = (x87_r6_28 < f26_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_28, f26_1) ? 1 : 0) << 0xa
                        | (x87_r6_28 == f26_1 ? 1 : 0) << 0xe | 0x3800;

                    if (!(*(&result + 1) & 0x40))
                        goto label_412912;
                }

                *(srcS + 0x678) = *(srcS + 0x678);
                *(srcS + 0x670) = x87_r7_26 * 189.629623f + *(srcS + 0x670);
                *(srcS + 0x674) = result_1 * 189.629623f + *(srcS + 0x674);
            }
            else
            {
                long double x87_r7_24 = a2[3];
                long double f22_1 = 0f;
                x87_r7_24 - f22_1;
                result = (x87_r7_24 < f22_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_24, f22_1) ? 1 : 0) << 0xa
                    | (x87_r7_24 == f22_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                    goto label_4128cd;

                long double x87_r7_25 = a2[4];
                long double f24_1 = 0f;
                x87_r7_25 - f24_1;
                result = (x87_r7_25 < f24_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_25, f24_1) ? 1 : 0) << 0xa
                    | (x87_r7_25 == f24_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                    goto label_4128cd;
            }
        }
    }

    return result;
}
