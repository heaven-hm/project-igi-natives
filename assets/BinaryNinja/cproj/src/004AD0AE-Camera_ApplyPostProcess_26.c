#include "gi_platform.h"
#include "004AD0AE-Camera_ApplyPostProcess_26.h"
int32_t Camera_ApplyPostProcess_26(int32_t a1)

{
    if (a1 >= g_c32540)
        return 0;

    int32_t valA1 = a1 & 0x1f;
    valA1 = (*(int32_t*)(uintptr_t)((&g_c32440)[a1 >> 5] + (valA1 << 3) + 4));
    return valA1 & 0x40;
}
