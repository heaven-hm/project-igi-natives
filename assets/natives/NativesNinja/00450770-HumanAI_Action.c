#include "00450770-HumanAI_Action.h"
/* 0x00450770 HumanAI_Action full linked: callers=0 callees=3 */
int32_t sub_450770(void* a1)

{
    char result = *(a1 + 0x3ab8);

    if (result)
        return result;

    *(a1 + 0x3ab8) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isDetection");
    return SymbolRegister_Bool8(&var_80, a1 + 0x3ab9);
}
