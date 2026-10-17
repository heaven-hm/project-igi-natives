// IGI native provenance: App_ContextSetTerrainLightmapsUsed - 0x0048F260 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048F260-App_ContextSetTerrainLightmapsUsed.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "App_ContextSetTerrainLightmapsUsed.h"
int32_t App_ContextSetTerrainLightmapsUsed(char context)

// Sig: void App_ContextSetTerrainLightmapsUsed(int8_t used)
// Note: Enables/disables TERRAIN lightmaps globally (global 0x5C8BE8). Param:
// used = 1 lit terrain, 0 unlit. Pair with AppContext_SetLightmapsUsed for full
// lighting control.
{
    int32_t result = context;
    g_5c8be8 = result;
    return result;
}
