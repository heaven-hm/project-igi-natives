// IGI native provenance: MenuUI_ProcesssvValue - 0x00420140 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00420140-MenuUI_ProcesssvValue.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_ProcesssvValue.h"

void* MenuUI_ProcesssvValue(void* arg1)

{
    if (!*(arg1 + 0xb5))
        return arg1;

    *(arg1 + 0xb5) = 0;
    void var_c0;
    Script_ParseEnumString_6(&var_c0, arg1);
    void* var_cc_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.vValue");
    Game_DataSymbolRemoveThunk(&var_80);
    void* var_dc_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nValue");
    return Game_DataSymbolRemoveThunk(&var_80);
}
