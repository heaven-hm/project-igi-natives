// IGI native provenance: WeatherEnv_GetContext_436950 - 0x00436950 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00436950-WeatherEnv_GetContext_436950.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherEnv_GetContext_436950.h"

int32_t* WeatherEnv_GetContext_436950(void* arg1)

{
    *(arg1 + 0x20) = 0;
    *(arg1 + 0x24) = 1;
    *(arg1 + 0x28) = 0x42480000;
    *(arg1 + 0x2c) = 0x41a00000;
    *(arg1 + 0x30) = 0x3ea00000;
    *(arg1 + 0x34) = 0x3ea00000;
    return Script_ExecuteLevelScript_6(arg1 + 0x38);
}
