// IGI native provenance: AlarmLight_Action - 0x0043A790 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043A790-AlarmLight_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AlarmLight_Action.h"
int32_t AlarmLight_Action(void* context)

{
    char result = *(context + 0x1a2);

    if (!result)
        return result;

    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    *(context + 0x1a2) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isOn");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_e0_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isDestroyed");
    return Game_DataSymbolRemoveThunk(&item_80);
}
