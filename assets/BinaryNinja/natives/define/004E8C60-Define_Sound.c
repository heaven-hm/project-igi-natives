// Original IGI.EXE function: Define_Sound (VA 0x004E8C60; static CFG gate PASS, CFG score 0.979).
#include "Define_Sound.h"
int32_t Define_Sound(long double context , long double param_2 , long double param_3 , long double param_4 , long double param_5 , long double param_6 , long double param_7 , int32_t param_8, void* param_9, float param_10)

// Sig: void Define_Sound(...)
// Note: Defines a SOUND entry (file + attenuation params) inside sound
// definition blocks - OpenIGI reimplements it as
// SoundDefinitionRegistry.Define(SoundDefinitionKind.Sound). Call only from
// sound .qsc define blocks.
{
    void item_130;
    void* item_15c = &item_130;
    void* flags = &item_130;
    char item_14c = 1;
    SoundSys_PlaySoundSample_13(item_15c);
    char* item_160 = 0x20;
    void item_51;
    Sys_ResolveSymbol_23(param_10, 0, &item_51, item_160);
    void item_31;
    Sys_ResolveSymbol_23(param_10, 1, &item_31, 0x20);
    Profile_ValueSet(param_10, 2.80259693e-45.0f);
    double item_90 = context;
    Profile_ValueSet(param_10, 4.20389539e-45.0f);
    double item_88 = param_2;
    Profile_ValueSet(param_10, 5.60519386e-45.0f);
    double item_80 = param_3;
    Profile_ValueSet(param_10, 7.00649232e-45.0f);
    float item_6c = param_4;
    float item_15c_1 = 8.40779079e-45.0f;
    item_160 = param_10;
    Profile_ValueSet(item_160, item_15c_1);
    float item_60 = param_5;
    Profile_ValueSet(param_10, 9.80908925e-45.0f);
    float item_5c = param_6;
    int32_t item_78 = Script_GetArg(param_10, 8);
    int32_t item_74 = Script_GetArg(param_10, 9);
    int32_t item_70 = Script_GetArg(param_10, 0xa);
    Profile_ValueSet(param_10, 1.54142831e-44.0f);
    float item_c = param_7;
    char data_3;
    int32_t kind;
    data_3 = Script_GetArg(param_10, 0xc);
    kind = g_54d9b6;
    char item_54 = data_3;
    char item_53 = 1;
    QTask_HandleInput(param_9, kind, &flags);
    int32_t item_148 = 0xd;
    int32_t item_140 = 0;
    int32_t item_13c = 0x402a0000;
    char* item_138 = &g_567c74;
    memcpy(param_8, &item_148, 0x18);
    return param_8;
}
