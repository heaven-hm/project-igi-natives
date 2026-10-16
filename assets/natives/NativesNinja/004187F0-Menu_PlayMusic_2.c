#include "004187F0-Menu_PlayMusic_2.h"
/* 0x004187f0 Menu_PlayMusic_2 full linked: callers=3 callees=2 */
void* Menu_PlayMusic_2(void* a1, void* a2)

{
    int32_t eax = *(a1 + 0x30);
    *(a1 + 0xc0) = 0;
    *(a1 + 0x3c) = 0;
    *(a1 + 0xbc) = 0;
    *(a1 + 0x26c2) = 1;

    if (eax)
        Menu_DrawWidget_2(a1, a2);

    return Menu_LeaveMenus_2(a1, 0);
}
