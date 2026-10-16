#include "0051BD40-LevelTimer_OnEvent.h"
/* 0x0051bd40 LevelTimer_OnEvent full linked: callers=0 callees=5 */
int32_t sub_51bd40(void* a1)

{
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0 = &var_c0;
    *(a1 + 0x68) = 0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isRun");
    Game_DataSymbolRemoveThunk(&var_80);
    void* var_e0 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nTick");
    int32_t result = Game_DataSymbolRemoveThunk(&var_80);
    *(a1 + 0x68) = 0;
    return result;
}
