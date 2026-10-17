// IGI native provenance: CameraBase_OnEvent - 0x004EFBA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EFBA0-CameraBase_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CameraBase_OnEvent.h"
int32_t CameraBase_OnEvent(long double context , long double param_2 , long double param_3 , float* param_4, float param_5)

{
    int32_t* source_val = param_5;
    float dest_val = *source_val;
    Script_TooFewParametersInLi(source_val, 3);
    Profile_ValueSet(source_val[1], dest_val);
    Profile_ValueSet(source_val[1], dest_val + 1);
    Profile_ValueSet(source_val[1], dest_val + 2);
    Sys_ReadFileBlock_12(param_4, context, param_2, param_3);
    int32_t result = *source_val + 3;
    *source_val = result;
    return result;
}
