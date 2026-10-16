#include "gi_platform.h"
#include "004AB6DD-Camera_SetFieldOfView_22.h"
BOOL Camera_SetFieldOfView_22(int32_t* a1)

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
    (*(int32_t*)(uintptr_t)(*a1 + 4)) = a1[1];
    return HeapFree(g_c32428, HEAP_NONE, a1);
}
