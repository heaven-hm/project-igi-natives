#include "gi_platform.h"
#include "0042FC00-Car_Action.h"
void** Car_Action(void* a1, void** a2)

{
    int32_t valA = 0;
    valA = (*(int32_t*)(uintptr_t)(a1 + 0x1c));
    ((int(*)())(uintptr_t)((*(int32_t*)(uintptr_t)((valA << 2) + &g_a970e0))))(a1);
    *a2 = a1 + 0x20;
    a2[1] = a1 + 0x6dc;
    a2[2] = a1 + 0x708;
    return a2;
}
