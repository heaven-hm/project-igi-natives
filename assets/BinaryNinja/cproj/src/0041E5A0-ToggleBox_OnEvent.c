#include "gi_platform.h"
#include "0041E5A0-ToggleBox_OnEvent.h"
int32_t ToggleBox_OnEvent(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0xa8));

    if (result)
        return result;

    (*(int32_t*)(uintptr_t)(a1 + 0xa8)) = 1;
    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.isOn");
    return SymbolRegister_Int16(&v_80, a1 + 0xa4);
}
