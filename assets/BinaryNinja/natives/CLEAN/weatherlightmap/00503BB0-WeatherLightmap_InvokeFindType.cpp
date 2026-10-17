// IGI native provenance: WeatherLightmap_InvokeFindType - 0x00503BB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00503BB0-WeatherLightmap_InvokeFindType.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_InvokeFindType.h"

int32_t WeatherLightmap_InvokeFindType(int32_t* arg1)

{
    int32_t result_val = arg1[0x3f];

    if (result_val <= 0)
        return QTask_FindType(arg1);

    arg1[0x3f] = result_val - 1;
    return result_val - 1;
}
