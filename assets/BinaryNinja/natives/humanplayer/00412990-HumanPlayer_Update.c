// IGI native provenance: HumanPlayer_Update - 0x00412990 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00412990-HumanPlayer_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_Update.h"
int32_t HumanPlayer_Update(float context, float param_2)

{
    float source_val = context;
    int16_t data_val;
    data_val = *(source_val + 0xcf6);

    if (data_val)
    {
        int32_t* data_1 = Config_GetActivePlayerProfileRecord();

        if (!data_1)
            return Warning_Show("No active playerprofile found");

        double item_18;
        AI_FireWeapon_23(&item_18, *(source_val + 0x4ec));
        double* data_4 = *(param_2 + 4);
        double item_30 = item_18 - *data_4;
        double item_10;
        double item_28_1 = item_10 - data_4[1];
        double item_8;
        double item_20_1 = item_8 - data_4[2];
        long double fp0_1 = Sys_OpenFileStream_11(&item_30);
        long double fpu_val_6_3 = (*(param_2 + 0x10) + *(param_2 + 0xc)) * 1.5f;
        fp0_1 - fpu_val_6_3;
        int16_t data_6 = (fp0_1 < fpu_val_6_3 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, fpu_val_6_3) ? 1 : 0) << 0xa
            | (fp0_1 == fpu_val_6_3 ? 1 : 0) << 0xe | 0x3800;

        if (*(&data_6 + 1) & 1)
        {
            data_6 = *(source_val + 0x52c);

            if (!data_6)
            {
                long double fpu_val_6_4 = item_30;
                float item_38_1 = item_28_1;
                long double fpu_val_5_3 = item_20_1;
                long double f3_1 = 0.0f;
                fpu_val_6_4 - f3_1;

                if (!(*(&((fpu_val_6_4 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_4, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_4 == f3_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
                {
                label_412a79:
                    long double fpu_val_4_3 = item_38_1;
                    long double fpu_val_5_5 = 1.0
                        / sqrtl(fpu_val_6_4 * fpu_val_6_4 + fpu_val_4_3 * fpu_val_4_3 + fpu_val_5_3 * fpu_val_5_3);
                    fpu_val_6_4 = fpu_val_6_4 * fpu_val_5_5;
                    item_38_1 = item_38_1 * fpu_val_5_5;
                }
                else
                {
                    long double fpu_val_4_2 = item_38_1;
                    long double f5_1 = 0.0f;
                    fpu_val_4_2 - f5_1;

                    if (!(*(&((fpu_val_4_2 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_4_2, f5_1) ? 1 : 0) << 0xa
                            | (fpu_val_4_2 == f5_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
                        goto label_412a79;

                    long double f7_1 = 0.0f;
                    fpu_val_5_3 - f7_1;

                    if (!(*(&((fpu_val_5_3 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_5_3, f7_1) ? 1 : 0) << 0xa
                            | (fpu_val_5_3 == f7_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
                        goto label_412a79;
                }

                *(source_val + 0x678) = *(source_val + 0x678);
                *(source_val + 0x670) = fpu_val_6_4 * 758.518494f + *(source_val + 0x670);
                *(source_val + 0x674) = item_38_1 * 758.518494f + *(source_val + 0x674);
            }
        }

        long double f1_1 = 102400.0f;
        fp0_1 - f1_1;

        if (*(&((fp0_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f1_1) ? 1 : 0) << 0xa
                | (fp0_1 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            *(source_val + 0xdc8) = 1.0 - fp0_1 * 9.76562478e-06.0f + *(source_val + 0xdc8);

        long double fpu_val_7_8 = fp0_1 - *(param_2 + 0xc) * 3.0f;
        long double f2_1 = 0.0f;
        fpu_val_7_8 - f2_1;
        long double fpu_val_7_10;

        if (!(*(&((fpu_val_7_8 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_8 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            fpu_val_7_10 = 1.0f - fpu_val_7_8 / (*(param_2 + 0xc) * 6.0f);
            long double f4_1 = 0.0f;
            fpu_val_7_10 - f4_1;

            if (!(*(&((fpu_val_7_10 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_10, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_10 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double f6_1 = 0.0f;
                fpu_val_7_10 - f6_1;

                if (!(*(&((fpu_val_7_10 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_10, f6_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_10 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    goto label_412b63;
            }
        }
        else
        {
            fpu_val_7_10 = 1.0f;
        label_412b63:
            int32_t entity_1 = *(param_2 + 0x14);
            int32_t item_54_2 = entity_1;
            int32_t item_58_2 = entity_1;
            AI_CheckSector_23(*(source_val + 0x4ec), fpu_val_7_10 * 204.800003f, fpu_val_7_10 * 0.0130899698f, entity_1);
        }
        *(source_val + 0x2e8) = 0xd;
        int32_t item_50_3 = 1;
        int32_t item_54_5 = FX_FragmentSimulate_14(source_val + 0x254, 0xd);
        float item_5c_2 = source_val;
        long double fp0_2 = Level_CheckQTaskID_5(param_2, source_val + 0x20, *(source_val + 0xa0) * 0.333333343f);
        long double f8_1 = 0.0f;
        fp0_2 - f8_1;
        data_val = (fp0_2 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_2, f8_1) ? 1 : 0) << 0xa
            | (fp0_2 == f8_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&data_val + 1) & 0x40))
        {
            int32_t saved_edi_3 = *data_1;
            context = fp0_2 * *(source_val + 0x2cc);

            if (!saved_edi_3)
                context = context * 0.75f;
            else if (saved_edi_3 != 1)
            {
                if (saved_edi_3 == 2)
                    context = context * 1.25f;
                else
                {
                    int32_t saved_edi_1 = saved_edi_3;
                    Warning_Show("Difficulty level not defined %d");
                }
            }

            if (!Human_HitDamage())
            {
                *(source_val + 0x2c8) = context + *(source_val + 0x2c8);
                *(source_val + 0x254) = context + *(source_val + 0x254);
            }

            if (!*(source_val + 0xcf5))
                AI_MoveToNode_21(source_val, "player_xplhit_", 1);

            *(source_val + 0xdcc) = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
            *(source_val + 0xdd0) = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
            *(source_val + 0xdd4) = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
            int32_t data_19;
            long double fp0_6;
            fp0_6 = Sys_AllocateMemory_14(Level_SetMission_5());
            *(source_val + 0xdd8) = (fp0_6 + 1.0) * 0.40000000000000002;
            return data_19;
        }
    }

    return data_val;
}
