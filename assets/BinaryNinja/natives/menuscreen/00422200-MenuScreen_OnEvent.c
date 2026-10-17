// Original IGI.EXE function: MenuScreen_OnEvent (VA 0x00422200; static CFG gate PASS, CFG score 1.000).
#include "MenuScreen_OnEvent.h"
int32_t MenuScreen_OnEvent(void* context)

{
    int32_t result = *(context + 0x1a0);

    if (result)
    {
        void item_100;
        Script_ParseEnumString_6(&item_100, context);
        void* item_110_1 = &item_100;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.nUserData");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0x1a0) = 0;
    }

    return result;
}
