#include "gi_platform.h"
#include "004E9EC0-Define_TriggerOnce.h"
int32_t Define_TriggerOnce(long double a1 , long double a2 , long double a3 , long double a4 , long double a5 , long double a6 , long double a7 , int32_t a8, void* a9, float a10)

// Sig: void Define_TriggerOnce(...)
// Note: Defines a fire-once TRIGGER entry inside definition blocks - OpenIGI
// maps it to SoundDefinitionKind.TriggerOnce. Parser-context only.
{
    char v_138;
    void* v_164 = &v_138;
    void* flags = &v_138;
    char v_154 = 1;
    SoundSys_InitSoundSys_14(v_164);
    char* v_168 = 0x20;
    char v_55;
    Sys_ResolveSymbol_23(a10, 0, &v_55, v_168);
    char v_35;
    Sys_ResolveSymbol_23(a10, 1, &v_35, 0x20);
    Profile_ValueSet(a10, 2.80259693e-45.0f);
    double v_98 = a1;
    Profile_ValueSet(a10, 4.20389539e-45.0f);
    double v_90 = a2;
    Profile_ValueSet(a10, 5.60519386e-45.0f);
    double v_88 = a3;
    Profile_ValueSet(a10, 7.00649232e-45.0f);
    float v_80 = a4;
    float v_164_1 = 8.40779079e-45.0f;
    v_168 = a10;
    Profile_ValueSet(v_168, v_164_1);
    float v_74 = a5;
    Profile_ValueSet(a10, 9.80908925e-45.0f);
    float v_70 = a6;
    Profile_ValueSet(a10, 1.12103877e-44.0f);
    float v_c = a7;
    int32_t v_68 = Script_GetArg(a10, 9);
    int32_t v_64 = Script_GetArg(a10, 0xa);
    int32_t v_60 = Script_GetArg(a10, 0xb);
    int32_t v_5c = Script_GetArg(a10, 0xc);
    char v_58 = Script_GetArg(a10, 0xd);
    int32_t v_164_2 = 0xe;
    v_168 = a10;
    char valA5;
    int32_t kind;
    valA5 = Script_GetArg(v_168, v_164_2);
    kind = g_54da62;
    char v_57 = valA5;
    char v_56 = 1;
    QTask_HandleInput(a9, kind, &flags);
    int32_t v_150 = 0xf;
    int32_t v_148 = 0;
    int32_t v_144 = 0x402e0000;
    char* v_140 = &g_567c74;
    memcpy(a8, &v_150, 0x18);
    return a8;
}
