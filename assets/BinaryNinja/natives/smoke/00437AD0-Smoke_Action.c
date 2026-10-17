// Original IGI.EXE function: Smoke_Action (VA 0x00437AD0; static CFG gate FAIL, CFG score 0.667).
#include "Smoke_Action.h"
void* Smoke_Action(void* a1, int32_t* a2)

{
    float* objC = a2[1];
    double v_20 = objC[2] * *(a1 + 0x140) + objC[1] * *(a1 + 0x138) + *objC * *(a1 + 0x130);
    double v_18 = objC[5] * *(a1 + 0x140) + objC[4] * *(a1 + 0x138) + objC[3] * *(a1 + 0x130);
    double v_10 = objC[8] * *(a1 + 0x140) + objC[7] * *(a1 + 0x138) + objC[6] * *(a1 + 0x130);
    memcpy(a1 + 0x40, &v_20, 0x18);
    *(a1 + 0x40) = **a2 + *(a1 + 0x40);
    *(a1 + 0x48) = *(*a2 + 8) + *(a1 + 0x48);
    *(a1 + 0x50) = *(*a2 + 0x10) + *(a1 + 0x50);
    return a1;
}
