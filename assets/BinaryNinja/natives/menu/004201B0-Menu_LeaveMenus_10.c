#include "Menu_LeaveMenus_10.h"
uint32_t Menu_LeaveMenus_10()

{
    DynObj_CreateMagicObject_4(g_57bbe4);
    uint32_t result = QTask_CloseEvent_2(g_53b6bc);
    g_53b6bc = 0x181;
    return result;
}
