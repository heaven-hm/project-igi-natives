#include "00405E00-Config_Gosoundspeech.h"
/* 0x00405e00 Config_Gosoundspeech full linked: callers=1 callees=4 */
int32_t Config_Gosoundspeech(int32_t* a1, int32_t a2)

{
    int32_t esi_1 = a2 * 0x564;
    double var_410 = (&g_bc25b4)[a2 * 0x159];
    int32_t var_414 = (&g_bc25ba)[esi_1];
    char const* const var_418 = "GOSoundSpeech";
    void var_400;
    int32_t eax_5 = Game_DataSymbolLoad(&var_400, "%s(%d, %f);\n");
    double var_410_1 = (&g_bc25b0)[a2 * 0x159];
    int32_t var_414_1 = (&g_bc25b9)[esi_1];
    var_418 = "GOSoundMusic";
    int32_t eax_7 = Game_DataSymbolLoad(&var_418 + eax_5 + 0x18, "%s(%d, %f);\n");
    double var_410_2 = (&g_bc25ac)[a2 * 0x159];
    int32_t edi_1 = eax_5 + eax_7;
    int32_t var_414_2 = (&g_bc25b8)[esi_1];
    var_418 = "GOSoundFX";
    return sub_4b1700(a1, &var_400,
        edi_1 + Game_DataSymbolLoad(&var_418 + edi_1 + 0x18, "%s(%d, %f);\n"));
}
