// Original IGI.EXE function: Menu_LeaveMenus_4 (VA 0x00418FC0; static CFG gate PASS, CFG score 1.000).
#include "Menu_LeaveMenus_4.h"
void* Menu_LeaveMenus_4(void* a1)

{
    *(a1 + 0x28) = 3;
    return a1;
}
