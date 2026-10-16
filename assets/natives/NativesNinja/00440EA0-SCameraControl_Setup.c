#include "00440EA0-SCameraControl_Setup.h"
/* 0x00440ea0 SCameraControl_Setup full linked: callers=0 callees=5 */
int32_t sub_440ea0(void* a1)

{
    char result = *(a1 + 0x2a1);

    if (result)
        return result;

    *(a1 + 0x2a1) = 1;
    (*(((sub_443e80() + sub_4f1210() * 0x180) << 2) + &g_a96ae0))(a1);
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d8_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isDetection");
    return SymbolRegister_Bool8(&var_80, a1 + 0x2a0);
}
