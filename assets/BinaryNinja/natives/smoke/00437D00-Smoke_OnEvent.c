// Original IGI.EXE function: Smoke_OnEvent (VA 0x00437D00; static CFG gate PASS, CFG score 1.000).
#include "Smoke_OnEvent.h"
int32_t Smoke_OnEvent(void* context)

{
    char result = *(context + 0x20);

    if (!result)
        return result;

    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    *(context + 0x20) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.vGenerateFactor");
    return Game_DataSymbolRemoveThunk(&item_80);
}
