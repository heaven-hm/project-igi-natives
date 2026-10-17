// Original IGI.EXE function: ControlsMenu_OnEvent (VA 0x00423CB0; static CFG gate PASS, CFG score 1.000).
#include "ControlsMenu_OnEvent.h"
int32_t ControlsMenu_OnEvent(void* context)

{
    char result = *(context + 0x358);

    if (!result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.nOffset");
        SymbolRegister_Int32(&item_80, context + 0x354);
        void* item_e4_1 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.isReset");
        result = SymbolRegister_Bool8(&item_80, context + 0x35a);
        *(context + 0x358) = 1;
    }

    return result;
}
