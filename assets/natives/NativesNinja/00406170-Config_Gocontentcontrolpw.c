#include "00406170-Config_Gocontentcontrolpw.h"
/* 0x00406170 Config_Gocontentcontrolpw full linked: callers=1 callees=2 */
int32_t Config_Gocontentcontrolpw(int32_t* a1)

{
    char* var_104 = &g_bc79c8;
    char const* const var_108 = "GOContentControlPW";
    void var_100;
    return sub_4b1700(a1, &var_100, Game_DataSymbolLoad(&var_100, "%s("%s");\n"));
}
