// IGI native provenance: Config_Gocontentcontrolpw - 0x00406170 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00406170-Config_Gocontentcontrolpw.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_Gocontentcontrolpw.h"
int32_t Config_Gocontentcontrolpw(int32_t* context)

{
    char* item_104 = &g_bc79c8;
    char const* const item_108 = "GOContentControlPW";
    void item_100;
    return Sys_CloseFileStream_4(context, &item_100, Game_DataSymbolLoad(&item_100, "%s("%s");\n"));
}
