#include "00421730-Menu_LeaveMenus_11.h"
/* 0x00421730 Menu_LeaveMenus_11 full linked: callers=4 callees=1 */
struct status_msg* Menu_LeaveMenus_11(int32_t a1)

{
    int32_t kind;
    kind = g_53b7f0;
    return QTask_HandleInput(a1, kind, a1);
}
