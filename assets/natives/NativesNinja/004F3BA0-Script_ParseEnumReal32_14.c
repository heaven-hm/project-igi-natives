#include "004F3BA0-Script_ParseEnumReal32_14.h"
/* 0x004f3ba0 Script_ParseEnumReal32_14 full linked: callers=0 callees=5 */
int32_t sub_4f3ba0(void* a1)

{
    char result = *(a1 + 0x200f5);

    if (result)
        return result;

    *(a1 + 0x200f5) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isRun");
    SymbolRegister_Bool8(&var_80, a1 + 0x200f4);
    void* var_e4_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nTick");
    return SymbolRegister_Int32(&var_80, a1 + 0x20154);
}
