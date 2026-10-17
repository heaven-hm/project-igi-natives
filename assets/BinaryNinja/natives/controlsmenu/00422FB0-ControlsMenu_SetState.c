// Original IGI.EXE function: ControlsMenu_SetState (VA 0x00422FB0; static CFG gate PASS, CFG score 1.000).
#include "ControlsMenu_SetState.h"

int32_t* ControlsMenu_SetState(int32_t* pThis @ 0x8)

{
    *pThis = g_57bc28;
    return pThis;
}
