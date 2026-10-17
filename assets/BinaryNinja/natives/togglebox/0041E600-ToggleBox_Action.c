// Original IGI.EXE function: ToggleBox_Action (VA 0x0041E600; static CFG gate PASS, CFG score 1.000).
#include "ToggleBox_Action.h"
int32_t ToggleBox_Action(void* context)

{
    char result = *(context + 0xa8);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.isOn");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0xa8) = 0;
    }

    return result;
}
