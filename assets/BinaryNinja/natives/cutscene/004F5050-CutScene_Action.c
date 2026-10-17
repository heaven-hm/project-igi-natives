// Original IGI.EXE function: CutScene_Action (VA 0x004F5050; static CFG gate PASS, CFG score 1.000).
#include "CutScene_Action.h"
int32_t CutScene_Action(void* context)

{
    char result = *(context + 0x62);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        *(context + 0x62) = 0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.isRun");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_e0_1 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.isFinished");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_f0_1 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.nTick");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0x62) = 0;
    }

    return result;
}
