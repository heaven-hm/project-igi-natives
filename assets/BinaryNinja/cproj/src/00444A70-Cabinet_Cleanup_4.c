#include "gi_platform.h"
#include "00444A70-Cabinet_Cleanup_4.h"
int32_t Cabinet_Cleanup_4(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x129));

    if (!result)
        return result;

    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    (*(int32_t*)(uintptr_t)(a1 + 0x129)) = 0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.isInUse");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_e0_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isLastInUse");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_f0_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isSearched");
    return Game_DataSymbolRemoveThunk(&v_80);
}
