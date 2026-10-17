// IGI native provenance: WeatherLightmap_Invoke2_504250 - 0x00504250 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00504250-WeatherLightmap_Invoke2_504250.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_Invoke2_504250.h"

int32_t WeatherLightmap_Invoke2_504250(void* arg1, char* arg2)

{
    int32_t result_val = *(arg2 + 4);

    if (arg1 != result_val && *(arg1 + 0x130) != result_val)
    {
        *arg2 = 1;
        return 1;
    }

    *arg2 = 0;
    return 0;
}
