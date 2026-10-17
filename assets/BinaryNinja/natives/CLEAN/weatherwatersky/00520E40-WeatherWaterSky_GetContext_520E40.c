// IGI native provenance: WeatherWaterSky_GetContext_520E40 - 0x00520E40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00520E40-WeatherWaterSky_GetContext_520E40.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_GetContext_520E40.h"

void* WeatherWaterSky_GetContext_520E40(void* arg1)

{
    *(arg1 + 0x20) = g_a44344;
    *(arg1 + 0x38) = 0;
    *(arg1 + 0x3c) = 0;
    *(arg1 + 0x2c) = 0x3f800000;
    *(arg1 + 0x30) = 0x3f800000;
    *(arg1 + 0x34) = 0x3f800000;
    *(arg1 + 0x28) = 0;
    *(arg1 + 0x24) = 0x42800000;
    return arg1;
}
