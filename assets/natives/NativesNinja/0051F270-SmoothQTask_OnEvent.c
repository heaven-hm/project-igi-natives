#include "0051F270-SmoothQTask_OnEvent.h"
/* 0x0051f270 SmoothQTask_OnEvent full linked: callers=0 callees=5 */
int32_t sub_51f270(void* a1)

{
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0 = &var_c0;
    *(a1 + 0xf8) = 0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.vRealValue");
    Game_DataSymbolRemoveThunk(&var_80);
    void* var_e0 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.vIdealValue");
    int32_t result = Game_DataSymbolRemoveThunk(&var_80);
    *(a1 + 0xf8) = 0;
    return result;
}
