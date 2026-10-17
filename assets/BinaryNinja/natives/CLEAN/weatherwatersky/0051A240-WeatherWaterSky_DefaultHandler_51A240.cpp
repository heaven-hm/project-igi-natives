// IGI native provenance: WeatherWaterSky_DefaultHandler_51A240 - 0x0051A240 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051A240-WeatherWaterSky_DefaultHandler_51A240.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_DefaultHandler_51A240.h"

int32_t WeatherWaterSky_DefaultHandler_51A240(void* arg1)

{
    __builtin_memset(arg1 + 0x68, 0, 0x190);
    *(arg1 + 0x1f8) = 0;
    *(arg1 + 0x1fc) = 0;
    return 0;
}
