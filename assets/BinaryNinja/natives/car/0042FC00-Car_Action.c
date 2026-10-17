// Original IGI.EXE function: Car_Action (VA 0x0042FC00; static CFG gate FAIL, CFG score 0.667).
#include "Car_Action.h"
void** Car_Action(void* a1, void** a2)

{
    int32_t valA = 0;
    valA = *(a1 + 0x1c);
    (*((valA << 2) + &g_a970e0))(a1);
    *a2 = a1 + 0x20;
    a2[1] = a1 + 0x6dc;
    a2[2] = a1 + 0x708;
    return a2;
}
