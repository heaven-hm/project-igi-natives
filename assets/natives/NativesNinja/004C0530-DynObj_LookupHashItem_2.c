#include "004C0530-DynObj_LookupHashItem_2.h"
/* 0x004c0530 DynObj_LookupHashItem_2 full linked: callers=2 callees=0 */
uint32_t sub_4c0530(char* a1, int32_t a2)

{
    char* edx = a1;
    int32_t eax = 0;

    for (char i = *edx; i; i = *edx)
    {
        edx = &edx[1];
        eax = (eax << 5) + i;
    }

    return COMBINE(0, eax) % a2;
}
