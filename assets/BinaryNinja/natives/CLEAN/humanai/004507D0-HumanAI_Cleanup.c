// IGI native provenance: HumanAI_Cleanup - 0x004507D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004507D0-HumanAI_Cleanup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_Cleanup.h"
int32_t HumanAI_Cleanup(void* context)

{
    char result = *(context + 0x3ab8);

    if (!result)
        return result;

    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    *(context + 0x3ab8) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isDetection");
    return Game_DataSymbolRemoveThunk(&item_80);
}
