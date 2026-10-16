#include "00445860-Switch_Cleanup.h"
/* 0x00445860 Switch_Cleanup full linked: callers=0 callees=13 */
int32_t sub_445860(void* a1)

{
    char result = *(a1 + 0x1cc);

    if (result)
        return result;

    *(a1 + 0x1cc) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isOn");
    SymbolRegister_Bool8(&var_80, a1 + 0x1c0);
    void* var_e4_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isLastOn");
    SymbolRegister_Bool8(&var_80, a1 + 0x1c1);
    void* var_f8_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isPressed");
    SymbolRegister_Bool8(&var_80, a1 + 0x1c4);
    void* var_c8_2 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isLastPressed");
    SymbolRegister_Bool8(&var_80, a1 + 0x1c5);
    void* var_dc_2 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isDestroyed");
    SymbolRegister_Bool8(&var_80, a1 + 0x1c2);
    void* var_f0_2 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isLastDestroyed");
    return SymbolRegister_Bool8(&var_80, a1 + 0x1c3);
}
