// IGI native provenance: MenuScreen_Update - 0x00422190 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00422190-MenuScreen_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuScreen_Update.h"
void* MenuScreen_Update(void* context)

{
    void* result = *(context + 0x1a0);

    if (result)
        return result;

    *(context + 0x1a0) = 1;
    void item_100;
    Script_ParseEnumString_6(&item_100, context);
    void* item_110_1 = &item_100;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.nUserData");
    return SymbolRegister_Int32(&item_80, context + 0x19c);
}
