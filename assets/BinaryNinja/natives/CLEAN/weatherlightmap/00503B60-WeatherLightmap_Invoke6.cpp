// IGI native provenance: WeatherLightmap_Invoke6 - 0x00503B60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00503B60-WeatherLightmap_Invoke6.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_Invoke6.h"

void* WeatherLightmap_Invoke6(void* arg1)

{
    DynObj_LookupHashItem_6(g_a44344, arg1, 0);
    return DynObj_RegisterSymbol_8(g_a44344, arg1, 0);
}
