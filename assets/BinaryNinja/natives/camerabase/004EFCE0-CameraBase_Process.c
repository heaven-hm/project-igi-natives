// IGI native provenance: CameraBase_Process - 0x004EFCE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EFCE0-CameraBase_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CameraBase_Process.h"
int32_t CameraBase_Process(long double context , long double param_2 , long double param_3 , float* param_4, float param_5)

{
    int32_t* source_val = param_5;
    Script_TooFewParametersInLi(source_val, 3);
    float dest_val = *source_val;
    Profile_ValueSet(source_val[1], dest_val);
    Profile_ValueSet(source_val[1], dest_val + 1);
    Profile_ValueSet(source_val[1], dest_val + 2);
    Sys_DispatchOpcode_13(param_4, context, param_2, param_3);
    int32_t result = *source_val + 3;
    *source_val = result;
    return result;
}
