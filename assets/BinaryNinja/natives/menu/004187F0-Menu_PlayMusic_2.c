// Original IGI.EXE function: Menu_PlayMusic_2 (VA 0x004187F0; static CFG gate PASS, CFG score 1.000).
#include "Menu_PlayMusic_2.h"
void* Menu_PlayMusic_2(void* a1, void* a2)

{
    int32_t valA = *(a1 + 0x30);
    *(a1 + 0xc0) = 0;
    *(a1 + 0x3c) = 0;
    *(a1 + 0xbc) = 0;
    *(a1 + 0x26c2) = 1;

    if (valA)
        Menu_DrawWidget_2(a1, a2);

    return Menu_LeaveMenus_2(a1, 0);
}
