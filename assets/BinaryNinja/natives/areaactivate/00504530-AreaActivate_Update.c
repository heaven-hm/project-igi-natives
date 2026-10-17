// IGI native provenance: AreaActivate_Update - 0x00504530 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00504530-AreaActivate_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AreaActivate_Update.h"
int32_t AreaActivate_Update(void* context)

{
    char result = *(context + 0xb5);

    if (result)
        return result;

    *(context + 0xb5) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.nActive");
    return SymbolRegister_Int16(&item_80, context + 0xa8);
}
