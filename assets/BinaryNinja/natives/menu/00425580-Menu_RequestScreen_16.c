// Original IGI.EXE function: Menu_RequestScreen_16 (VA 0x00425580; static CFG gate PASS, CFG score 1.000).
#include "Menu_RequestScreen_16.h"
int32_t Menu_RequestScreen_16()

{
    QTask_CloseEvent_2(g_57bc68);
    return DynObj_CreateMagicObject_4(g_57bc6c);
}
