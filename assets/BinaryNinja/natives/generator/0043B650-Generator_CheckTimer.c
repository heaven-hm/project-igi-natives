// Original IGI.EXE function: Generator_CheckTimer (VA 0x0043B650; static CFG gate PASS, CFG score 1.000).
#include "Generator_CheckTimer.h"

char* Generator_CheckTimer(void* pThis)

{
    (*((FX_TrailUpdate() << 2) + &g_a976e0))(pThis);
    return Script_CallNativeHandler_6(pThis + 0x240);
}
