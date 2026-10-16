#include "Menu_LeaveMenus_9.h"
uint32_t Menu_LeaveMenus_9()

{
    DynObj_CreateMagicObject_4(g_57bbd0);
    uint32_t result = QTask_CloseEvent_2(g_53b674);
    g_53b674 = 0x181;
    return result;
}
