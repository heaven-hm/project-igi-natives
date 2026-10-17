// Original IGI.EXE function: Menu_RequestScreen_12 (VA 0x00423050; static CFG gate PASS, CFG score 1.000).
#include "Menu_RequestScreen_12.h"
uint32_t Menu_RequestScreen_12()

{
    DynObj_CreateMagicObject_4(g_57bc28);
    uint32_t result = QTask_CloseEvent_2(g_53b854);
    g_53b854 = 0x181;
    return result;
}
