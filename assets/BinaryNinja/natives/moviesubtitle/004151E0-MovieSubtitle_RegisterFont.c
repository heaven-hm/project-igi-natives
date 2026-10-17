// IGI native provenance: MovieSubtitle_RegisterFont - 0x004151E0 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 004151E0-MovieSubtitle_RegisterFont.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MovieSubtitle_RegisterFont.h"
int32_t MovieSubtitle_RegisterFont(int32_t context, int32_t param_2, float param_3)

// Sig: void MovieSubtitle_RegisterFont(...)
// Note: Registers a font used by in-game movie subtitles (16 callsites in body;
// argc unknown - parser context). Call from subtitle/font definition blocks
// before any MovieSubtitle_RegisterText that uses it.
{
    int32_t data_val = Script_GetArg(param_3, 0);
    char* item_42c = 0x400;
    void item_400;
    char* item_430 = &item_400;
    Sys_ResolveSymbol_23(param_3, 1, item_430, item_42c);
    Display_SetGammaRamp_2(param_2, data_val, &item_400);
    int32_t item_418 = 2;
    int32_t item_410 = 0;
    int32_t item_40c = 0x40000000;
    char* item_408 = &g_567c74;
    memcpy(context, &item_418, 0x18);
    return context;
}
