// Original IGI.EXE function: ListBox_Update (VA 0x0041EA70; static CFG gate PASS, CFG score 0.922).
#include "ListBox_Update.h"
int32_t ListBox_Update(void* context, int32_t param_2)

{
    void* data_val = *(context + 0xd8);
    void* flagP = *(context + 0xd4);
    void* data_1 = Menu_HandleInput_3(*(context + 0x44), context + 0x94);
    int32_t* data_2 = *(context + 0xbf4);

    if (data_2)
    {
        Sys_ReadFileBlock_18(data_2);
        *(context + 0xbf4) = 0;
    }

    if (data_1)
    {
        int32_t** data_3 = Sys_OpenFileStream_18(data_1, 0, 0, &g_567c74);
        *(context + 0xbf4) = data_3;
        data_3[8] = 0;
    }

    Script_Isexists(context + 0xbf8, context);
    Script_Isexists(context + 0xc48, context);
    Script_Isexists(context + 0xc98, context);
    Script_Isexists(context + 0xce8, context);

    if (*(context + 0x44))
    {
        void* item_54_3 = context + 0x54;
        void item_40;
        Game_DataSymbolLoad(&item_40, "%s_1.spr");
        void* dest_1 = &item_40;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool flag_0_1 = 0 != *dest_1;
            dest_1 += 1;
            i -= 1;

            if (!flag_0_1)
                break;
        }

        int32_t entity_2 = ~i;
        int32_t source_2;
        int32_t dest_4;
        dest_4 = memcpy(*(context + 0xd4) + 0x54, dest_1 - entity_2, entity_2 & 0xfffffffc);
        void* item_60_3 = context + 0x54;
        memcpy(dest_4, source_2, entity_2 & 3);
        Game_DataSymbolLoad(&item_40, "%s_2.spr");
        void* dest_5 = &item_40;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool flag_1_1 = 0 != *dest_5;
            dest_5 += 1;
            i_1 -= 1;

            if (!flag_1_1)
                break;
        }

        int32_t entity_6 = ~i_1;
        int32_t source_4;
        int32_t dest_8;
        dest_8 = memcpy(*(context + 0xd8) + 0x54, dest_5 - entity_6, entity_6 & 0xfffffffc);
        memcpy(dest_8, source_4, entity_6 & 3);
    }

    *(*(context + 0xd4) + 0x44) = *(context + 0x44);
    *(*(context + 0xd8) + 0x44) = *(context + 0x44);
    void* source_5 = *(context + 0xd4);
    uint32_t data_13 = Script_ParseEnumReal32_8();
    int32_t data_14 = 0;
    data_14 = *(source_5 + 0x1c);
    (*(((data_13 * 0x180 + data_14) << 2) + &g_a96ae0))(source_5, param_2);
    void* source_6 = *(context + 0xd8);
    uint32_t data_17 = Script_ParseEnumReal32_8();
    int32_t temp_10 = 0;
    temp_10 = *(source_6 + 0x1c);
    (*(((data_17 * 0x180 + temp_10) << 2) + &g_a96ae0))(source_6, param_2);
    int32_t entity_16 = *(data_val + 0x2c);
    int32_t data_21 = *(flagP + 0x2c);

    if (data_21 <= entity_16)
        data_21 = entity_16;

    *(context + 0x28) = *(context + 0xbec) + *(data_val + 0x28) + *(flagP + 0x28) + 6;
    *(context + 0x2c) = data_21 + 4;
    return (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(context, param_2);
}
