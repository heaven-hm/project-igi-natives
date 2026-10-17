// Original IGI.EXE function: GunM16A2_Process (VA 0x00473790; static CFG gate PASS, CFG score 1.000).
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
