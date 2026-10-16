#include "004253C0-ConditionalSound_Update.h"
/* 0x004253c0 ConditionalSound_Update full linked: callers=0 callees=9 */
int32_t ConditionalSound_Update(void* a1)

{
    char result = *(a1 + 0xb4);

    if (result)
        return result;

    *(a1 + 0xb4) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isRun");
    SymbolRegister_Bool8(&var_80, a1 + 0xb0);
    void* var_e4_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isLastRun");
    SymbolRegister_Bool8(&var_80, a1 + 0xb1);
    void* var_f8_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isPlaying");
    SymbolRegister_Bool8(&var_80, a1 + 0xb2);
    void* var_c8_2 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nPlayTick");
    return SymbolRegister_Int32(&var_80, a1 + 0xac);
}
