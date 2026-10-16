#include "gi_platform.h"
#include "0041F240-ListBox_Cleanup_2.h"
int32_t ListBox_Cleanup_2(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0xbf0));

    if (result)
    {
        char v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        char v_80;
        Game_DataSymbolLoad(&v_80, "%s.nActiveID");
        result = Game_DataSymbolRemoveThunk(&v_80);
        (*(int32_t*)(uintptr_t)(a1 + 0xbf0)) = 0;
    }

    return result;
}
