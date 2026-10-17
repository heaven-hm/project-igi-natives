// Original IGI.EXE function: Switch_Cleanup_2 (VA 0x00445980; static CFG gate PASS, CFG score 1.000).
#include "Switch_Cleanup_2.h"
int32_t Switch_Cleanup_2(void* context)

{
    char result = *(context + 0x1cc);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        *(context + 0x1cc) = 0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.isOn");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_e0_1 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.isDestroyed");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_f0_1 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.isPressed");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_100_1 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.isLastOn");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_cc_2 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.isLastDestroyed");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_dc_2 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.isLastPressed");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0x1cc) = 0;
    }

    return result;
}
