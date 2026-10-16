#include "0043B6E0-Generator_Setup.h"
/* 0x0043b6e0 Generator_Setup full linked: callers=0 callees=7 */
int32_t Generator_Setup(void* a1)

{
    char result = *(a1 + 0x23d);

    if (result)
        return result;

    *(a1 + 0x23d) = 1;
    (*(((sub_481340() + sub_4f1210() * 0x180) << 2) + &g_a96ae0))(a1);
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d8_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isOn");
    SymbolRegister_Bool8(&var_80, a1 + 0x23c);
    void* var_ec_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nBackupTimer");
    return SymbolRegister_Int16(&var_80, a1 + 0x2b8);
}
