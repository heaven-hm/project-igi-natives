// IGI native provenance: GunM16A2_Process - 0x00473790 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00473790-GunM16A2_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GunM16A2_Process.h"
int32_t GunM16A2_Process(long double context , long double param_2 , long double param_3 , int32_t* param_4 )

{
    float source_val = param_4[2];
    float* context_val = *param_4;
    Profile_ValueSet(param_4[1], source_val);
    *context_val = context;
    Profile_ValueSet(param_4[1], source_val + 1);
    context_val[1] = param_2;
    int32_t result = Profile_ValueSet(param_4[1], source_val + 2);
    context_val[2] = param_3;
    param_4[2] = source_val + 3;
    return result;
}
