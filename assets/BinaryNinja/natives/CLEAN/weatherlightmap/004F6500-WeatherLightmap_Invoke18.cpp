// IGI native provenance: WeatherLightmap_Invoke18 - 0x004F6500 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F6500-WeatherLightmap_Invoke18.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_Invoke18.h"

int32_t* WeatherLightmap_Invoke18(void* arg1, int32_t* arg2)

{
    *(arg1 + 0x64) = *arg2;
    *(arg1 + 0x26c) = 1;
    return Script_ParseEnumInt32_18(arg1);
}
