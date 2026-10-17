// Original IGI.EXE function: AIStationaryGun_Process (VA 0x0046FA50; static CFG gate PASS, CFG score 1.000).
#include "AIStationaryGun_Process.h"
int32_t AIStationaryGun_Process(long double context , long double param_2 , long double param_3 , long double param_4 , long double param_5 , long double param_6 , long double param_7 , int32_t* param_8 )

{
    int32_t source_val = param_8[2];
    char* context_val = *param_8;
    Sys_ResolveSymbol_23(param_8[1], source_val, context_val, 0x20);
    Profile_ValueSet(param_8[1], source_val + 1);
    *(context_val + 0x28) = context * 0.0174532924f;
    Profile_ValueSet(param_8[1], source_val + 2);
    *(context_val + 0x20) = param_2 * 0.0174532924f;
    Profile_ValueSet(param_8[1], source_val + 3);
    *(context_val + 0x24) = param_3 * 0.0174532924f;
    *(context_val + 0x2c) = Script_GetArg(param_8[1], source_val + 4);
    Profile_ValueSet(param_8[1], source_val + 5);
    *(context_val + 0x30) = param_4 * 0.0174532924f * 0.0333333351f;
    Profile_ValueSet(param_8[1], source_val + 6);
    *(context_val + 0x34) = param_5 * 0.0174532924f * 0.0333333351f;
    Sys_ResolveSymbol_23(param_8[1], source_val + 7, &context_val[0x38], 0x20);
    Profile_ValueSet(param_8[1], source_val + 8);
    *(context_val + 0x58) = param_6 * 0.0174532924f * 0.0333333351f;
    int32_t result = Profile_ValueSet(param_8[1], source_val + 9);
    *(context_val + 0x5c) = param_7 * 4096.0f;
    return result;
}
