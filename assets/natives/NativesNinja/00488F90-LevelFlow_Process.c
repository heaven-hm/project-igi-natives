#include "00488F90-LevelFlow_Process.h"
/* 0x00488f90 LevelFlow_Process full linked: callers=0 callees=19 */
int32_t sub_488f90(void* a1)

{
    char result = *(a1 + 0x78);

    if (result)
        return result;

    *(a1 + 0x78) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isComplete");
    SymbolRegister_Bool8(&var_80, a1 + 0x60);
    void* var_e4_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isFailed");
    SymbolRegister_Bool8(&var_80, a1 + 0x61);
    void* var_f8_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nTick");
    SymbolRegister_Int16(&var_80, a1 + 0x68);
    void* var_c8_2 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.eDifficulty");
    SymbolRegister_Int16(&var_80, a1 + 0x64);
    SymbolRegister_Bool8("Key0.isPressed", &g_5c8aa8);
    SymbolRegister_Bool8("Key1.isPressed", &g_5c8aa9);
    SymbolRegister_Bool8("Key2.isPressed", &g_5c8aaa);
    SymbolRegister_Bool8("Key3.isPressed", &g_5c8aab);
    SymbolRegister_Bool8("Key4.isPressed", &g_5c8aac);
    SymbolRegister_Bool8("Key5.isPressed", &g_5c8aad);
    SymbolRegister_Bool8("Key6.isPressed", &g_5c8aae);
    SymbolRegister_Bool8("Key7.isPressed", &g_5c8aaf);
    SymbolRegister_Bool8("Key8.isPressed", &g_5c8ab0);
    return SymbolRegister_Bool8("Key9.isPressed", &g_5c8ab1);
}
