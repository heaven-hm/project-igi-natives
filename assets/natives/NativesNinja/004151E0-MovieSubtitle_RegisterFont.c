#include "004151E0-MovieSubtitle_RegisterFont.h"
/* 0x004151e0 MovieSubtitle_RegisterFont full linked: callers=0 callees=4 */
int32_t MovieSubtitle_RegisterFont(int32_t a1, int32_t a2, float a3)

// Sig: void MovieSubtitle_RegisterFont(...)
// Note: Registers a font used by in-game movie subtitles (16 callsites in body;
// argc unknown - parser context). Call from subtitle/font definition blocks
// before any MovieSubtitle_RegisterText that uses it.
{
    int32_t eax = sub_4b8a20(a3, 0);
    char* var_42c = 0x400;
    void var_400;
    char* var_430 = &var_400;
    sub_4b8a80(a3, 1, var_430, var_42c);
    sub_491240(a2, eax, &var_400);
    int32_t var_418 = 2;
    int32_t var_410 = 0;
    int32_t var_40c = 0x40000000;
    char* var_408 = &g_567c74;
    memcpy(a1, &var_418, 0x18);
    return a1;
}
