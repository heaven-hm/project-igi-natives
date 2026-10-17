// Original IGI.EXE function: ConditionalContainer_Cleanup (VA 0x00487980; static CFG gate PASS, CFG score 1.000).
#include "ConditionalContainer_Cleanup.h"
int32_t ConditionalContainer_Cleanup(void* context)

{
    char result = *(context + 0x111);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        *(context + 0x111) = 0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.isRun");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0x111) = 0;
    }

    return result;
}
