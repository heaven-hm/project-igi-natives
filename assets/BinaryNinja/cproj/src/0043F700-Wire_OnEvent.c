#include "gi_platform.h"
#include "0043F700-Wire_OnEvent.h"
int32_t Wire_OnEvent(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x132));

    if (result)
        return result;

    (*(int32_t*)(uintptr_t)(a1 + 0x132)) = 1;
    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.isInUse");
    SymbolRegister_Bool8(&v_80, a1 + 0x130);
    void* v_e4_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isLastInUse");
    return SymbolRegister_Bool8(&v_80, a1 + 0x131);
}
