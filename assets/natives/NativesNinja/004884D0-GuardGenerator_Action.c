#include "004884D0-GuardGenerator_Action.h"
/* 0x004884d0 GuardGenerator_Action full linked: callers=0 callees=7 */
int32_t sub_4884d0(void* a1)

{
    char result = *(a1 + 0x71);

    if (result)
    {
        void var_c0;
        sub_4f1270(&var_c0, a1);
        void* var_d0_1 = &var_c0;
        *(a1 + 0x71) = 0;
        void var_80;
        Game_DataSymbolLoad(&var_80, "%s.isOn");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_e0_1 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.isSpawned");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_f0_1 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.nSpawns");
        result = Game_DataSymbolRemoveThunk(&var_80);
        *(a1 + 0x71) = 0;
    }

    return result;
}
