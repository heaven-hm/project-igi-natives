// Original IGI.EXE function: GenericPickup_OnEvent (VA 0x0046C5D0; static CFG gate PASS, CFG score 1.000).
#include "GenericPickup_OnEvent.h"
int32_t GenericPickup_OnEvent(void* context)

{
    char result = *(context + 0x118);

    if (!result)
        return result;

    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    *(context + 0x118) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isPickedUp");
    return Game_DataSymbolRemoveThunk(&item_80);
}
