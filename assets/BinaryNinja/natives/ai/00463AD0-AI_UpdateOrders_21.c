// IGI native provenance: AI_UpdateOrders_21 - 0x00463AD0 - CFG score 97.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00463AD0-AI_UpdateOrders_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdateOrders_21.h"
void* AI_UpdateOrders_21(void* context, int32_t* param_2, int32_t param_3)

{
    void* result = Config_GetActivePlayerProfileRecord();

    if (*(result + 8))
    {
        float item_f4 = *param_2;
        long double fpu_val_7_1 = item_f4;
        long double f2_1 = 0.0f;
        fpu_val_7_1 - f2_1;
        float item_f0_1 = param_2[1];
        float item_ec_1 = param_2[2];

        if (!(*(&((fpu_val_7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_463b37:
            long double fpu_val_7_4 = item_ec_1;
            long double fpu_val_6_1 = item_f0_1;
            long double fpu_val_5_1 = item_f4;
            long double fpu_val_7_6 =
                1.0 / sqrtl(fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_1 * fpu_val_6_1 + fpu_val_7_4 * fpu_val_7_4);
            item_f4 = item_f4 * fpu_val_7_6;
            item_f0_1 = item_f0_1 * fpu_val_7_6;
            item_ec_1 = item_ec_1 * fpu_val_7_6;
        }
        else
        {
            long double fpu_val_7_2 = item_f0_1;
            long double f3_1 = 0.0f;
            fpu_val_7_2 - f3_1;

            if (!(*(&((fpu_val_7_2 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_2, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_2 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_463b37;

            long double fpu_val_7_3 = item_ec_1;
            long double f4_1 = 0.0f;
            fpu_val_7_3 - f4_1;

            if (!(*(&((fpu_val_7_3 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_3, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_3 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_463b37;
        }

        double item_b4_1 = item_ec_1;
        long double fpu_val_7_9 = item_f4 * 12288.0;
        double item_90;
        memcpy(&item_90, param_3 + 8, 0x18);
        double item_bc_2 = item_f0_1 * 12288.0;
        double item_b4_2 = item_b4_1 * 12288.0;
        void* item_74_1 = context;
        double item_c4 = item_90 + fpu_val_7_9;
        double item_88;
        double item_bc_3 = item_88 + item_bc_2;
        double item_80;
        double item_b4_3 = item_80 + item_b4_2;
        char data_3 = Level_LoadObjects_4();
        void item_78;
        void* item_70;
        DynObj_FindSymbol_11(Level_StartMission_4(), &item_70, &item_90, &item_c4, 1, data_3, &item_78,
            0x20000000);
        void* item_24;
        int32_t item_20;
        int32_t item_18;

        if (item_18 && item_24 && !item_20 && *(*(item_24 + 0x258) + 0x58))
        {
            float item_d4_1 = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0f) * 614.400024f;
            uint32_t data_10 = Sys_FreeMemory_14(Level_SetMission_5(), 2);
            float data_13;

            if (!data_10)
                data_13 = g_5bdb08 + 0x18;
            else if (data_10 != 1)
                data_13 = item_d4_1;
            else
                data_13 = g_5bdb10 + 0x18;

            int32_t* item_a0 = &item_70;
            float item_98_1 = data_13;
            int32_t item_9c_1 = 0;
            float item_94_1 = item_d4_1;
            char data_14 = Weapon_CheckAmmo_8();
            void* entity_7 = item_70;
            int32_t temp_4 = 0;
            temp_4 = *(entity_7 + 0x1c);
            int32_t data_19 = *(((data_14 * 0x180 + temp_4) << 2) + &g_a96ae0);

            if (data_19)
                data_19(entity_7, &item_a0);
        }

        int32_t* data_20 = *(context + 0x838);
        int32_t item_e8 = 0;
        int32_t item_e4_1 = 0;
        int32_t item_e0_1 = 0;
        int32_t item_d0 = 0x42fe0000;
        int32_t item_cc_1 = 0x42fe0000;
        int32_t item_c8_1 = 0x42fe0000;
        int32_t item_dc = 0x4499999a;
        int32_t item_d8_1 = 0x4499999a;
        struct status_msg* flagP1;

        if (data_20)
            flagP1 = *data_20;

        if (!data_20 || !flagP1)
        {
            void* entity_8 = g_5bdad4;
            int32_t f0_1 = 0xf / *(*(entity_8 + 0x24) + 4);
            void* data_24 = Level_StartMission_4();
            flagP1 = Script_FormatString_30(Script_FormatString(), data_24, entity_8 + 0x18, &item_e8, &item_d0, &item_dc,
                0x48c80000, 0x1080000, f0_1, 0, 0, 2, 0);
            int32_t* data_27 = *(context + 0x838);

            if (data_27)
                Qtask_UpdateList(data_27);

            *(context + 0x838) = QTask_LinkEventHandler_2(flagP1);
        }

        memcpy(&item_90, param_3 + 8, 0x18);
        int32_t item_ac = 0;
        int32_t item_a8 = 0;
        int32_t item_a4_1 = 0;
        Script_SpawnNewTask_31(flagP1, &item_90, &item_ac, 0x3f800000, 0, 0, 0x3f800000, 0xf, 0);
        item_e8 = 0;
        int32_t item_e4_2 = 0;
        void** data_29 = *(context + 0x83c);
        int32_t item_e0_2 = 0xc16ddf15;
        item_d0 = 0x42fe0000;
        int32_t item_cc_2 = 0x42fe0000;
        int32_t item_c8_2 = 0x42fe0000;
        item_dc = 0x42cccccd;
        int32_t item_d8_2 = 0x42cccccd;
        struct status_msg* source_4;

        if (data_29)
            source_4 = *data_29;

        if (!data_29 || !source_4)
        {
            uint32_t temp_7 = g_5bdad0 + 0x18;
            void* data_30 = Level_StartMission_4();
            source_4 = Script_FormatString_30(Script_FormatString(), data_30, temp_7, &item_e8, &item_d0, &item_dc, 0x48c80000,
                0x80000, 0, 0, 0, 0xa, AI_AlertAllies_21);
            int32_t* data_33 = *(context + 0x83c);

            if (data_33)
                Qtask_UpdateList(data_33);

            *(context + 0x83c) = QTask_LinkEventHandler_2(source_4);
        }

        int32_t i_3 = Sys_FreeMemory_14(Level_SetMission_5(), 3) + 3;

        if (i_3 > 0)
        {
            int32_t i_2 = i_3;
            int32_t i;

            do
            {
                int32_t entity_10;
                long double fp0_2;
                fp0_2 = Sys_AllocateMemory_14(Level_SetMission_5());
                long double fpu_val_7_19 = fp0_2 - 0.5f;
                int32_t item_114_2 = entity_10;
                Script_ParseEnumInt32_31(source_4, param_3 + 8, &item_f4, 0.174532935f, 379.0f, 606.0f, 0x3f800000,
                    (fpu_val_7_19 + fpu_val_7_19) * 0.052359879f + 0.0127990814f, 0, 0x3f800000, 0x1e, 7);
                i = i_2;
                i_2 -= 1;
            } while (i != 1);
        }

        float temp_8 = param_2[1];
        float data_39 = param_2[2];
        item_f4 = *param_2;
        long double fpu_val_7_23 = item_f4;
        long double f7_1 = 0.0f;
        fpu_val_7_23 - f7_1;
        float item_ec_2 = data_39;
        float item_f0_2 = temp_8;

        if (!(*(&((fpu_val_7_23 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_23, f7_1) ? 1 : 0) << 0xa
            | (fpu_val_7_23 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        {
        label_463fb5:
            long double fpu_val_6_19 = item_ec_2;
            long double fpu_val_5_3 = item_f0_2;
            long double fpu_val_7_24 =
                1.0 / sqrtl(fpu_val_7_23 * fpu_val_7_23 + fpu_val_5_3 * fpu_val_5_3 + fpu_val_6_19 * fpu_val_6_19);
            fpu_val_7_23 = fpu_val_7_23 * fpu_val_7_24;
            item_f0_2 = item_f0_2 * fpu_val_7_24;
            item_ec_2 = item_ec_2 * fpu_val_7_24;
        }
        else
        {
            long double fpu_val_6_17 = item_f0_2;
            long double f8_1 = 0.0f;
            fpu_val_6_17 - f8_1;

            if (!(*(&((fpu_val_6_17 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_17, f8_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_17 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_463fb5;

            long double fpu_val_6_18 = item_ec_2;
            long double f10_1 = 0.0f;
            fpu_val_6_18 - f10_1;

            if (!(*(&((fpu_val_6_18 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_18, f10_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_18 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_463fb5;
        }

        item_f4 = -(fpu_val_7_23);
        float item_f0_3 = -(item_f0_2);
        float item_ec_3 = -(item_ec_2);
        item_e8 = 0;
        int32_t item_e4_3 = 0;
        int32_t item_e0_3 = 0xc232674f;
        result = Sys_FreeMemory_14(Level_SetMission_5(), 3) + 2;

        if (result > 0)
        {
            void* dest_3 = result;
            void* i_1;

            do
            {
                int32_t entity_12;
                long double fp0_3;
                fp0_3 = Sys_AllocateMemory_14(Level_SetMission_5());
                long double fpu_val_7_31 = fp0_3 - 0.5f;
                int32_t item_114_4 = entity_12;
                result = Script_ParseEnumInt32_31(source_4, param_3 + 8, &item_f4, 1.22173047f, 37.0f, 113.0f, 0x3f800000,
                    (fpu_val_7_31 + fpu_val_7_31) * 0.052359879f + 0.0127990814f, 0, 0x3f800000, 0x1e, 7);
                i_1 = dest_3;
                dest_3 -= 1;
            } while (i_1 != 1);
        }
    }

    return result;
}
