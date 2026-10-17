// Original IGI.EXE function: Wire_Action (VA 0x0043F780; static CFG gate PASS, CFG score 1.000).
#include "Wire_Action.h"
int32_t Wire_Action(void* context)

{
    char result = *(context + 0x132);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        *(context + 0x132) = 0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.isInUse");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_e0_1 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.isLastInUse");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0x132) = 0;
    }

    return result;
}
