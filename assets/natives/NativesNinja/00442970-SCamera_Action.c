#include "00442970-SCamera_Action.h"
/* 0x00442970 SCamera_Action full linked: callers=0 callees=9 */
int32_t sub_442970(void* a1)

{
    char result = *(a1 + 0x171);

    if (!result)
        return result;

    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    *(a1 + 0x171) = 0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isDetection");
    Game_DataSymbolRemoveThunk(&var_80);
    void* var_e0_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isLastDetection");
    Game_DataSymbolRemoveThunk(&var_80);
    void* var_f0_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nDetectionTime");
    Game_DataSymbolRemoveThunk(&var_80);
    void* var_100_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isExploded");
    return Game_DataSymbolRemoveThunk(&var_80);
}
