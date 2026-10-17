// Original IGI.EXE function: ToggleBox_OnEvent (VA 0x0041E5A0; static CFG gate PASS, CFG score 1.000).
#include "ToggleBox_OnEvent.h"
int32_t ToggleBox_OnEvent(void* context)

{
    char result = *(context + 0xa8);

    if (result)
        return result;

    *(context + 0xa8) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isOn");
    return SymbolRegister_Int16(&item_80, context + 0xa4);
}
