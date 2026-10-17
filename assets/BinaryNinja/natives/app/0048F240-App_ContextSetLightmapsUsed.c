// Original IGI.EXE function: App_ContextSetLightmapsUsed (VA 0x0048F240; static CFG gate PASS, CFG score 1.000).
#include "App_ContextSetLightmapsUsed.h"
int32_t App_ContextSetLightmapsUsed(char context)

// Sig: void App_ContextSetLightmapsUsed(int8_t used)
// Note: Enables/disables OBJECT lightmaps globally (global 0x5C8BE4) - the
// verified retail lightmap setter. Param: used = 1 use object lightmaps, 0
// flat-lit. Use for graphics enhancers (this is what IGIPatch's lightmap
// toggles call).
{
    int32_t result = context;
    g_5c8be4 = result;
    return result;
}
