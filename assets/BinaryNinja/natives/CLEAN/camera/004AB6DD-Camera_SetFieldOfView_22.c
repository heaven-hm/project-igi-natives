// IGI native provenance: Camera_SetFieldOfView_22 - 0x004AB6DD - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AB6DD-Camera_SetFieldOfView_22.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
