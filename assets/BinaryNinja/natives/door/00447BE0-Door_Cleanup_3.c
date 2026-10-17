// Original IGI.EXE function: Door_Cleanup_3 (VA 0x00447BE0; static CFG gate PASS, CFG score 1.000).
#include "Door_Cleanup_3.h"
int32_t Door_Cleanup_3(void* context)

{
    char result = *(context + 0x19e);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        *(context + 0x19e) = 0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.isLocked");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_e0_1 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.isOpen");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_f0_1 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.isClosed");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_100_1 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.isLastClosed");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_cc_2 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.isLastOpen");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_dc_2 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.isPicked");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_ec_2 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.nDoorOpenTicks");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0x19e) = 0;
    }

    return result;
}
