#include "0051F1F0-SmoothQTask_Update.h"
/* 0x0051f1f0 SmoothQTask_Update full linked: callers=0 callees=5 */
int32_t sub_51f1f0(void* a1)

{
    char result = *(a1 + 0xf8);

    if (result)
        return result;

    *(a1 + 0xf8) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.vRealValue");
    SymbolRegister_Real32(&var_80, a1 + 0x68);
    void* var_e4_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.vIdealValue");
    return SymbolRegister_Real32(&var_80, a1 + 0x68);
}
