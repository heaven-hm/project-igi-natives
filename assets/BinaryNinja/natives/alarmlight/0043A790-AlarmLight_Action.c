// Original IGI.EXE function: AlarmLight_Action (VA 0x0043A790; static CFG gate PASS, CFG score 1.000).
#include "AlarmLight_Action.h"
int32_t AlarmLight_Action(void* context)

{
    char result = *(context + 0x1a2);

    if (!result)
        return result;

    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    *(context + 0x1a2) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isOn");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_e0_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isDestroyed");
    return Game_DataSymbolRemoveThunk(&item_80);
}
