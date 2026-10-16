#include "004186E0-Menu_LeaveMenus_2.h"
/* 0x004186e0 Menu_LeaveMenus_2 full linked: callers=3 callees=0 */
void* Menu_LeaveMenus_2(void* a1, int32_t a2)

{
    void* ecx = *(a1 + 0x38);

    if (ecx)
        *(ecx + 0x4d) = 0;

    *(a1 + 0xc0) = a2;
    void* ecx_2 = *(a1 + (a2 << 2) + 0x3c);
    *(a1 + 0x38) = ecx_2;

    if (ecx_2)
        *(ecx_2 + 0x4d) = 1;

    return a1;
}
