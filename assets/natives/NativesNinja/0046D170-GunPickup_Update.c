#include "0046D170-GunPickup_Update.h"
/* 0x0046d170 GunPickup_Update full linked: callers=0 callees=3 */
int32_t sub_46d170(void* a1)

{
    char result = *(a1 + 0x128);

    if (result)
        return result;

    *(a1 + 0x128) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isPickedUp");
    return SymbolRegister_Bool8(&var_80, a1 + 0x129);
}
