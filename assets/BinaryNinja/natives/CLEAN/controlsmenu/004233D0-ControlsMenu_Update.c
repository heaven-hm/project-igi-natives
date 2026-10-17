// IGI native provenance: ControlsMenu_Update - 0x004233D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004233D0-ControlsMenu_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ControlsMenu_Update.h"
int32_t ControlsMenu_Update(void* context, int32_t param_2)

{
    void* dest_val = context;
    int32_t* source_1 = dest_val + 0x154;
    int32_t i_2 = 0x1b;
    int32_t i;

    do
    {
        int32_t* data_1 = source_1[-0x40];

        if (data_1)
        {
            Sys_ReadFileBlock_18(data_1);
            source_1[-0x40] = 0;
        }

        int32_t* data_2 = *source_1;

        if (data_2)
        {
            Sys_ReadFileBlock_18(data_2);
            *source_1 = 0;
        }

        source_1 = &source_1[1];
        i = i_2;
        i_2 -= 1;
    } while (i != 1);
    void* data_3 = *(dest_val + 0x44);
    void* context_1;

    if (!data_3)
        context_1 = context;
    else
        context_1 = Menu_HandleInput_3(data_3, "font1.fnt");

    if (context_1)
    {
        int32_t i_1 = 0;
        int32_t*** dest_1 = dest_val + 0x154;

        do
        {
            int32_t item_4;
            Config_Moveleft(i_1, nullptr, &item_4);
            int32_t** data_7 = Sys_OpenFileStream_18(context_1, 0, 0, Menu_LocalSS(*(context + 0x44), item_4));
            dest_1[-0x40] = data_7;
            data_7[8] = 0;
            int32_t** data_8 = Sys_OpenFileStream_18(context_1, 0, 0, &g_567c74);
            *dest_1 = data_8;
            data_8[8] = 0;
            i_1 += 1;
            dest_1 = &dest_1[1];
        } while (i_1 < 0x1b);

        dest_val = context;
    }

    return (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(dest_val, param_2);
}
