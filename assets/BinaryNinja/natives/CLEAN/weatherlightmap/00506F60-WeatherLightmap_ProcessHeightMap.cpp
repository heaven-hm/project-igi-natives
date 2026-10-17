// IGI native provenance: WeatherLightmap_ProcessHeightMap - 0x00506F60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00506F60-WeatherLightmap_ProcessHeightMap.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_ProcessHeightMap.h"

void* WeatherLightmap_ProcessHeightMap(void* arg1)

{
    void* result = arg1;

    if (*(result + 0xe8))
    {
        int32_t b97df4_1 = g_b97df4;
        g_ba2058 = 0;
        g_b97df4 = b97df4_1 - 1;
        result = b97df4_1 - 2;

        if (result >= 0)
            g_ba2058 = *((result << 2) + &g_b97d40);
    }

    return result;
}
