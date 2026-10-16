#include "00450E10-AI_SelectTarget.h"
/* 0x00450e10 AI_SelectTarget full linked: callers=18 callees=2 */
void* sub_450e10(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t* eax = sub_450de0(g_5bda58);
    eax[1] = 0;
    *eax = 0;
    int32_t edx = g_5bda64;
    eax[6] = 0;
    eax[2] = edx;
    eax[4] = a3;
    eax[7] = 0;
    eax[8] = 0;
    eax[9] = 0;
    eax[5] = a1;
    eax[0xa] = a2;
    eax[0xb] = 1;
    return sub_4af8f0(g_5bda5c, eax);
}
