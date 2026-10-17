// IGI native provenance: WeatherLightmap_Invoke4_507D00 - 0x00507D00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00507D00-WeatherLightmap_Invoke4_507D00.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_Invoke4_507D00.h"

void* WeatherLightmap_Invoke4_507D00(void* arg1)

{
    void* result = arg1;

    if (*(result + 0xbc) >= 0)
    {
        result = *(result + 0xf8);

        if (*(result * 0x30 + 0xba2088))
        {
            int32_t b97df4_1 = g_b97df4;
            *((b97df4_1 << 2) + &g_b97d40) = result;
            g_b97df4 = b97df4_1 + 1;
        }
    }

    return result;
}
