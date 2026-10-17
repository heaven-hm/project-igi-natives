// IGI native provenance: SCamera_Action - 0x00442970 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00442970-SCamera_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SCamera_Action.h"
int32_t SCamera_Action(void* context)

{
    char result = *(context + 0x171);

    if (!result)
        return result;

    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    *(context + 0x171) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isDetection");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_e0_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isLastDetection");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_f0_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.nDetectionTime");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_100_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isExploded");
    return Game_DataSymbolRemoveThunk(&item_80);
}
