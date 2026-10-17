// Original IGI.EXE function: Menu_PlayMusic_7 (VA 0x0041B840; static CFG gate PASS, CFG score 1.000).
#include "Menu_PlayMusic_7.h"
uint32_t Menu_PlayMusic_7()

{
    DynObj_CreateMagicObject_4(g_57bba8);
    uint32_t result = QTask_CloseEvent_2(g_53b58c);
    g_53b58c = 0x181;
    return result;
}
