#include "gi_platform.h"
#include "004F86E0-TerrainLightMap_LoadParameters.h"
int32_t TerrainLightMap_LoadParameters(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0xcd));

    if (!result)
        return result;

    if (!(*(int32_t*)(uintptr_t)(a1 + 0xca)))
    {
        int32_t valA1 = (*(int32_t*)(uintptr_t)(a1 + 0xd8));
        int32_t objC2 = (*(int32_t*)(uintptr_t)(*(a1 + 0x68) + 0xdec));

        if (valA1 != objC2 - 1)
        {
            void* objC3 = *((objC2 << 2) + &g_bc009c);
            *((valA1 << 2) + &g_bc00a0) = objC3;
            *(objC3 + 0xd8) = valA1;
        }

        (*(int32_t*)(uintptr_t)(*(a1 + 0x68) + 0xdec)) = objC2 - 1;
        int32_t* objC4 = (*(int32_t*)(uintptr_t)(a1 + 0x108));

        if (objC4 && !(*(int32_t*)(uintptr_t)(*(a1 + 0xdc) * 0x2c + &g_b81b24)))
            Struct_Clear36(objC4);
    }

    return DynObj_RegisterSymbol_9((*(int32_t*)(uintptr_t)(a1 + 0x68)), a1);
}
