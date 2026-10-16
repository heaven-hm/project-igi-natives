#include "StatusMessage_OnEvent_2.h"
int32_t StatusMessage_OnEvent_2(void* a1)

{
    char result = *(a1 + 0x1d5);

    if (result)
    {
        void v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        void v_80;
        Game_DataSymbolLoad(&v_80, "%s.isSendt");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_e0_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.nTickSendt");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_f0_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isFinishedDisplay");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_100_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.nFinishedDisplay");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_cc_2 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.nTicksSinceFinishedDisplay");
        result = Game_DataSymbolRemoveThunk(&v_80);
        *(a1 + 0x1d5) = 0;
    }

    return result;
}
