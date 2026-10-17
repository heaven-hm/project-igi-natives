// IGI native provenance: LevelTimer_Update - 0x0051BCC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051BCC0-LevelTimer_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "LevelTimer_Update.h"
int32_t LevelTimer_Update(void* context)

{
    char result = *(context + 0x68);

    if (result)
        return result;

    *(context + 0x68) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isRun");
    SymbolRegister_Bool8(&item_80, context + 0x60);
    void* item_e4_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.nTick");
    return SymbolRegister_Int16(&item_80, context + 0x64);
}
