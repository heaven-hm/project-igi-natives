// IGI native provenance: Generator_Process - 0x0043B790 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043B790-Generator_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Generator_Process.h"
int32_t Generator_Process(void* context)

{
    char result = *(context + 0x23d);

    if (result)
    {
        (*(((FX_TrailUpdate() + Script_SpawnNewTask_6() * 0x180) << 2) + &g_a96ae0))(context);
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d8_1 = &item_c0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.isOn");
        Game_DataSymbolRemoveThunk(&item_80);
        void* item_e8_1 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.nBackupTimer");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0x23d) = 0;
    }

    return result;
}
