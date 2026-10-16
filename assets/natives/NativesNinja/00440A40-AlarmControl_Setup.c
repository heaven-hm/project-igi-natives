#include "00440A40-AlarmControl_Setup.h"
/* 0x00440a40 AlarmControl_Setup full linked: callers=0 callees=9 */
int32_t sub_440a40(void* a1)

{
    char result = *(a1 + 0x2a8);

    if (result)
        return result;

    *(a1 + 0x2a8) = 1;
    (*(((sub_443e80() + sub_4f1210() * 0x180) << 2) + &g_a96ae0))(a1);
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d8_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isTrigger");
    SymbolRegister_Bool8(&var_80, a1 + 0x2a0);
    void* var_ec_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isAlarm");
    SymbolRegister_Bool8(&var_80, a1 + 0x2a1);
    void* var_100_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nTriggerLastTick");
    return SymbolRegister_Int16(&var_80, a1 + 0x2a4);
}
