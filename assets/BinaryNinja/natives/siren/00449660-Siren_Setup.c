// Original IGI.EXE function: Siren_Setup (VA 0x00449660; static CFG gate PASS, CFG score 1.000).
#include "Siren_Setup.h"
int32_t Siren_Setup(void* context)

{
    char result = *(context + 0x2d2);

    if (result)
        return result;

    *(context + 0x2d2) = 1;
    (*(((FX_TrailUpdate() + Script_FormatString_5() * 0x180) << 2) + &g_a96ae0))(context);
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d8_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isOn");
    SymbolRegister_Bool8(&item_80, context + 0x2d0);
    void* item_ec_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isLastOn");
    return SymbolRegister_Bool8(&item_80, context + 0x2d1);
}
