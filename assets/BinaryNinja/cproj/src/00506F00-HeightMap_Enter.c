#include "gi_platform.h"
#include "00506F00-HeightMap_Enter.h"
void* HeightMap_Enter(void* a1)

{
    int32_t objC = (*(int32_t*)(uintptr_t)(a1 + 0xbc));

    if (objC < 0 || !(*(int32_t*)(uintptr_t)(*(*(a1 + 0x68) + 0xdd0) + objC * 0xc)))
    {
        (*(int32_t*)(uintptr_t)(a1 + 0xe8)) = 0;
        return a1;
    }

    int32_t tmpD3 = (*(int32_t*)(uintptr_t)(a1 + 0xf8));
    (*(int32_t*)(uintptr_t)(a1 + 0xe8)) = 1;
    int32_t objC2 = g_b97df4;
    *((objC2 << 2) + &g_b97d40) = tmpD3 + 1;
    int32_t valA1 = (*(int32_t*)(uintptr_t)(a1 + 0xf8)) + 1;
    g_ba2058 = valA1;
    g_b97df4 = objC2 + 1;
    return valA1;
}
