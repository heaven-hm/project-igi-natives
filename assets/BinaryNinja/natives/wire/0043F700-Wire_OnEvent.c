// IGI native provenance: Wire_OnEvent - 0x0043F700 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043F700-Wire_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Wire_OnEvent.h"
int32_t Wire_OnEvent(void* context)

{
    char result = *(context + 0x132);

    if (result)
        return result;

    *(context + 0x132) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isInUse");
    SymbolRegister_Bool8(&item_80, context + 0x130);
    void* item_e4_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isLastInUse");
    return SymbolRegister_Bool8(&item_80, context + 0x131);
}
