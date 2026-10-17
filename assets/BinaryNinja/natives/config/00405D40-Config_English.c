// Original IGI.EXE function: Config_English (VA 0x00405D40; static CFG gate PASS, CFG score 1.000).
#include "Config_English.h"
int32_t Config_English(int32_t* context, int32_t param_2)

{
    void* item_10c = &"ENGLISH"[(&g_bc238c)[param_2 * 0x159] * 2];
    char const* const item_110 = "GOGameLang";
    char* item_114 = "%s(%s);\n";
    void item_100;
    char* item_118 = &item_100;
    int32_t data_7 = Game_DataSymbolLoad(item_118, item_114);
    void* item_11c = &g_53337c[(&g_bc2388)[param_2 * 0x159] << 4];
    char const* const item_120 = "GOGameDiff";
    int32_t dest_1 = data_7 + Game_DataSymbolLoad(&item_118 + data_7 + 0x18, "%s(%s);\n");
    char* data_11 = "TRUE";

    if (!(&g_bc2390)[param_2 * 0x564])
        data_11 = "FALSE";

    char* item_10c_1 = data_11;
    item_110 = "GOIsBlood";
    char* item_114_1 = "%s(%s);\n";
    item_118 = &item_110 + dest_1 + 0x10;
    return Sys_CloseFileStream_4(context, &item_100, dest_1 + Game_DataSymbolLoad(item_118, item_114_1));
}
