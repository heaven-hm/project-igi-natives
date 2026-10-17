// IGI native provenance: GuardGenerator_OnEvent - 0x00488430 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00488430-GuardGenerator_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GuardGenerator_OnEvent.h"
int32_t GuardGenerator_OnEvent(void* context)

{
    char result = *(context + 0x71);

    if (result)
        return result;

    *(context + 0x71) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isOn");
    SymbolRegister_Bool8(&item_80, context + 0x70);
    void* item_e4_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isSpawned");
    SymbolRegister_Bool8(&item_80, context + 0x72);
    void* item_f8_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.nSpawns");
    return SymbolRegister_Int32(&item_80, context + 0x74);
}
