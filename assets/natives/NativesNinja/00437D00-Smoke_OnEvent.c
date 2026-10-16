#include "00437D00-Smoke_OnEvent.h"
/* 0x00437d00 Smoke_OnEvent full linked: callers=0 callees=3 */
int32_t Smoke_OnEvent(void* a1)

{
    char result = *(a1 + 0x20);

    if (!result)
        return result;

    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    *(a1 + 0x20) = 0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.vGenerateFactor");
    return Game_DataSymbolRemoveThunk(&var_80);
}
