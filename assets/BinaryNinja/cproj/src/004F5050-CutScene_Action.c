#include "gi_platform.h"
#include "004F5050-CutScene_Action.h"
int32_t CutScene_Action(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x62));

    if (result)
    {
        char v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        (*(int32_t*)(uintptr_t)(a1 + 0x62)) = 0;
        char v_80;
        Game_DataSymbolLoad(&v_80, "%s.isRun");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_e0_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isFinished");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_f0_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.nTick");
        result = Game_DataSymbolRemoveThunk(&v_80);
        (*(int32_t*)(uintptr_t)(a1 + 0x62)) = 0;
    }

    return result;
}
