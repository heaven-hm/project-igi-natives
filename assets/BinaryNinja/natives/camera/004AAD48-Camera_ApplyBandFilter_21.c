// Original IGI.EXE function: Camera_ApplyBandFilter_21 (VA 0x004AAD48; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyBandFilter_21.h"
int32_t Camera_ApplyBandFilter_21(int32_t context)

{
    int32_t result = HeapAlloc(g_c32428, HEAP_NONE, 0x140);
    g_c321f8 = result;

    if (!result)
        return result;

    g_c321f0 = 0;
    g_c321f4 = 0;
    g_c321ec = result;
    g_c321fc = context;
    g_c321e4 = 0x10;
    return 1;
}
