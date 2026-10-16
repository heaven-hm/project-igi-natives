#include "004254A0-ConditionalSound_OnEvent.h"
/* 0x004254a0 ConditionalSound_OnEvent full linked: callers=0 callees=9 */
int32_t ConditionalSound_OnEvent(void* a1)

{
    char result = *(a1 + 0xb4);

    if (!result)
        return result;

    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    *(a1 + 0xb4) = 0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isRun");
    Game_DataSymbolRemoveThunk(&var_80);
    void* var_e0_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isLastRun");
    Game_DataSymbolRemoveThunk(&var_80);
    void* var_f0_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isPlaying");
    Game_DataSymbolRemoveThunk(&var_80);
    void* var_100_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nPlayTick");
    return Game_DataSymbolRemoveThunk(&var_80);
}
