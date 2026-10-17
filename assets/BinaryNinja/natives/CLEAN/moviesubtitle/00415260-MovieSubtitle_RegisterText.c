// IGI native provenance: MovieSubtitle_RegisterText - 0x00415260 - CFG score 97.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00415260-MovieSubtitle_RegisterText.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MovieSubtitle_RegisterText.h"
int32_t MovieSubtitle_RegisterText(long double context , long double param_2 , long double param_3 , long double param_4 , long double param_5 , long double param_6 , int32_t param_7, char* param_8, float param_9)

// Sig: void MovieSubtitle_RegisterText(...)
// Note: Registers one subtitle text entry (string + timing) shown over
// movies/briefings (argc unknown - parser context). Call after the font
// registration it should use.
{
    int32_t item_44c = Script_GetArg(param_9, 0);
    void item_400;
    char* item_450 = Sys_ResolveSymbol_23(param_9, 1, &item_400, 0x400);
    int32_t item_448 = Script_GetArg(param_9, 2);
    int32_t item_444 = Script_GetArg(param_9, 3);
    Profile_ValueSet(param_9, 5.60519386e-45.0f);
    float item_438 = context;
    Profile_ValueSet(param_9, 7.00649232e-45.0f);
    float item_434 = param_2;
    Profile_ValueSet(param_9, 8.40779079e-45.0f);
    long double fpu2;
    float item_430 = fpu2;
    char item_41c = Script_GetArg(param_9, 7);
    Profile_ValueSet(param_9, 1.12103877e-44.0f);
    float item_42c = param_3;
    Profile_ValueSet(param_9, 1.26116862e-44.0f);
    float item_428 = param_4;
    int32_t item_440 = Script_GetArg(param_9, 0xa);
    Profile_ValueSet(param_9, 1.54142831e-44.0f);
    float item_424 = param_5;
    int32_t item_43c = Script_GetArg(param_9, 0xc);
    Profile_ValueSet(param_9, 1.821688e-44.0f);
    float item_420 = param_6;
    Display_CreateSurface_2(param_8, &item_450);
    int32_t item_418 = 0xe;
    int32_t item_410 = 0;
    int32_t item_40c = 0x402c0000;
    char* item_408 = &g_567c74;
    memcpy(param_7, &item_418, 0x18);
    return param_7;
}
