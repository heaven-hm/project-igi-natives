// IGI native provenance: WeatherLightmap_Invoke24 - 0x004FAF50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FAF50-WeatherLightmap_Invoke24.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_Invoke24.h"

char* WeatherLightmap_Invoke24(int32_t* arg1)

{
    __builtin_memset(&g_a77260, 0, 0x240);
    arg1[2] = 0;
    return Script_ParseEnumString_24(arg1, &g_a77260, 0);
}
