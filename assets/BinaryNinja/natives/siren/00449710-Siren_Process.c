// IGI native provenance: Siren_Process - 0x00449710 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00449710-Siren_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Siren_Process.h"
int32_t Siren_Process(void* context)

{
    char result = *(context + 0x2d2);

    if (!result)
        return result;

    (*(((FX_TrailUpdate() + Script_SpawnNewTask_6() * 0x180) << 2) + &g_a96ae0))(context);
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d8_1 = &item_c0;
    *(context + 0x2d2) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isOn");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_e8_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isLastOn");
    return Game_DataSymbolRemoveThunk(&item_80);
}
