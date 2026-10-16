#include "Config_English.h"
int32_t Config_English(int32_t* a1, int32_t a2)

{
    void* v_10c = &"ENGLISH"[(&g_bc238c)[a2 * 0x159] * 2];
    char const* const v_110 = "GOGameLang";
    char* v_114 = "%s(%s);\n";
    void v_100;
    char* v_118 = &v_100;
    int32_t valA7 = Game_DataSymbolLoad(v_118, v_114);
    void* v_11c = &g_53337c[(&g_bc2388)[a2 * 0x159] << 4];
    char const* const v_120 = "GOGameDiff";
    int32_t dstD1 = valA7 + Game_DataSymbolLoad(&v_118 + valA7 + 0x18, "%s(%s);\n");
    char* valA11 = "TRUE";

    if (!(&g_bc2390)[a2 * 0x564])
        valA11 = "FALSE";

    char* v_10c_1 = valA11;
    v_110 = "GOIsBlood";
    char* v_114_1 = "%s(%s);\n";
    v_118 = &v_110 + dstD1 + 0x10;
    return Sys_CloseFileStream_4(a1, &v_100, dstD1 + Game_DataSymbolLoad(v_118, v_114_1));
}
