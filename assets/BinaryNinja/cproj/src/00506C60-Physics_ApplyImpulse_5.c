#include "gi_platform.h"
#include "00506C60-Physics_ApplyImpulse_5.h"
int32_t Physics_ApplyImpulse_5(int32_t a1) __pure

{
    if (a1 >= 0x100)
        return 0x100;

    if (a1 >= 0x80)
        return 0x80;

    if (a1 >= 0x40)
        return 0x40;

    if (a1 >= 0x20)
        return 0x20;

    int32_t objC = 0;
    objC = a1 < 0x10;
    return ((objC - 1) & 8) + 8;
}
