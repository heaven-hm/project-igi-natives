// Original IGI.EXE function: ModelViewBox_OnEvent (VA 0x00423000; static CFG gate PASS, CFG score 1.000).
#include "ModelViewBox_OnEvent.h"
int32_t ModelViewBox_OnEvent(void* context)

{
    char result = *(context + 0x54);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        void item_80;
        result = Game_DataSymbolLoad(&item_80, "%s.isOn");
        *(context + 0x54) = 0;
    }

    return result;
}
