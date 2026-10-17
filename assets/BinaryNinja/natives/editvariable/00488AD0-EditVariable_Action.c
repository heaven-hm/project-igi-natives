// Original IGI.EXE function: EditVariable_Action (VA 0x00488AD0; static CFG gate PASS, CFG score 1.000).
#include "EditVariable_Action.h"
int32_t EditVariable_Action(void* a1)

{
    char result = *(a1 + 0xdc);

    if (result)
        return result;

    *(a1 + 0xdc) = 1;
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.nValue");
    return SymbolRegister_Int32(&v_80, a1 + 0xd8);
}
