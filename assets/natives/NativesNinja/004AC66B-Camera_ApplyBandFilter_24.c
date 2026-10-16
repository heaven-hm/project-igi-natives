#include "004AC66B-Camera_ApplyBandFilter_24.h"
/* 0x004ac66b Camera_ApplyBandFilter_24 full linked: callers=1 callees=0 */
int32_t sub_4ac66b(int16_t a1) __pure

{
    int32_t result = 0;

    if (a1 & 1)
        result = 0x10;

    if (a1 & 4)
        result |= 8;

    if (a1 & 8)
        result |= 4;

    if (a1 & 0x10)
        result |= 2;

    if (a1 & 0x20)
        result |= 1;

    if (a1 & 2)
        result |= 0x80000;

    uint32_t ecx = a1;
    int32_t edx_1 = ecx & 0xc00;

    if (edx_1)
    {
        if (edx_1 == 0x400)
            *(&result + 1) |= 1;
        else if (edx_1 == 0x800)
            result |= 0x200;
        else if (edx_1 == 0xc00)
            result |= 0x300;
    }

    int32_t ecx_1 = ecx & 0x300;

    if (!ecx_1)
        result |= 0x20000;
    else if (ecx_1 == 0x200)
        result |= 0x10000;

    if (!(*(&a1 + 1) & 0x10))
        return result;

    return result | 0x40000;
}
