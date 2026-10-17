// Original IGI.EXE function: SkyTask_Update (VA 0x0052C7F0; static CFG gate PASS, CFG score 1.000).
#include "SkyTask_Update.h"
uint32_t SkyTask_Update()

{
    DynObj_CreateMagicObject_4(g_a84558);
    uint32_t result = QTask_CloseEvent_2(g_54f6e4);
    g_54f6e4 = 0x181;
    return result;
}
