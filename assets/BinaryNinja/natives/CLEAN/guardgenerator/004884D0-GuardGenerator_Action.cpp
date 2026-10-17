// IGI native provenance: GuardGenerator_Action - 0x004884D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004884D0-GuardGenerator_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GuardGenerator_Action.h"
int32_t GuardGenerator_Action(void* context)

{
    char result = *(context + 0x71);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        *(context + 0x71) = 0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.isOn");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_e0_1 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.isSpawned");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_f0_1 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.nSpawns");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0x71) = 0;
    }

    return result;
}
