// IGI native provenance: Cabinet_Cleanup_3 - 0x004449C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004449C0-Cabinet_Cleanup_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Cabinet_Cleanup_3.h"
int32_t Cabinet_Cleanup_3(void* context)

{
    char result = *(context + 0x129);

    if (result)
        return result;

    *(context + 0x129) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isInUse");
    SymbolRegister_Bool8(&item_80, context + 0x11f);
    void* item_e4_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isLastInUse");
    SymbolRegister_Bool8(&item_80, context + 0x120);
    void* item_f8_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isSearched");
    return SymbolRegister_Bool8(&item_80, context + 0x128);
}
