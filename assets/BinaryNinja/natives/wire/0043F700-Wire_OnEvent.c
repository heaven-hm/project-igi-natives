// Original IGI.EXE function: Wire_OnEvent (VA 0x0043F700; static CFG gate PASS, CFG score 1.000).
#include "Wire_OnEvent.h"
int32_t Wire_OnEvent(void* context)

{
    char result = *(context + 0x132);

    if (result)
        return result;

    *(context + 0x132) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isInUse");
    SymbolRegister_Bool8(&item_80, context + 0x130);
    void* item_e4_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isLastInUse");
    return SymbolRegister_Bool8(&item_80, context + 0x131);
}
