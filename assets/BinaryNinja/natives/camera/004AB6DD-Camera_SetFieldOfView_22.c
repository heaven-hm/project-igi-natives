// Original IGI.EXE function: Camera_SetFieldOfView_22 (VA 0x004AB6DD; static CFG gate PASS, CFG score 1.000).
#include "Camera_SetFieldOfView_22.h"
BOOL Camera_SetFieldOfView_22(int32_t* context)

{
    BOOL result = VirtualFree(context[4], 0, MEM_RELEASE);

    if (g_5466d0 == context)
    {
        result = context[1];
        g_5466d0 = result;
    }

    if (context == &g_5446b0)
    {
        g_5446c0 = 0xffffffff;
        return result;
    }

    *context[1] = *context;
    *(*context + 4) = context[1];
    return HeapFree(g_c32428, HEAP_NONE, context);
}
