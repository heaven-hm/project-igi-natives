// Original IGI.EXE function: Human_DamageApply (VA 0x00412440; static CFG gate PASS, CFG score 1.000).
#include "Human_DamageApply.h"
float Human_DamageApply(float context, int32_t* param_2) // Sig: void Human_DamageApply(HumanPlayer* human)
// Note: Applies DAMAGE/knockback to the human player: reads enable flag byte
// +0xCF6 and patrol sub-struct +0x254 of the human struct. IGI-MP disables
// bullet knockback here. Prologue-verified.
{
    float source_val = context;
    float result;
    result = *(source_val + 0xcf6);

    if (result)
    {
        int32_t* data_val = Config_GetActivePlayerProfileRecord();

        if (!data_val)
            return Warning_Show("No active playerprofile found");

        int32_t data_2 = FX_000011(source_val, param_2);
        *(source_val + 0x2e8) = data_2;
        int32_t temp_1 = FX_FragmentSimulate_14(source_val + 0x254, data_2);
        int32_t entity_1 = *data_val;
        context = (source_val + 0x254)[data_2 * 2 + 4] * param_2[1];

        if (!entity_1)
            context = context * 0.75f;
        else if (entity_1 != 1)
        {
            if (entity_1 == 2)
                context = context * 1.25f;
            else
            {
                int32_t item_24_2 = entity_1;
                entity_1 = Warning_Show("Difficulty level not defined %d");
            }
        }

        if (!Human_HitDamage())
        {
            (source_val + 0x254)[data_2 * 2 + 3] = context + (source_val + 0x254)[data_2 * 2 + 3];
            *(source_val + 0x254) = context + *(source_val + 0x254);
        }

        long double fpu_val_7_10 = *(source_val + 0x254);
        long double f4_1 = *(source_val + 0x258);
        fpu_val_7_10 - f4_1;

        if (!(*(&((fpu_val_7_10 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_10, f4_1) ? 1 : 0) << 0xa
            | (fpu_val_7_10 == f4_1 ? 1 : 0) << 0xe) + 1) & 1) && !*(source_val + 0xde8))
        {
            void* data_11 = param_2[5];

            if (data_11)
            {
                entity_1 = g_548638;
                temp_1 = *(data_11 + 0x1c);

                if (TaskType_IsDerivedFrom(temp_1, entity_1))
                    *(source_val + 0xde8) = QTask_LinkEventHandler_2(param_2[5]);
            }
        }

        AI_UpdateOrders_21(source_val, &param_2[2], *param_2);

        if (!*(source_val + 0xcf5))
            AI_MoveToNode_21(source_val, "player_hit_", 4);

        int32_t entity_3;
        long double fp0_1;
        fp0_1 = Sys_AllocateMemory_14(Level_SetMission_5());
        long double fpu_val_7_11 = fp0_1;
        long double f5_1 = 0.25f;
        fpu_val_7_11 - f5_1;

        if (!(*(&((fpu_val_7_11 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_11, f5_1) ? 1 : 0) << 0xa
            | (fpu_val_7_11 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double f6_1 = 1.0f;
            fpu_val_7_11 - f6_1;

            if (!(*(&((fpu_val_7_11 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_11, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_11 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                fpu_val_7_11 = 1.0f;
        }
        else
            fpu_val_7_11 = 0.25f;

        int32_t item_28_4 = entity_3;
        int32_t item_2c_4 = entity_3;
        AI_CheckSector_23(*(source_val + 0x4ec), fpu_val_7_11 * 204.800003f, fpu_val_7_11 * 0.0130899698f, 0xf);
        long double fpu_val_7_15 = param_2[2];
        long double f7_1 = 0.0f;
        fpu_val_7_15 - f7_1;
        long double fpu_val_7_20;

        if (!(*(&((fpu_val_7_15 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_15, f7_1) ? 1 : 0) << 0xa
            | (fpu_val_7_15 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_412644:
            long double fpu_val_7_22 = Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0;
            result = *(source_val + 0x4ec);
            fpu_val_7_20 = fpu_val_7_22 * 0.40000000000000002;
            float item_c_1 = *(result + 0xf8) * param_2[2] + *(result + 0x110) * param_2[4]
                + *(result + 0x104) * param_2[3];
            float item_8_1 = *(result + 0xfc) * param_2[2] + *(result + 0x114) * param_2[4]
                + *(result + 0x108) * param_2[3];
            long double fpu_val_6_14 = *(result + 0x100) * param_2[2] + *(result + 0x118) * param_2[4]
                + *(result + 0x10c) * param_2[3];
            long double fpu_val_5_13 = item_c_1;
            long double f8_1 = 0.0f;
            fpu_val_5_13 - f8_1;
            long double fpu_val_5_14 = item_c_1;
            result = (fpu_val_5_13 < f8_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_5_13, f8_1) ? 1 : 0) << 0xa
                | (fpu_val_5_13 == f8_1 ? 1 : 0) << 0xe | 0x2800;

            if (*(&result + 1) & 1)
                fpu_val_5_14 = -(fpu_val_5_14);

            long double fpu_val_4_1 = item_8_1;
            long double f10_1 = 0.0f;
            fpu_val_4_1 - f10_1;
            long double fpu_val_4_2 = item_8_1;
            result = (fpu_val_4_1 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_4_1, f10_1) ? 1 : 0) << 0xa
                | (fpu_val_4_1 == f10_1 ? 1 : 0) << 0xe | 0x2000;

            if (*(&result + 1) & 1)
                fpu_val_4_2 = -(fpu_val_4_2);

            fpu_val_5_14 - fpu_val_4_2;
            result = (fpu_val_5_14 < fpu_val_4_2 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_5_14, fpu_val_4_2) ? 1 : 0) << 0xa
                | (fpu_val_5_14 == fpu_val_4_2 ? 1 : 0) << 0xe | 0x2800;

            if (*(&result + 1) & 0x41)
            {
            label_412780:
                long double fpu_val_5_21 = item_8_1;
                long double f12_1 = 0.0f;
                fpu_val_5_21 - f12_1;
                long double fpu_val_5_22 = item_8_1;
                result = (fpu_val_5_21 < f12_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_5_21, f12_1) ? 1 : 0) << 0xa
                    | (fpu_val_5_21 == f12_1 ? 1 : 0) << 0xe | 0x2800;

                if (*(&result + 1) & 1)
                    fpu_val_5_22 = -(fpu_val_5_22);

                long double fpu_val_4_7 = item_c_1;
                long double f14_1 = 0.0f;
                fpu_val_4_7 - f14_1;
                long double fpu_val_4_8 = item_c_1;
                result = (fpu_val_4_7 < f14_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_4_7, f14_1) ? 1 : 0) << 0xa
                    | (fpu_val_4_7 == f14_1 ? 1 : 0) << 0xe | 0x2000;

                if (*(&result + 1) & 1)
                    fpu_val_4_8 = -(fpu_val_4_8);

                fpu_val_5_22 - fpu_val_4_8;
                result = (fpu_val_5_22 < fpu_val_4_8 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_5_22, fpu_val_4_8) ? 1 : 0) << 0xa
                    | (fpu_val_5_22 == fpu_val_4_8 ? 1 : 0) << 0xe | 0x2800;

                if (*(&result + 1) & 1)
                {
                label_412833:
                    long double f16_1 = 0.0f;
                    fpu_val_6_14 - f16_1;
                    result = (fpu_val_6_14 < f16_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_14, f16_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_14 == f16_1 ? 1 : 0) << 0xe | 0x3800;

                    if (*(&result + 1) & 0x41)
                    {
                        *(source_val + 0xdcc) = fpu_val_7_20;
                        long double fpu_val_6_26 = fpu_val_7_20 * 0.5f;
                        *(source_val + 0xdd0) = fpu_val_6_26;
                        *(source_val + 0xdd4) = fpu_val_6_26;
                        *(source_val + 0xdd8) = fpu_val_7_20;
                    }
                    else
                    {
                        long double fpu_val_6_24 = fpu_val_7_20 * 0.5f;
                        *(source_val + 0xdcc) = fpu_val_6_24;
                        *(source_val + 0xdd0) = fpu_val_7_20;
                        *(source_val + 0xdd4) = fpu_val_7_20;
                        *(source_val + 0xdd8) = fpu_val_6_24;
                    }
                }
                else
                {
                    long double fpu_val_5_25 = item_8_1;
                    long double f17_1 = 0.0f;
                    fpu_val_5_25 - f17_1;
                    long double fpu_val_5_26 = item_8_1;
                    result = (fpu_val_5_25 < f17_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_5_25, f17_1) ? 1 : 0) << 0xa
                        | (fpu_val_5_25 == f17_1 ? 1 : 0) << 0xe | 0x2800;

                    if (*(&result + 1) & 1)
                        fpu_val_5_26 = -(fpu_val_5_26);

                    long double f20_1 = 0.0f;
                    fpu_val_6_14 - f20_1;
                    long double fpu_val_4_11 = fpu_val_6_14;
                    result = (fpu_val_6_14 < f20_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_14, f20_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_14 == f20_1 ? 1 : 0) << 0xe | 0x2000;

                    if (*(&result + 1) & 1)
                        fpu_val_4_11 = -(fpu_val_4_11);

                    fpu_val_5_26 - fpu_val_4_11;
                    result = (fpu_val_5_26 < fpu_val_4_11 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_5_26, fpu_val_4_11) ? 1 : 0) << 0xa
                        | (fpu_val_5_26 == fpu_val_4_11 ? 1 : 0) << 0xe | 0x2800;

                    if (*(&result + 1) & 1)
                        goto label_412833;

                    long double fpu_val_6_20 = item_8_1;
                    long double f25_1 = 0.0f;
                    fpu_val_6_20 - f25_1;
                    result = (fpu_val_6_20 < f25_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_20, f25_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_20 == f25_1 ? 1 : 0) << 0xe | 0x3800;

                    if (*(&result + 1) & 0x41)
                        goto label_412622;

                    long double fpu_val_6_22 = fpu_val_7_20 * 0.5f;
                    *(source_val + 0xdcc) = fpu_val_6_22;
                    result = fpu_val_6_22;
                    *(source_val + 0xdd0) = fpu_val_7_20;
                    *(source_val + 0xdd4) = fpu_val_7_20;
                    *(source_val + 0xdd8) = result;
                }
            }
            else
            {
                long double fpu_val_5_17 = item_c_1;
                long double f13_1 = 0.0f;
                fpu_val_5_17 - f13_1;
                long double fpu_val_5_18 = item_c_1;
                result = (fpu_val_5_17 < f13_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_5_17, f13_1) ? 1 : 0) << 0xa
                    | (fpu_val_5_17 == f13_1 ? 1 : 0) << 0xe | 0x2800;

                if (*(&result + 1) & 1)
                    fpu_val_5_18 = -(fpu_val_5_18);

                long double f15_1 = 0.0f;
                fpu_val_6_14 - f15_1;
                long double fpu_val_4_5 = fpu_val_6_14;
                result = (fpu_val_6_14 < f15_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_14, f15_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_14 == f15_1 ? 1 : 0) << 0xe | 0x2000;

                if (*(&result + 1) & 1)
                    fpu_val_4_5 = -(fpu_val_4_5);

                fpu_val_5_18 - fpu_val_4_5;
                result = (fpu_val_5_18 < fpu_val_4_5 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_5_18, fpu_val_4_5) ? 1 : 0) << 0xa
                    | (fpu_val_5_18 == fpu_val_4_5 ? 1 : 0) << 0xe | 0x2800;

                if (*(&result + 1) & 0x41)
                    goto label_412780;

                long double fpu_val_6_16 = item_c_1;
                long double f18_1 = 0.0f;
                fpu_val_6_16 - f18_1;
                result = (fpu_val_6_16 < f18_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_16, f18_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_16 == f18_1 ? 1 : 0) << 0xe | 0x3800;

                if (*(&result + 1) & 0x41)
                {
                    long double fpu_val_6_18 = fpu_val_7_20 * 0.5f;
                    *(source_val + 0xdcc) = fpu_val_6_18;
                    *(source_val + 0xdd0) = fpu_val_6_18;
                    *(source_val + 0xdd4) = fpu_val_7_20;
                }
                else
                {
                    *(source_val + 0xdcc) = fpu_val_7_20;
                    *(source_val + 0xdd0) = fpu_val_7_20;
                    fpu_val_7_20 = fpu_val_7_20 * 0.5f;
                    *(source_val + 0xdd4) = fpu_val_7_20;
                }

                *(source_val + 0xdd8) = fpu_val_7_20;
            }
        }
        else
        {
            long double fpu_val_7_16 = param_2[3];
            long double f9_1 = 0.0f;
            fpu_val_7_16 - f9_1;

            if (!(*(&((fpu_val_7_16 < f9_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_16, f9_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_16 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_412644;

            long double fpu_val_7_17 = param_2[4];
            long double f11_1 = 0.0f;
            fpu_val_7_17 - f11_1;

            if (!(*(&((fpu_val_7_17 < f11_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_17, f11_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_17 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_412644;

            long double fp0_2;
            fp0_2 = Sys_AllocateMemory_14(Level_SetMission_5());
            fpu_val_7_20 = (fp0_2 + 1.0) * 0.40000000000000002;
        label_412622:
            *(source_val + 0xdcc) = fpu_val_7_20;
            *(source_val + 0xdd0) = fpu_val_7_20;
            *(source_val + 0xdd4) = fpu_val_7_20;
            *(source_val + 0xdd8) = fpu_val_7_20;
        }
        result = *(source_val + 0x52c);

        if (!result)
        {
            long double fpu_val_7_23 = param_2[2];
            long double f19_1 = 0.0f;
            fpu_val_7_23 - f19_1;
            result = (fpu_val_7_23 < f19_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_23, f19_1) ? 1 : 0) << 0xa
                | (fpu_val_7_23 == f19_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
            {
            label_4128cd:
                result = param_2[3];
                float entity_5 = param_2[4];
                long double fpu_val_7_26 = param_2[2];
                long double f21_1 = 0.0f;
                fpu_val_7_26 - f21_1;
                float result_1 = result;
                result = (fpu_val_7_26 < f21_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_26, f21_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_26 == f21_1 ? 1 : 0) << 0xe | 0x3800;

                if (!(*(&result + 1) & 0x40))
                {
                label_412912:
                    long double fpu_val_6_29 = entity_5;
                    long double fpu_val_5_29 = result_1;
                    long double fpu_val_6_31 = 1.0 / sqrtl(fpu_val_7_26 * fpu_val_7_26
                        + fpu_val_5_29 * fpu_val_5_29 + fpu_val_6_29 * fpu_val_6_29);
                    fpu_val_7_26 = fpu_val_7_26 * fpu_val_6_31;
                    result_1 = result_1 * fpu_val_6_31;
                }
                else
                {
                    long double fpu_val_6_27 = result_1;
                    long double f23_1 = 0.0f;
                    fpu_val_6_27 - f23_1;
                    result = (fpu_val_6_27 < f23_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_27, f23_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_27 == f23_1 ? 1 : 0) << 0xe | 0x3800;

                    if (!(*(&result + 1) & 0x40))
                        goto label_412912;

                    long double fpu_val_6_28 = entity_5;
                    long double f26_1 = 0.0f;
                    fpu_val_6_28 - f26_1;
                    result = (fpu_val_6_28 < f26_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_28, f26_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_28 == f26_1 ? 1 : 0) << 0xe | 0x3800;

                    if (!(*(&result + 1) & 0x40))
                        goto label_412912;
                }

                *(source_val + 0x678) = *(source_val + 0x678);
                *(source_val + 0x670) = fpu_val_7_26 * 189.629623f + *(source_val + 0x670);
                *(source_val + 0x674) = result_1 * 189.629623f + *(source_val + 0x674);
            }
            else
            {
                long double fpu_val_7_24 = param_2[3];
                long double f22_1 = 0.0f;
                fpu_val_7_24 - f22_1;
                result = (fpu_val_7_24 < f22_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_24, f22_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_24 == f22_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                    goto label_4128cd;

                long double fpu_val_7_25 = param_2[4];
                long double f24_1 = 0.0f;
                fpu_val_7_25 - f24_1;
                result = (fpu_val_7_25 < f24_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_25, f24_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_25 == f24_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                    goto label_4128cd;
            }
        }
    }

    return result;
}
