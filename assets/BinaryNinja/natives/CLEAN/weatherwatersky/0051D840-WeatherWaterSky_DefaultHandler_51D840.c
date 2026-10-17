// IGI native provenance: WeatherWaterSky_DefaultHandler_51D840 - 0x0051D840 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051D840-WeatherWaterSky_DefaultHandler_51D840.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_DefaultHandler_51D840.h"

int32_t WeatherWaterSky_DefaultHandler_51D840(void* arg1)

{
    *(arg1 + 0x68) = g_a44344;
    void* context_val = *(arg1 + 0x68);
    *(arg1 + 0x70) = 0;
    __builtin_strncpy(arg1 + 0x7c, "PUU?", 0x10);
    *(arg1 + 0x78) = 0x46ea6000;
    *(arg1 + 0x74) = 0x40140000;
    DynObj_RegisterSymbol_8(context_val, arg1, 0xffffffff);
    *(g_a44344 + 0xdfc) = &data_ba2000;
    int32_t* ecx_1 = *(g_a44344 + 0xdfc);
    *ecx_1 = *(arg1 + 0x70);
    int32_t result = *(arg1 + 0x74);
    ecx_1[1] = result;
    return result;
}
