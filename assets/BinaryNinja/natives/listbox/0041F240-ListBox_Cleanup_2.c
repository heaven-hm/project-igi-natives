// Original IGI.EXE function: ListBox_Cleanup_2 (VA 0x0041F240; static CFG gate PASS, CFG score 1.000).
#include "ListBox_Cleanup_2.h"
int32_t ListBox_Cleanup_2(void* context)

{
    char result = *(context + 0xbf0);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.nActiveID");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0xbf0) = 0;
    }

    return result;
}
