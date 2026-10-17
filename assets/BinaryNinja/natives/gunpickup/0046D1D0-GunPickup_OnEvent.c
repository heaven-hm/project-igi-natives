// IGI native provenance: GunPickup_OnEvent - 0x0046D1D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046D1D0-GunPickup_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GunPickup_OnEvent.h"
int32_t GunPickup_OnEvent(void* context)

{
    char result = *(context + 0x128);

    if (!result)
        return result;

    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    *(context + 0x128) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isPickedUp");
    return Game_DataSymbolRemoveThunk(&item_80);
}
