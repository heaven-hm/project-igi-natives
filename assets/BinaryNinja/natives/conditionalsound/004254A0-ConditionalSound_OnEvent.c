// IGI native provenance: ConditionalSound_OnEvent - 0x004254A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004254A0-ConditionalSound_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ConditionalSound_OnEvent.h"
int32_t ConditionalSound_OnEvent(void* context)

{
    char result = *(context + 0xb4);

    if (!result)
        return result;

    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    *(context + 0xb4) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isRun");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_e0_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isLastRun");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_f0_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isPlaying");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_100_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.nPlayTick");
    return Game_DataSymbolRemoveThunk(&item_80);
}
