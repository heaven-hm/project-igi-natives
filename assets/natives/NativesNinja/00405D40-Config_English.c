#include "00405D40-Config_English.h"
/* 0x00405d40 Config_English full linked: callers=1 callees=4 */
int32_t Config_English(int32_t* a1, int32_t a2)

{
    void* var_10c = &"ENGLISH"[(&g_bc238c)[a2 * 0x159] * 2];
    char const* const var_110 = "GOGameLang";
    char* var_114 = "%s(%s);\n";
    void var_100;
    char* var_118 = &var_100;
    int32_t eax_7 = Game_DataSymbolLoad(var_118, var_114);
    void* var_11c = &g_53337c[(&g_bc2388)[a2 * 0x159] << 4];
    char const* const var_120 = "GOGameDiff";
    int32_t edi_1 = eax_7 + Game_DataSymbolLoad(&var_118 + eax_7 + 0x18, "%s(%s);\n");
    char* eax_11 = "TRUE";

    if (!(&g_bc2390)[a2 * 0x564])
        eax_11 = "FALSE";

    char* var_10c_1 = eax_11;
    var_110 = "GOIsBlood";
    char* var_114_1 = "%s(%s);\n";
    var_118 = &var_110 + edi_1 + 0x10;
    return sub_4b1700(a1, &var_100, edi_1 + Game_DataSymbolLoad(var_118, var_114_1));
}
