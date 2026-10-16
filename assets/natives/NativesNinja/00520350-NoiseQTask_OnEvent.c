#include "00520350-NoiseQTask_OnEvent.h"
/* 0x00520350 NoiseQTask_OnEvent full linked: callers=0 callees=3 */
int32_t sub_520350(void* a1)

{
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0 = &var_c0;
    *(a1 + 0x128) = 0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.vValue");
    int32_t result = Game_DataSymbolRemoveThunk(&var_80);
    *(a1 + 0x128) = 0;
    return result;
}
