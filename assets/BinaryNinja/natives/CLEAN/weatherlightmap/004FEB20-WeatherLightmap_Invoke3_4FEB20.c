// IGI native provenance: WeatherLightmap_Invoke3_4FEB20 - 0x004FEB20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FEB20-WeatherLightmap_Invoke3_4FEB20.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_Invoke3_4FEB20.h"

void* WeatherLightmap_Invoke3_4FEB20(void* arg1)

{
    void* result = Script_SpawnNewTask_32(arg1, Script_EvaluateCondition_3());
    *(arg1 + 0x124) = 0;
    return result;
}
