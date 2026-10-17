// IGI native provenance: WeatherLightmap_DefaultHandler_4F8190 - 0x004F8190 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F8190-WeatherLightmap_DefaultHandler_4F8190.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_DefaultHandler_4F8190.h"

int32_t WeatherLightmap_DefaultHandler_4F8190(void* arg1)

{
    *(arg1 + 0x68) = g_a44344;
    __builtin_memset(arg1 + 0x70, 0, 0x48);
    __builtin_memset(arg1 + 0xe4, 0, 0x24);
    *(arg1 + 0xc1) = 0;
    *(arg1 + 0xc0) = 0;
    *(arg1 + 0xc2) = 0;
    *(arg1 + 0xc8) = 0;
    *(arg1 + 0xc7) = 0;
    *(arg1 + 0xd8) = 0;
    *(arg1 + 0xdc) = 0xffffffff;
    *(arg1 + 0xb8) = 0xa;
    *(arg1 + 0xc5) = 0;
    *(arg1 + 0xc4) = 0;
    *(arg1 + 0xc6) = 0;
    *(arg1 + 0xc3) = 0;
    *(arg1 + 0xd0) = 0x40;
    *(arg1 + 0xc9) = 0;
    *(arg1 + 0x10c) = 0;
    *(arg1 + 0xca) = 0;
    *(arg1 + 0xcb) = 0;
    *(arg1 + 0xcc) = 0;
    *(arg1 + 0xcd) = 0;
    *(arg1 + 0xd4) = 0x40;
    *(arg1 + 0x108) = 0;
    return Sys_OpenFileStream_14(0xa76cd0, 0x19111911);
}
