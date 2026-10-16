#include "0043E0A0-Elevator_Update.h"
/* 0x0043e0a0 Elevator_Update full linked: callers=0 callees=17 */
int32_t Elevator_Update(void* a1)

{
    char result = *(a1 + 0x1c0);

    if (result)
    {
        void var_c0;
        sub_4f1270(&var_c0, a1);
        void* var_d4_1 = &var_c0;
        *(a1 + 0x1c0) = 0;
        void var_80;
        Game_DataSymbolLoad(&var_80, "%s.vFloor");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_e4_1 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.vLastFloor");
        Game_DataSymbolRemoveThunk(&var_80);

        for (int32_t i = 0; i < 0xa; i += 1)
        {
            int32_t i_1 = i;
            void* var_d0_2 = &var_c0;
            Game_DataSymbolLoad(&var_80, "%s.isWantedFloor%d");
            Game_DataSymbolRemoveThunk(&var_80);
        }

        void* var_cc_2 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.nInactive");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_dc_3 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.nWantedFloor");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_ec_2 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.isMoving");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_fc_1 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.isStart");
        Game_DataSymbolRemoveThunk(&var_80);
        void* var_cc_3 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.isStop");
        result = Game_DataSymbolRemoveThunk(&var_80);
        *(a1 + 0x1c0) = 0;
    }

    return result;
}
