// Original IGI.EXE function: Terminal_Process (VA 0x00443A60; static CFG gate PASS, CFG score 1.000).
#include "Terminal_Process.h"
int32_t Terminal_Process(void* context)

{
    char result = *(context + 0x248);

    if (result)
        return result;

    *(context + 0x248) = 1;
    (*(((FX_TrailUpdate() + Script_FormatString_5() * 0x180) << 2) + &g_a96ae0))(context);
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d8_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isInUse");
    SymbolRegister_Bool8(&item_80, context + 0x238);
    void* item_ec_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isLastInUse");
    SymbolRegister_Bool8(&item_80, context + 0x239);
    void* item_100_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isOn");
    SymbolRegister_Bool8(&item_80, context + 0x240);
    void* item_d4_2 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isHacked");
    SymbolRegister_Bool8(&item_80, context + 0x241);
    void* item_e8_2 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isHackedThisTick");
    return SymbolRegister_Bool8(&item_80, context + 0x242);
}
