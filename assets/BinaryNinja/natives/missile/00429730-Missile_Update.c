// Original IGI.EXE function: Missile_Update (VA 0x00429730; static CFG gate PASS, CFG score 1.000).
#include "Missile_Update.h"
char* Missile_Update(long double context , long double param_2 , long double param_3 , long double param_4 , long double param_5 , long double param_6 , long double param_7 , int32_t param_8, int32_t* param_9)

{
    void* dest_val = *param_9;
    float context_val = param_9[1];
    (*(((SoundSys_Update3DPosition_18() * 0x180 + Script_ExecuteLevelScript_16()) << 2) + &g_a96ae0))(param_8, param_9);
    int32_t data_5 = param_9[2];
    param_9[2] = data_5 + 1;
    *(dest_val + 0x118) = Script_GetArg(context_val, data_5);
    int32_t data_7 = param_9[2];
    param_9[2] = data_7 + 1;
    *(dest_val + 0x11c) = Script_GetArg(context_val, data_7);
    float data_9 = param_9[2];
    param_9[2] = data_9 + 1;
    Profile_ValueSet(context_val, data_9);
    *(dest_val + 0x120) = context;
    float data_10 = param_9[2];
    param_9[2] = data_10 + 1;
    Profile_ValueSet(context_val, data_10);
    *(dest_val + 0x124) = param_2 * 0.0333333351f;
    float data_11 = param_9[2];
    param_9[2] = data_11 + 1;
    Profile_ValueSet(context_val, data_11);
    *(dest_val + 0x128) = param_3;
    float data_12 = param_9[2];
    param_9[2] = data_12 + 1;
    Profile_ValueSet(context_val, data_12);
    *(dest_val + 0x12c) = param_4 * 4096.0f;
    float data_13 = param_9[2];
    param_9[2] = data_13 + 1;
    Profile_ValueSet(context_val, data_13);
    *(dest_val + 0x130) = param_5 * 4096.0f;
    float data_14 = param_9[2];
    param_9[2] = data_14 + 1;
    Profile_ValueSet(context_val, data_14);
    *(dest_val + 0x134) = param_6;
    float data_15 = param_9[2];
    param_9[2] = data_15 + 1;
    Profile_ValueSet(context_val, data_15);
    *(dest_val + 0x138) = param_7;
    int32_t data_16 = param_9[2];
    param_9[2] = data_16 + 1;
    Sys_ResolveSymbol_23(context_val, data_16, dest_val + 0x13c, 0x100);
    int32_t data_17 = param_9[2];
    param_9[2] = data_17 + 1;
    Sys_ResolveSymbol_23(context_val, data_17, dest_val + 0x23c, 0x10);
    char* result = Level_LoadObjects_6(dest_val + 0x13c);
    *(dest_val + 0x24c) = result;
    return result;
}
