#include "00437AD0-Smoke_Action.h"
/* 0x00437ad0 Smoke_Action full linked: callers=0 callees=1 */
void* Smoke_Action(void* a1, int32_t* a2)

{
    float* ecx = a2[1];
    double var_20 = ecx[2] * *(a1 + 0x140) + ecx[1] * *(a1 + 0x138) + *ecx * *(a1 + 0x130);
    double var_18 = ecx[5] * *(a1 + 0x140) + ecx[4] * *(a1 + 0x138) + ecx[3] * *(a1 + 0x130);
    double var_10 = ecx[8] * *(a1 + 0x140) + ecx[7] * *(a1 + 0x138) + ecx[6] * *(a1 + 0x130);
    memcpy(a1 + 0x40, &var_20, 0x18);
    *(a1 + 0x40) = **a2 + *(a1 + 0x40);
    *(a1 + 0x48) = *(*a2 + 8) + *(a1 + 0x48);
    *(a1 + 0x50) = *(*a2 + 0x10) + *(a1 + 0x50);
    return a1;
}
