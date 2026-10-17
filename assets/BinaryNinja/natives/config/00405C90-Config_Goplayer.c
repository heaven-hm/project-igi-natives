// Original IGI.EXE function: Config_Goplayer (VA 0x00405C90; static CFG gate PASS, CFG score 1.000).
#include "Config_Goplayer.h"
int32_t Config_Goplayer(int32_t* context, int32_t param_2)

{
    void* item_110 = &(&g_bc28c8)[param_2 * 0x159];
    char const* const item_114 = "GOPlayer";
    void item_100;
    Sys_CloseFileStream_4(context, &item_100, Game_DataSymbolLoad(&item_100, "%s("%s");\n"));
    int32_t item_12c = (&g_bc28e8)[param_2 * 0x159];
    char const* const item_130 = "GOActiveMission";
    Sys_CloseFileStream_4(context, &item_100, Game_DataSymbolLoad(&item_100, "%s(%d);\n"));
    KEY_A(context, param_2);
    Config_Gogfxdisp(context, param_2);
    Config_English(context, param_2);
    return Config_Gosoundspeech(context, param_2);
}
