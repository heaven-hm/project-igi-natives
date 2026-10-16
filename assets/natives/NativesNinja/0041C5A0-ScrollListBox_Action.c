#include "0041C5A0-ScrollListBox_Action.h"
/* 0x0041c5a0 ScrollListBox_Action full linked: callers=0 callees=3 */
int32_t ScrollListBox_Action(void* a1)

{
    char result = *(a1 + 0x12a8);

    if (result)
        return result;

    *(a1 + 0x12a8) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.nActiveID");
    return SymbolRegister_Int32(&var_80, a1 + 0x12a0);
}
