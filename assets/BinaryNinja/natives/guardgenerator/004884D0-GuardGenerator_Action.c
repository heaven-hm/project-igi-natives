// Original IGI.EXE function: GuardGenerator_Action (VA 0x004884D0; static CFG gate PASS, CFG score 1.000).
#include "GuardGenerator_Action.h"
int32_t GuardGenerator_Action(void* context)

{
    char result = *(context + 0x71);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        *(context + 0x71) = 0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.isOn");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_e0_1 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.isSpawned");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_f0_1 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.nSpawns");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0x71) = 0;
    }

    return result;
}
