#include "0042FCE0-Car_Cleanup_2.h"
/* 0x0042fce0 Car_Cleanup_2 full linked: callers=0 callees=3 */
int32_t Car_Cleanup_2(void* a1)

{
    char result = *(a1 + 0x2ed4);

    if (result)
        return result;

    *(a1 + 0x2ed4) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isExploded");
    return SymbolRegister_Bool8(&var_80, a1 + 0x2ed5);
}
