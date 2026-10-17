// IGI native provenance: WeatherWaterSky_Invoke7 - 0x0051D8B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051D8B0-WeatherWaterSky_Invoke7.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_Invoke7.h"

void* WeatherWaterSky_Invoke7(void* arg1)

{
    *(g_a44344 + 0xdfc) = 0;
    return DynObj_RemoveSymbol_7(*(arg1 + 0x68), arg1, 0xffffffff);
}
