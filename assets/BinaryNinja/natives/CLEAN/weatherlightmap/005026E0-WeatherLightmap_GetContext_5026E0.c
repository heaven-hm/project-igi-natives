// IGI native provenance: WeatherLightmap_GetContext_5026E0 - 0x005026E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005026E0-WeatherLightmap_GetContext_5026E0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_GetContext_5026E0.h"

void* WeatherLightmap_GetContext_5026E0(void* arg1)

{
    *(arg1 + 0x44) = 0x40490fdb;
    *(arg1 + 0x48) = 0x40490fdb;
    *(arg1 + 0x20) = 0;
    *(arg1 + 0x4e) = 0;
    *(arg1 + 0x4d) = 0;
    *(arg1 + 0x4c) = 0;
    *(arg1 + 0x24) = 0x14;
    __builtin_memset(arg1 + 0x28, 0, 0x1c);
    *(arg1 + 0x50) = 0x3f800000;
    *(arg1 + 0x54) = 0x3f800000;
    *(arg1 + 0x58) = 0x3f800000;
    *(arg1 + 0x5c) = 0;
    *(arg1 + 0x60) = 0;
    *(arg1 + 0x64) = 0;
    return arg1;
}
