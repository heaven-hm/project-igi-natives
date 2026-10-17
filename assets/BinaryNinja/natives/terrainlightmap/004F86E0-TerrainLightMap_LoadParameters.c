// IGI native provenance: TerrainLightMap_LoadParameters - 0x004F86E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F86E0-TerrainLightMap_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "TerrainLightMap_LoadParameters.h"
int32_t TerrainLightMap_LoadParameters(void* context)

{
    char result = *(context + 0xcd);

    if (!result)
        return result;

    if (!*(context + 0xca))
    {
        int32_t data_1 = *(context + 0xd8);
        int32_t entity_2 = *(*(context + 0x68) + 0xdec);

        if (data_1 != entity_2 - 1)
        {
            void* entity_3 = *((entity_2 << 2) + &g_bc009c);
            *((data_1 << 2) + &g_bc00a0) = entity_3;
            *(entity_3 + 0xd8) = data_1;
        }

        *(*(context + 0x68) + 0xdec) = entity_2 - 1;
        int32_t* entity_4 = *(context + 0x108);

        if (entity_4 && !*(*(context + 0xdc) * 0x2c + &g_b81b24))
            Struct_Clear36(entity_4);
    }

    return DynObj_RegisterSymbol_9(*(context + 0x68), context);
}
