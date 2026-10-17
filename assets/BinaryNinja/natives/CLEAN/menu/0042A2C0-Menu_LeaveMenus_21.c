// IGI native provenance: Menu_LeaveMenus_21 - 0x0042A2C0 - CFG score 91.1% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042A2C0-Menu_LeaveMenus_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_LeaveMenus_21.h"
char* Menu_LeaveMenus_21(void* context, int32_t param_2)

{
    int32_t* i = QTask_DeleteTask_2(context, g_57bcb8);
    bool flag_0 = !*(context + 0x880);
    float item_2b8 = *(context + 0x770) * 4096.0f;
    float item_2b4 = *(context + 0x774) * 4096.0f;
    float item_264;

    if (flag_0)
        item_264 = -(*(context + 0x74c));
    else
        item_264 = *(context + 0x74c);

    if (i)
    {
        int32_t* source_1 = &item_264;

        do
        {
            source_1 = &source_1[1];
            long double fpu_val_7_6 = i[0x1d3];

            if (!*(context + 0x880))
                fpu_val_7_6 = -(fpu_val_7_6);

            int16_t temp_1 = g_57bcb8;
            *source_1 = fpu_val_7_6;
            i = QTask_TriggerEvent_2(i, temp_1);
        } while (i);
    }

    int32_t* item_2e0_2 = &item_264;
    char item_2c9;
    double item_210;
    char* result = Script_ParseEnumReal32_32(*(context + 0x77c), nullptr, &item_210, &item_2c9, *(context + 0x768),
        *(context + 0x778) + 1, nullptr);
    result = item_2c9;

    if (result)
    {
        memcpy(context + 0x6c0, context + 0x20, 0x18);
        memcpy(context + 0x694, context + 0x70, 0x28);
        double item_2a4;
        double item_29c;
        double item_1f8;
        long double fpu_val_7_30;

        if (Sys_ResolveSymbol_11(&item_210, &item_1f8))
        {
            *(context + 0x70) = 1.0f;
            *(context + 0x80) = 0x3f800000;
            *(context + 0x90) = 0x3f800000;
            memcpy(&item_2a4, &item_210, 0x18);
            double item_294;
            fpu_val_7_30 = item_294;
            *(context + 0x74) = 0;
            *(context + 0x78) = 0;
            *(context + 0x7c) = 0;
            *(context + 0x84) = 0;
            *(context + 0x88) = 0;
            *(context + 0x8c) = 0;
            *(context + 0x94) = 0;
        }
        else
        {
            float item_2c8 = item_1f8 - item_210;
            double item_208;
            double item_1f0;
            float item_2c4_1 = item_1f0 - item_208;
            double item_200;
            double item_1e8;
            float item_2c0_1 = item_1e8 - item_200;
            Sys_ResolveSymbol_12(context + 0x70, &item_2c8);
            item_2c8 = *(context + 0x88);
            float temp_5 = *(context + 0x8c);
            float entity_6 = *(context + 0x90);
            float source_4 = *(context + 0x70);
            item_2c8 = -(item_2c8);
            *(context + 0x88) = source_4;
            int32_t temp_7 = *(context + 0x78);
            *(context + 0x8c) = *(context + 0x74);
            float item_2c4_3 = -(temp_5);
            *(context + 0x90) = temp_7;
            int32_t data_3 = *(context + 0x88);
            float item_2c0_3 = -(entity_6);
            long double fpu_val_7_20 = item_1f8 - item_210;
            *(context + 0x70) = item_2c8;
            int32_t item_284_1 = data_3;
            int32_t data_4 = *(context + 0x8c);
            *(context + 0x74) = item_2c4_3;
            long double fpu_val_7_21 = fpu_val_7_20 * *(context + 0x748);
            *(context + 0x78) = item_2c0_3;
            int32_t temp_11 = *(context + 0x7c);
            float item_28c = *(context + 0x70);
            int32_t item_288_1 = temp_11;
            int32_t item_280_1 = *(context + 0x74);
            int32_t item_27c_1 = *(context + 0x80);
            int32_t temp_13 = *(context + 0x84);
            int32_t item_274_1 = *(context + 0x78);
            int32_t item_278_1 = data_4;
            int32_t data_5 = *(context + 0x90);
            int32_t item_268_1 = *(context + 0x94);
            item_2a4 = fpu_val_7_21 + item_210;
            int32_t item_270_1 = temp_13;
            int32_t item_26c_1 = data_5;
            memcpy(context + 0x70, &item_28c, 0x28);
            item_29c = (item_1f0 - item_208) * *(context + 0x748) + item_208;
            fpu_val_7_30 = (item_1e8 - item_200) * *(context + 0x748) + item_200;
        }

        float item_2ac_1 = item_2b4 * *(context + 0x84) + item_2b8 * *(context + 0x80);
        float item_2a8_1 = item_2b8 * *(context + 0x8c) + item_2b4 * *(context + 0x90);
        item_2a4 = item_2b8 * *(context + 0x74) + item_2b4 * *(context + 0x78) + item_2a4;
        double item_29c_1 = item_2ac_1 + item_29c;
        double item_294_1 = item_2a8_1 + fpu_val_7_30;
        long double fpu_val_7_32 = *(context + 0x9c);
        long double fpu_val_6_9 = *(context + 0xa0);
        fpu_val_6_9 - fpu_val_7_32;
        long double fpu_val_7_33;

        if (!(*(&((fpu_val_6_9 < fpu_val_7_32 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_9, fpu_val_7_32) ? 1 : 0) << 0xa
                | (fpu_val_6_9 == fpu_val_7_32 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_33 = *(context + 0xa0);
        else
            fpu_val_7_33 = *(context + 0x9c);

        long double fpu_val_6_10 = *(context + 0x98);
        fpu_val_6_10 - fpu_val_7_33;
        long double fpu_val_7_35;

        if (*(&((fpu_val_6_10 < fpu_val_7_33 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_6_10, fpu_val_7_33) ? 1 : 0) << 0xa
            | (fpu_val_6_10 == fpu_val_7_33 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double fpu_val_7_36 = *(context + 0x9c);
            long double fpu_val_6_11 = *(context + 0xa0);
            fpu_val_6_11 - fpu_val_7_36;

            if (!(*(&((fpu_val_6_11 < fpu_val_7_36 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_11, fpu_val_7_36) ? 1 : 0) << 0xa
                    | (fpu_val_6_11 == fpu_val_7_36 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_35 = *(context + 0xa0);
            else
                fpu_val_7_35 = *(context + 0x9c);
        }
        else
            fpu_val_7_35 = *(context + 0x98);

        int32_t* temp_14 = *(context + 0x6c);
        float item_2bc = fpu_val_7_35;
        float item_2e0_6 = Render_ComputeNormals(temp_14) * item_2bc;
        WorldObject_CommitTransform(Level_StartMission_4(), context, &item_2a4, item_2e0_6);
        int32_t* i_1;

        if (!param_2)
        {
            i_1 = *(context + 8);
            item_2bc = context + 0x20;
            float* item_2b8_1 = context + 0x70;
        }

        if (param_2 || !*i_1 || !i_1)
            result = g_afa7e0;
        else
        {
            result = g_afa7e0;

            do
            {
                int32_t* temp_15 = *i_1;
                void* entity_16;

                if (!temp_15)
                    entity_16 = nullptr;
                else
                {
                    int32_t entity_13 = *temp_15;
                    int32_t entity_14 = -(entity_13);
                    entity_16 = (entity_14 - entity_14) & temp_15;
                }

                *((result << 2) + &g_afa6e0) = entity_16;
                g_afa7e0 = &result[1];
                uint32_t data_11 = DynObj_CreateMagicObject_6();
                int32_t temp_16 = 0;
                temp_16 = i_1[7];
                int32_t data_12 = *(((data_11 * 0x180 + temp_16) << 2) + &g_a96ae0);

                if (data_12)
                    data_12(i_1, &item_2bc);

                result = g_afa7e0 - 1;
                g_afa7e0 = result;
                i_1 = *((result << 2) + &g_afa6e0);
            } while (i_1);
        }

        void* entity_20 = *(context + 0xe8);

        if (entity_20)
        {
            float* item_2ac_2 = context + 0x70;
            void* item_2b0 = context + 0x20;
            void* item_2a8_2 = context;
            int32_t* i_2 = *(entity_20 + 8);

            if (*i_2 && i_2)
            {
                do
                {
                    int32_t* temp_18 = *i_2;
                    void* entity_24;

                    if (!temp_18)
                        entity_24 = nullptr;
                    else
                    {
                        int32_t entity_21 = *temp_18;
                        int32_t entity_22 = -(entity_21);
                        entity_24 = (entity_22 - entity_22) & temp_18;
                    }

                    *((result << 2) + &g_afa6e0) = entity_24;
                    g_afa7e0 = &result[1];
                    uint32_t data_16 = MagicObj_GetEventId();
                    int32_t data_17 = 0;
                    data_17 = i_2[7];
                    int32_t data_18 = *(((data_16 * 0x180 + data_17) << 2) + &g_a96ae0);

                    if (data_18)
                        data_18(i_2, &item_2b0);

                    result = g_afa7e0 - 1;
                    g_afa7e0 = result;
                    i_2 = *((result << 2) + &g_afa6e0);
                } while (i_2);
            }
        }

        result = item_2c9;

        if (result)
            return Menu_UpdateLanguage_21(context, &item_1f8, param_2);
    }

    return result;
}
