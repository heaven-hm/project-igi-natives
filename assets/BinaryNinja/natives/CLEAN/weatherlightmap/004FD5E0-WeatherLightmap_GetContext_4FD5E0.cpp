// IGI native provenance: WeatherLightmap_GetContext_4FD5E0 - 0x004FD5E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FD5E0-WeatherLightmap_GetContext_4FD5E0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_GetContext_4FD5E0.h"

void* WeatherLightmap_GetContext_4FD5E0(void* arg1)

{
    *(arg1 + 0x88) = 0xffffffff;
    *(arg1 + 0x90) = 0xffffffff;
    *(arg1 + 0x98) = 0xffffffff;
    *(arg1 + 0x8c) = 0x7fefffff;
    *(arg1 + 0x94) = 0x7fefffff;
    *(arg1 + 0x9c) = 0x7fefffff;
    *(arg1 + 0xa0) = 0xffffffff;
    *(arg1 + 0xa8) = 0xffffffff;
    *(arg1 + 0xb0) = 0xffffffff;
    *(arg1 + 0xa4) = 0xffefffff;
    *(arg1 + 0xac) = 0xffefffff;
    *(arg1 + 0xb4) = 0xffefffff;
    __builtin_memset(arg1 + 0x6c, 0, 0x14);
    *(arg1 + 0xf0) = 0;
    *(arg1 + 0xfd) = 1;
    *(arg1 + 0xfc) = 0;
    return arg1;
}
