#include "004AB3ED-Camera_UpdateViewCone_21.h"
/* 0x004ab3ed Camera_UpdateViewCone_21 full linked: callers=1 callees=4 */
int32_t* sub_4ab3ed()

{
    int32_t eax_3 = g_c321f4;
    int32_t ecx = g_c321e4;

    if (eax_3 != ecx)
        goto label_4ab446;

    int32_t eax_2 = HeapReAlloc(g_c32428, HEAP_NONE, g_c321f8, (ecx * 5 + 0x50) << 2);

    if (eax_2)
    {
        g_c321e4 += 0x10;
        g_c321f8 = eax_2;
        eax_3 = g_c321f4;
    label_4ab446:
        int32_t* result = g_c321f8 + eax_3 * 0x14;
        int32_t eax_5 = HeapAlloc(g_c32428, HEAP_ZERO_MEMORY, 0x41c4);
        result[4] = eax_5;

        if (eax_5)
        {
            int32_t eax_6 = VirtualAlloc(nullptr, 0x100000, MEM_RESERVE, PAGE_READWRITE);
            result[3] = eax_6;

            if (eax_6)
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
