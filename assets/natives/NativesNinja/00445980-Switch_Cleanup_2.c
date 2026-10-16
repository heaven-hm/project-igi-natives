#include "00445980-Switch_Cleanup_2.h"
/* 0x00445980 Switch_Cleanup_2 full linked: callers=0 callees=13 */
int32_t sub_445980(void* a1)

{
    char result = *(a1 + 0x1cc);

    if (result)
    {
        void var_c0;
        sub_4f1270(&var_c0, a1);
        void* var_d0_1 = &var_c0;
        *(a1 + 0x1cc) = 0;
        void var_80;
        Game_DataSymbolLoad(&var_80, "%s.isOn");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_e0_1 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.isDestroyed");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_f0_1 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.isPressed");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_100_1 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.isLastOn");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_cc_2 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.isLastDestroyed");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_dc_2 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.isLastPressed");
        result = Game_DataSymbolRemoveThunk(&var_80);
        *(a1 + 0x1cc) = 0;
    }

    return result;
}
