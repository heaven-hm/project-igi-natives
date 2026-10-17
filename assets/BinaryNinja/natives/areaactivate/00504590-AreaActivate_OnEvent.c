// Original IGI.EXE function: AreaActivate_OnEvent (VA 0x00504590; static CFG gate PASS, CFG score 1.000).
#include "AreaActivate_OnEvent.h"
int32_t AreaActivate_OnEvent(void* context)

{
    char result = *(context + 0xb5);

    if (!result)
        return result;

    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    *(context + 0xb5) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.nActive");
    return Game_DataSymbolRemoveThunk(&item_80);
}
