#include "gi_platform.h"
#include "0041F1E0-ListBox_Cleanup.h"
int32_t ListBox_Cleanup(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0xbf0));

    if (result)
        return result;

    (*(int32_t*)(uintptr_t)(a1 + 0xbf0)) = 1;
    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.nActiveID");
    return SymbolRegister_Int32(&v_80, a1 + 0xbe8);
}
