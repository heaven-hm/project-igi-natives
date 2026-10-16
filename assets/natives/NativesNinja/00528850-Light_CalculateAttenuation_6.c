#include "00528850-Light_CalculateAttenuation_6.h"
/* 0x00528850 Light_CalculateAttenuation_6 full linked: callers=2 callees=1 */
void* sub_528850(void* a1)

{
    *(a1 + 0x148) = 0;
    *(a1 + 0x150) = 0;
    *(a1 + 0x158) = 0;
    *(a1 + 0x160) = 0;
    *(a1 + 0x168) = 0;
    *(a1 + 0x170) = 0;
    *(a1 + 0xd4) = 0;
    *(a1 + 0x19f) = 1;
    *(a1 + 0x100) = sub_528930;
    *(a1 + 0x108) = 0xffffffff;
    *(a1 + 0x10c) = 0xffffffff;
    *(a1 + 0x14c) = 0;
    *(a1 + 0x154) = 0;
    *(a1 + 0x15c) = 0;
    *(a1 + 0x164) = 0;
    *(a1 + 0x16c) = 0;
    __builtin_memset(a1 + 0x174, 0, 0x2b);
    *(a1 + 0x140) = 0;
    *(a1 + 0x141) = 0;
    *(a1 + 0x1a0) = 1;
    return a1;
}
