// Original IGI.EXE function: Door_Cleanup_3 (VA 0x00447BE0; static CFG gate PASS, CFG score 1.000).
#include "Door_Cleanup_3.h"
int32_t Door_Cleanup_3(void* a1)

{
    char result = *(a1 + 0x19e);

    if (result)
    {
        void v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        *(a1 + 0x19e) = 0;
        void v_80;
        Game_DataSymbolLoad(&v_80, "%s.isLocked");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_e0_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isOpen");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_f0_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isClosed");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_100_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isLastClosed");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_cc_2 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isLastOpen");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_dc_2 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isPicked");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_ec_2 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.nDoorOpenTicks");
        result = Game_DataSymbolRemoveThunk(&v_80);
        *(a1 + 0x19e) = 0;
    }

    return result;
}
