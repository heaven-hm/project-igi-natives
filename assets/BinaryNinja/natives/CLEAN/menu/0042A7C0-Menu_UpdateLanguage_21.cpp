// IGI native provenance: Menu_UpdateLanguage_21 - 0x0042A7C0 - CFG score 89.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042A7C0-Menu_UpdateLanguage_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_UpdateLanguage_21.h"
int32_t* Menu_UpdateLanguage_21(void* context, double* param_2, int32_t param_3)

{
    int32_t* result = QTask_DeleteTask_2(context, g_57bcb8);
    int32_t* i = result;

    if (i)
    {
        double* item_84_1 = &param_2[3];

        do
        {
            long double fpu_val_7_2 = i[0x1dc] * 4096.0f;
            memcpy(&i[0x1b0], &i[8], 0x18);
            float item_68_1 = fpu_val_7_2;
            float item_64_1 = i[0x1dd] * 4096.0f;
            memcpy(&i[0x1a5], &i[0x1c], 0x28);
            double item_48;
            double item_40;
            double item_38;
            double* dest_4;

            if (Sys_ResolveSymbol_11(param_2, item_84_1))
            {
                i[0x1c] = 0x3f800000;
                i[0x20] = 0x3f800000;
                i[0x24] = 0x3f800000;
                i[0x1d] = 0;
                i[0x1e] = 0;
                i[0x1f] = 0;
                i[0x21] = 0;
                i[0x22] = 0;
                i[0x23] = 0;
                i[0x25] = 0;
                memcpy(&item_48, param_2, 0x18);
                dest_4 = item_84_1;
            }
            else
            {
                float item_78 = *item_84_1 - *param_2;
                float item_74_1 = item_84_1[1] - item_84_1[-2];
                float item_70_1 = item_84_1[2] - item_84_1[-1];
                Sys_ResolveSymbol_12(&i[0x1c], &item_78);
                item_78 = i[0x22];
                float temp_5 = i[0x23];
                float entity_3 = i[0x24];
                item_78 = -(item_78);
                float item_74_3 = -(temp_5);
                float item_70_3 = -(entity_3);
                i[0x22] = i[0x1c];
                int32_t temp_7 = i[0x1e];
                i[0x23] = i[0x1d];
                i[0x24] = temp_7;
                int32_t item_28_1 = i[0x22];
                int32_t data_6 = i[0x23];
                i[0x1c] = item_78;
                int32_t item_1c_1 = data_6;
                int32_t data_7 = i[0x24];
                i[0x1d] = item_74_3;
                int32_t item_10_1 = data_7;
                i[0x1e] = item_70_3;
                int32_t temp_11 = i[0x1f];
                float item_30 = i[0x1c];
                int32_t item_2c_1 = temp_11;
                int32_t item_24_1 = i[0x1d];
                int32_t item_20_1 = i[0x20];
                int32_t item_18_1 = i[0x1e];
                int32_t item_14_1 = i[0x21];
                int32_t item_c_1 = i[0x25];
                memcpy(&i[0x1c], &item_30, 0x28);
                dest_4 = item_84_1;
                item_48 = (*dest_4 - *param_2) * i[0x1d2] + *param_2;
                item_40 = (dest_4[1] - dest_4[-2]) * i[0x1d2] + dest_4[-2];
                item_38 = (dest_4[2] - dest_4[-1]) * i[0x1d2] + dest_4[-1];
            }

            long double fpu_val_7_31 = item_64_1 * i[0x1e] + item_68_1 * i[0x1d];
            float item_5c_1 = item_68_1 * i[0x20] + item_64_1 * i[0x21];
            float item_58 = item_64_1 * i[0x24] + item_68_1 * i[0x23];
            item_48 = fpu_val_7_31 + item_48;
            item_40 = item_5c_1 + item_40;
            item_38 = item_58 + item_38;
            long double fpu_val_7_37 = i[0x27];
            long double fpu_val_6_9 = i[0x28];
            fpu_val_6_9 - fpu_val_7_37;
            long double fpu_val_7_38;

            if (!(*(&((fpu_val_6_9 < fpu_val_7_37 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_9, fpu_val_7_37) ? 1 : 0) << 0xa
                    | (fpu_val_6_9 == fpu_val_7_37 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_38 = i[0x28];
            else
                fpu_val_7_38 = i[0x27];

            long double fpu_val_6_10 = i[0x26];
            fpu_val_6_10 - fpu_val_7_38;
            long double fpu_val_7_40;

            if (*(&((fpu_val_6_10 < fpu_val_7_38 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_10, fpu_val_7_38) ? 1 : 0) << 0xa
                | (fpu_val_6_10 == fpu_val_7_38 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double fpu_val_7_41 = i[0x27];
                long double fpu_val_6_11 = i[0x28];
                fpu_val_6_11 - fpu_val_7_41;

                if (!(*(&((fpu_val_6_11 < fpu_val_7_41 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_11, fpu_val_7_41) ? 1 : 0) << 0xa
                        | (fpu_val_6_11 == fpu_val_7_41 ? 1 : 0) << 0xe) + 1) & 1))
                    fpu_val_7_40 = i[0x28];
                else
                    fpu_val_7_40 = i[0x27];
            }
            else
                fpu_val_7_40 = i[0x26];

            float item_94_4 = Render_ComputeNormals(i[0x1b]) * fpu_val_7_40;
            void* temp_15 = WorldObject_CommitTransform(Level_StartMission_4(), i, &item_48, item_94_4);
            void* item_80;
            int32_t* j;

            if (!param_3)
            {
                j = i[2];
                item_80 = &i[8];
                void* item_7c_1 = &i[0x1c];
            }

            int32_t data_15;

            if (param_3 || !*j || !j)
                data_15 = g_afa7e0;
            else
            {
                data_15 = g_afa7e0;

                do
                {
                    int32_t* temp_16 = *j;
                    void* entity_13;

                    if (!temp_16)
                        entity_13 = nullptr;
                    else
                    {
                        int32_t entity_10 = *temp_16;
                        int32_t entity_11 = -(entity_10);
                        entity_13 = (entity_11 - entity_11) & temp_16;
                    }

                    *((data_15 << 2) + &g_afa6e0) = entity_13;
                    g_afa7e0 = data_15 + 1;
                    uint32_t data_18 = DynObj_CreateMagicObject_6();
                    temp_15 = nullptr;
                    temp_15 = j[7];
                    int32_t data_19 = *(((data_18 * 0x180 + temp_15) << 2) + &g_a96ae0);

                    if (data_19)
                        temp_15 = data_19(j, &item_80);

                    data_15 = g_afa7e0 - 1;
                    g_afa7e0 = data_15;
                    j = *((data_15 << 2) + &g_afa6e0);
                } while (j);
            }

            void* entity_17 = i[0x3a];

            if (entity_17)
            {
                int32_t* i_1 = i;
                void* item_54 = &i[8];
                temp_15 = &i[0x1c];
                void* item_50_1 = temp_15;
                int32_t* j_1 = *(entity_17 + 8);

                if (*j_1 && j_1)
                {
                    do
                    {
                        int32_t* temp_18 = *j_1;
                        void* entity_21;

                        if (!temp_18)
                            entity_21 = nullptr;
                        else
                        {
                            int32_t entity_18 = *temp_18;
                            int32_t entity_19 = -(entity_18);
                            entity_21 = (entity_19 - entity_19) & temp_18;
                        }

                        *((data_15 << 2) + &g_afa6e0) = entity_21;
                        g_afa7e0 = data_15 + 1;
                        uint32_t data_23 = MagicObj_GetEventId();
                        int32_t data_24 = 0;
                        data_24 = j_1[7];
                        temp_15 = data_23 * 0x180 + data_24;
                        int32_t data_25 = *((temp_15 << 2) + &g_a96ae0);

                        if (data_25)
                            temp_15 = data_25(j_1, &item_54);

                        data_15 = g_afa7e0 - 1;
                        g_afa7e0 = data_15;
                        j_1 = *((data_15 << 2) + &g_afa6e0);
                    } while (j_1);
                }
            }

            temp_15 = g_57bcb8;
            result = QTask_TriggerEvent_2(i, temp_15);
            i = result;
            param_2 = &param_2[3];
            item_84_1 = &dest_4[3];
        } while (i);
    }

    return result;
}
