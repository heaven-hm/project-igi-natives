#include "004F5050-CutScene_Action.h"
/* 0x004f5050 CutScene_Action full linked: callers=0 callees=7 */
int32_t sub_4f5050(void* a1)

{
    char result = *(a1 + 0x62);

    if (result)
    {
        void var_c0;
        sub_4f1270(&var_c0, a1);
        void* var_d0_1 = &var_c0;
        *(a1 + 0x62) = 0;
        void var_80;
        Game_DataSymbolLoad(&var_80, "%s.isRun");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_e0_1 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.isFinished");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_f0_1 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.nTick");
        result = Game_DataSymbolRemoveThunk(&var_80);
        *(a1 + 0x62) = 0;
    }

    return result;
}
