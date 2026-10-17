// Original IGI.EXE function: Menu_FormatScreen_8 (VA 0x0041D050; static CFG gate PASS, CFG score 1.000).
#include "Menu_FormatScreen_8.h"
uint32_t Menu_FormatScreen_8()

{
    DynObj_CreateMagicObject_4(g_57bbbc);
    uint32_t result = QTask_CloseEvent_2(g_53b5f4);
    g_53b5f4 = 0x181;
    return result;
}
