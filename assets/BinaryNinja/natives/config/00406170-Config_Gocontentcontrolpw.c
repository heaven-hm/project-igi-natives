#include "Config_Gocontentcontrolpw.h"
int32_t Config_Gocontentcontrolpw(int32_t* a1)

{
    char* v_104 = &g_bc79c8;
    char const* const v_108 = "GOContentControlPW";
    void v_100;
    return Sys_CloseFileStream_4(a1, &v_100, Game_DataSymbolLoad(&v_100, "%s("%s");\n"));
}
