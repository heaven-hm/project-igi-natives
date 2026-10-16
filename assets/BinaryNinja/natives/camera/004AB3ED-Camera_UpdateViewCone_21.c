#include "Camera_UpdateViewCone_21.h"
int32_t* Camera_UpdateViewCone_21()

{
    int32_t valA3 = g_c321f4;
    int32_t objC = g_c321e4;

    if (valA3 != objC)
        goto label_4ab446;

    int32_t valA2 = HeapReAlloc(g_c32428, HEAP_NONE, g_c321f8, (objC * 5 + 0x50) << 2);

    if (valA2)
    {
        g_c321e4 += 0x10;
        g_c321f8 = valA2;
        valA3 = g_c321f4;
    label_4ab446:
        int32_t* result = g_c321f8 + valA3 * 0x14;
        int32_t valA5 = HeapAlloc(g_c32428, HEAP_ZERO_MEMORY, 0x41c4);
        result[4] = valA5;

        if (valA5)
        {
            int32_t valA6 = VirtualAlloc(nullptr, 0x100000, MEM_RESERVE, PAGE_READWRITE);
            result[3] = valA6;

            if (valA6)
            {
                result[2] = 0xffffffff;
                *result = 0;
                result[1] = 0;
                g_c321f4 += 1;
                *result[4] = 0xffffffff;
                return result;
            }

            HeapFree(g_c32428, HEAP_NONE, result[4]);
        }
    }

    return nullptr;
}
