// IGI native provenance: WeatherWaterSky_Invoke7_520F20 - 0x00520F20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00520F20-WeatherWaterSky_Invoke7_520F20.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_Invoke7_520F20.h"

void* WeatherWaterSky_Invoke7_520F20(void* arg1)

{
    return DynObj_RemoveSymbol_7(*(arg1 + 0x68), arg1, 0);
}
