// Original IGI.EXE function: InputBox_Cleanup (VA 0x0041DB90; static CFG gate PASS, CFG score 1.000).
#include "InputBox_Cleanup.h"
int32_t InputBox_Cleanup(void* context)

{
    char result = *(context + 0x194);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.zData");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0x194) = 0;
    }

    return result;
}
