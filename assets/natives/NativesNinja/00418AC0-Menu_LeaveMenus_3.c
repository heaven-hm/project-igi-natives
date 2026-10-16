#include "00418AC0-Menu_LeaveMenus_3.h"
/* 0x00418ac0 Menu_LeaveMenus_3 full linked: callers=1 callees=2 */
uint32_t Menu_LeaveMenus_3()

{
    sub_4c1830(g_57bae0);
    uint32_t result = QTask_CloseEvent_2(g_539824);
    g_539824 = 0x181;
    return result;
}
