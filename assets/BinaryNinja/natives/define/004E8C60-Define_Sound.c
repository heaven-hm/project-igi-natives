#include "Define_Sound.h"
int32_t Define_Sound(long double a1 @ fp0, long double a2 @ fp1, long double a3 @ fp2, long double a4 @ fp3, long double a5 @ fp4, long double a6 @ fp5, long double a7 @ fp6, int32_t a8, void* a9, float a10)

// Sig: void Define_Sound(...)
// Note: Defines a SOUND entry (file + attenuation params) inside sound
// definition blocks - OpenIGI reimplements it as
// SoundDefinitionRegistry.Define(SoundDefinitionKind.Sound). Call only from
// sound .qsc define blocks.
{
    void v_130;
    void* v_15c = &v_130;
    void* flags = &v_130;
    char v_14c = 1;
    SoundSys_PlaySoundSample_13(v_15c);
    char* v_160 = 0x20;
    void v_51;
    Sys_ResolveSymbol_23(a10, 0, &v_51, v_160);
    void v_31;
    Sys_ResolveSymbol_23(a10, 1, &v_31, 0x20);
    Profile_ValueSet(a10, 2.80259693e-45f);
    double v_90 = a1;
    Profile_ValueSet(a10, 4.20389539e-45f);
    double v_88 = a2;
    Profile_ValueSet(a10, 5.60519386e-45f);
    double v_80 = a3;
    Profile_ValueSet(a10, 7.00649232e-45f);
    float v_6c = a4;
    float v_15c_1 = 8.40779079e-45f;
    v_160 = a10;
    Profile_ValueSet(v_160, v_15c_1);
    float v_60 = a5;
    Profile_ValueSet(a10, 9.80908925e-45f);
    float v_5c = a6;
    int32_t v_78 = Script_GetArg(a10, 8);
    int32_t v_74 = Script_GetArg(a10, 9);
    int32_t v_70 = Script_GetArg(a10, 0xa);
    Profile_ValueSet(a10, 1.54142831e-44f);
    float v_c = a7;
    char valA3;
    int32_t kind;
    valA3 = Script_GetArg(a10, 0xc);
    kind = g_54d9b6;
    char v_54 = valA3;
    char v_53 = 1;
    QTask_HandleInput(a9, kind, &flags);
    int32_t v_148 = 0xd;
    int32_t v_140 = 0;
    int32_t v_13c = 0x402a0000;
    char* v_138 = &g_567c74;
    memcpy(a8, &v_148, 0x18);
    return a8;
}
