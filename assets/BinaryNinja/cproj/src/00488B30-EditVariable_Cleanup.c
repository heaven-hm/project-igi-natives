#include "gi_platform.h"
#include "00488B30-EditVariable_Cleanup.h"
int32_t EditVariable_Cleanup(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0xdc));

    if (result)
    {
        char v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        char v_80;
        Game_DataSymbolLoad(&v_80, "%s.nValue");
        result = Game_DataSymbolRemoveThunk(&v_80);
        (*(int32_t*)(uintptr_t)(a1 + 0xdc)) = 0;
    }

    return result;
}
