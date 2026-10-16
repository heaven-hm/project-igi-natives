#include "004F4FB0-CutScene_OnEvent.h"
/* 0x004f4fb0 CutScene_OnEvent full linked: callers=0 callees=7 */
int32_t sub_4f4fb0(void* a1)

{
    char result = *(a1 + 0x62);

    if (result)
        return result;

    *(a1 + 0x62) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isRun");
    SymbolRegister_Bool8(&var_80, a1 + 0x60);
    void* var_e4_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isFinished");
    SymbolRegister_Bool8(&var_80, a1 + 0x61);
    void* var_f8_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nTick");
    return SymbolRegister_Int16(&var_80, a1 + 0x64);
}
