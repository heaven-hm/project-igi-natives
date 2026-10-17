// Original IGI.EXE function: Human_Cleanup_8 (VA 0x004608D0; static CFG gate PASS, CFG score 1.000).
#include "Human_Cleanup_8.h"
int32_t Human_Cleanup_8(void* context)

{
    char result = *(context + 0xcf4);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.isDead");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_e0_1 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.eTeam");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0xcf4) = 0;
    }

    return result;
}
