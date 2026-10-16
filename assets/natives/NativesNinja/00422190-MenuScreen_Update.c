#include "00422190-MenuScreen_Update.h"
/* 0x00422190 MenuScreen_Update full linked: callers=0 callees=3 */
void* MenuScreen_Update(void* a1)

{
    void* result = *(a1 + 0x1a0);

    if (result)
        return result;

    *(a1 + 0x1a0) = 1;
    void var_100;
    sub_4f1270(&var_100, a1);
    void* var_110_1 = &var_100;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.nUserData");
    return SymbolRegister_Int32(&var_80, a1 + 0x19c);
}
