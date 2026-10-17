// IGI native provenance: ConditionalSound_Update - 0x004253C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004253C0-ConditionalSound_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ConditionalSound_Update.h"
int32_t ConditionalSound_Update(void* context)

{
    char result = *(context + 0xb4);

    if (result)
        return result;

    *(context + 0xb4) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isRun");
    SymbolRegister_Bool8(&item_80, context + 0xb0);
    void* item_e4_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isLastRun");
    SymbolRegister_Bool8(&item_80, context + 0xb1);
    void* item_f8_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isPlaying");
    SymbolRegister_Bool8(&item_80, context + 0xb2);
    void* item_c8_2 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.nPlayTick");
    return SymbolRegister_Int32(&item_80, context + 0xac);
}
