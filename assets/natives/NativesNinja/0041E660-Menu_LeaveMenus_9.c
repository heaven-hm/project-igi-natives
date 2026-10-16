#include "0041E660-Menu_LeaveMenus_9.h"
/* 0x0041e660 Menu_LeaveMenus_9 full linked: callers=1 callees=2 */
uint32_t Menu_LeaveMenus_9()

{
    sub_4c1830(g_57bbd0);
    uint32_t result = QTask_CloseEvent_2(g_53b674);
    g_53b674 = 0x181;
    return result;
}
