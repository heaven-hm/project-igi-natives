// Original IGI.EXE function: Config_Gocontentcontrolpw (VA 0x00406170; static CFG gate PASS, CFG score 1.000).
#include "Config_Gocontentcontrolpw.h"
int32_t Config_Gocontentcontrolpw(int32_t* context)

{
    char* item_104 = &g_bc79c8;
    char const* const item_108 = "GOContentControlPW";
    void item_100;
    return Sys_CloseFileStream_4(context, &item_100, Game_DataSymbolLoad(&item_100, "%s("%s");\n"));
}
