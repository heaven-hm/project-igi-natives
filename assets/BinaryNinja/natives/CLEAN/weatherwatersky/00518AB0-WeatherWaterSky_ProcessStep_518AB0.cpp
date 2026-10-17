// IGI native provenance: WeatherWaterSky_ProcessStep_518AB0 - 0x00518AB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00518AB0-WeatherWaterSky_ProcessStep_518AB0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_ProcessStep_518AB0.h"

void* WeatherWaterSky_ProcessStep_518AB0()

{
    int32_t a81020_1 = g_a81020;
    g_a81020 = a81020_1 - 1;

    if (a81020_1 == 1)
    {
        void* a44344_1 = g_a44344;
        *(a44344_1 + 0xdfc) = 0;
        return a44344_1;
    }

    void* a44344_2 = g_a44344;
    g_ba2040 = *(*(((a81020_1 - 1) << 2) + &data_a80308) + 0x4c1c);
    *(a44344_2 + 0xdfc) = &g_ba2040;
    return a81020_1 - 1;
}
