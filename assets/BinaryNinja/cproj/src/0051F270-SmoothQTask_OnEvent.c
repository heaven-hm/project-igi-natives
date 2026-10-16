#include "gi_platform.h"
#include "0051F270-SmoothQTask_OnEvent.h"
int32_t SmoothQTask_OnEvent(void* a1)

{
    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0 = &v_c0;
    (*(int32_t*)(uintptr_t)(a1 + 0xf8)) = 0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.vRealValue");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_e0 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.vIdealValue");
    int32_t result = Game_DataSymbolRemoveThunk(&v_80);
    (*(int32_t*)(uintptr_t)(a1 + 0xf8)) = 0;
    return result;
}
