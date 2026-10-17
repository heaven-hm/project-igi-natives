// Original IGI.EXE function: HumanPlayer_Cleanup_2 (VA 0x00413120; static CFG gate PASS, CFG score 0.951).
#include "HumanPlayer_Cleanup_2.h"
void* HumanPlayer_Cleanup_2(void* context, int32_t param_2)

{
    void* flagP = *(Level_LoadLevel_6() + 0x5c);
    int32_t data_1 = g_c28b44;
    int32_t entity_val = g_c28b48;
    void* result;

    if (!*(context + 0xde4))
    {
        int32_t entity_2 =
            (*(((FX_DebrisSpawn_8() * 0x180 + AI_UpdateOrders_17()) << 2) + &g_a96ae0))(context, param_2);
        float item_e0;
        float item_d4;
        float item_d0;
        float item_cc;
        float item_a8;

        if (*(context + 0xd68))
        {
            float item_f8_1 = entity_val;
            int32_t item_120_1 = entity_2;
            float item_f4_1 = data_1;
            int32_t item_124_1 = entity_2;
            int32_t item_128_1 = entity_2;
            int32_t item_12c_1 = entity_2;
            Sys_ExecuteBytecode_14(item_f4_1 * 0.315625012f, item_f8_1 * 0.837499976f,
                *(context + 0xd64) / *(context + 0xd60) * item_f4_1 * 0.368750006f,
                item_f8_1 * 0.010416667f, 128.0f, 0.0f, 0.0f, 0x3f000000, 0x80000, 0);
            item_e0 = item_f8_1 * 0.0187500007f;
            float item_d8_1 = item_f4_1 * 0.375f;
            float item_f0_1 = item_f8_1 * 0.833333313f;
            float item_ec_1 = item_f4_1 * 0.3125f;
            Sys_ExecuteBytecode_14(item_ec_1, item_f0_1, item_d8_1, item_e0, 0.0f, 100.0f, 0.0f, 0x3f000000, 0x80000, 0);
            long double fpu_val_7_21 = item_ec_1;
            float item_ec_2 = fpu_val_7_21;
            int32_t item_90_1 = 0;
            int32_t item_8c_1 = 0x3f800000;
            int32_t item_88_1 = 0;
            int32_t item_94_1 = 0x3f800000;
            int32_t item_9c_1 = 0;
            float item_f4_2 = item_d8_1 + fpu_val_7_21;
            int32_t item_98_1 = 0;
            int32_t item_a0_1 = 0x3a83126f;
            int32_t item_6c_1 = 0;
            int32_t item_68_1 = 0x3f800000;
            float item_f0_2 = item_e0 + item_f0_1;
            item_a8 = fpu_val_7_21;
            float* item_c4_1 = &item_a8;
            float item_a4_1 = item_f0_1;
            float item_84_1 = item_f4_2;
            int32_t entity_6 = g_a84a54;
            int32_t item_64_1 = 0;
            int32_t item_70_1 = 0x3f800000;
            int32_t item_78_1 = 0;
            int32_t item_74_1 = 0;
            int32_t item_7c_1 = 0x3a83126f;
            item_d4 = 1.40129846e-45.0f;
            item_cc = 0.0f;
            int32_t item_c8_1 = 2;
            item_d0 = 0.0f;
            float item_80_1 = item_f0_1;
            (*((entity_6 << 2) + &g_a94e84))(&item_d4);
            item_a8 = item_ec_2;
            float item_a4_2 = item_f0_2;
            float item_84_2 = item_f4_2;
            float item_80_2 = item_f0_2;
            (*((g_a84a54 << 2) + &g_a94e84))(&item_d4);
            float item_a4_3 = item_f0_1;
            item_a8 = item_ec_2;
            float item_84_3 = item_ec_2;
            float item_80_3 = item_f0_2;
            (*((g_a84a54 << 2) + &g_a94e84))(&item_d4);
            item_a8 = item_f4_2;
            float item_a4_4 = item_f0_1;
            float item_84_4 = item_f4_2;
            float item_80_4 = item_f0_2 + 1.0f;
            entity_2 = (*((g_a84a54 << 2) + &g_a94e84))(&item_d4);
        }

        if (SoundSys_SetFrequency_11())
        {
            void* item_dc_1 = context;
            double item_38;
            AI_FireWeapon_23(&item_38, *(context + 0x4ec));
            AI_UpdateOrders_23(&item_d4, *(context + 0x4ec));
            double* item_10c_4 = &item_e0;
            double item_b8_2 = item_d0 * 4096000.0;
            double item_b0_2 = item_cc * 4096000.0;
            double item_c0 = item_38 + item_d4 * 4096000.0;
            double item_30;
            double item_b8_3 = item_30 + item_b8_2;
            double item_28;
            double item_b0_3 = item_28 + item_b0_2;
            char data_24 = Level_LoadObjects_4();
            DynObj_FindSymbol_11(Level_StartMission_4(), &item_a8, &item_38, &item_c0, 1, data_24, item_10c_4,
                0xffffffff);
            int32_t item_50;
            void item_20;

            if (!item_50)
                Game_DataSymbolLoad(&item_20, "RANGE: 1000+M\n");
            else
            {
                double item_48;
                item_10c_4 = item_48 * 0.000244140625;
                int32_t temp_12 = Game_DataSymbolLoad(&item_20, "RANGE: %0.2fM\n");

                if (item_a8)
                {
                    int16_t data_28 = DynObj_LookupHashItem_5();
                    temp_12 = *(item_a8 + 0x1c);

                    if (TaskType_IsDerivedFrom(temp_12, data_28))
                    {
                        int32_t item_108_6 = *(item_a8 + 0x6c) + 0x14;
                        AI_CheckHearing_18(context, "Model: %s\n");
                    }
                }
            }

            entity_2 = AI_CheckHearing_18(context, &item_20);
        }

        result = *(flagP + 0xe8);

        if (result == 1)
        {
            long double fpu_val_7_33 = *(context + 0xdcc);
            item_e0 = fpu_val_7_33;
            long double f0_1 = 0.0f;
            fpu_val_7_33 - f0_1;
            result = (fpu_val_7_33 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_33, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_7_33 == f0_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
            {
            label_41364b:
                float entity_17 = item_e0;
                float item_150_2 = entity_17;
                float item_154_2 = entity_17;
                result = Sys_PushStack_14(0.0f, 0.0f, data_1, entity_val, 255.0f, 0.0f, 0.0f, 255.0f, 0.0f, 0.0f, 255.0f, 0.0f, 0.0f,
                    255.0f, 0.0f, 0.0f, entity_17, *(context + 0xdd8), *(context + 0xdd0), *(context + 0xdd4), 0,
                    0x80000, 0);
            }
            else
            {
                long double fpu_val_7_34 = *(context + 0xdd0);
                long double f1_1 = 0.0f;
                fpu_val_7_34 - f1_1;
                result = (fpu_val_7_34 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_34, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_34 == f1_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                    goto label_41364b;

                long double fpu_val_7_35 = *(context + 0xdd4);
                long double f3_1 = 0.0f;
                fpu_val_7_35 - f3_1;
                result = (fpu_val_7_35 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_35, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_35 == f3_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                    goto label_41364b;

                long double fpu_val_7_36 = *(context + 0xdd8);
                long double f5_1 = 0.0f;
                fpu_val_7_36 - f5_1;
                result = (fpu_val_7_36 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_36, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_36 == f5_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                    goto label_41364b;
            }

            long double fpu_val_7_39 = *(context + 0xddc);
            long double f2_1 = 0.0f;
            fpu_val_7_39 - f2_1;
            result = (fpu_val_7_39 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_39, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_39 == f2_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
            {
                float item_f8_3 = *(context + 0xddc);
                long double fpu_val_7_40 = item_f8_3;
                long double f4_1 = 0.0f;
                fpu_val_7_40 - f4_1;

                if (!(*(&((fpu_val_7_40 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_40, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_40 == f4_1 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double fpu_val_7_41 = item_f8_3;
                    long double f6_1 = 0.99000001f;
                    fpu_val_7_41 - f6_1;

                    if (!(*(&((fpu_val_7_41 < f6_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_41, f6_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_41 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        item_f8_3 = 0.99000001f;
                }
                else
                    item_f8_3 = 0.0f;

                int32_t item_11c_3 = entity_2;
                int32_t item_120_4 = entity_2;
                return Sys_ExecuteBytecode_14(0.0f, 0.0f, data_1, entity_val, 255.0f, 255.0f, 255.0f, item_f8_3, 0x80000, 0);
            }
        }
    }
    else
    {
        result = Table_GetAt(context + 0x4c4, 0);

        if (result)
        {
            uint32_t data_4 = FX_DebrisSpawn_8();
            int32_t data_5 = 0;
            data_5 = *(result + 0x1c);
            return (*(((data_4 * 0x180 + data_5) << 2) + &g_a96ae0))(result, param_2);
        }
    }

    return result;
}
