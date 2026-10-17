// Original IGI.EXE function: Menu_RequestScreen_11 (VA 0x00421700; static CFG gate PASS, CFG score 1.000).
#include "Menu_RequestScreen_11.h"
uint32_t Menu_RequestScreen_11()

{
    DynObj_CreateMagicObject_4(g_57bbfc);
    uint32_t result = QTask_CloseEvent_2(g_53b7f0);
    g_53b7f0 = 0x181;
    return result;
}
