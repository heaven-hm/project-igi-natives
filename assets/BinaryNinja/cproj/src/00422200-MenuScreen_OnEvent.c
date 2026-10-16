#include "gi_platform.h"
#include "00422200-MenuScreen_OnEvent.h"
int32_t MenuScreen_OnEvent(void* a1)

{
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0x1a0));

    if (result)
    {
        char v_100;
        Script_ParseEnumString_6(&v_100, a1);
        void* v_110_1 = &v_100;
        char v_80;
        Game_DataSymbolLoad(&v_80, "%s.nUserData");
        result = Game_DataSymbolRemoveThunk(&v_80);
        (*(int32_t*)(uintptr_t)(a1 + 0x1a0)) = 0;
    }

    return result;
}
