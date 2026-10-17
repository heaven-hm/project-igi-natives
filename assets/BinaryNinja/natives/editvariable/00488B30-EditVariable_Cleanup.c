// Original IGI.EXE function: EditVariable_Cleanup (VA 0x00488B30; static CFG gate PASS, CFG score 1.000).
#include "EditVariable_Cleanup.h"
int32_t EditVariable_Cleanup(void* context)

{
    char result = *(context + 0xdc);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.nValue");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0xdc) = 0;
    }

    return result;
}
