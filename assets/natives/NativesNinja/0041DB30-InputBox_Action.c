#include "0041DB30-InputBox_Action.h"
/* 0x0041db30 InputBox_Action full linked: callers=0 callees=3 */
int32_t InputBox_Action(void* a1)

{
    char result = *(a1 + 0x194);

    if (!result)
    {
        void var_c0;
        sub_4f1270(&var_c0, a1);
        void* var_d0_1 = &var_c0;
        void var_80;
        Game_DataSymbolLoad(&var_80, "%s.zData");
        result = sub_4b8030(&var_80, a1 + 0x54, 0x28);
        *(a1 + 0x194) = 1;
    }

    return result;
}
