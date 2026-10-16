#include "gi_platform.h"
#include "004F3C20-Script_ParseEnumString_14.h"
int32_t Script_ParseEnumString_14(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x200f5));

    if (!result)
        return result;

    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    (*(int32_t*)(uintptr_t)(a1 + 0x200f5)) = 0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.isRun");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_e0_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.nTick");
    return Game_DataSymbolRemoveThunk(&v_80);
}
