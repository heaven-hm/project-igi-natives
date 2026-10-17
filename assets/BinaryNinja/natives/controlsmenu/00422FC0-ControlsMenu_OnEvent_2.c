// Original IGI.EXE function: ControlsMenu_OnEvent_2 (VA 0x00422FC0; static CFG gate PASS, CFG score 1.000).
#include "ControlsMenu_OnEvent_2.h"

void* ControlsMenu_OnEvent_2(void* pThis)

{
    if (*(pThis + 0x54))
        return pThis;

    *(pThis + 0x54) = 1;
    void local_c0;
    Script_ParseEnumString_6(&local_c0, pThis);
    void* buf_cc = &local_c0;
    void local_80;
    return Game_DataSymbolLoad(&local_80, "%s.isOn");
}
