// Original IGI.EXE function: StatusMessage_OnEvent_2 (VA 0x00485870; static CFG gate PASS, CFG score 1.000).
#include "StatusMessage_OnEvent_2.h"
int32_t StatusMessage_OnEvent_2(void* context)

{
    char result = *(context + 0x1d5);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.isSendt");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_e0_1 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.nTickSendt");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_f0_1 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.isFinishedDisplay");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_100_1 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.nFinishedDisplay");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_cc_2 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.nTicksSinceFinishedDisplay");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0x1d5) = 0;
    }

    return result;
}
