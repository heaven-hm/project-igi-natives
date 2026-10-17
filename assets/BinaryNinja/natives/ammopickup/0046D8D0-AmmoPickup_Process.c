// IGI native provenance: AmmoPickup_Process - 0x0046D8D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046D8D0-AmmoPickup_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AmmoPickup_Process.h"
int32_t AmmoPickup_Process(void* context)

{
    char result = *(context + 0x108);

    if (result)
        return result;

    *(context + 0x108) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isPickedUp");
    return SymbolRegister_Bool8(&item_80, context + 0x109);
}
