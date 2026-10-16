#include "MenuScreen_OnEvent.h"
int32_t MenuScreen_OnEvent(void* a1)

{
    int32_t result = *(a1 + 0x1a0);

    if (result)
    {
        void v_100;
        Script_ParseEnumString_6(&v_100, a1);
        void* v_110_1 = &v_100;
        void v_80;
        Game_DataSymbolLoad(&v_80, "%s.nUserData");
        result = Game_DataSymbolRemoveThunk(&v_80);
        *(a1 + 0x1a0) = 0;
    }

    return result;
}
