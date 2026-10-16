#include "004A86C4-Camera_ApplyWideScreen_13.h"
/* 0x004a86c4 Camera_ApplyWideScreen_13 full linked: callers=3 callees=0 */
int32_t sub_4a86c4(int32_t a1, int32_t a2) __pure

{
    if (a2 != 0x7ff00000)
    {
        if (a2 == 0xfff00000 && !a1)
            return 2;
    }
    else if (!a1)
        return 1;

    int16_t ecx_2 = *(&a2 + 2) & 0x7ff8;

    if (ecx_2 == 0x7ff8)
        return 3;

    if (ecx_2 == 0x7ff0 && (a2 & 0x7ffff || a1))
        return 4;

    return 0;
}
