#include "gi_platform.h"
#include "004F3BA0-Script_ParseEnumReal32_14.h"
int32_t Script_ParseEnumReal32_14(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x200f5));

    if (result)
        return result;

    (*(int32_t*)(uintptr_t)(a1 + 0x200f5)) = 1;
    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.isRun");
    SymbolRegister_Bool8(&v_80, a1 + 0x200f4);
    void* v_e4_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.nTick");
    return SymbolRegister_Int32(&v_80, a1 + 0x20154);
}
