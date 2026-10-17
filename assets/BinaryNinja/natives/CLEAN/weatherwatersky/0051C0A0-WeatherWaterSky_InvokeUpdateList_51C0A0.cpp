// IGI native provenance: WeatherWaterSky_InvokeUpdateList_51C0A0 - 0x0051C0A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051C0A0-WeatherWaterSky_InvokeUpdateList_51C0A0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_InvokeUpdateList_51C0A0.h"

int32_t* WeatherWaterSky_InvokeUpdateList_51C0A0(void* arg1)

{
    int32_t* result = *(arg1 + 0x40);

    if (result)
        result = Qtask_UpdateList(result);

    return result;
}
