// IGI native provenance: Terminal_Update - 0x00443B80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00443B80-Terminal_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terminal_Update.h"
int32_t Terminal_Update(void* context)

{
    char result = *(context + 0x248);

    if (!result)
        return result;

    (*(((FX_TrailUpdate() + Script_SpawnNewTask_6() * 0x180) << 2) + &g_a96ae0))(context);
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d8_1 = &item_c0;
    *(context + 0x248) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isInUse");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_e8_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isLastInUse");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_f8_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isOn");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_108_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isHacked");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_d0_2 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isHackedThisTick");
    return Game_DataSymbolRemoveThunk(&item_80);
}
