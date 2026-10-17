// IGI native provenance: LevelTimer_Init_2 - 0x0051BA60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051BA60-LevelTimer_Init_2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "LevelTimer_Init_2.h"

int32_t LevelTimer_Init_2(long double pThis , int32_t* param )

{
    float dest_ptr = param[2];
    float* base_ptr = *param;
    Profile_ValueSet(param[1], dest_ptr);
    *base_ptr = pThis;
    base_ptr[1] = Script_GetArg(param[1], dest_ptr + 1);
    int32_t result = Script_GetArg(param[1], dest_ptr + 2);
    base_ptr[2] = result;
    return result;
}
