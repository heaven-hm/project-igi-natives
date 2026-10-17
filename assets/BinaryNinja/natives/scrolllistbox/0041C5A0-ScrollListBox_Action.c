// Original IGI.EXE function: ScrollListBox_Action (VA 0x0041C5A0; static CFG gate PASS, CFG score 1.000).
#include "ScrollListBox_Action.h"
int32_t ScrollListBox_Action(void* a1)

{
    char result = *(a1 + 0x12a8);

    if (result)
        return result;

    *(a1 + 0x12a8) = 1;
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.nActiveID");
    return SymbolRegister_Int32(&v_80, a1 + 0x12a0);
}
