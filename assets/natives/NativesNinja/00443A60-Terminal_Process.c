#include "00443A60-Terminal_Process.h"
/* 0x00443a60 Terminal_Process full linked: callers=0 callees=13 */
int32_t sub_443a60(void* a1)

{
    char result = *(a1 + 0x248);

    if (result)
        return result;

    *(a1 + 0x248) = 1;
    (*(((sub_481340() + sub_4f1210() * 0x180) << 2) + &g_a96ae0))(a1);
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d8_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isInUse");
    SymbolRegister_Bool8(&var_80, a1 + 0x238);
    void* var_ec_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isLastInUse");
    SymbolRegister_Bool8(&var_80, a1 + 0x239);
    void* var_100_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isOn");
    SymbolRegister_Bool8(&var_80, a1 + 0x240);
    void* var_d4_2 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isHacked");
    SymbolRegister_Bool8(&var_80, a1 + 0x241);
    void* var_e8_2 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isHackedThisTick");
    return SymbolRegister_Bool8(&var_80, a1 + 0x242);
}
