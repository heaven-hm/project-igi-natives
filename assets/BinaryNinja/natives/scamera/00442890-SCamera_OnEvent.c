// IGI native provenance: SCamera_OnEvent - 0x00442890 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00442890-SCamera_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SCamera_OnEvent.h"
int32_t SCamera_OnEvent(void* context)

{
    char result = *(context + 0x171);

    if (result)
        return result;

    *(context + 0x171) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isDetection");
    SymbolRegister_Bool8(&item_80, context + 0x169);
    void* item_e4_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isLastDetection");
    SymbolRegister_Bool8(&item_80, context + 0x16a);
    void* item_f8_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.nDetectionTime");
    SymbolRegister_Int32(&item_80, context + 0x16c);
    void* item_c8_2 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isExploded");
    return SymbolRegister_Bool8(&item_80, context + 0x170);
}
