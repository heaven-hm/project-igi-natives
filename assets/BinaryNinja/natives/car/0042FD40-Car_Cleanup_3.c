// Original IGI.EXE function: Car_Cleanup_3 (VA 0x0042FD40; static CFG gate PASS, CFG score 1.000).
#include "Car_Cleanup_3.h"
int32_t Car_Cleanup_3(void* context)

{
    char result = *(context + 0x2ed4);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        *(context + 0x2ed4) = 0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.isExploded");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0x2ed4) = 0;
    }

    return result;
}
