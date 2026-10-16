#include "00504590-AreaActivate_OnEvent.h"
/* 0x00504590 AreaActivate_OnEvent full linked: callers=0 callees=3 */
int32_t sub_504590(void* a1)

{
    char result = *(a1 + 0xb5);

    if (!result)
        return result;

    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    *(a1 + 0xb5) = 0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.nActive");
    return Game_DataSymbolRemoveThunk(&var_80);
}
