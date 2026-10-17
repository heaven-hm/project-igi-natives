// IGI native provenance: WeatherWaterSky_Invoke8 - 0x00520E80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00520E80-WeatherWaterSky_Invoke8.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_Invoke8.h"

void* WeatherWaterSky_Invoke8(void* arg1)

{
    if (*(arg1 + 0x3c) >= 0xa)
        *(arg1 + 0x3c) = 9;

    void* data_val = nullptr;

    if (*(arg1 + 0x3c) < 0)
        *(arg1 + 0x3c) = 0;

    int32_t ecx_1 = *(arg1 + 0x3c);

    if (*((ecx_1 << 2) + &g_ba1e20))
        data_val = ecx_1 * 0x24 + &data_ba1e60;

    *(arg1 + 0x38) = data_val;
    return arg1;
}
