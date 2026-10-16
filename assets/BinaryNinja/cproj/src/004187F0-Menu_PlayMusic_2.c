#include "gi_platform.h"
#include "004187F0-Menu_PlayMusic_2.h"
void* Menu_PlayMusic_2(void* a1, void* a2)

{
    int32_t valA = (*(int32_t*)(uintptr_t)(a1 + 0x30));
    (*(int32_t*)(uintptr_t)(a1 + 0xc0)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x3c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xbc)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x26c2)) = 1;

    if (valA)
        Menu_DrawWidget_2(a1, a2);

    return Menu_LeaveMenus_2(a1, 0);
}
