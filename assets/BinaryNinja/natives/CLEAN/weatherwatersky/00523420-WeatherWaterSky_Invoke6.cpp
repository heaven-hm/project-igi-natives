// IGI native provenance: WeatherWaterSky_Invoke6 - 0x00523420 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00523420-WeatherWaterSky_Invoke6.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_Invoke6.h"

int32_t* WeatherWaterSky_Invoke6(int32_t* arg1)

{
    int32_t* result = arg1;

    if (!result[2])
    {
        result = Camera_UpdateViewCone_6(*result, g_a83b24);

        if (result)
            g_a83978 = 1;
    }

    return result;
}
