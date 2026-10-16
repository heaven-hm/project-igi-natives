#include "Config_SaveInputOptions.h"
int32_t Config_SaveInputOptions(int32_t* a1)

{
    int32_t v_104 = g_bc2384;
    char const* const v_108 = "GOStart";
    void v_100;
    return Sys_CloseFileStream_4(a1, &v_100, Game_DataSymbolLoad(&v_100, "%s(%d);\n"));
}
