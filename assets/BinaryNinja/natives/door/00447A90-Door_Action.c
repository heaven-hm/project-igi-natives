// IGI native provenance: Door_Action - 0x00447A90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00447A90-Door_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Door_Action.h"
int32_t Door_Action(void* context)

{
    char result = *(context + 0x19e);

    if (result)
        return result;

    *(context + 0x19e) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isLocked");
    SymbolRegister_Bool8(&item_80, context + 0x198);
    void* item_e4_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isOpen");
    SymbolRegister_Bool8(&item_80, context + 0x199);
    void* item_f8_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isClosed");
    SymbolRegister_Bool8(&item_80, context + 0x19a);
    void* item_c8_2 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isLastClosed");
    SymbolRegister_Bool8(&item_80, context + 0x19c);
    void* item_dc_2 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isLastOpen");
    SymbolRegister_Bool8(&item_80, context + 0x19b);
    void* item_f0_2 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isPicked");
    SymbolRegister_Bool8(&item_80, context + 0x19d);
    void* item_104_2 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.nDoorOpenTicks");
    return SymbolRegister_Int32(&item_80, context + 0x298);
}
