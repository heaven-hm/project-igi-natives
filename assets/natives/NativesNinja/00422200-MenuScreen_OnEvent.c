#include "00422200-MenuScreen_OnEvent.h"
/* 0x00422200 MenuScreen_OnEvent full linked: callers=0 callees=3 */
int32_t MenuScreen_OnEvent(void* a1)

{
    int32_t result = *(a1 + 0x1a0);

    if (result)
    {
        void var_100;
        sub_4f1270(&var_100, a1);
        void* var_110_1 = &var_100;
        void var_80;
        Game_DataSymbolLoad(&var_80, "%s.nUserData");
        result = Game_DataSymbolRemoveThunk(&var_80);
        *(a1 + 0x1a0) = 0;
    }

    return result;
}
