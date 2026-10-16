#include "004199B0-Menu_LeaveMenus_6.h"
/* 0x004199b0 Menu_LeaveMenus_6 full linked: callers=1 callees=1 */
uint32_t Menu_LeaveMenus_6()

{
    uint32_t result = QTask_CloseEvent_2(g_539af0);
    g_539af0 = 0x181;
    return result;
}
