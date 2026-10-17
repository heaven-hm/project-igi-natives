// Original IGI.EXE function: ControlsMenu_OnEvent_2 (VA 0x00422FC0; static CFG gate PASS, CFG score 1.000).
#include "ControlsMenu_OnEvent_2.h"

void* ControlsMenu_OnEvent_2(void* pThis)

{
    if (*(pThis + 0x54))
        return pThis;

    *(pThis + 0x54) = 1;
    void var_c0;
    Script_ParseEnumString_6(&var_c0, pThis);
    void* buf_cc = &var_c0;
    void var_80;
    return Game_DataSymbolLoad(&var_80, "%s.isOn");
}
