// IGI native provenance: WeatherLightmap_GetContext_505D50 - 0x00505D50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00505D50-WeatherLightmap_GetContext_505D50.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_GetContext_505D50.h"

int32_t WeatherLightmap_GetContext_505D50(void* arg1)

{
    *(arg1 + 0x68) = g_a44344;
    *(arg1 + 0xbc) = 0xffffffff;
    *(arg1 + 0xc0) = 0xffffffff;
    *(arg1 + 0xe4) = 0xffffffff;
    __builtin_memset(arg1 + 0x70, 0, 0x48);
    *(arg1 + 0xb8) = 0xa;
    *(arg1 + 0xc4) = 0;
    *(arg1 + 0xd0) = 0;
    *(arg1 + 0xd8) = 0x20;
    *(arg1 + 0xd1) = 0;
    *(arg1 + 0xd4) = 0;
    *(arg1 + 0xe0) = 0;
    *(arg1 + 0xd2) = 0;
    *(arg1 + 0xd3) = 1;
    *(arg1 + 0xe8) = 0;
    *(arg1 + 0xd5) = 1;
    return Sys_OpenFileStream_14(0xa7acf8, 0x19111911);
}
