// IGI native provenance: SlideBar_OnEvent - 0x0041F740 - CFG score 94.2% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041F740-SlideBar_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SlideBar_OnEvent.h"
int32_t SlideBar_OnEvent(long double context , void* param_2, int32_t param_3)

{
    void* context_val = param_2;
    void* flagP = *(context_val + 0x9c);
    void* dest_val = *(context_val + 0x98);
    Script_Isexists(context_val + 0xb8, context_val);
    Script_Isexists(context_val + 0x108, context_val);
    Script_Isexists(context_val + 0x158, context_val);
    Script_Isexists(context_val + 0x1a8, context_val);
    Script_Isexists(context_val + 0x1f8, context_val);

    if (!Script_FormatString_6(context_val + 0x1a8))
        *(context_val + 0xa8) = 0x3d4ccccd;
    else
    {
        Script_SpawnNewTask_7(context_val + 0x1a8, context_val);
        *(context_val + 0xa8) = context;
    }

    if (*(context_val + 0x44))
    {
        void* item_58_2 = context_val + 0x54;
        char item_40[0x40];
        Game_DataSymbolLoad(&item_40, "%s_1.spr");
        char (* dest_1)[0x40] = &item_40;
        int32_t i = 0xffffffff;
        void* item_64_1 = context_val + 0x54;

        while (i)
        {
            bool flag_1_1 = 0 != *dest_1;
            dest_1 = &(*dest_1)[1];
            i -= 1;

            if (!flag_1_1)
                break;
        }

        int32_t entity_1 = ~i;
        int32_t source_2;
        int32_t dest_4;
        dest_4 = memcpy(*(context_val + 0x98) + 0x54, dest_1 - entity_1, entity_1 & 0xfffffffc);
        memcpy(dest_4, source_2, entity_1 & 3);
        Game_DataSymbolLoad(&item_40, "%s_2.spr");
        char (* dest_5)[0x40] = &item_40;
        int32_t i_1 = 0xffffffff;
        void* item_70_1 = context_val + 0x54;

        while (i_1)
        {
            bool flag_2_1 = 0 != *dest_5;
            dest_5 = &(*dest_5)[1];
            i_1 -= 1;

            if (!flag_2_1)
                break;
        }

        int32_t entity_5 = ~i_1;
        int32_t source_4;
        int32_t dest_8;
        dest_8 = memcpy(*(context_val + 0x9c) + 0x54, dest_5 - entity_5, entity_5 & 0xfffffffc);
        memcpy(dest_8, source_4, entity_5 & 3);
        Game_DataSymbolLoad(&item_40, "%s_3.spr");
        *(context_val + 0x94) = Menu_DrawWidget_3(*(context_val + 0x44), &item_40);
    }

    void* source_5 = *(context_val + 0x98);
    uint32_t data_9 = Script_ParseEnumReal32_8();
    int32_t temp_5 = 0;
    temp_5 = *(source_5 + 0x1c);
    (*(((data_9 * 0x180 + temp_5) << 2) + &g_a96ae0))(source_5, param_3);
    void* source_6 = *(context_val + 0x9c);
    uint32_t data_12 = Script_ParseEnumReal32_8();
    int32_t data_13 = 0;
    data_13 = *(source_6 + 0x1c);
    (*(((data_12 * 0x180 + data_13) << 2) + &g_a96ae0))(source_6, param_3);
    int32_t temp_9 = *(context_val + 0xac);
    int32_t source_7 = 4;
    param_2 = 4;

    if (!*(context_val + 0xb4))
    {
        void* temp_13 = *(context_val + 0x94);
        param_2 = temp_9 + *(flagP + 0x2c) + *(dest_val + 0x2c) + 6;

        if (temp_13)
        {
            int32_t data_27 = *(dest_val + 0x28);
            int32_t entity_20 = *(flagP + 0x28);
            int32_t source_8 = data_27;

            if (data_27 <= entity_20)
                source_8 = entity_20;

            int32_t data_29;

            if (source_8 <= Sys_CloseFileStream_17(temp_13))
                data_29 = Sys_CloseFileStream_17(*(context_val + 0x94));
            else
            {
                int32_t dest_10 = *(dest_val + 0x28);
                int32_t flagP3 = *(flagP + 0x28);

                data_29 = dest_10 <= flagP3 ? flagP3 : dest_10;
            }

            source_7 = data_29 + 4;
        }
    }
    else
    {
        source_7 = temp_9 + *(flagP + 0x28) + *(dest_val + 0x28) + 6;
        void* temp_11 = *(context_val + 0x94);

        if (temp_11)
        {
            void* data_18 = *(dest_val + 0x2c);
            void* entity_15 = *(flagP + 0x2c);
            param_2 = data_18;

            if (data_18 <= entity_15)
                param_2 = entity_15;

            if (param_2 <= Sys_ExecuteBytecode_17(temp_11))
                param_2 = Sys_ExecuteBytecode_17(*(context_val + 0x94)) + 4;
            else
            {
                void* dest_9 = *(dest_val + 0x2c);
                void* flagP2 = *(flagP + 0x2c);

                param_2 = dest_9 <= flagP2 ? flagP2 + 4 : dest_9 + 4;
            }
        }
    }

    *(context_val + 0x28) = source_7;
    *(context_val + 0x2c) = param_2;
    return (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(context_val, param_3);
}
