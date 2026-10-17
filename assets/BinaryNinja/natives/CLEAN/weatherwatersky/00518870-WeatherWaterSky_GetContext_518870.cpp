// IGI native provenance: WeatherWaterSky_GetContext_518870 - 0x00518870 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00518870-WeatherWaterSky_GetContext_518870.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_GetContext_518870.h"

void* WeatherWaterSky_GetContext_518870(void* arg1, int32_t* arg2)

{
    *(arg1 + 0x38) = *arg2;
    *(arg1 + 0x44) = g_a44344;
    *(arg1 + 0x3c) = 0;
    return arg1;
}
