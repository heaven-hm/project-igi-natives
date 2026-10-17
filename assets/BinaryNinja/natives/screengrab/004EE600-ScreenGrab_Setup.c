// Original IGI.EXE function: ScreenGrab_Setup (VA 0x004EE600; static CFG gate PASS, CFG score 1.000).
#include "ScreenGrab_Setup.h"
int32_t* ScreenGrab_Setup(void* a1)

{
    int32_t* result = *(a1 + 0x20);
    int16_t objC2;

    if (!result)
    {
        result = Mem_Alloc(0xb, 4);
        *(a1 + 0x20) = result;
        *result = g_54dccc[0];
        result[1] = g_54dccc[4][0];
        objC2 = g_54dccc[8][0];
        result[2] = objC2;
        *(result + 0xa) = g_54dccc[0xa][0];
    }

    result = *(a1 + 0x24);

    if (result)
    {
        result = *(a1 + 0x25);

        if (!result)
        {
            g_54dcbc = 0x186a0;
            g_a70c5b = 1;
        }

        result = *(a1 + 0x24);

        if (result)
        {
            objC2 = *(a1 + 0x24);
            *(a1 + 0x25) = objC2;
            return result;
        }
    }

    g_a70c5b = 0;
    result = *(a1 + 0x24);
    *(a1 + 0x25) = result;
    return result;
}
