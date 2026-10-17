// IGI native provenance: WeatherWaterSky_Invoke9 - 0x005191E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005191E0-WeatherWaterSky_Invoke9.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_Invoke9.h"

int32_t WeatherWaterSky_Invoke9(void* arg1)

{
    DynObj_RegisterSymbol_9(*(arg1 + 0xf0), arg1);
    int32_t result = g_a8101c - 1;
    g_a8101c = result;
    *((result << 2) + &g_a80200) = 0;
    return result;
}
