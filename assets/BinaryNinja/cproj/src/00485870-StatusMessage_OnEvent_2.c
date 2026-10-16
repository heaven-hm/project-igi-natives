#include "gi_platform.h"
#include "00485870-StatusMessage_OnEvent_2.h"
int32_t StatusMessage_OnEvent_2(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x1d5));

    if (result)
    {
        char v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        char v_80;
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
        (*(int32_t*)(uintptr_t)(a1 + 0x1d5)) = 0;
    }

    return result;
}
