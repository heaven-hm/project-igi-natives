#include "gi_platform.h"
#include "00442970-SCamera_Action.h"
int32_t SCamera_Action(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x171));

    if (!result)
        return result;

    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    (*(int32_t*)(uintptr_t)(a1 + 0x171)) = 0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.isDetection");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_e0_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isLastDetection");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_f0_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.nDetectionTime");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_100_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isExploded");
    return Game_DataSymbolRemoveThunk(&v_80);
}
