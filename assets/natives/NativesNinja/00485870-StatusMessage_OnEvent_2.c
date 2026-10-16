#include "00485870-StatusMessage_OnEvent_2.h"
/* 0x00485870 StatusMessage_OnEvent_2 full linked: callers=0 callees=11 */
int32_t sub_485870(void* a1)

{
    char result = *(a1 + 0x1d5);

    if (result)
    {
        void var_c0;
        sub_4f1270(&var_c0, a1);
        void* var_d0_1 = &var_c0;
        void var_80;
        Game_DataSymbolLoad(&var_80, "%s.isSendt");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_e0_1 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.nTickSendt");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_f0_1 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.isFinishedDisplay");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_100_1 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.nFinishedDisplay");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_cc_2 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.nTicksSinceFinishedDisplay");
        result = Game_DataSymbolRemoveThunk(&var_80);
        *(a1 + 0x1d5) = 0;
    }

    return result;
}
