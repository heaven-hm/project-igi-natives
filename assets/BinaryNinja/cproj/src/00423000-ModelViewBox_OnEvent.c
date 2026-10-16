#include "gi_platform.h"
#include "00423000-ModelViewBox_OnEvent.h"
int32_t ModelViewBox_OnEvent(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x54));

    if (result)
    {
        char v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        char v_80;
        result = Game_DataSymbolLoad(&v_80, "%s.isOn");
        (*(int32_t*)(uintptr_t)(a1 + 0x54)) = 0;
    }

    return result;
}
