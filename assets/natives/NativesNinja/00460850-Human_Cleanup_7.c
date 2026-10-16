#include "00460850-Human_Cleanup_7.h"
/* 0x00460850 Human_Cleanup_7 full linked: callers=0 callees=5 */
int32_t sub_460850(void* a1)

{
    char result = *(a1 + 0xcf4);

    if (result)
        return result;

    *(a1 + 0xcf4) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isDead");
    SymbolRegister_Bool8(&var_80, a1 + 0xcf5);
    void* var_e4_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.eTeam");
    return SymbolRegister_Int32(&var_80, a1 + 0xfc);
}
