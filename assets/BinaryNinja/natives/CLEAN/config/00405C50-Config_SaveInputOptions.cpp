// IGI native provenance: Config_SaveInputOptions - 0x00405C50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00405C50-Config_SaveInputOptions.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_SaveInputOptions.h"
int32_t Config_SaveInputOptions(int32_t* context)

{
    int32_t item_104 = g_bc2384;
    char const* const item_108 = "GOStart";
    void item_100;
    return Sys_CloseFileStream_4(context, &item_100, Game_DataSymbolLoad(&item_100, "%s(%d);\n"));
}
