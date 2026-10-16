#include "00506F00-HeightMap_Enter.h"
/* 0x00506f00 HeightMap_Enter full linked: callers=0 callees=0 */
void* sub_506f00(void* a1)

{
    int32_t ecx = *(a1 + 0xbc);

    if (ecx < 0 || !*(*(*(a1 + 0x68) + 0xdd0) + ecx * 0xc))
    {
        *(a1 + 0xe8) = 0;
        return a1;
    }

    int32_t edx_3 = *(a1 + 0xf8);
    *(a1 + 0xe8) = 1;
    int32_t ecx_2 = g_b97df4;
    *((ecx_2 << 2) + &g_b97d40) = edx_3 + 1;
    int32_t eax_1 = *(a1 + 0xf8) + 1;
    g_ba2058 = eax_1;
    g_b97df4 = ecx_2 + 1;
    return eax_1;
}
