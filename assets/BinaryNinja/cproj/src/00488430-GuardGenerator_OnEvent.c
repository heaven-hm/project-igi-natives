#include "gi_platform.h"
#include "00488430-GuardGenerator_OnEvent.h"
int32_t GuardGenerator_OnEvent(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x71));

    if (result)
        return result;

    (*(int32_t*)(uintptr_t)(a1 + 0x71)) = 1;
    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.isOn");
    SymbolRegister_Bool8(&v_80, a1 + 0x70);
    void* v_e4_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isSpawned");
    SymbolRegister_Bool8(&v_80, a1 + 0x72);
    void* v_f8_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.nSpawns");
    return SymbolRegister_Int32(&v_80, a1 + 0x74);
}
