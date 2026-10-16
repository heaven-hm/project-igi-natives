#include "00504530-AreaActivate_Update.h"
/* 0x00504530 AreaActivate_Update full linked: callers=0 callees=3 */
int32_t sub_504530(void* a1)

{
    char result = *(a1 + 0xb5);

    if (result)
        return result;

    *(a1 + 0xb5) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.nActive");
    return SymbolRegister_Int16(&var_80, a1 + 0xa8);
}
