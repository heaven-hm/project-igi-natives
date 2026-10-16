#include "gi_platform.h"
#include "0042FCE0-Car_Cleanup_2.h"
int32_t Car_Cleanup_2(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x2ed4));

    if (result)
        return result;

    (*(int32_t*)(uintptr_t)(a1 + 0x2ed4)) = 1;
    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.isExploded");
    return SymbolRegister_Bool8(&v_80, a1 + 0x2ed5);
}
