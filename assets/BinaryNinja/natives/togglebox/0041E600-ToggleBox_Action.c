// IGI native provenance: ToggleBox_Action - 0x0041E600 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041E600-ToggleBox_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ToggleBox_Action.h"
int32_t ToggleBox_Action(void* context)

{
    char result = *(context + 0xa8);

    if (result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.isOn");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0xa8) = 0;
    }

    return result;
}
