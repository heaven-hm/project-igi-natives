// Original IGI.EXE function: Menu_RequestScreen_7 (VA 0x0041AAC0; static CFG gate PASS, CFG score 1.000).
#include "Menu_RequestScreen_7.h"
uint32_t Menu_RequestScreen_7()

{
    DynObj_CreateMagicObject_4(g_57bb90);
    uint32_t result = QTask_CloseEvent_2(g_539c40);
    g_539c40 = 0x181;
    return result;
}
