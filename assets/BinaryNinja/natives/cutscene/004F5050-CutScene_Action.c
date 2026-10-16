#include "CutScene_Action.h"
int32_t CutScene_Action(void* a1)

{
    char result = *(a1 + 0x62);

    if (result)
    {
        void v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        *(a1 + 0x62) = 0;
        void v_80;
        Game_DataSymbolLoad(&v_80, "%s.isRun");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_e0_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isFinished");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_f0_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.nTick");
        result = Game_DataSymbolRemoveThunk(&v_80);
        *(a1 + 0x62) = 0;
    }

    return result;
}
