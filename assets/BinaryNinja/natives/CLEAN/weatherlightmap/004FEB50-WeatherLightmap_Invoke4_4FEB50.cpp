// IGI native provenance: WeatherLightmap_Invoke4_4FEB50 - 0x004FEB50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FEB50-WeatherLightmap_Invoke4_4FEB50.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_Invoke4_4FEB50.h"

void* WeatherLightmap_Invoke4_4FEB50(void* arg1)

{
    void* result = Script_SpawnNewTask_32(arg1, Script_SpawnNewTask_4());
    *(arg1 + 0x124) = 0;
    return result;
}
