#include "0041E5A0-ToggleBox_OnEvent.h"
/* 0x0041e5a0 ToggleBox_OnEvent full linked: callers=0 callees=3 */
int32_t ToggleBox_OnEvent(void* a1)

{
    char result = *(a1 + 0xa8);

    if (result)
        return result;

    *(a1 + 0xa8) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isOn");
    return SymbolRegister_Int16(&var_80, a1 + 0xa4);
}
