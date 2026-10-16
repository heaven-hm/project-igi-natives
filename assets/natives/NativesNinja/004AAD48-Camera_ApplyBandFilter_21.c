#include "004AAD48-Camera_ApplyBandFilter_21.h"
/* 0x004aad48 Camera_ApplyBandFilter_21 full linked: callers=1 callees=1 */
int32_t sub_4aad48(int32_t a1)

{
    int32_t result = HeapAlloc(g_c32428, HEAP_NONE, 0x140);
    g_c321f8 = result;

    if (!result)
        return result;

    g_c321f0 = 0;
    g_c321f4 = 0;
    g_c321ec = result;
    g_c321fc = a1;
    g_c321e4 = 0x10;
    return 1;
}
