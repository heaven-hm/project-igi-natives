#include "0043F700-Wire_OnEvent.h"
/* 0x0043f700 Wire_OnEvent full linked: callers=0 callees=5 */
int32_t sub_43f700(void* a1)

{
    char result = *(a1 + 0x132);

    if (result)
        return result;

    *(a1 + 0x132) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isInUse");
    SymbolRegister_Bool8(&var_80, a1 + 0x130);
    void* var_e4_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isLastInUse");
    return SymbolRegister_Bool8(&var_80, a1 + 0x131);
}
