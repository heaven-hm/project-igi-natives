// Original IGI.EXE function: Menu_LeaveMenus_15 (VA 0x00424E10; static CFG gate PASS, CFG score 1.000).
#include "Menu_LeaveMenus_15.h"
uint32_t Menu_LeaveMenus_15()

{
    int32_t data_val;
    data_val = g_57bc60;
    return QTask_CloseEvent_2(data_val);
}
