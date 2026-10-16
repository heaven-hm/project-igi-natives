#include "004F3C20-Script_ParseEnumString_14.h"
/* 0x004f3c20 Script_ParseEnumString_14 full linked: callers=0 callees=5 */
int32_t sub_4f3c20(void* a1)

{
    char result = *(a1 + 0x200f5);

    if (!result)
        return result;

    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    *(a1 + 0x200f5) = 0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isRun");
    Game_DataSymbolRemoveThunk(&var_80);
    void* var_e0_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nTick");
    return Game_DataSymbolRemoveThunk(&var_80);
}
