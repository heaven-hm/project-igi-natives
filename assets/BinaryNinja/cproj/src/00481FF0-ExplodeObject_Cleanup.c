#include "gi_platform.h"
#include "00481FF0-ExplodeObject_Cleanup.h"
int32_t ExplodeObject_Cleanup(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x191));

    if (result)
    {
        char v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        char v_80;
        Game_DataSymbolLoad(&v_80, "%s.isExploded");
        result = Game_DataSymbolRemoveThunk(&v_80);
        (*(int32_t*)(uintptr_t)(a1 + 0x191)) = 0;
    }

    return result;
}
