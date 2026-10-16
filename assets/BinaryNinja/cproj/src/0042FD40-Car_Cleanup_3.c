#include "gi_platform.h"
#include "0042FD40-Car_Cleanup_3.h"
int32_t Car_Cleanup_3(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x2ed4));

    if (result)
    {
        char v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        (*(int32_t*)(uintptr_t)(a1 + 0x2ed4)) = 0;
        char v_80;
        Game_DataSymbolLoad(&v_80, "%s.isExploded");
        result = Game_DataSymbolRemoveThunk(&v_80);
        (*(int32_t*)(uintptr_t)(a1 + 0x2ed4)) = 0;
    }

    return result;
}
