// Original IGI.EXE function: Menu_RequestScreen_8 (VA 0x0041C660; static CFG gate PASS, CFG score 1.000).
#include "Menu_RequestScreen_8.h"
uint32_t Menu_RequestScreen_8()

{
    DynObj_CreateMagicObject_4(g_57bbb4);
    uint32_t result = QTask_CloseEvent_2(g_53b59c);
    g_53b59c = 0x181;
    return result;
}
