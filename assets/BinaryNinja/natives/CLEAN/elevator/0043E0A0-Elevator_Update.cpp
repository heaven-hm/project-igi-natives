// IGI native provenance: Elevator_Update - 0x0043E0A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043E0A0-Elevator_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Elevator_Update.h"
int32_t Elevator_Update(void* context)

{
    char result = *(context + 0x1c0);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d4_1 = &item_c0;
        *(context + 0x1c0) = 0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.vFloor");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_e4_1 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.vLastFloor");
        Game_DataSymbolRemoveThunk(&item_80);

        for (int32_t i = 0; i < 0xa; i += 1)
        {
            int32_t i_1 = i;
            void* item_d0_2 = &item_c0;
            Game_DataSymbolLoad(&item_80, "%s.isWantedFloor%d");
            Game_DataSymbolRemoveThunk(&item_80);
        }

        void* item_cc_2 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.nInactive");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_dc_3 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.nWantedFloor");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_ec_2 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.isMoving");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_fc_1 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.isStart");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_cc_3 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.isStop");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0x1c0) = 0;
    }

    return result;
}
