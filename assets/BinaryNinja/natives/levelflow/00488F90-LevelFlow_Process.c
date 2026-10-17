// Original IGI.EXE function: LevelFlow_Process (VA 0x00488F90; static CFG gate PASS, CFG score 1.000).
#include "LevelFlow_Process.h"
int32_t LevelFlow_Process(void* context)

{
    char result = *(context + 0x78);

    if (result)
        return result;

    *(context + 0x78) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isComplete");
    SymbolRegister_Bool8(&item_80, context + 0x60);
    void* item_e4_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isFailed");
    SymbolRegister_Bool8(&item_80, context + 0x61);
    void* item_f8_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.nTick");
    SymbolRegister_Int16(&item_80, context + 0x68);
    void* item_c8_2 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.eDifficulty");
    SymbolRegister_Int16(&item_80, context + 0x64);
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
