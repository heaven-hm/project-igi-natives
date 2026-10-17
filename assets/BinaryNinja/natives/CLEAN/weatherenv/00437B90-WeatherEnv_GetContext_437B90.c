// IGI native provenance: WeatherEnv_GetContext_437B90 - 0x00437B90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00437B90-WeatherEnv_GetContext_437B90.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherEnv_GetContext_437B90.h"

int32_t* WeatherEnv_GetContext_437B90(void* arg1)

{
    __builtin_memset(arg1 + 0x28, 0, 0x30);
    *(arg1 + 0x98) = 0;
    *(arg1 + 0x20) = 0;
    *(arg1 + 0xf4) = 0;
    *(arg1 + 0x7c) = 0;
    *(arg1 + 0x80) = 0;
    *(arg1 + 0x88) = 0x40900000;
    *(arg1 + 0x8c) = 0x40c00000;
    *(arg1 + 0x90) = 0x3f490fdb;
    *(arg1 + 0x9c) = 0x403e0000;
    *(arg1 + 0xa0) = 0;
    __builtin_memcpy(arg1 + 0xf8,
        "\x64\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x40",
        0x18);
    *(arg1 + 0x110) = 0;
    *(arg1 + 0x114) = 0x402aaaab;
    *(arg1 + 0x84) = 0x3f000000;
    *(arg1 + 0x118) = 3;
    *(arg1 + 0x11c) = 0;
    *(arg1 + 0x120) = 0;
    *(arg1 + 0x124) = 0x3f800000;
    *(arg1 + 0x128) = 0x3f800000;
    *(arg1 + 0x170) = 0;
    *(arg1 + 0x171) = 0;
    Script_ExecuteLevelScript_6(arg1 + 0xa4);
    return Sys_ResolveSymbol_13(0x57bde8);
}
