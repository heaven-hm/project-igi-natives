// IGI native provenance: WeatherWaterSky_GetContext_51AE50 - 0x0051AE50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051AE50-WeatherWaterSky_GetContext_51AE50.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_GetContext_51AE50.h"

int32_t* WeatherWaterSky_GetContext_51AE50(void* arg1)

{
    *(arg1 + 0x20) = 0xffffffff;
    *(arg1 + 0x24) = 0xffffffff;
    *(arg1 + 0x3c) = 0x3f800000;
    __builtin_memset(arg1 + 0x28, 0, 0x14);
    *(arg1 + 0x40) = 0;
    return DynObj_QtasklistIsFull(g_a83760, arg1);
}
