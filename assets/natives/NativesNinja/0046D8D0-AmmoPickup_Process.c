#include "0046D8D0-AmmoPickup_Process.h"
/* 0x0046d8d0 AmmoPickup_Process full linked: callers=0 callees=3 */
int32_t sub_46d8d0(void* a1)

{
    char result = *(a1 + 0x108);

    if (result)
        return result;

    *(a1 + 0x108) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isPickedUp");
    return SymbolRegister_Bool8(&var_80, a1 + 0x109);
}
