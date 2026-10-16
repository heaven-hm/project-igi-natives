#include "00428A00-Menu_PlayMusic_19.h"
/* 0x00428a00 Menu_PlayMusic_19 full linked: callers=1 callees=0 */
int32_t Menu_PlayMusic_19(int32_t a1)

{
    int32_t ecx;
    int32_t var_4_1 = ecx;
    int32_t eax = 0;
    int32_t ecx_1 = 0;
    eax = g_c28d2d;
    ecx_1 = g_c28d2f;
    int32_t edx = 0;
    int32_t ecx_4 = 0;
    *(a1 + 0x73c) = (ecx_1 >> 7) - (eax >> 7);
    edx = g_c28d2a;
    ecx_4 = g_c28d32;
    *(a1 + 0x734) = (ecx_4 >> 7) - (edx >> 7);
    return a1;
}
