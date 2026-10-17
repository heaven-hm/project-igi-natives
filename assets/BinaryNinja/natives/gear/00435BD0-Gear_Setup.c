// Original IGI.EXE function: Gear_Setup (VA 0x00435BD0; static CFG gate PASS, CFG score 1.000).
#include "Gear_Setup.h"
int32_t Gear_Setup(long double context , long double param_2 , long double param_3 , long double param_4 , int32_t* param_5 )

{
    float source_val = param_5[2];
    float* context_val = *param_5;
    Profile_ValueSet(param_5[1], source_val);
    *context_val = context;
    context_val[1] = Script_GetArg(param_5[1], source_val + 1);
    Profile_ValueSet(param_5[1], source_val + 2);
    context_val[2] = param_2;
    Profile_ValueSet(param_5[1], source_val + 3);
    context_val[3] = param_3;
    int32_t result = Profile_ValueSet(param_5[1], source_val + 4);
    context_val[4] = param_4;
    return result;
}
