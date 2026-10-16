#include "00506C60-Physics_ApplyImpulse_5.h"
/* 0x00506c60 Physics_ApplyImpulse_5 full linked: callers=2 callees=0 */
int32_t sub_506c60(int32_t a1) __pure

{
    if (a1 >= 0x100)
        return 0x100;

    if (a1 >= 0x80)
        return 0x80;

    if (a1 >= 0x40)
        return 0x40;

    if (a1 >= 0x20)
        return 0x20;

    int32_t ecx = 0;
    ecx = a1 < 0x10;
    return ((ecx - 1) & 8) + 8;
}
