// Original IGI.EXE function: Radio_Setup (VA 0x0043B1C0; static CFG gate PASS, CFG score 1.000).
#include "Radio_Setup.h"
int32_t Radio_Setup(void* context)

{
    char result = *(context + 0x241);

    if (result)
        return result;

    *(context + 0x241) = 1;
    (*(((FX_TrailUpdate() + Script_FormatString_5() * 0x180) << 2) + &g_a96ae0))(context);
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d8_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isOn");
    return SymbolRegister_Bool8(&item_80, context + 0x240);
}
