// IGI native provenance: WeatherLightmap_GetContext_5049D0 - 0x005049D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005049D0-WeatherLightmap_GetContext_5049D0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_GetContext_5049D0.h"

void* WeatherLightmap_GetContext_5049D0(void* arg1)

{
    *(arg1 + 0xb5) = 0;
    *(arg1 + 0xa8) = 0;
    *(arg1 + 0xac) = 0;
    *(arg1 + 0xb0) = 0;
    return arg1;
}
