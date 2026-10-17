// Original IGI.EXE function: Wire_OnEvent (VA 0x0043F700; static CFG gate PASS, CFG score 1.000).
#include "Wire_OnEvent.h"
int32_t Wire_OnEvent(void* a1)

{
    char result = *(a1 + 0x132);

    if (result)
        return result;

    *(a1 + 0x132) = 1;
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isInUse");
    SymbolRegister_Bool8(&v_80, a1 + 0x130);
    void* v_e4_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isLastInUse");
    return SymbolRegister_Bool8(&v_80, a1 + 0x131);
}
