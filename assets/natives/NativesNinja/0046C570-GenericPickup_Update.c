#include "0046C570-GenericPickup_Update.h"
/* 0x0046c570 GenericPickup_Update full linked: callers=0 callees=3 */
int32_t sub_46c570(void* a1)

{
    char result = *(a1 + 0x118);

    if (result)
        return result;

    *(a1 + 0x118) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isPickedUp");
    return SymbolRegister_Bool8(&var_80, a1 + 0x119);
}
