// Original IGI.EXE function: LevelTimer_Update (VA 0x0051BCC0; static CFG gate PASS, CFG score 1.000).
#include "LevelTimer_Update.h"
int32_t LevelTimer_Update(void* a1)

{
    char result = *(a1 + 0x68);

    if (result)
        return result;

    *(a1 + 0x68) = 1;
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isRun");
    SymbolRegister_Bool8(&v_80, a1 + 0x60);
    void* v_e4_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.nTick");
    return SymbolRegister_Int16(&v_80, a1 + 0x64);
}
