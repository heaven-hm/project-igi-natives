// Original IGI.EXE function: ExplodeMagicObj_LoadParameters (VA 0x0043C1F0; static CFG gate PASS, CFG score 1.000).
#include "ExplodeMagicObj_LoadParameters.h"
int32_t ExplodeMagicObj_LoadParameters(long double context , long double param_2 , long double param_3 , long double param_4 , long double param_5 , int32_t* param_6 )

{
    int32_t source_val = param_6[2];
    char* context_val = *param_6;
    Sys_ResolveSymbol_23(param_6[1], source_val, context_val, 0x10);
    Sys_ResolveSymbol_23(param_6[1], source_val + 1, &context_val[0x2c], 0x10);
    Profile_ValueSet(param_6[1], source_val + 2);
    *(context_val + 0x10) = context;
    *(context_val + 0x28) = Script_GetArg(param_6[1], source_val + 3);
    *(context_val + 0x24) = Script_GetArg(param_6[1], source_val + 4);
    Profile_ValueSet(param_6[1], source_val + 5);
    *(context_val + 0x20) = param_2;
    Profile_ValueSet(param_6[1], source_val + 6);
    *(context_val + 0x18) = param_3;
    Profile_ValueSet(param_6[1], source_val + 7);
    *(context_val + 0x1c) = param_4;
    int32_t result = Profile_ValueSet(param_6[1], source_val + 8);
    *(context_val + 0x14) = param_5;
    return result;
}
