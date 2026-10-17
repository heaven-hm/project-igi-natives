// Original IGI.EXE function: HumanAI_Cleanup (VA 0x004507D0; static CFG gate PASS, CFG score 1.000).
#include "HumanAI_Cleanup.h"
int32_t HumanAI_Cleanup(void* a1)

{
    char result = *(a1 + 0x3ab8);

    if (!result)
        return result;

    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    *(a1 + 0x3ab8) = 0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isDetection");
    return Game_DataSymbolRemoveThunk(&v_80);
}
