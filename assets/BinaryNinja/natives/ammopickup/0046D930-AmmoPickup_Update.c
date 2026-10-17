// IGI native provenance: AmmoPickup_Update - 0x0046D930 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046D930-AmmoPickup_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AmmoPickup_Update.h"
int32_t AmmoPickup_Update(void* context)

{
    char result = *(context + 0x108);

    if (!result)
        return result;

    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    *(context + 0x108) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isPickedUp");
    return Game_DataSymbolRemoveThunk(&item_80);
}
