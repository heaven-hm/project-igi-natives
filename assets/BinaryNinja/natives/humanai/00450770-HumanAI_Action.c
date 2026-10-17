// IGI native provenance: HumanAI_Action - 0x00450770 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00450770-HumanAI_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_Action.h"
int32_t HumanAI_Action(void* context)

{
    char result = *(context + 0x3ab8);

    if (result)
        return result;

    *(context + 0x3ab8) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isDetection");
    return SymbolRegister_Bool8(&item_80, context + 0x3ab9);
}
