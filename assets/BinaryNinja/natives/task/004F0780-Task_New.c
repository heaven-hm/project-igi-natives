// IGI native provenance: Task_New - 0x004F0780 - CFG score 98.6% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F0780-Task_New.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Task_New.h"
int32_t Task_New(int32_t context, void* param_2, float param_3)

// Sig: void Task_New(...)
// Note: Instantiates a new game task from a declared type (731-byte factory;
// OpenIGI registers Task_New reading the type name then declared params). Call
// inside task blocks after Task_DeclareParameters; argc unknown (parser
// context).
{
    if (g_54dd16)
    {
        float source_val = param_3;
        g_a70c74 = Sys_CheckHeap_23(source_val, 0);
        int32_t flagP = Script_GetArg(source_val, 0);
        int32_t item_c8 = flagP;
        void item_64;
        Sys_ResolveSymbol_23(source_val, 1, &item_64, 0x64);
        int32_t context_val = 3;
        int32_t item_cc = 3;
        void item_a4;
        Sys_ResolveSymbol_23(source_val, 2, &item_a4, 0x40);
        int32_t* dest_val;

        if (!g_a758bc)
            dest_val = QTask_HandleInput(param_2, QTask_QtaskTypeSNotDefined(&item_64), 0);
        else
        {
            dest_val = QTask_RegisterEventCallback(param_2, QTask_QtaskTypeSNotDefined(&item_64), 0);
            g_a758bc = 0;
        }

        if (!g_a758a8)
            g_a758a8 = dest_val;

        void* item_e0 = &item_a4;
        int32_t* item_e4_5 = dest_val;

        if (flagP >= 0)
        {
            if (!Script_ExecuteLevelScript_4(flagP))
                Script_LevelqtaskidDAlready(flagP, dest_val);
            else
            {
                item_c8 = 0xffffffff;
                flagP = 0xffffffff;
            }
        }

        uint32_t data_12 = Script_ParseEnumInt32_8();
        int32_t entity_3 = 0;
        entity_3 = dest_val[7];
        int32_t item_bc;
        int32_t item_b4;

        if (*(((data_12 * 0x180 + entity_3) << 2) + &g_a96ae0))
        {
            uint32_t data_17 = Script_ParseEnumInt32_8();
            int32_t data_18 = 0;
            data_18 = dest_val[7];
            int32_t* item_c0;
            (*(((data_17 * 0x180 + data_18) << 2) + &g_a96ae0))(dest_val, &item_c0);
            int32_t* data_20 = item_c0;

            if (data_20)
            {
                int32_t temp_5 = g_a70c98;
                int32_t item_b0_1 = g_a70c74;
                g_54dd16 = 0;
                item_b4 = temp_5;
                bool flag_3_1 = *data_20 <= 0;
                item_bc = 3;
                float item_b8_1 = source_val;
                int32_t i_2 = 0;

                if (!flag_3_1)
                {
                    int32_t flagP1 = 0;
                    int32_t i;

                    do
                    {
                        void* temp_6 = data_20[2];

                        if (*(temp_6 + flagP1 + 0xc) & 1)
                        {
                            void* source_2 = dest_val + *(temp_6 + flagP1);
                            char data_22 = Script_CallNativeHandler_8();
                            Script_ParseEnumString_8(source_2, *(data_20[2] + flagP1 + 4), data_22, &item_bc);
                            source_val = param_3;
                        }

                        i = i_2 + 1;
                        flagP1 += 0x10;
                        i_2 = i;
                    } while (i < *data_20);
                    flagP = item_c8;
                }

                context_val = item_bc;
                item_cc = context_val;
            }
        }

        g_54dd16 = 1;

        if (flagP >= 0)
        {
            int32_t data_24 = Script_FormatString_5();
            int32_t data_25 = 0;
            data_25 = dest_val[7];
            int32_t data_26 = *(((data_24 * 0x180 + data_25) << 2) + &g_a96ae0);

            if (data_26)
                data_26(dest_val);
        }

        int32_t data_27 = Script_ParseEnumInt32_6();
        int32_t temp_12 = 0;
        temp_12 = dest_val[7];
        int32_t data_28 = *(((data_27 * 0x180 + temp_12) << 2) + &g_a96ae0);

        if (data_28)
            data_28(dest_val);

        Script_SetSymbolContext("Task_New", dest_val);

        if (Sys_AllocateMemory_24(source_val, context_val))
        {
            int32_t i_1;

            do
            {
                int32_t data_30 = context_val;
                context_val += 1;
                Script_GetArg(source_val, data_30);
                i_1 = Sys_AllocateMemory_24(source_val, context_val);
            } while (i_1);
            item_cc = context_val;
        }

        Script_SetSymbolContext("Task_New", param_2);
        item_b4 = item_cc;
        item_bc = context_val;
        char* item_ac = &g_567c74;
        memcpy(context, &item_bc, 0x18);
        return context;
    }

    int32_t saved_obj = g_a70c98;
    int32_t saved_ebp_1 = g_a70c74;
    Error_Show("Too few parameters in line %d of file '%s'");

    while (true)
        /* nop */
}
