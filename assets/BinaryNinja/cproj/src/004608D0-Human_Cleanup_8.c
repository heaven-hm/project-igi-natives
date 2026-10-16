#include "gi_platform.h"
#include "004608D0-Human_Cleanup_8.h"
int32_t Human_Cleanup_8(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0xcf4));

    if (result)
    {
        char v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        char v_80;
        Game_DataSymbolLoad(&v_80, "%s.isDead");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_e0_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.eTeam");
        result = Game_DataSymbolRemoveThunk(&v_80);
        (*(int32_t*)(uintptr_t)(a1 + 0xcf4)) = 0;
    }

    return result;
}
