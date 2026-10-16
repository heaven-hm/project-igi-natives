#include "MovieSubtitle_RegisterText.h"
int32_t MovieSubtitle_RegisterText(long double a1 @ fp0, long double a2 @ fp1, long double a3 @ fp3, long double a4 @ fp4, long double a5 @ fp5, long double a6 @ fp6, int32_t a7, char* a8, float a9)

// Sig: void MovieSubtitle_RegisterText(...)
// Note: Registers one subtitle text entry (string + timing) shown over
// movies/briefings (argc unknown - parser context). Call after the font
// registration it should use.
{
    int32_t v_44c = Script_GetArg(a9, 0);
    void v_400;
    char* v_450 = Sys_ResolveSymbol_23(a9, 1, &v_400, 0x400);
    int32_t v_448 = Script_GetArg(a9, 2);
    int32_t v_444 = Script_GetArg(a9, 3);
    Profile_ValueSet(a9, 5.60519386e-45f);
    float v_438 = a1;
    Profile_ValueSet(a9, 7.00649232e-45f);
    float v_434 = a2;
    Profile_ValueSet(a9, 8.40779079e-45f);
    long double fpu2;
    float v_430 = fpu2;
    char v_41c = Script_GetArg(a9, 7);
    Profile_ValueSet(a9, 1.12103877e-44f);
    float v_42c = a3;
    Profile_ValueSet(a9, 1.26116862e-44f);
    float v_428 = a4;
    int32_t v_440 = Script_GetArg(a9, 0xa);
    Profile_ValueSet(a9, 1.54142831e-44f);
    float v_424 = a5;
    int32_t v_43c = Script_GetArg(a9, 0xc);
    Profile_ValueSet(a9, 1.821688e-44f);
    float v_420 = a6;
    Display_CreateSurface_2(a8, &v_450);
    int32_t v_418 = 0xe;
    int32_t v_410 = 0;
    int32_t v_40c = 0x402c0000;
    char* v_408 = &g_567c74;
    memcpy(a7, &v_418, 0x18);
    return a7;
}
