#include "00485770-StatusMessage_Update_2.h"
/* 0x00485770 StatusMessage_Update_2 full linked: callers=0 callees=11 */
int32_t sub_485770(void* a1)

{
    char result = *(a1 + 0x1d5);

    if (result)
        return result;

    *(a1 + 0x1d5) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isSendt");
    SymbolRegister_Bool8(&var_80, a1 + 0x1d4);
    void* var_e4_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nTickSendt");
    SymbolRegister_Int16(&var_80, a1 + 0x1c8);
    void* var_f8_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isFinishedDisplay");
    SymbolRegister_Bool8(&var_80, a1 + 0x1d6);
    void* var_c8_2 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nFinishedDisplay");
    SymbolRegister_Int16(&var_80, a1 + 0x1cc);
    void* var_dc_2 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nTicksSinceFinishedDisplay");
    return SymbolRegister_Int16(&var_80, a1 + 0x1d0);
}
