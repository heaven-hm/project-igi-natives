#include "0046D930-AmmoPickup_Update.h"
/* 0x0046d930 AmmoPickup_Update full linked: callers=0 callees=3 */
int32_t sub_46d930(void* a1)

{
    char result = *(a1 + 0x108);

    if (!result)
        return result;

    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    *(a1 + 0x108) = 0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isPickedUp");
    return Game_DataSymbolRemoveThunk(&var_80);
}
