#include "00405C50-Config_SaveInputOptions.h"
/* 0x00405c50 Config_SaveInputOptions full linked: callers=1 callees=2 */
int32_t Config_SaveInputOptions(int32_t* a1)

{
    int32_t var_104 = g_bc2384;
    char const* const var_108 = "GOStart";
    void var_100;
    return sub_4b1700(a1, &var_100, Game_DataSymbolLoad(&var_100, "%s(%d);\n"));
}
