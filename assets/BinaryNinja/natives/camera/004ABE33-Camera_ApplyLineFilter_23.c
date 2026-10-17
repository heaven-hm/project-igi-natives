// Original IGI.EXE function: Camera_ApplyLineFilter_23 (VA 0x004ABE33; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyLineFilter_23.h"
int32_t Camera_ApplyLineFilter_23(int32_t a1)

{
    if (a1 < g_c32540)
    {
        int32_t valA = a1 & 0x1f;
        int32_t objC3 = (&g_c32440)[a1 >> 5];

        if (*(objC3 + (valA << 3) + 4) & 1)
            return *(objC3 + (valA << 3));
    }

    g_936068 = 0;
    g_936064 = 9;
    return 0xffffffff;
}
