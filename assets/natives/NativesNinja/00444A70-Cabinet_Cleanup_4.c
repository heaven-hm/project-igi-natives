#include "00444A70-Cabinet_Cleanup_4.h"
/* 0x00444a70 Cabinet_Cleanup_4 full linked: callers=0 callees=7 */
int32_t sub_444a70(void* a1)

{
    char result = *(a1 + 0x129);

    if (!result)
        return result;

    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    *(a1 + 0x129) = 0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isInUse");
    Game_DataSymbolRemoveThunk(&var_80);
    void* var_e0_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isLastInUse");
    Game_DataSymbolRemoveThunk(&var_80);
    void* var_f0_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isSearched");
    return Game_DataSymbolRemoveThunk(&var_80);
}
