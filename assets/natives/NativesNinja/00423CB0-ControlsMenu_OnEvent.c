#include "00423CB0-ControlsMenu_OnEvent.h"
/* 0x00423cb0 ControlsMenu_OnEvent full linked: callers=0 callees=5 */
int32_t ControlsMenu_OnEvent(void* a1)

{
    char result = *(a1 + 0x358);

    if (!result)
    {
        void var_c0;
        sub_4f1270(&var_c0, a1);
        void* var_d0_1 = &var_c0;
        void var_80;
        Game_DataSymbolLoad(&var_80, "%s.nOffset");
        SymbolRegister_Int32(&var_80, a1 + 0x354);
        void* var_e4_1 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.isReset");
        result = SymbolRegister_Bool8(&var_80, a1 + 0x35a);
        *(a1 + 0x358) = 1;
    }

    return result;
}
