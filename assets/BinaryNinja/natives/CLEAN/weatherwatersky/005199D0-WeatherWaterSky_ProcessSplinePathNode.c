// IGI native provenance: WeatherWaterSky_ProcessSplinePathNode - 0x005199D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005199D0-WeatherWaterSky_ProcessSplinePathNode.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_ProcessSplinePathNode.h"

int32_t* WeatherWaterSky_ProcessSplinePathNode(int32_t arg1, void* arg2)

{
    __builtin_memcpy(arg2, arg1 + 0x20, 0x18);
    *(arg2 + 0x18) = 0;
    *(arg2 + 0x1c) = 0;
    *(arg2 + 0x20) = 0;
    __builtin_memcpy(arg2 + 0x24, arg1 + 0x38, 0x28);
    *(arg2 + 0x4c) = 0x46a00000;
    int32_t* result = *(arg2 + 0x50);

    if (result)
    {
        *result = data_54ed68[0];
        result[1] = data_54ed68[4][0];
        result[2] = data_54ed68[8][0];
        result[3] = data_54ed68[0xc][0];
        *(result + 0xe) = data_54ed68[0xe][0];
    }

    return result;
}
