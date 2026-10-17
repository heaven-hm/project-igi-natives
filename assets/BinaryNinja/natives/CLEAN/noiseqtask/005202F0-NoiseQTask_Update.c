// IGI native provenance: NoiseQTask_Update - 0x005202F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005202F0-NoiseQTask_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "NoiseQTask_Update.h"
int32_t NoiseQTask_Update(void* context)

{
    char result = *(context + 0x128);

    if (result)
        return result;

    *(context + 0x128) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.vValue");
    return SymbolRegister_Real32(&item_80, context + 0x68);
}
