#include "gi_platform.h"
#include "00437D00-Smoke_OnEvent.h"
int32_t Smoke_OnEvent(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x20));

    if (!result)
        return result;

    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    (*(int32_t*)(uintptr_t)(a1 + 0x20)) = 0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.vGenerateFactor");
    return Game_DataSymbolRemoveThunk(&v_80);
}
