#include "0043A790-AlarmLight_Action.h"
/* 0x0043a790 AlarmLight_Action full linked: callers=0 callees=5 */
int32_t AlarmLight_Action(void* a1)

{
    char result = *(a1 + 0x1a2);

    if (!result)
        return result;

    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    *(a1 + 0x1a2) = 0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isOn");
    Game_DataSymbolRemoveThunk(&var_80);
    void* var_e0_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isDestroyed");
    return Game_DataSymbolRemoveThunk(&var_80);
}
