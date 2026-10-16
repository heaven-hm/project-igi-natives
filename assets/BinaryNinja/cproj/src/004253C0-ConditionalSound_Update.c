#include "gi_platform.h"
#include "004253C0-ConditionalSound_Update.h"
int32_t ConditionalSound_Update(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0xb4));

    if (result)
        return result;

    (*(int32_t*)(uintptr_t)(a1 + 0xb4)) = 1;
    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.isRun");
    SymbolRegister_Bool8(&v_80, a1 + 0xb0);
    void* v_e4_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isLastRun");
    SymbolRegister_Bool8(&v_80, a1 + 0xb1);
    void* v_f8_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isPlaying");
    SymbolRegister_Bool8(&v_80, a1 + 0xb2);
    void* v_c8_2 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.nPlayTick");
    return SymbolRegister_Int32(&v_80, a1 + 0xac);
}
