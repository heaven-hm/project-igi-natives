// Original IGI.EXE function: App_ContextSetTerrainLightmapsUsed (VA 0x0048F260; static CFG gate PASS, CFG score 1.000).
#include "App_ContextSetTerrainLightmapsUsed.h"
int32_t App_ContextSetTerrainLightmapsUsed(char a1)

// Sig: void App_ContextSetTerrainLightmapsUsed(int8_t used)
// Note: Enables/disables TERRAIN lightmaps globally (global 0x5C8BE8). Param:
// used = 1 lit terrain, 0 unlit. Pair with AppContext_SetLightmapsUsed for full
// lighting control.
{
    int32_t result = a1;
    g_5c8be8 = result;
    return result;
}
