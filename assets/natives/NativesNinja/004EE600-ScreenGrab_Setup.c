#include "004EE600-ScreenGrab_Setup.h"
/* 0x004ee600 ScreenGrab_Setup full linked: callers=0 callees=1 */
int32_t* sub_4ee600(void* a1)

{
    int32_t* result = *(a1 + 0x20);
    int16_t ecx_2;

    if (!result)
    {
        result = Mem_Alloc(0xb, 4);
        *(a1 + 0x20) = result;
        *result = g_54dccc[0];
        result[1] = g_54dccc[4][0];
        ecx_2 = g_54dccc[8][0];
        result[2] = ecx_2;
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
            ecx_2 = *(a1 + 0x24);
            *(a1 + 0x25) = ecx_2;
            return result;
        }
    }

    g_a70c5b = 0;
    result = *(a1 + 0x24);
    *(a1 + 0x25) = result;
    return result;
}
