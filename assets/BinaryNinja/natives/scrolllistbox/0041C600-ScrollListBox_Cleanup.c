// Original IGI.EXE function: ScrollListBox_Cleanup (VA 0x0041C600; static CFG gate PASS, CFG score 1.000).
#include "ScrollListBox_Cleanup.h"
int32_t ScrollListBox_Cleanup(void* context)

{
    char result = *(context + 0x12a8);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.nActiveID");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0x12a8) = 0;
    }

    return result;
}
