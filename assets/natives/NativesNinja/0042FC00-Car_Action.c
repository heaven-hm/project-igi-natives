#include "0042FC00-Car_Action.h"
/* 0x0042fc00 Car_Action full linked: callers=0 callees=0 */
void** Car_Action(void* a1, void** a2)

{
    int32_t eax = 0;
    eax = *(a1 + 0x1c);
    (*((eax << 2) + &g_a970e0))(a1);
    *a2 = a1 + 0x20;
    a2[1] = a1 + 0x6dc;
    a2[2] = a1 + 0x708;
    return a2;
}
