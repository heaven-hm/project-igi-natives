#include "00488AD0-EditVariable_Action.h"
/* 0x00488ad0 EditVariable_Action full linked: callers=0 callees=3 */
int32_t sub_488ad0(void* a1)

{
    char result = *(a1 + 0xdc);

    if (result)
        return result;

    *(a1 + 0xdc) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.nValue");
    return SymbolRegister_Int32(&var_80, a1 + 0xd8);
}
