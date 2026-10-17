// IGI native provenance: AlarmLight_OnEvent - 0x0043A710 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043A710-AlarmLight_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AlarmLight_OnEvent.h"
int32_t AlarmLight_OnEvent(void* context)

{
    char result = *(context + 0x1a2);

    if (result)
        return result;

    *(context + 0x1a2) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isOn");
    SymbolRegister_Bool8(&item_80, context + 0x1a0);
    void* item_e4_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isDestroyed");
    return SymbolRegister_Bool8(&item_80, context + 0x1a1);
}
