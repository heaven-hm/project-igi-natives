#include "gi_platform.h"
#include "0051BCC0-LevelTimer_Update.h"
int32_t LevelTimer_Update(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x68));

    if (result)
        return result;

    (*(int32_t*)(uintptr_t)(a1 + 0x68)) = 1;
    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.isRun");
    SymbolRegister_Bool8(&v_80, a1 + 0x60);
    void* v_e4_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.nTick");
    return SymbolRegister_Int16(&v_80, a1 + 0x64);
}
