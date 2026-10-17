// IGI native provenance: MoveRigidObj_OnEvent - 0x0051F9E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051F9E0-MoveRigidObj_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MoveRigidObj_OnEvent.h"
int32_t MoveRigidObj_OnEvent(void* context)

{
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0 = &item_c0;
    *(context + 0x204) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.vValue");
    int32_t result = Game_DataSymbolRemoveThunk(&item_80);
    *(context + 0x204) = 0;
    return result;
}
