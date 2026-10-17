// Original IGI.EXE function: MenuFrame_OnEvent (VA 0x00422640; static CFG gate PASS, CFG score 1.000).
#include "MenuFrame_OnEvent.h"
int32_t MenuFrame_OnEvent(void* context, int32_t param_2)

{
    if (*(context + 0x44))
    {
        int32_t i = 0;
        int32_t* dest_1 = context + 0x94;

        do
        {
            int32_t item_54_1 = i + 1;
            void* item_58_1 = context + 0x54;
            char item_40[0x40];
            Game_DataSymbolLoad(&item_40, "%s_%d.spr");
            *dest_1 = Menu_DrawWidget_3(*(context + 0x44), &item_40);
            i += 1;
            dest_1 = &dest_1[1];
        } while (i < 8);
    }

    return (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(context, param_2);
}
