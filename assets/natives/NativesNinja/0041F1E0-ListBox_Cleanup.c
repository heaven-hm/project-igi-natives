#include "0041F1E0-ListBox_Cleanup.h"
/* 0x0041f1e0 ListBox_Cleanup full linked: callers=0 callees=3 */
int32_t ListBox_Cleanup(void* a1)

{
    char result = *(a1 + 0xbf0);

    if (result)
        return result;

    *(a1 + 0xbf0) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.nActiveID");
    return SymbolRegister_Int32(&var_80, a1 + 0xbe8);
}
