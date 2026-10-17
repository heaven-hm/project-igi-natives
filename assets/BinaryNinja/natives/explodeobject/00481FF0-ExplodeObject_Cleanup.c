// Original IGI.EXE function: ExplodeObject_Cleanup (VA 0x00481FF0; static CFG gate PASS, CFG score 1.000).
#include "ExplodeObject_Cleanup.h"
int32_t ExplodeObject_Cleanup(void* context)

{
    char result = *(context + 0x191);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.isExploded");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0x191) = 0;
    }

    return result;
}
