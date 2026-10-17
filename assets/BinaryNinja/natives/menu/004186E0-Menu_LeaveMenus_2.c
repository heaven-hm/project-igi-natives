// Original IGI.EXE function: Menu_LeaveMenus_2 (VA 0x004186E0; static CFG gate PASS, CFG score 1.000).
#include "Menu_LeaveMenus_2.h"
void* Menu_LeaveMenus_2(void* a1, int32_t a2)

{
    void* objC = *(a1 + 0x38);

    if (objC)
        *(objC + 0x4d) = 0;

    *(a1 + 0xc0) = a2;
    void* objC2 = *(a1 + (a2 << 2) + 0x3c);
    *(a1 + 0x38) = objC2;

    if (objC2)
        *(objC2 + 0x4d) = 1;

    return a1;
}
