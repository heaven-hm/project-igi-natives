// Original IGI.EXE function: Menu_PlayMusic_2 (VA 0x004187F0; static CFG gate PASS, CFG score 1.000).
#include "Menu_PlayMusic_2.h"
void* Menu_PlayMusic_2(void* context, void* param_2)

{
    int32_t data_val = *(context + 0x30);
    *(context + 0xc0) = 0;
    *(context + 0x3c) = 0;
    *(context + 0xbc) = 0;
    *(context + 0x26c2) = 1;

    if (data_val)
        Menu_DrawWidget_2(context, param_2);

    return Menu_LeaveMenus_2(context, 0);
}
