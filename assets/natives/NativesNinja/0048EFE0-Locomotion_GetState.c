#include "0048EFE0-Locomotion_GetState.h"
/* 0x0048efe0 Locomotion_GetState full linked: callers=29 callees=1 */
int32_t sub_48efe0(void* a1, int32_t a2)

{
    int32_t result = sub_463110(*(a1 + 0x14));
    int32_t ecx_2 = *(*((*(a1 + 0x3d38) << 2) + &g_541658) + (a2 << 2));

    if (ecx_2 != 0xffffffff)
    {
        result = result == ecx_2;
        return result;
    }

    result = 0;
    return result;
}
