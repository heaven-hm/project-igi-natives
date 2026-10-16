#include "gi_platform.h"
#include "00504530-AreaActivate_Update.h"
int32_t AreaActivate_Update(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0xb5));

    if (result)
        return result;

    (*(int32_t*)(uintptr_t)(a1 + 0xb5)) = 1;
    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.nActive");
    return SymbolRegister_Int16(&v_80, a1 + 0xa8);
}
