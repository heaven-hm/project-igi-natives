// Original IGI.EXE function: Medipack_OnEvent (VA 0x00470600; static CFG gate PASS, CFG score 1.000).
#include "Medipack_OnEvent.h"
uint32_t Medipack_OnEvent()

{
    int32_t valA;
    valA = g_5be334;
    return QTask_CloseEvent_2(valA);
}
