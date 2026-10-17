// Original IGI.EXE function: Config_SaveInputOptions (VA 0x00405C50; static CFG gate PASS, CFG score 1.000).
#include "Config_SaveInputOptions.h"
int32_t Config_SaveInputOptions(int32_t* context)

{
    int32_t item_104 = g_bc2384;
    char const* const item_108 = "GOStart";
    void item_100;
    return Sys_CloseFileStream_4(context, &item_100, Game_DataSymbolLoad(&item_100, "%s(%d);\n"));
}
