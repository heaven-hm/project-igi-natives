#include "gi_platform.h"
#include "00437CA0-Smoke_Update.h"
int32_t Smoke_Update(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x20));

    if (result)
        return result;

    (*(int32_t*)(uintptr_t)(a1 + 0x20)) = 1;
    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.vGenerateFactor");
    return SymbolRegister_Real32(&v_80, a1 + 0x98);
}
