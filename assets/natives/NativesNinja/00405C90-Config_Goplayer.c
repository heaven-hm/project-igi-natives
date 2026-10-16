#include "00405C90-Config_Goplayer.h"
/* 0x00405c90 Config_Goplayer full linked: callers=1 callees=8 */
int32_t Config_Goplayer(int32_t* a1, int32_t a2)

{
    void* var_110 = &(&g_bc28c8)[a2 * 0x159];
    char const* const var_114 = "GOPlayer";
    void var_100;
    sub_4b1700(a1, &var_100, Game_DataSymbolLoad(&var_100, "%s("%s");\n"));
    int32_t var_12c = (&g_bc28e8)[a2 * 0x159];
    char const* const var_130 = "GOActiveMission";
    sub_4b1700(a1, &var_100, Game_DataSymbolLoad(&var_100, "%s(%d);\n"));
    KEY_A(a1, a2);
    Config_Gogfxdisp(a1, a2);
    Config_English(a1, a2);
    return Config_Gosoundspeech(a1, a2);
}
