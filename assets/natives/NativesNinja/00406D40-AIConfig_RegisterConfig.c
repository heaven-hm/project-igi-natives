#include "00406D40-AIConfig_RegisterConfig.h"
/* 0x00406d40 AIConfig_RegisterConfig full linked: callers=1 callees=4 */
void AIConfig_RegisterConfig(void* a1)

{
    int32_t eax_1 = sub_452910(*(a1 + 0x24));
    void* var_114 = Config_SavePlayerProfile_2(*(a1 + 0x20));
    int32_t var_118 = eax_1;
    void var_100;
    Game_DataSymbolLoad(&var_100, "%s, %s");
    void* var_124 = &var_100;
    void* var_128 = a1;
}
