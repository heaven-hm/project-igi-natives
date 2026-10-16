#include "0051BCC0-LevelTimer_Update.h"
/* 0x0051bcc0 LevelTimer_Update full linked: callers=0 callees=5 */
int32_t sub_51bcc0(void* a1)

{
    char result = *(a1 + 0x68);

    if (result)
        return result;

    *(a1 + 0x68) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isRun");
    SymbolRegister_Bool8(&var_80, a1 + 0x60);
    void* var_e4_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nTick");
    return SymbolRegister_Int16(&var_80, a1 + 0x64);
}
