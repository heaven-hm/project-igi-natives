#include "004E9EC0-Define_TriggerOnce.h"
/* 0x004e9ec0 Define_TriggerOnce full linked: callers=0 callees=18 */
int32_t Define_TriggerOnce(long double a1 @ st0, long double a2 @ st1, long double a3 @ st2, long double a4 @ st3, long double a5 @ st4, long double a6 @ st5, long double a7 @ st6, int32_t a8, void* a9, float a10)

// Sig: void Define_TriggerOnce(...)
// Note: Defines a fire-once TRIGGER entry inside definition blocks - OpenIGI
// maps it to SoundDefinitionKind.TriggerOnce. Parser-context only.
{
    void var_138;
    void* var_164 = &var_138;
    void* flags = &var_138;
    char var_154 = 1;
    sub_4e99d0(var_164);
    char* var_168 = 0x20;
    void var_55;
    sub_4b8a80(a10, 0, &var_55, var_168);
    void var_35;
    sub_4b8a80(a10, 1, &var_35, 0x20);
    Profile_ValueSet(a10, 2.80259693e-45f);
    double var_98 = a1;
    Profile_ValueSet(a10, 4.20389539e-45f);
    double var_90 = a2;
    Profile_ValueSet(a10, 5.60519386e-45f);
    double var_88 = a3;
    Profile_ValueSet(a10, 7.00649232e-45f);
    float var_80 = a4;
    float var_164_1 = 8.40779079e-45f;
    var_168 = a10;
    Profile_ValueSet(var_168, var_164_1);
    float var_74 = a5;
    Profile_ValueSet(a10, 9.80908925e-45f);
    float var_70 = a6;
    Profile_ValueSet(a10, 1.12103877e-44f);
    float var_c = a7;
    int32_t var_68 = sub_4b8a20(a10, 9);
    int32_t var_64 = sub_4b8a20(a10, 0xa);
    int32_t var_60 = sub_4b8a20(a10, 0xb);
    int32_t var_5c = sub_4b8a20(a10, 0xc);
    char var_58 = sub_4b8a20(a10, 0xd);
    int32_t var_164_2 = 0xe;
    var_168 = a10;
    char eax_5;
    int32_t kind;
    eax_5 = sub_4b8a20(var_168, var_164_2);
    kind = g_54da62;
    char var_57 = eax_5;
    char var_56 = 1;
    QTask_HandleInput(a9, kind, &flags);
    int32_t var_150 = 0xf;
    int32_t var_148 = 0;
    int32_t var_144 = 0x402e0000;
    char* var_140 = &g_567c74;
    memcpy(a8, &var_150, 0x18);
    return a8;
}
