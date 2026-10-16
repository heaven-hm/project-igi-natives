#include "gi_platform.h"
#include "004AC6FD-Camera_ApplyWideScreen_24.h"
int32_t Camera_ApplyWideScreen_24(int32_t a1) __pure

{
    int32_t result = 0;

    if (a1 & 0x10)
        result = 1;

    if (a1 & 8)
        result |= 4;

    if (a1 & 4)
        result |= 8;

    if (a1 & 2)
        result |= 0x10;

    if (a1 & 1)
        result |= 0x20;

    if (a1 & 0x80000)
        result |= 2;

    int32_t objC1 = a1 & 0x300;

    if (objC1)
    {
        if (objC1 == 0x100)
            *(&result + 1) |= 4;
        else if (objC1 == 0x200)
            *(&result + 1) |= 8;
        else if (objC1 == 0x300)
            *(&result + 1) |= 0xc;
    }

    int32_t objC3 = a1 & 0x30000;

    if (!objC3)
        result |= 0x300;
    else if (objC3 == 0x10000)
        result |= 0x200;

    if (a1 & 0x40000)
        *(&result + 1) |= 0x10;

    return result;
}
