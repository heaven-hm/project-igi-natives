// Original IGI.EXE function: SCamera_Action (VA 0x00442970; static CFG gate PASS, CFG score 1.000).
#include "SCamera_Action.h"
int32_t SCamera_Action(void* a1)

{
    char result = *(a1 + 0x171);

    if (!result)
        return result;

    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    *(a1 + 0x171) = 0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isDetection");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_e0_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isLastDetection");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_f0_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.nDetectionTime");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_100_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isExploded");
    return Game_DataSymbolRemoveThunk(&v_80);
}
