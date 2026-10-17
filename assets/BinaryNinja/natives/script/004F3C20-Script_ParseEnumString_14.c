// IGI native provenance: Script_ParseEnumString_14 - 0x004F3C20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F3C20-Script_ParseEnumString_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumString_14.h"
int32_t Script_ParseEnumString_14(void* context)

{
    char result = *(context + 0x200f5);

    if (!result)
        return result;

    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    *(context + 0x200f5) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isRun");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_e0_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.nTick");
    return Game_DataSymbolRemoveThunk(&item_80);
}
