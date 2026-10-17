// IGI native provenance: Switch_Cleanup - 0x00445860 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00445860-Switch_Cleanup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Switch_Cleanup.h"
int32_t Switch_Cleanup(void* context)

{
    char result = *(context + 0x1cc);

    if (result)
        return result;

    *(context + 0x1cc) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isOn");
    SymbolRegister_Bool8(&item_80, context + 0x1c0);
    void* item_e4_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isLastOn");
    SymbolRegister_Bool8(&item_80, context + 0x1c1);
    void* item_f8_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isPressed");
    SymbolRegister_Bool8(&item_80, context + 0x1c4);
    void* item_c8_2 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isLastPressed");
    SymbolRegister_Bool8(&item_80, context + 0x1c5);
    void* item_dc_2 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isDestroyed");
    SymbolRegister_Bool8(&item_80, context + 0x1c2);
    void* item_f0_2 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isLastDestroyed");
    return SymbolRegister_Bool8(&item_80, context + 0x1c3);
}
