// Original IGI.EXE function: Menu_PlayMusic_9 (VA 0x0041F2A0; static CFG gate PASS, CFG score 1.000).
#include "Menu_PlayMusic_9.h"
uint32_t Menu_PlayMusic_9()

{
    DynObj_CreateMagicObject_4(g_57bbdc);
    uint32_t result = QTask_CloseEvent_2(g_53b694);
    g_53b694 = 0x181;
    return result;
}
