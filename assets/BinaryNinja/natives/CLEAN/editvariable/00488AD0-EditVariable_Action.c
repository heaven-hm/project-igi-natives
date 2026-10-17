// IGI native provenance: EditVariable_Action - 0x00488AD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00488AD0-EditVariable_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "EditVariable_Action.h"
int32_t EditVariable_Action(void* context)

{
    char result = *(context + 0xdc);

    if (result)
        return result;

    *(context + 0xdc) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.nValue");
    return SymbolRegister_Int32(&item_80, context + 0xd8);
}
