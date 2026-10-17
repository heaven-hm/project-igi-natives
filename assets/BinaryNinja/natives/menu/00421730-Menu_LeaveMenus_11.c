// Original IGI.EXE function: Menu_LeaveMenus_11 (VA 0x00421730; static CFG gate PASS, CFG score 1.000).
#include "Menu_LeaveMenus_11.h"
struct status_msg* Menu_LeaveMenus_11(int32_t a1)

{
    int32_t kind;
    kind = g_53b7f0;
    return QTask_HandleInput(a1, kind, a1);
}
