#include "LevelFlow_Process.h"
int32_t LevelFlow_Process(void* a1)

{
    char result = *(a1 + 0x78);

    if (result)
        return result;

    *(a1 + 0x78) = 1;
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isComplete");
    SymbolRegister_Bool8(&v_80, a1 + 0x60);
    void* v_e4_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isFailed");
    SymbolRegister_Bool8(&v_80, a1 + 0x61);
    void* v_f8_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.nTick");
    SymbolRegister_Int16(&v_80, a1 + 0x68);
    void* v_c8_2 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.eDifficulty");
    SymbolRegister_Int16(&v_80, a1 + 0x64);
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
