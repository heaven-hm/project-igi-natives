// IGI native provenance: WeatherEnv_Processrain2 - 0x00436C60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00436C60-WeatherEnv_Processrain2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherEnv_Processrain2.h"

int32_t* WeatherEnv_Processrain2(void* arg1)

{
    *(arg1 + 0x20) = 0;
    *(arg1 + 0x21) = 0;
    *(arg1 + 0x22) = 0;
    *(arg1 + 0x23) = 0;
    *(arg1 + 0x24) = data_53c0b8[0];
    *(arg1 + 0x28) = data_53c0b8[4][0];
    *(arg1 + 0x38) = 0;
    *(arg1 + 0x2a) = data_53c0b8[6][0];
    return EnvironmentSound_Update(arg1);
}
