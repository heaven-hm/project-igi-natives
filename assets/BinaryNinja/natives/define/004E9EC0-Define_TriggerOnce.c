// IGI native provenance: Define_TriggerOnce - 0x004E9EC0 - CFG score 98.2% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E9EC0-Define_TriggerOnce.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Define_TriggerOnce.h"
int32_t Define_TriggerOnce(long double context , long double param_2 , long double param_3 , long double param_4 , long double param_5 , long double param_6 , long double param_7 , int32_t param_8, void* param_9, float param_10)

// Sig: void Define_TriggerOnce(...)
// Note: Defines a fire-once TRIGGER entry inside definition blocks - OpenIGI
// maps it to SoundDefinitionKind.TriggerOnce. Parser-context only.
{
    void item_138;
    void* item_164 = &item_138;
    void* flags = &item_138;
    char item_154 = 1;
    SoundSys_InitSoundSys_14(item_164);
    char* item_168 = 0x20;
    void item_55;
    Sys_ResolveSymbol_23(param_10, 0, &item_55, item_168);
    void item_35;
    Sys_ResolveSymbol_23(param_10, 1, &item_35, 0x20);
    Profile_ValueSet(param_10, 2.80259693e-45.0f);
    double item_98 = context;
    Profile_ValueSet(param_10, 4.20389539e-45.0f);
    double item_90 = param_2;
    Profile_ValueSet(param_10, 5.60519386e-45.0f);
    double item_88 = param_3;
    Profile_ValueSet(param_10, 7.00649232e-45.0f);
    float item_80 = param_4;
    float item_164_1 = 8.40779079e-45.0f;
    item_168 = param_10;
    Profile_ValueSet(item_168, item_164_1);
    float item_74 = param_5;
    Profile_ValueSet(param_10, 9.80908925e-45.0f);
    float item_70 = param_6;
    Profile_ValueSet(param_10, 1.12103877e-44.0f);
    float item_c = param_7;
    int32_t item_68 = Script_GetArg(param_10, 9);
    int32_t item_64 = Script_GetArg(param_10, 0xa);
    int32_t item_60 = Script_GetArg(param_10, 0xb);
    int32_t item_5c = Script_GetArg(param_10, 0xc);
    char item_58 = Script_GetArg(param_10, 0xd);
    int32_t item_164_2 = 0xe;
    item_168 = param_10;
    char data_5;
    int32_t kind;
    data_5 = Script_GetArg(item_168, item_164_2);
    kind = g_54da62;
    char item_57 = data_5;
    char item_56 = 1;
    QTask_HandleInput(param_9, kind, &flags);
    int32_t item_150 = 0xf;
    int32_t item_148 = 0;
    int32_t item_144 = 0x402e0000;
    char* item_140 = &g_567c74;
    memcpy(param_8, &item_150, 0x18);
    return param_8;
}
