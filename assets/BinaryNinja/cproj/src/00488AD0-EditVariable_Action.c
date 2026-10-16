#include "gi_platform.h"
#include "00488AD0-EditVariable_Action.h"
int32_t EditVariable_Action(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0xdc));

    if (result)
        return result;

    (*(int32_t*)(uintptr_t)(a1 + 0xdc)) = 1;
    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.nValue");
    return SymbolRegister_Int32(&v_80, a1 + 0xd8);
}
