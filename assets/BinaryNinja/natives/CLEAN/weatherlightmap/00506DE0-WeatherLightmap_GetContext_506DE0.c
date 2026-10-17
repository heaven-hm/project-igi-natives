// IGI native provenance: WeatherLightmap_GetContext_506DE0 - 0x00506DE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00506DE0-WeatherLightmap_GetContext_506DE0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_GetContext_506DE0.h"

int32_t WeatherLightmap_GetContext_506DE0(void* arg1)

{
    int32_t a44344_1 = g_a44344;
    *(arg1 + 0xc0) = 0xffffffff;
    *(arg1 + 0xf8) = 0xffffffff;
    *(arg1 + 0x68) = a44344_1;
    __builtin_memset(arg1 + 0x70, 0, 0x48);
    *(arg1 + 0xb8) = 0xc;
    *(arg1 + 0xbc) = 0xff;
    *(arg1 + 0xc4) = 0;
    *(arg1 + 0xe4) = 0x80;
    *(arg1 + 0xec) = 0;
    *(arg1 + 0xfc) = 0;
    *(arg1 + 0xf0) = 0;
    *(arg1 + 0xf4) = 0;
    __builtin_memcpy(arg1 + 0xd0,
        "\x08\x00\x00\x00\x07\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x01\x00\x01\x00", 0x13);
    return Sys_OpenFileStream_14(0xa7b138, 0x19111911);
}
