#include "00423000-ModelViewBox_OnEvent.h"
/* 0x00423000 ModelViewBox_OnEvent full linked: callers=0 callees=2 */
int32_t ModelViewBox_OnEvent(void* a1)

{
    char result = *(a1 + 0x54);

    if (result)
    {
        void var_c0;
        sub_4f1270(&var_c0, a1);
        void* var_d0_1 = &var_c0;
        void var_80;
        result = Game_DataSymbolLoad(&var_80, "%s.isOn");
        *(a1 + 0x54) = 0;
    }

    return result;
}
