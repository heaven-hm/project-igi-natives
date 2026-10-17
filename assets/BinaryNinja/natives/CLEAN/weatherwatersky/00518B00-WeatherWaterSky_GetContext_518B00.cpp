// IGI native provenance: WeatherWaterSky_GetContext_518B00 - 0x00518B00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00518B00-WeatherWaterSky_GetContext_518B00.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_GetContext_518B00.h"

void* WeatherWaterSky_GetContext_518B00(void* arg1)

{
    void* a44344_1 = g_a44344;
    g_ba2040 = *(arg1 + 0x4c1c);
    *(a44344_1 + 0xdfc) = &g_ba2040;
    int32_t ecx_1 = g_a81020 + 1;
    g_a81020 = ecx_1;
    *((ecx_1 << 2) + &data_a80308) = arg1;
    return arg1;
}
