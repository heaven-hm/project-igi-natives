#include "gi_platform.h"
#include "00423D30-ControlsMenu_Action.h"
int32_t ControlsMenu_Action(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x358));

    if (result)
    {
        char v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        char v_80;
        Game_DataSymbolLoad(&v_80, "%s.nOffset");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_e0_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isReset");
        result = Game_DataSymbolRemoveThunk(&v_80);
        (*(int32_t*)(uintptr_t)(a1 + 0x358)) = 0;
    }

    return result;
}
