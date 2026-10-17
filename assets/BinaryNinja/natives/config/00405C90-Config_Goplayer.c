// Original IGI.EXE function: Config_Goplayer (VA 0x00405C90; static CFG gate PASS, CFG score 1.000).
#include "Config_Goplayer.h"
int32_t Config_Goplayer(int32_t* a1, int32_t a2)

{
    void* v_110 = &(&g_bc28c8)[a2 * 0x159];
    char const* const v_114 = "GOPlayer";
    void v_100;
    Sys_CloseFileStream_4(a1, &v_100, Game_DataSymbolLoad(&v_100, "%s("%s");\n"));
    int32_t v_12c = (&g_bc28e8)[a2 * 0x159];
    char const* const v_130 = "GOActiveMission";
    Sys_CloseFileStream_4(a1, &v_100, Game_DataSymbolLoad(&v_100, "%s(%d);\n"));
    KEY_A(a1, a2);
    Config_Gogfxdisp(a1, a2);
    Config_English(a1, a2);
    return Config_Gosoundspeech(a1, a2);
}
