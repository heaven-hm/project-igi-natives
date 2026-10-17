// IGI native provenance: WeatherLightmap_Invoke2_4FEAF0 - 0x004FEAF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FEAF0-WeatherLightmap_Invoke2_4FEAF0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_Invoke2_4FEAF0.h"

void* WeatherLightmap_Invoke2_4FEAF0(void* arg1)

{
    void* result = Script_SpawnNewTask_32(arg1, Script_EvaluateCondition_2());
    *(arg1 + 0x124) = 0;
    return result;
}
