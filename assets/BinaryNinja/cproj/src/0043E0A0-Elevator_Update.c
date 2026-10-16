#include "gi_platform.h"
#include "0043E0A0-Elevator_Update.h"
int32_t Elevator_Update(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x1c0));

    if (result)
    {
        char v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d4_1 = &v_c0;
        (*(int32_t*)(uintptr_t)(a1 + 0x1c0)) = 0;
        char v_80;
        Game_DataSymbolLoad(&v_80, "%s.vFloor");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_e4_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.vLastFloor");
        Game_DataSymbolRemoveThunk(&v_80);

        for (int32_t i = 0; i < 0xa; i += 1)
        {
            int32_t i_1 = i;
            void* v_d0_2 = &v_c0;
            Game_DataSymbolLoad(&v_80, "%s.isWantedFloor%d");
            Game_DataSymbolRemoveThunk(&v_80);
        }

        void* v_cc_2 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.nInactive");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_dc_3 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.nWantedFloor");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_ec_2 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isMoving");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_fc_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isStart");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_cc_3 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isStop");
        result = Game_DataSymbolRemoveThunk(&v_80);
        (*(int32_t*)(uintptr_t)(a1 + 0x1c0)) = 0;
    }

    return result;
}
