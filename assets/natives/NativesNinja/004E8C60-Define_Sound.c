#include "004E8C60-Define_Sound.h"
/* 0x004e8c60 Define_Sound full linked: callers=0 callees=16 */
int32_t Define_Sound(long double a1 @ st0, long double a2 @ st1, long double a3 @ st2, long double a4 @ st3, long double a5 @ st4, long double a6 @ st5, long double a7 @ st6, int32_t a8, void* a9, float a10)

// Sig: void Define_Sound(...)
// Note: Defines a SOUND entry (file + attenuation params) inside sound
// definition blocks - OpenIGI reimplements it as
// SoundDefinitionRegistry.Define(SoundDefinitionKind.Sound). Call only from
// sound .qsc define blocks.
{
    void var_130;
    void* var_15c = &var_130;
    void* flags = &var_130;
    char var_14c = 1;
    sub_4e8780(var_15c);
    char* var_160 = 0x20;
    void var_51;
    sub_4b8a80(a10, 0, &var_51, var_160);
    void var_31;
    sub_4b8a80(a10, 1, &var_31, 0x20);
    Profile_ValueSet(a10, 2.80259693e-45f);
    double var_90 = a1;
    Profile_ValueSet(a10, 4.20389539e-45f);
    double var_88 = a2;
    Profile_ValueSet(a10, 5.60519386e-45f);
    double var_80 = a3;
    Profile_ValueSet(a10, 7.00649232e-45f);
    float var_6c = a4;
    float var_15c_1 = 8.40779079e-45f;
    var_160 = a10;
    Profile_ValueSet(var_160, var_15c_1);
    float var_60 = a5;
    Profile_ValueSet(a10, 9.80908925e-45f);
    float var_5c = a6;
    int32_t var_78 = sub_4b8a20(a10, 8);
    int32_t var_74 = sub_4b8a20(a10, 9);
    int32_t var_70 = sub_4b8a20(a10, 0xa);
    Profile_ValueSet(a10, 1.54142831e-44f);
    float var_c = a7;
    char eax_3;
    int32_t kind;
    eax_3 = sub_4b8a20(a10, 0xc);
    kind = g_54d9b6;
    char var_54 = eax_3;
    char var_53 = 1;
    QTask_HandleInput(a9, kind, &flags);
    int32_t var_148 = 0xd;
    int32_t var_140 = 0;
    int32_t var_13c = 0x402a0000;
    char* var_138 = &g_567c74;
    memcpy(a8, &var_148, 0x18);
    return a8;
}
