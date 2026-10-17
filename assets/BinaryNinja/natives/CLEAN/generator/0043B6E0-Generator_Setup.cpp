// IGI native provenance: Generator_Setup - 0x0043B6E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043B6E0-Generator_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Generator_Setup.h"
int32_t Generator_Setup(void* context)

{
    char result = *(context + 0x23d);

    if (result)
        return result;

    *(context + 0x23d) = 1;
    (*(((FX_TrailUpdate() + Script_FormatString_5() * 0x180) << 2) + &g_a96ae0))(context);
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d8_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isOn");
    SymbolRegister_Bool8(&item_80, context + 0x23c);
    void* item_ec_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.nBackupTimer");
    return SymbolRegister_Int16(&item_80, context + 0x2b8);
}
