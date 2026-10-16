#include "gi_platform.h"
#include "00495CD0-Display_CreateSurface_9.h"
int32_t Display_CreateSurface_9(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t* flagP = a1;
    int32_t result = 0;
    int32_t dstD = a3;

    if (((int(*)())(uintptr_t)(*(*flagP + 0x2c)))(flagP, a2, dstD, &a1, &a3, 0, 0, 0))
        return 0;

    int32_t valA2 = g_5ca1a0;
    int32_t srcS = g_5ca19c;

    if (srcS >= valA2 + dstD)
    {
        Resource_Unpack(g_5ca194, a1, dstD);
        g_5ca1a0 += dstD;
    }
    else
    {
        void* srcS1 = srcS - valA2;
        Resource_Unpack(g_5ca194, a1, srcS1);
        Sys_ExecuteBytecode_4(g_5ca194, 0x2c, 0);
        void* dstD1 = dstD - srcS1;
        Resource_Unpack(g_5ca194, srcS1 + a1, dstD1);
        g_5ca1a0 = dstD1;
        result = 1;
    }

    ((int(*)())(uintptr_t)(*(*flagP + 0x4c)))(flagP, a1, a3, 0, 0);
    return result;
}
