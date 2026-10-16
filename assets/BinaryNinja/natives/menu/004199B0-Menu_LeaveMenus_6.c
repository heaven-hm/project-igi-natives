#include "Menu_LeaveMenus_6.h"
uint32_t Menu_LeaveMenus_6()

{
    uint32_t result = QTask_CloseEvent_2(g_539af0);
    g_539af0 = 0x181;
    return result;
}
