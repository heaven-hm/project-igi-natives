// Original IGI.EXE function: MovieSubtitle_RegisterFont (VA 0x004151E0; static CFG gate PASS, CFG score 0.917).
#include "MovieSubtitle_RegisterFont.h"
int32_t MovieSubtitle_RegisterFont(int32_t a1, int32_t a2, float a3)

// Sig: void MovieSubtitle_RegisterFont(...)
// Note: Registers a font used by in-game movie subtitles (16 callsites in body;
// argc unknown - parser context). Call from subtitle/font definition blocks
// before any MovieSubtitle_RegisterText that uses it.
{
    int32_t valA = Script_GetArg(a3, 0);
    char* v_42c = 0x400;
    void v_400;
    char* v_430 = &v_400;
    Sys_ResolveSymbol_23(a3, 1, v_430, v_42c);
    Display_SetGammaRamp_2(a2, valA, &v_400);
    int32_t v_418 = 2;
    int32_t v_410 = 0;
    int32_t v_40c = 0x40000000;
    char* v_408 = &g_567c74;
    memcpy(a1, &v_418, 0x18);
    return a1;
}
