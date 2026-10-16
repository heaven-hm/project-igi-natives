#include "Cabinet_Cleanup_4.h"
int32_t Cabinet_Cleanup_4(void* a1)

{
    char result = *(a1 + 0x129);

    if (!result)
        return result;

    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    *(a1 + 0x129) = 0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isInUse");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_e0_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isLastInUse");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_f0_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isSearched");
    return Game_DataSymbolRemoveThunk(&v_80);
}
