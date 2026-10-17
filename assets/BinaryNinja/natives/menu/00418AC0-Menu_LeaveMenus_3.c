// Original IGI.EXE function: Menu_LeaveMenus_3 (VA 0x00418AC0; static CFG gate PASS, CFG score 1.000).
#include "Menu_LeaveMenus_3.h"
uint32_t Menu_LeaveMenus_3()

{
    DynObj_CreateMagicObject_4(g_57bae0);
    uint32_t result = QTask_CloseEvent_2(g_539824);
    g_539824 = 0x181;
    return result;
}
