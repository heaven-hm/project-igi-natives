#include "00424E10-Menu_LeaveMenus_15.h"
/* 0x00424e10 Menu_LeaveMenus_15 full linked: callers=1 callees=1 */
uint32_t Menu_LeaveMenus_15()

{
    int32_t eax;
    eax = g_57bc60;
    return QTask_CloseEvent_2(eax);
}
