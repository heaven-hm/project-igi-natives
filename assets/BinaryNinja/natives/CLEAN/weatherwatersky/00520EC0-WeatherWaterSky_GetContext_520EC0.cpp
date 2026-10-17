// IGI native provenance: WeatherWaterSky_GetContext_520EC0 - 0x00520EC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00520EC0-WeatherWaterSky_GetContext_520EC0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_GetContext_520EC0.h"

void* WeatherWaterSky_GetContext_520EC0(void* arg1)

{
    *(arg1 + 0x68) = g_a44344;
    *(arg1 + 0x74) = 0x3f800000;
    *(arg1 + 0x78) = 0x3f800000;
    *(arg1 + 0x7c) = 0x3f800000;
    *(arg1 + 0x80) = 0x3f800000;
    void* data_val = *(arg1 + 0x68);
    *(arg1 + 0x84) = 0xffffffff;
    *(arg1 + 0x6c) = 0;
    *(arg1 + 0x70) = 0;
    *(arg1 + 0x88) = 0;
    *(arg1 + 0x8c) = 0;
    *(arg1 + 0x90) = 0;
    *(arg1 + 0x94) = 0;
    return DynObj_RegisterSymbol_8(data_val, arg1, 0);
}
