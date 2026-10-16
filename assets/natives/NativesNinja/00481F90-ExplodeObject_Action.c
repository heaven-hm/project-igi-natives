#include "00481F90-ExplodeObject_Action.h"
/* 0x00481f90 ExplodeObject_Action full linked: callers=0 callees=3 */
int32_t sub_481f90(void* a1)

{
    char result = *(a1 + 0x191);

    if (result)
        return result;

    *(a1 + 0x191) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isExploded");
    return SymbolRegister_Bool8(&var_80, a1 + 0x190);
}
