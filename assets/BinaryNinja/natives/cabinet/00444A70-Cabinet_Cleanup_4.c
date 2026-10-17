// Original IGI.EXE function: Cabinet_Cleanup_4 (VA 0x00444A70; static CFG gate PASS, CFG score 1.000).
#include "Cabinet_Cleanup_4.h"
int32_t Cabinet_Cleanup_4(void* context)

{
    char result = *(context + 0x129);

    if (!result)
        return result;

    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    *(context + 0x129) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isInUse");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_e0_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isLastInUse");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_f0_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isSearched");
    return Game_DataSymbolRemoveThunk(&item_80);
}
