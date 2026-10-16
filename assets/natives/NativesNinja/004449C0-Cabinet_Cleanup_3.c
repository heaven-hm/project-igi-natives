#include "004449C0-Cabinet_Cleanup_3.h"
/* 0x004449c0 Cabinet_Cleanup_3 full linked: callers=0 callees=7 */
int32_t sub_4449c0(void* a1)

{
    char result = *(a1 + 0x129);

    if (result)
        return result;

    *(a1 + 0x129) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isInUse");
    SymbolRegister_Bool8(&var_80, a1 + 0x11f);
    void* var_e4_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isLastInUse");
    SymbolRegister_Bool8(&var_80, a1 + 0x120);
    void* var_f8_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isSearched");
    return SymbolRegister_Bool8(&var_80, a1 + 0x128);
}
