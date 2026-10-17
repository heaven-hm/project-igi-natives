// Original IGI.EXE function: Menu_PlayMusic_6 (VA 0x0041A1A0; static CFG gate PASS, CFG score 1.000).
#include "Menu_PlayMusic_6.h"
uint32_t Menu_PlayMusic_6()

{
    DynObj_CreateMagicObject_4(g_57bb88);
    uint32_t result = QTask_CloseEvent_2(g_539c28);
    g_539c28 = 0x181;
    return result;
}
