#include "004AB6DD-Camera_SetFieldOfView_22.h"
/* 0x004ab6dd Camera_SetFieldOfView_22 full linked: callers=1 callees=2 */
BOOL sub_4ab6dd(int32_t* a1)

{
    BOOL result = VirtualFree(a1[4], 0, MEM_RELEASE);

    if (g_5466d0 == a1)
    {
        result = a1[1];
        g_5466d0 = result;
    }

    if (a1 == &g_5446b0)
    {
        g_5446c0 = 0xffffffff;
        return result;
    }

    *a1[1] = *a1;
    *(*a1 + 4) = a1[1];
    return HeapFree(g_c32428, HEAP_NONE, a1);
}
