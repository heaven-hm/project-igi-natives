// Original IGI.EXE function: ConditionalContainer_Action (VA 0x00487920; static CFG gate PASS, CFG score 1.000).
#include "ConditionalContainer_Action.h"
int32_t ConditionalContainer_Action(void* a1)

{
    char result = *(a1 + 0x111);

    if (result)
        return result;

    *(a1 + 0x111) = 1;
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isRun");
    return SymbolRegister_Bool8(&v_80, a1 + 0x110);
}
