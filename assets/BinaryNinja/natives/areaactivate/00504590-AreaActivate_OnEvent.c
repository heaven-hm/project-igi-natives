#include "AreaActivate_OnEvent.h"
int32_t AreaActivate_OnEvent(void* a1)

{
    char result = *(a1 + 0xb5);

    if (!result)
        return result;

    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    *(a1 + 0xb5) = 0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.nActive");
    return Game_DataSymbolRemoveThunk(&v_80);
}
