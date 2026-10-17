// IGI native provenance: AreaActivate_OnEvent - 0x00504590 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00504590-AreaActivate_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AreaActivate_OnEvent.h"
int32_t AreaActivate_OnEvent(void* context)

{
    char result = *(context + 0xb5);

    if (!result)
        return result;

    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    *(context + 0xb5) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.nActive");
    return Game_DataSymbolRemoveThunk(&item_80);
}
