// Original IGI.EXE function: Script_Isexists (VA 0x004F1400; static CFG gate PASS, CFG score 0.926).
#include "Script_Isexists.h"
int32_t Script_Isexists(int32_t* context, void* param_2)

{
    int32_t i = 0;
    char* data_val = *context;
    bool flag_0 = context[0x13] <= 0;
    char* item_584 = data_val;
    char item_400;
    char* context_val = &item_400;
    item_400 = 0;

    if (!flag_0)
    {
        int32_t* source_1 = &context[3];

        do
        {
            Qtask_UpdateList(*source_1);
            *source_1 = 0;
            i += 1;
            source_1 = &source_1[1];
        } while (i < context[0x13]);

        data_val = item_584;
    }

    char* entity_1 = context[2];

    if (entity_1)
    {
        Sys_PushStack_24(entity_1);
        data_val = item_584;
    }

    context[0x13] = 0;

    if (data_val)
    {
        while (*data_val)
        {
            char item_580;

            if (!Terrain_SelectTerrainLOD_5(data_val, &item_584, &item_580, 0x7f))
            {
                char entity_19 = *item_584;
                context_val[1] = 0;
                *context_val = entity_19;
                data_val = item_584;

                if (*data_val)
                {
                    context_val = &context_val[1];
                    data_val = &data_val[1];
                    item_584 = data_val;
                }
            }
            else
            {
                int32_t data_4 = Script_ParseEnumString_7(&item_580);

                if (data_4 >= 0)
                {
                    char entity_4 = item_580;

                    if (entity_4 < 0x30 || entity_4 > 0x39)
                    {
                        void* data_5 = Script_ExecuteLevelScript_4(data_4);

                        if (!data_5)
                            item_580 = g_54e0e0;
                        else
                        {
                            void* item_598_5 = param_2;
                            Script_EvaluateCondition_6(context, data_5);
                        }
                    }
                }

                char item_57f;
                char item_57e;
                char item_57d;
                char item_57c;

                if (item_580 == 0x74 && item_57f == 0x68 && item_57e == 0x69 && item_57d == 0x73
                    && item_57c == 0x2e)
                {
                    void item_57b;
                    void* dest_val = &item_57b;
                    int32_t i_1 = 0xffffffff;

                    while (i_1)
                    {
                        bool flag_7_1 = 0 != *dest_val;
                        dest_val += 1;
                        i_1 -= 1;

                        if (!flag_7_1)
                            break;
                    }

                    int32_t entity_6 = ~i_1;
                    void item_500;
                    int32_t source_3;
                    int32_t dest_2;
                    dest_2 = memcpy(&item_500, dest_val - entity_6, entity_6 & 0xfffffffc);
                    memcpy(dest_2, source_3, entity_6 & 3);
                    void item_480;
                    Script_ParseEnumString_6(&item_480, param_2);
                    void* item_5a0_3 = &item_500;
                    void* item_5a4_2 = &item_480;
                    Game_DataSymbolLoad(&item_580, "%s.%s");
                }

                if (Camera_UpdateViewCone_6(&item_580, ".isExists"))
                    item_580 = g_54e0c8;

                char* dest_3 = &item_580;
                int32_t i_2 = 0xffffffff;

                while (i_2)
                {
                    bool flag_5_1 = 0 != *dest_3;
                    dest_3 = &dest_3[1];
                    i_2 -= 1;

                    if (!flag_5_1)
                        break;
                }

                int32_t entity_13 = ~i_2;
                int32_t source_5;
                int32_t dest_6;
                dest_6 = memcpy(context_val, dest_3 - entity_13, entity_13 & 0xfffffffc);
                memcpy(dest_6, source_5, entity_13 & 3);
                char* dest_7 = context_val;
                int32_t i_3 = 0xffffffff;

                while (i_3)
                {
                    bool flag_6_1 = 0 != *dest_7;
                    dest_7 = &dest_7[1];
                    i_3 -= 1;

                    if (!flag_6_1)
                        break;
                }

                data_val = item_584;
                context_val = &context_val[~i_3 - 1];
            }

            if (!data_val)
                break;
        }
    }

    *context_val = 0x3b;
    context_val[1] = 0;
    void* data_9 = context[1];

    if (data_9)
    {
        Sys_ExecuteBytecode_2(data_9);
        context[1] = 0;
    }

    if (!QHash_ValueGet())
    {
        QHash_ValueSet();
        Sys_ScriptStackUnderflow(0);
        char* dest_9 = &item_400;
        int32_t i_4 = 0xffffffff;

        while (i_4)
        {
            bool flag_2_1 = 0 != *dest_9;
            dest_9 = &dest_9[1];
            i_4 -= 1;

            if (!flag_2_1)
                break;
        }

        context[1] = Mem_Alloc(~i_4, 4);
        context[2] = Sys_ResolveSymbol_22(&item_400);
        Sys_ScriptStackOverflow();
        Sys_DispatchOpcode_2();
    }
    else
    {
        Sys_ScriptStackUnderflow(0);
        char* dest_8 = &item_400;
        int32_t i_5 = 0xffffffff;

        while (i_5)
        {
            bool flag_3_1 = 0 != *dest_8;
            dest_8 = &dest_8[1];
            i_5 -= 1;

            if (!flag_3_1)
                break;
        }

        context[1] = Mem_Alloc(~i_5, 4);
        context[2] = Sys_ResolveSymbol_22(&item_400);
        Sys_ScriptStackOverflow();
    }

    char* dest_10 = &item_400;
    int32_t i_6 = 0xffffffff;

    while (i_6)
    {
        bool flag_4_1 = 0 != *dest_10;
        dest_10 = &dest_10[1];
        i_6 -= 1;

        if (!flag_4_1)
            break;
    }

    int32_t entity_22 = ~i_6;
    int32_t source_7;
    int32_t dest_13;
    dest_13 = memcpy(context[1], dest_10 - entity_22, entity_22 & 0xfffffffc);
    memcpy(dest_13, source_7, entity_22 & 3);
    return 0;
}
