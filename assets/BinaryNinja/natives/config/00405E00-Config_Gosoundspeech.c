// Original IGI.EXE function: Config_Gosoundspeech (VA 0x00405E00; static CFG gate PASS, CFG score 1.000).
#include "Config_Gosoundspeech.h"
int32_t Config_Gosoundspeech(int32_t* context, int32_t param_2)

{
    int32_t source_1 = param_2 * 0x564;
    double item_410 = (&g_bc25b4)[param_2 * 0x159];
    int32_t item_414 = (&g_bc25ba)[source_1];
    char const* const item_418 = "GOSoundSpeech";
    void item_400;
    int32_t data_5 = Game_DataSymbolLoad(&item_400, "%s(%d, %f);\n");
    double item_410_1 = (&g_bc25b0)[param_2 * 0x159];
    int32_t item_414_1 = (&g_bc25b9)[source_1];
    item_418 = "GOSoundMusic";
    int32_t data_7 = Game_DataSymbolLoad(&item_418 + data_5 + 0x18, "%s(%d, %f);\n");
    double item_410_2 = (&g_bc25ac)[param_2 * 0x159];
    int32_t dest_1 = data_5 + data_7;
    int32_t item_414_2 = (&g_bc25b8)[source_1];
    item_418 = "GOSoundFX";
    return Sys_CloseFileStream_4(context, &item_400,
        dest_1 + Game_DataSymbolLoad(&item_418 + dest_1 + 0x18, "%s(%d, %f);\n"));
}
