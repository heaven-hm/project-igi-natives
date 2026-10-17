// IGI native provenance: StatusMessage_Update_2 - 0x00485770 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00485770-StatusMessage_Update_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "StatusMessage_Update_2.h"
int32_t StatusMessage_Update_2(void* context)

{
    char result = *(context + 0x1d5);

    if (result)
        return result;

    *(context + 0x1d5) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isSendt");
    SymbolRegister_Bool8(&item_80, context + 0x1d4);
    void* item_e4_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.nTickSendt");
    SymbolRegister_Int16(&item_80, context + 0x1c8);
    void* item_f8_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isFinishedDisplay");
    SymbolRegister_Bool8(&item_80, context + 0x1d6);
    void* item_c8_2 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.nFinishedDisplay");
    SymbolRegister_Int16(&item_80, context + 0x1cc);
    void* item_dc_2 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.nTicksSinceFinishedDisplay");
    return SymbolRegister_Int16(&item_80, context + 0x1d0);
}
