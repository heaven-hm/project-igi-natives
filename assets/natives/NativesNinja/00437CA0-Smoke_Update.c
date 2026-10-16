#include "00437CA0-Smoke_Update.h"
/* 0x00437ca0 Smoke_Update full linked: callers=0 callees=3 */
int32_t Smoke_Update(void* a1)

{
    char result = *(a1 + 0x20);

    if (result)
        return result;

    *(a1 + 0x20) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.vGenerateFactor");
    return SymbolRegister_Real32(&var_80, a1 + 0x98);
}
