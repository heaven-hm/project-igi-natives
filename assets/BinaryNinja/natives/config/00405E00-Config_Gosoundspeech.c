#include "Config_Gosoundspeech.h"
int32_t Config_Gosoundspeech(int32_t* a1, int32_t a2)

{
    int32_t srcS1 = a2 * 0x564;
    double v_410 = (&g_bc25b4)[a2 * 0x159];
    int32_t v_414 = (&g_bc25ba)[srcS1];
    char const* const v_418 = "GOSoundSpeech";
    void v_400;
    int32_t valA5 = Game_DataSymbolLoad(&v_400, "%s(%d, %f);\n");
    double v_410_1 = (&g_bc25b0)[a2 * 0x159];
    int32_t v_414_1 = (&g_bc25b9)[srcS1];
    v_418 = "GOSoundMusic";
    int32_t valA7 = Game_DataSymbolLoad(&v_418 + valA5 + 0x18, "%s(%d, %f);\n");
    double v_410_2 = (&g_bc25ac)[a2 * 0x159];
    int32_t dstD1 = valA5 + valA7;
    int32_t v_414_2 = (&g_bc25b8)[srcS1];
    v_418 = "GOSoundFX";
    return Sys_CloseFileStream_4(a1, &v_400,
        dstD1 + Game_DataSymbolLoad(&v_418 + dstD1 + 0x18, "%s(%d, %f);\n"));
}
