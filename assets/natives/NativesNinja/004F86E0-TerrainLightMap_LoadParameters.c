#include "004F86E0-TerrainLightMap_LoadParameters.h"
/* 0x004f86e0 TerrainLightMap_LoadParameters full linked: callers=0 callees=2 */
int32_t sub_4f86e0(void* a1)

{
    char result = *(a1 + 0xcd);

    if (!result)
        return result;

    if (!*(a1 + 0xca))
    {
        int32_t eax_1 = *(a1 + 0xd8);
        int32_t ecx_2 = *(*(a1 + 0x68) + 0xdec);

        if (eax_1 != ecx_2 - 1)
        {
            void* ecx_3 = *((ecx_2 << 2) + &g_bc009c);
            *((eax_1 << 2) + &g_bc00a0) = ecx_3;
            *(ecx_3 + 0xd8) = eax_1;
        }

        *(*(a1 + 0x68) + 0xdec) = ecx_2 - 1;
        int32_t* ecx_4 = *(a1 + 0x108);

        if (ecx_4 && !*(*(a1 + 0xdc) * 0x2c + &g_b81b24))
            Struct_Clear36(ecx_4);
    }

    return sub_4c7560(*(a1 + 0x68), a1);
}
