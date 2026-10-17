// Original IGI.EXE function: ControlsMenu_Action (VA 0x00423D30; static CFG gate PASS, CFG score 1.000).
#include "ControlsMenu_Action.h"
int32_t ControlsMenu_Action(void* context)

{
    char result = *(context + 0x358);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.nOffset");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_e0_1 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.isReset");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0x358) = 0;
    }

    return result;
}
