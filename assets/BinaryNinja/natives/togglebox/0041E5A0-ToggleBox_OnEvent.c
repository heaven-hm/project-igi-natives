// Original IGI.EXE function: ToggleBox_OnEvent (VA 0x0041E5A0; static CFG gate PASS, CFG score 1.000).
#include "ToggleBox_OnEvent.h"
int32_t ToggleBox_OnEvent(void* a1)

{
    char result = *(a1 + 0xa8);

    if (result)
        return result;

    *(a1 + 0xa8) = 1;
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isOn");
    return SymbolRegister_Int16(&v_80, a1 + 0xa4);
}
