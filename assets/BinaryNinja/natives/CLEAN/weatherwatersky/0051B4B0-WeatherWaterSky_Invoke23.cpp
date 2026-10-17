// IGI native provenance: WeatherWaterSky_Invoke23 - 0x0051B4B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051B4B0-WeatherWaterSky_Invoke23.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherWaterSky_Invoke23.h"

int32_t WeatherWaterSky_Invoke23(int32_t* arg1)

{
    char* dest_ptr = *arg1;
    int32_t base_val = arg1[2];
    Sys_ResolveSymbol_23(arg1[1], base_val, dest_ptr, 0x20);
    char result = Script_GetArg(arg1[1], base_val + 1);
    dest_ptr[0x20] = result;
    return result;
}
