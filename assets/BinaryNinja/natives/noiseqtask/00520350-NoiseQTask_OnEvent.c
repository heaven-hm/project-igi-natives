// Original IGI.EXE function: NoiseQTask_OnEvent (VA 0x00520350; static CFG gate PASS, CFG score 1.000).
#include "NoiseQTask_OnEvent.h"
int32_t NoiseQTask_OnEvent(void* a1)

{
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0 = &v_c0;
    *(a1 + 0x128) = 0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.vValue");
    int32_t result = Game_DataSymbolRemoveThunk(&v_80);
    *(a1 + 0x128) = 0;
    return result;
}
