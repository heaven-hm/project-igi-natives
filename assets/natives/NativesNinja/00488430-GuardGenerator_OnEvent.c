#include "00488430-GuardGenerator_OnEvent.h"
/* 0x00488430 GuardGenerator_OnEvent full linked: callers=0 callees=7 */
int32_t sub_488430(void* a1)

{
    char result = *(a1 + 0x71);

    if (result)
        return result;

    *(a1 + 0x71) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isOn");
    SymbolRegister_Bool8(&var_80, a1 + 0x70);
    void* var_e4_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isSpawned");
    SymbolRegister_Bool8(&var_80, a1 + 0x72);
    void* var_f8_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nSpawns");
    return SymbolRegister_Int32(&var_80, a1 + 0x74);
}
