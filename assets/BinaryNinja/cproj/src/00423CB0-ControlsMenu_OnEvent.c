#include "gi_platform.h"
#include "00423CB0-ControlsMenu_OnEvent.h"
int32_t ControlsMenu_OnEvent(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x358));

    if (!result)
    {
        char v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        char v_80;
        Game_DataSymbolLoad(&v_80, "%s.nOffset");
        SymbolRegister_Int32(&v_80, a1 + 0x354);
        void* v_e4_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isReset");
        result = SymbolRegister_Bool8(&v_80, a1 + 0x35a);
        (*(int32_t*)(uintptr_t)(a1 + 0x358)) = 1;
    }

    return result;
}
