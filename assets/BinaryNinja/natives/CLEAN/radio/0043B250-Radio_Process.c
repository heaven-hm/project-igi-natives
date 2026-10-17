// IGI native provenance: Radio_Process - 0x0043B250 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043B250-Radio_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Radio_Process.h"
int32_t Radio_Process(void* context)

{
    char result = *(context + 0x241);

    if (result)
    {
        (*(((FX_TrailUpdate() + Script_SpawnNewTask_6() * 0x180) << 2) + &g_a96ae0))(context);
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d8_1 = &item_c0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.isOn");
        result = Game_DataSymbolRemoveThunk(&item_80);
        *(context + 0x241) = 0;
    }

    return result;
}
