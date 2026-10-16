#include "004201B0-Menu_LeaveMenus_10.h"
/* 0x004201b0 Menu_LeaveMenus_10 full linked: callers=1 callees=2 */
uint32_t Menu_LeaveMenus_10()

{
    sub_4c1830(g_57bbe4);
    uint32_t result = QTask_CloseEvent_2(g_53b6bc);
    g_53b6bc = 0x181;
    return result;
}
