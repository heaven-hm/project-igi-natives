#include "004AC6FD-Camera_ApplyWideScreen_24.h"
/* 0x004ac6fd Camera_ApplyWideScreen_24 full linked: callers=1 callees=0 */
int32_t sub_4ac6fd(int32_t a1) __pure

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

    int32_t ecx_1 = a1 & 0x300;

    if (ecx_1)
    {
        if (ecx_1 == 0x100)
            *(&result + 1) |= 4;
        else if (ecx_1 == 0x200)
            *(&result + 1) |= 8;
        else if (ecx_1 == 0x300)
            *(&result + 1) |= 0xc;
    }

    int32_t ecx_3 = a1 & 0x30000;

    if (!ecx_3)
        result |= 0x300;
    else if (ecx_3 == 0x10000)
        result |= 0x200;

    if (a1 & 0x40000)
        *(&result + 1) |= 0x10;

    return result;
}
