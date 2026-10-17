// Original IGI.EXE function: Menu_HandleInput_8 (VA 0x0041DBF0; static CFG gate PASS, CFG score 1.000).
#include "Menu_HandleInput_8.h"
uint32_t Menu_HandleInput_8()

{
    DynObj_CreateMagicObject_4(g_57bbc4);
    uint32_t result = QTask_CloseEvent_2(g_53b640);
    g_53b640 = 0x181;
    return result;
}
