#include "gi_platform.h"
#include "004186E0-Menu_LeaveMenus_2.h"
void* Menu_LeaveMenus_2(void* a1, int32_t a2)

{
    void* objC = (*(int32_t*)(uintptr_t)(a1 + 0x38));

    if (objC)
        *(objC + 0x4d) = 0;

    (*(int32_t*)(uintptr_t)(a1 + 0xc0)) = a2;
    void* objC2 = (*(int32_t*)(uintptr_t)(a1 + (a2 << 2) + 0x3c));
    (*(int32_t*)(uintptr_t)(a1 + 0x38)) = objC2;

    if (objC2)
        *(objC2 + 0x4d) = 1;

    return a1;
}
