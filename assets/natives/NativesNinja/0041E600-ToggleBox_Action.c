#include "0041E600-ToggleBox_Action.h"
/* 0x0041e600 ToggleBox_Action full linked: callers=0 callees=3 */
int32_t ToggleBox_Action(void* a1)

{
    char result = *(a1 + 0xa8);

    if (result)
    {
        void var_c0;
        sub_4f1270(&var_c0, a1);
        void* var_d0_1 = &var_c0;
        void var_80;
        Game_DataSymbolLoad(&var_80, "%s.isOn");
        result = Game_DataSymbolRemoveThunk(&var_80);
        *(a1 + 0xa8) = 0;
    }

    return result;
}
