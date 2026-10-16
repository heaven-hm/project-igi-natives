#include "gi_platform.h"
#include "00504590-AreaActivate_OnEvent.h"
int32_t AreaActivate_OnEvent(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0xb5));

    if (!result)
        return result;

    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    (*(int32_t*)(uintptr_t)(a1 + 0xb5)) = 0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.nActive");
    return Game_DataSymbolRemoveThunk(&v_80);
}
