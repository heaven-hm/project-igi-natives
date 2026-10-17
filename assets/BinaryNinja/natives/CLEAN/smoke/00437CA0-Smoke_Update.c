// IGI native provenance: Smoke_Update - 0x00437CA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00437CA0-Smoke_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Smoke_Update.h"
int32_t Smoke_Update(void* context)

{
    char result = *(context + 0x20);

    if (result)
        return result;

    *(context + 0x20) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.vGenerateFactor");
    return SymbolRegister_Real32(&item_80, context + 0x98);
}
