#include "TerrainLightMap_LoadParameters.h"
int32_t TerrainLightMap_LoadParameters(void* a1)

{
    char result = *(a1 + 0xcd);

    if (!result)
        return result;

    if (!*(a1 + 0xca))
    {
        int32_t valA1 = *(a1 + 0xd8);
        int32_t objC2 = *(*(a1 + 0x68) + 0xdec);

        if (valA1 != objC2 - 1)
        {
            void* objC3 = *((objC2 << 2) + &g_bc009c);
            *((valA1 << 2) + &g_bc00a0) = objC3;
            *(objC3 + 0xd8) = valA1;
        }

        *(*(a1 + 0x68) + 0xdec) = objC2 - 1;
        int32_t* objC4 = *(a1 + 0x108);

        if (objC4 && !*(*(a1 + 0xdc) * 0x2c + &g_b81b24))
            Struct_Clear36(objC4);
    }

    return DynObj_RegisterSymbol_9(*(a1 + 0x68), a1);
}
