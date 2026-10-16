#include "gi_platform.h"
#include "00445860-Switch_Cleanup.h"
int32_t Switch_Cleanup(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x1cc));

    if (result)
        return result;

    (*(int32_t*)(uintptr_t)(a1 + 0x1cc)) = 1;
    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.isOn");
    SymbolRegister_Bool8(&v_80, a1 + 0x1c0);
    void* v_e4_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isLastOn");
    SymbolRegister_Bool8(&v_80, a1 + 0x1c1);
    void* v_f8_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isPressed");
    SymbolRegister_Bool8(&v_80, a1 + 0x1c4);
    void* v_c8_2 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isLastPressed");
    SymbolRegister_Bool8(&v_80, a1 + 0x1c5);
    void* v_dc_2 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isDestroyed");
    SymbolRegister_Bool8(&v_80, a1 + 0x1c2);
    void* v_f0_2 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isLastDestroyed");
    return SymbolRegister_Bool8(&v_80, a1 + 0x1c3);
}
