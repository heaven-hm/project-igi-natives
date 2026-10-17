// IGI native provenance: Smoke_OnEvent - 0x00437D00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00437D00-Smoke_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Smoke_OnEvent.h"
int32_t Smoke_OnEvent(void* context)

{
    char result = *(context + 0x20);

    if (!result)
        return result;

    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    *(context + 0x20) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.vGenerateFactor");
    return Game_DataSymbolRemoveThunk(&item_80);
}
