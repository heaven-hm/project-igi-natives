#include "Camera_ApplyBandFilter_24.h"
int32_t Camera_ApplyBandFilter_24(int16_t a1) __pure

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

    uint32_t objC = a1;
    int32_t tmpD1 = objC & 0xc00;

    if (tmpD1)
    {
        if (tmpD1 == 0x400)
            *(&result + 1) |= 1;
        else if (tmpD1 == 0x800)
            result |= 0x200;
        else if (tmpD1 == 0xc00)
            result |= 0x300;
    }

    int32_t objC1 = objC & 0x300;

    if (!objC1)
        result |= 0x20000;
    else if (objC1 == 0x200)
        result |= 0x10000;

    if (!(*(&a1 + 1) & 0x10))
        return result;

    return result | 0x40000;
}
