#include "gi_platform.h"
#include "0048F240-App_ContextSetLightmapsUsed.h"
int32_t App_ContextSetLightmapsUsed(char a1)

// Sig: void App_ContextSetLightmapsUsed(int8_t used)
// Note: Enables/disables OBJECT lightmaps globally (global 0x5C8BE4) - the
// verified retail lightmap setter. Param: used = 1 use object lightmaps, 0
// flat-lit. Use for graphics enhancers (this is what IGIPatch's lightmap
// toggles call).
{
    int32_t result = a1;
    g_5c8be4 = result;
    return result;
}
