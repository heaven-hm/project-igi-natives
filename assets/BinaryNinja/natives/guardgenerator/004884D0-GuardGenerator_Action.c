// Original IGI.EXE function: GuardGenerator_Action (VA 0x004884D0; static CFG gate PASS, CFG score 1.000).
#include "GuardGenerator_Action.h"
int32_t GuardGenerator_Action(void* a1)

{
    char result = *(a1 + 0x71);

    if (result)
    {
        void v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        *(a1 + 0x71) = 0;
        void v_80;
        Game_DataSymbolLoad(&v_80, "%s.isOn");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_e0_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isSpawned");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_f0_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.nSpawns");
        result = Game_DataSymbolRemoveThunk(&v_80);
        *(a1 + 0x71) = 0;
    }

    return result;
}
