#include "00447BE0-Door_Cleanup_3.h"
/* 0x00447be0 Door_Cleanup_3 full linked: callers=0 callees=15 */
int32_t sub_447be0(void* a1)

{
    char result = *(a1 + 0x19e);

    if (result)
    {
        void var_c0;
        sub_4f1270(&var_c0, a1);
        void* var_d0_1 = &var_c0;
        *(a1 + 0x19e) = 0;
        void var_80;
        Game_DataSymbolLoad(&var_80, "%s.isLocked");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_e0_1 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.isOpen");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_f0_1 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.isClosed");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_100_1 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.isLastClosed");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_cc_2 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.isLastOpen");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_dc_2 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.isPicked");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_ec_2 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.nDoorOpenTicks");
        result = Game_DataSymbolRemoveThunk(&var_80);
        *(a1 + 0x19e) = 0;
    }

    return result;
}
