// IGI native provenance: WeatherWaterSky_InvokeUpdateList - 0x0051C090 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051C090-WeatherWaterSky_InvokeUpdateList.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_InvokeUpdateList.h"

void* WeatherWaterSky_InvokeUpdateList(void* arg1)

{
    *(arg1 + 0x20) = 0;
    *(arg1 + 0x40) = 0;
    return arg1;
}
