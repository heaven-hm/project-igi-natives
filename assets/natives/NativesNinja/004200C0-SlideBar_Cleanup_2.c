#include "004200C0-SlideBar_Cleanup_2.h"
/* 0x004200c0 SlideBar_Cleanup_2 full linked: callers=0 callees=5 */
int32_t SlideBar_Cleanup_2(void* a1)

{
    char result = *(a1 + 0xb5);

    if (result)
        return result;

    *(a1 + 0xb5) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.vValue");
    SymbolRegister_Real32(&var_80, a1 + 0xa0);
    void* var_e4_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nValue");
    return SymbolRegister_Int32(&var_80, a1 + 0xb0);
}
