#include "0043A710-AlarmLight_OnEvent.h"
/* 0x0043a710 AlarmLight_OnEvent full linked: callers=0 callees=5 */
int32_t AlarmLight_OnEvent(void* a1)

{
    char result = *(a1 + 0x1a2);

    if (result)
        return result;

    *(a1 + 0x1a2) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isOn");
    SymbolRegister_Bool8(&var_80, a1 + 0x1a0);
    void* var_e4_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isDestroyed");
    return SymbolRegister_Bool8(&var_80, a1 + 0x1a1);
}
