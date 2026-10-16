#include "005233A0-Light_UpdateGlobalLight_2.h"
/* 0x005233a0 Light_UpdateGlobalLight_2 full linked: callers=1 callees=7 */
int32_t sub_5233a0(void* a1)

{
    sub_4b0d10(*(a1 + 0x34));
    void* ecx = *(a1 + 0x30);
    *(a1 + 0x34) = 0;
    sub_4b0d10(ecx);
    void* edx = *(a1 + 0x1c);
    *(a1 + 0x30) = 0;
    sub_4b0d10(edx);
    void* eax_1 = *(a1 + 8);
    *(a1 + 0x1c) = 0;
    sub_4b0d10(eax_1);
    *(a1 + 8) = 0;
    int32_t* esi = a1 + 0xc;
    int32_t i_1 = 4;
    int32_t i;

    do
    {
        sub_4b0d10(esi[5]);
        esi[5] = 0;
        sub_4b0d10(*esi);
        *esi = 0;
        esi = &esi[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return sub_4b0d10(a1);
}
