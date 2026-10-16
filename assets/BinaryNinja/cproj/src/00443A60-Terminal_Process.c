#include "gi_platform.h"
#include "00443A60-Terminal_Process.h"
int32_t Terminal_Process(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x248));

    if (result)
        return result;

    (*(int32_t*)(uintptr_t)(a1 + 0x248)) = 1;
    ((int(*)())(uintptr_t)(*(((FX_TrailUpdate() + Script_FormatString_5() * 0x180) << 2) + &g_a96ae0)))(a1);
    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d8_1 = &v_c0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.isInUse");
    SymbolRegister_Bool8(&v_80, a1 + 0x238);
    void* v_ec_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isLastInUse");
    SymbolRegister_Bool8(&v_80, a1 + 0x239);
    void* v_100_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isOn");
    SymbolRegister_Bool8(&v_80, a1 + 0x240);
    void* v_d4_2 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isHacked");
    SymbolRegister_Bool8(&v_80, a1 + 0x241);
    void* v_e8_2 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isHackedThisTick");
    return SymbolRegister_Bool8(&v_80, a1 + 0x242);
}
