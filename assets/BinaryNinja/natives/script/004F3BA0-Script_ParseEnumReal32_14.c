// IGI native provenance: Script_ParseEnumReal32_14 - 0x004F3BA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F3BA0-Script_ParseEnumReal32_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumReal32_14.h"
int32_t Script_ParseEnumReal32_14(void* context)

{
    char result = *(context + 0x200f5);

    if (result)
        return result;

    *(context + 0x200f5) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isRun");
    SymbolRegister_Bool8(&item_80, context + 0x200f4);
    void* item_e4_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.nTick");
    return SymbolRegister_Int32(&item_80, context + 0x20154);
}
