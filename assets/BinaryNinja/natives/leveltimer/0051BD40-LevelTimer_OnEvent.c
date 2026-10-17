// IGI native provenance: LevelTimer_OnEvent - 0x0051BD40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051BD40-LevelTimer_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "LevelTimer_OnEvent.h"
int32_t LevelTimer_OnEvent(void* context)

{
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0 = &item_c0;
    *(context + 0x68) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isRun");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_e0 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.nTick");
    int32_t result = Game_DataSymbolRemoveThunk(&item_80);
    *(context + 0x68) = 0;
    return result;
}
