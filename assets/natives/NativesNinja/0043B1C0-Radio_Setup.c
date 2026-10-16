#include "0043B1C0-Radio_Setup.h"
/* 0x0043b1c0 Radio_Setup full linked: callers=0 callees=5 */
int32_t Radio_Setup(void* a1)

{
    char result = *(a1 + 0x241);

    if (result)
        return result;

    *(a1 + 0x241) = 1;
    (*(((sub_481340() + sub_4f1210() * 0x180) << 2) + &g_a96ae0))(a1);
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d8_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isOn");
    return SymbolRegister_Bool8(&var_80, a1 + 0x240);
}
