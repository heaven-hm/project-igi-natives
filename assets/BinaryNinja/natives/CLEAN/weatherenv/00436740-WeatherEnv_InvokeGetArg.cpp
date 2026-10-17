// IGI native provenance: WeatherEnv_InvokeGetArg - 0x00436740 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00436740-WeatherEnv_InvokeGetArg.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherEnv_InvokeGetArg.h"

int32_t WeatherEnv_InvokeGetArg(long double arg1, int32_t* arg2)

{
    int32_t dest_ptr = arg2[2];
    int32_t* base_val = *arg2;
    *base_val = Script_GetArg(arg2[1], dest_ptr);
    int32_t result = Profile_ValueSet(arg2[1], dest_ptr + 1);
    base_val[1] = arg1;
    return result;
}
