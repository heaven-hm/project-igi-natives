#include "00423D30-ControlsMenu_Action.h"
/* 0x00423d30 ControlsMenu_Action full linked: callers=0 callees=5 */
int32_t ControlsMenu_Action(void* a1)

{
    char result = *(a1 + 0x358);

    if (result)
    {
        void var_c0;
        sub_4f1270(&var_c0, a1);
        void* var_d0_1 = &var_c0;
        void var_80;
        Game_DataSymbolLoad(&var_80, "%s.nOffset");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_e0_1 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.isReset");
        result = Game_DataSymbolRemoveThunk(&var_80);
        *(a1 + 0x358) = 0;
    }

    return result;
}
