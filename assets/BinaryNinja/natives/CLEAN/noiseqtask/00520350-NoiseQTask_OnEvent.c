// IGI native provenance: NoiseQTask_OnEvent - 0x00520350 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00520350-NoiseQTask_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "NoiseQTask_OnEvent.h"
int32_t NoiseQTask_OnEvent(void* context)

{
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0 = &item_c0;
    *(context + 0x128) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.vValue");
    int32_t result = Game_DataSymbolRemoveThunk(&item_80);
    *(context + 0x128) = 0;
    return result;
}
