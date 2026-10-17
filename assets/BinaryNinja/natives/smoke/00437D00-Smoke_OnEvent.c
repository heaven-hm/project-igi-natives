// Original IGI.EXE function: Smoke_OnEvent (VA 0x00437D00; static CFG gate PASS, CFG score 1.000).
#include "Smoke_OnEvent.h"
int32_t Smoke_OnEvent(void* a1)

{
    char result = *(a1 + 0x20);

    if (!result)
        return result;

    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    *(a1 + 0x20) = 0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.vGenerateFactor");
    return Game_DataSymbolRemoveThunk(&v_80);
}
